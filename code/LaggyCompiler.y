%{
	#include <stdio.h>
    #include <math.h>
    #include <string.h>

	void yyerror(char *);
	int yylex(void);

	int iSym[63][52];
    float fSym[63][52];
    char cSym[63][52];
    char sSym[63][52][256];
    int decleared[63][52];
    void *ptr, *reshead=NULL, *temphead=NULL;

    #define var 180
    #define pi  3.1416
%}


%union
{
    struct intPair{
        int arrIndex1;
	    int arrIndex2;
    } varData;

    struct allTypes{
        char charVal;
        int integerVal;
        float floatVal;
        char stringVal[256];
        int type;
    } genericData;


   struct expressionData{
        struct intPair varData;
        struct allTypes genericData;
    } *ifData;



	char charVal;
    int integerVal;
    float floatVal;
    char stringVal[256];
}



%token <integerVal> INTEGER DATA_TYPE
%token <varData> VARIABLE
%token <floatVal> FLOAT
%token <charVal> CHARACTER
%token <stringVal> STRING
%token ADD TYPE_INT TYPE_CHAR TYPE_FLOAT TYPE_STRING SUBSTRACT MINUS INTO DEVIDE POWER MOD IF ELSE ELSEIF START END EQUAL GREATER LESS NEWLINE FACTORIAL SINE COSINE TANGENT LOGARITHM CHECK WITH OUTPUT

%type <genericData> expression
%type <ifData> statement if_else else_if_loop check_stmt case_loop

%left EQUAL GREATER LESS
%left ISLESS ISGREATER ISLESSEQU ISGREATEREQU
%left LOGARITHM
%left SINE COSINE TANGENT
%left ADD SUBSTRACT MINUS
%left INTO DEVIDE
%left MOD
%left FACTORIAL
%left POWER
%left '(' ')'



%nonassoc IFX
%nonassoc ELSE



%%
program: program statement '\n' 
            {
                ptr=$2;
                if(ptr!=NULL){

                    int i=((struct expressionData*)ptr)->varData.arrIndex1;
                    int j=((struct expressionData*)ptr)->varData.arrIndex2;

                     if(decleared[i][j]==-1){
                            printf("Error: Variable not declared.\n");
                        } else if(decleared[i][j]!=((struct expressionData*)ptr)->genericData.type){
                            printf("Error: Data type mismatched.\n");
                        }else{
                            iSym[i][j]=((struct expressionData*)ptr)->genericData.integerVal;
                            fSym[i][j]=((struct expressionData*)ptr)->genericData.floatVal;
                            cSym[i][j]=((struct expressionData*)ptr)->genericData.charVal;
                            strcpy(sSym[i][j], ((struct expressionData*)ptr)->genericData.stringVal);
                            printf("Message: Value assigned.\n");
                        }
                    free(ptr);
                }
                 printf("Message: A statement.\n");
            }

	| /* NULL */
 	;

statement:  variable_decleration 
            | expression { $$=NULL; }
            | VARIABLE '=' expression
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                         $$ = malloc(sizeof(struct expressionData));
                            $$->varData=$1;
                            $$->genericData=$3;
                    }
          
            | if_else
                    {
                        $$=$1;
                    }
            | check_stmt
            | '\n' statement { $$=$2;}
            | OUTPUT '[' STRING ']' {
                printf("%s\n",$3);
            }
;
variable_decleration: TYPE_INT int_var int_var_loop | TYPE_FLOAT float_var float_var_loop | TYPE_CHAR char_var char_var_loop | TYPE_STRING string_var string_var_loop
;

int_var_loop:  ',' int_var int_var_loop | /* NULL */ 
;
int_var: VARIABLE 
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            iSym[i][j]=0;
                            decleared[i][j]=0;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
            | VARIABLE '=' INTEGER
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            iSym[i][j]=$3;
                            decleared[i][j]=0;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
;

float_var_loop:  ',' float_var float_var_loop | /* NULL */ 
;
float_var: VARIABLE 
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            fSym[i][j]=0;
                            decleared[i][j]=1;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
            | VARIABLE '=' FLOAT
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            fSym[i][j]=$3;
                            decleared[i][j]=1;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
;

char_var_loop:  ','char_var char_var_loop | /* NULL */ 
;
char_var: VARIABLE 
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            cSym[i][j]='\0';
                            decleared[i][j]=2;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
            | VARIABLE '=' CHARACTER
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            cSym[i][j]=$3;
                            decleared[i][j]=2;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
;

string_var_loop:  ','string_var string_var_loop | /* NULL */ 
;
string_var: VARIABLE 
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            strcpy(sSym[i][j], "\0");
                            decleared[i][j]=3;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
            | VARIABLE '=' STRING
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if (decleared[i][j]==-1){
                            strcpy(sSym[i][j], $3);
                            decleared[i][j]=3;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    }
;

expression:  INTEGER { $$.integerVal = $1 ; $$.type=0;}
            | VARIABLE
                    {
                        int i=$1.arrIndex1;
                        int j=$1.arrIndex2;
                        if(decleared[i][j]!=-1){
                            $$.integerVal=iSym[i][j];
                            $$.floatVal=fSym[i][j];
                            $$.charVal=cSym[i][j];
                            strcpy($$.stringVal, sSym[i][j]);

                            $$.type=decleared[i][j];

                            if(decleared[i][j]==0){
                                printf("Message: Value = %d\n",iSym[i][j]);
                            } else if(decleared[i][j]==1){
                                printf("Message: Value = %f\n",fSym[i][j]);
                            }else if(decleared[i][j]==2){
                                printf("Message: Value = %c\n",cSym[i][j]);
                            }else{
                                printf("Message: Value = %s\n",sSym[i][j]);
                            } 
                        }  else{
                            printf("Error: Variable not declared.\n");
                        }
                    }
            | FLOAT { $$.floatVal = $1 ;  $$.type=1;}
            | CHARACTER { $$.charVal = $1 ;  $$.type=2;}
            | STRING { strcat($$.stringVal, $1) ;  $$.type=3;}
            | SINE '[' expression ']' 
                    {
                        $$.type=$3.type;
                        $$.integerVal = ceil(sin((float)$3.integerVal * pi / var));
                        $$.floatVal = sin($3.floatVal * pi / var);
                        $$.charVal = sin($3.charVal * pi / var);
                        if($3.type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    }
            | COSINE '[' expression ']' 
                    {
                        $$.type=$3.type;
                        $$.integerVal = ceil(cos((float)$3.integerVal * pi / var));
                        $$.floatVal = cos($3.floatVal * pi / var);
                        $$.charVal = cos($3.charVal * pi / var);
                        if($3.type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    }
            | TANGENT '[' expression ']' 
                    {
                        $$.type=$3.type;
                        $$.integerVal = tan((float)$3.integerVal * pi / var);
                        $$.floatVal = tan($3.floatVal * pi / var);
                        $$.charVal = tan($3.charVal * pi / var);
                        if($3.type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    }
            | LOGARITHM '[' expression ']' 
                    {
                        $$.type=$3.type;
                        $$.integerVal = log($3.integerVal);
                        $$.floatVal = log($3.floatVal);
                        $$.charVal = log($3.charVal);
                        if($3.type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    }
            | MINUS expression
                    {
                            $$.type=$2.type;
                            $$.integerVal = - $2.integerVal;
                            $$.floatVal = - $2.floatVal ;
                            $$.charVal = - $2.charVal;
                            if($2.type==3){
                                printf("Error: Wrong operation.\n");
                            }
                    }
            | expression ADD expression
                    {
                        if($1.type == $3.type){
                            $$.type=$1.type;
                            $$.integerVal =  $1.integerVal + $3.integerVal;
                            $$.floatVal =  $1.floatVal + $3.floatVal;
                            $$.charVal =  $1.charVal + $3.charVal;
                            strcpy($$.stringVal, strcat($1.stringVal, $3.stringVal));
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
            | expression SUBSTRACT expression
                    {
                        if($1.type == $3.type){
                            $$.type=$1.type;
                            $$.integerVal =  $1.integerVal - $3.integerVal;
                            $$.floatVal =  $1.floatVal - $3.floatVal;
                            $$.charVal =  $1.charVal - $3.charVal;
                            if($1.type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
            | expression INTO expression
                    {
                        if($1.type == $3.type){
                            $$.type=$1.type;
                            $$.integerVal =  $1.integerVal * $3.integerVal;
                            $$.floatVal =  $1.floatVal * $3.floatVal;
                            $$.charVal =  $1.charVal * $3.charVal;
                            if($1.type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
            | expression MOD expression
                    {
                        if($1.type == $3.type && $1.type==0 ){
                            
                            if($3.integerVal ==0){
                                printf("Error: Wrong operation.\n");
                            } else{
                                $$.type=$1.type;
                                $$.integerVal =  $1.integerVal % $3.integerVal;
                            }
                        } else {
                            printf("Error: Wrong operation.\n");
                        }
                    }
            | expression DEVIDE expression
                    {
                        if($1.type == $3.type){
                            if($1.type==0){
                                if($3.integerVal!=0){
                                    $$.type=$1.type;
                                    $$.integerVal =  $1.integerVal / $3.integerVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                            if($1.type==1){
                                if($3.floatVal!=0){
                                    $$.type=$1.type;
                                    $$.floatVal =  $1.floatVal / $3.floatVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                             if($1.type==2){
                                if($3.charVal!=0){
                                    $$.type=$1.type;
                                    $$.charVal =  $1.charVal / $3.charVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                            if($1.type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
                | expression FACTORIAL
                    {
                        if($1.type==0){
                            $$.type=$1.type;
                            int mult=1 ,i;
						    for(i=$1.integerVal;i>0;i--)
						    {
						    	mult=mult*i;
						    }
						    $$.integerVal=mult;
                        } else{
                            printf("Error: Wrong operation.\n");
                        }
                            
                    }
            | expression POWER expression
                    {
                        if($1.type == $3.type){
                            $$.type=$1.type;
                            $$.integerVal = ceil(pow($1.integerVal, $3.integerVal));
                            $$.floatVal =  ceil(pow($1.floatVal, $3.floatVal));
                            $$.charVal =  ceil(pow($1.charVal , $3.charVal));
                            if($1.type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
            | '(' expression ')' 
                    {
                        $$ = $2;
                    }
            | expression EQUAL expression
                    {
                        if($1.type == $3.type){
                            $$.type=0;
                            if($1.type==0){
                                $$.integerVal = ($1.integerVal == $3.integerVal);
                            } else if($1.type==1){
                                $$.integerVal = ($1.floatVal == $3.floatVal);
                            } else if($1.type==2){
                                $$.integerVal = ($1.charVal == $3.charVal);
                            } else{
                                $$.integerVal = !strcmp($1.stringVal, $3.stringVal);
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
                | expression GREATER expression
                    {
                        if($1.type == $3.type){
                            $$.type=0;
                            if($1.type==0){
                                $$.integerVal = ($1.integerVal > $3.integerVal);
                            } else if($1.type==1){
                                $$.integerVal = ($1.floatVal > $3.floatVal);
                            } else if($1.type==2){
                                $$.integerVal = ($1.charVal > $3.charVal);
                            } else{
                                printf("Error: Wrong operation.\n");
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
                | expression LESS expression
                    { 
                        if($1.type == $3.type){
                            $$.type=0;
                            if($1.type==0){
                                $$.integerVal = ($1.integerVal < $3.integerVal);
                            } else if($1.type==1){
                                $$.integerVal = ($1.floatVal < $3.floatVal);
                            } else if($1.type==2){
                                $$.integerVal = ($1.charVal < $3.charVal);
                            } else{
                                printf("Error: Wrong operation.\n");
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    }
          
;
if_else: IF expression '\n' START '\n' statement '\n' END '\n' else_if_loop %prec IFX
                    {
                        if($2.type==0){
                            if($2.integerVal){
                                $$=$6;
                            } else{
                                $$=$10;   
                            }
                        } else{
                            printf("Error: Wrong data type in condition.\n");
                        }
                    }
            
;

else_if_loop: ELSEIF expression '\n' START '\n' statement '\n' END '\n' else_if_loop 
                {
                    if($2.type==0){
                        if($2.integerVal){
                            $$=$6;
                        } else{
                            $$=$10;
                        }  
                    } else{
                        printf("Error: Wrong format in condition.\n");
                    }
                    
                } 
            | ELSE '\n' START '\n' statement '\n' END 
                {
                    $$=$5;
                } 
            |   {
                $$=NULL;
                }
;
check_stmt: CHECK '\n' START case_loop END '\n' WITH '[' expression ']'
;
case_loop: '\n' '[' expression ']' '\n' START '\n' statement '\n' END case_loop
            | '\n'
;
%%



void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}

int main(void)
{
 
    int i,j;
    for(i=0; i<63; i++){
        for(j=0; j<52; j++){
            decleared[i][j]=-1;
        }
    }
	yyparse();
}
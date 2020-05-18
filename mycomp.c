#include <stdio.h>
#include "complex.h"

#define MAX_LIMIT 100
typedef enum{ VALID, STOP } result;

typedef enum {EOF_BEFORE_STOP_ERROR, UNDEF_VAR_ERROR, UNDEF_COMMAND_ERROR, INVALID_PRMTR_ERROR, MISSING_PRMTRT_ERROR, EXTRA_TEXT_ERROR,
    CONS_COMMAS_ERROR, ILLEGAL_COMA_ERROR} error;

complex A, B, C, D, E, F;
complex* charToPtr(char a);
result runCommand (char *command);


int main() {
    A.r = B.r = C.r = D.r = E.r = F.r = 0;
    A.i = B.i = C.i = D.i = E.i = F.i = 0;
    char line [MAX_LIMIT];

    while(1){
        printf("please enter the command");
        fgets(line, MAX_LIMIT, stdin);
        if (runCommand(line) ==  STOP)
            break;
    }

}



result runCommand (char *command){

}
void printError(error err){
    switch (err){


        case EOF_BEFORE_STOP_ERROR:
            printf("End of file reached before stop command");
            break;
        case UNDEF_VAR_ERROR:
            printf("End of file reached before stop command");;
            break;
        case UNDEF_COMMAND_ERROR:
            printf("End of file reached before stop command");
            break;
        case INVALID_PRMTR_ERROR:
            printf("End of file reached before stop command");
            break;
        case MISSING_PRMTRT_ERROR:
            printf("End of file reached before stop command");
            break;
        case EXTRA_TEXT_ERROR:
            printf("End of file reached before stop command");
            break;
        case CONS_COMMAS_ERROR:
            printf("End of file reached before stop command");
            break;
        case ILLEGAL_COMA_ERROR:
            printf("End of file reached before stop command");
            break;
    }




}


complex* charToPtr(char a){
    switch (a){
        case 'A':
            return &A;
        case 'B':
            return &B;
        case 'C':
            return &C;
        case 'D':
            return &D;
        case 'E':
            return &E;
        case 'F':
            return &F;
        default:
            printError(UNDEF_VAR_ERROR);
            return NULL;
    }
}


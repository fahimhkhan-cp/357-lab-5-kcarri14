#include <stdio.h>
#include <ctype.h>
#include "task1.h"



void str_lower(char *stdinput, char *buffer){
    int i = 0;
    while(stdinput[i] != '\0'){
        buffer[i] = tolower(stdinput[i]);
        i++;
    }
    buffer[i] = "\0";

}
void str_lower_mutate(char *str){
    int i = 0;
    while(str[i] != '\0'){
        str[i] = tolower(str[i]);
        i++;
    }

}

int main(int argc, char* argv[]){
    char buffer[1024];
    char standard_input[1024] = fgets(standard_input, sizeof(standard_input), stdin);
    str_lower(*standard_input, buffer);
    printf("%s\n", buffer);

    return 0;
}
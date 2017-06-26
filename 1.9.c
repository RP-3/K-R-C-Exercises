#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int getLine(char line[], int maxLine);
void copy(char from[], char to[]);

int main(){

    int currentLen;
    int maxLen;
    char currentLine[MAX_LINE_LENGTH];
    char maxLine[MAX_LINE_LENGTH];

    maxLen = 0;
    while( (currentLen = getLine(currentLine, MAX_LINE_LENGTH)) > 0 ){

        if(currentLen > maxLen){
            maxLen = currentLen;
            copy(currentLine, maxLine);
        }
    }

    if(maxLen > 0) printf("%s", maxLine);

    return 0;
}

void copy(char from[], char to[]){

    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}

int getLine(char line[], int maxLineLength){

    int i;
    char c;

    for(i = 0; (i < maxLineLength - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if(c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

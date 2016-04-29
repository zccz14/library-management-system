#include <stdio.h>
#include <mysql/mysql.h>
#include "parser.h"

int readLine(char* buffer, int buffer_length){
    char c;
    int i = 0;
    while(1){
        c = getchar();
        if(c == '\n' || c == EOF) break;
        if(i + 1 < buffer_length)
            buffer[i++] = c;
    }
    buffer[i] = '\0';
    return i;
}

int handleLine(MYSQL* conn, char* buffer){
    printf("Invalid Command: %s\n", buffer);
}
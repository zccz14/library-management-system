#include <stdio.h>
#include <mysql/mysql.h>
#include "db_config.h"
#include "parser.h"

int main(){
    MYSQL mysql;
    mysql_init(&mysql);
    MYSQL *conn = mysql_real_connect(&mysql, DB_HOST, DB_USER, DB_PASS, DB_NAME, 0, 0, 0);
    if(conn == NULL){
        printf("Connection Failed.\n");
        return 1;
    }
    char cli[100];
    while(readLine(cli, 100))
        handleLine(conn, cli);
}

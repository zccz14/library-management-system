#include <stdio.h>
#include <mysql/mysql.h>
#include "db_config.h"
#include "function.h"

int main(){
    MYSQL mysql;
    mysql_init(&mysql);
    MYSQL *conn = mysql_real_connect(&mysql, DB_HOST, DB_USER, DB_PASS, DB_NAME, 0, 0, 0);
    if(conn == NULL){
        printf("Connection Failed.\n");
        return 1;
    }
    int type, a, b;
    while(~scanf("%d", &type)){
        switch(type){
            case 1:
                scanf("%d", &a);
                add_license(conn, a);
                break;
            case 2:
                scanf("%d", &a);
                delete_license(conn, a);
                break;
            case 3:
                scanf("%d", &a, &b);
                add_book(conn, a, b);
                break;
            case 4:
                scanf("%d", &a, &b);
                lend_book(conn, a, b);
                break;
            case 5:
                scanf("%d", &a, &b);
                return_book(conn, a, b);
                break;
            default:
                printf("Invalid Command\n");
        }
    }
}

#include <stdio.h>
#include <mysql/mysql.h>
#include "function.h"

void print_status(int errorcode){
    if(errorcode){
        printf("failed\n");
    } else {
        printf("successed\n");
    }
}

int add_license(MYSQL* conn, int id){
    char sql[100];
    sprintf(sql, "insert into license values(%d);", id);
    return mysql_query(conn, sql);
}

int delete_license(MYSQL* conn, int id){
    char sql[100];
    sprintf(sql, "delete from license where id = (%d);", id);
    return mysql_query(conn, sql);
}

int show_license(MYSQL* conn){
    char sql[100];
    sprintf(sql, "select * from license;");
    return mysql_query(conn, sql);
}

int add_book(MYSQL* conn, int id, int count){
    char sql[100];
    sprintf(sql, "insert into book values(%d, %d);", id, count);
    if(mysql_query(conn, sql)){
        sprintf(sql, "update book set count = count + (%d) where id = (%d);", count, id);
        return mysql_query(conn, sql);
    }
    return 0;
}

int show_book(MYSQL* conn){
    char sql[100];
    sprintf(sql, "select * from book;");
    return mysql_query(conn, sql);
}

int show_book_id(MYSQL* conn, int id){
    char sql[100];
    sprintf(sql, "select * from book where id = %d;", id);
    return mysql_query(conn, sql);
}

int lend_book(MYSQL* conn, int license_id, int book_id){
    char sql[100];
    sprintf(sql, "insert into lend values(%d, %d, 0);", license_id, book_id);
    return mysql_query(conn, sql);
}

int return_book(MYSQL* conn, int license_id, int book_id){
    char sql[100];
    sprintf(sql, "update lend set returned = 1 where license_id = %d and book_id = %d;", license_id, book_id);
    return mysql_query(conn, sql);
}
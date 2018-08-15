#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <mysql/mysql.h>

#define DB_HOST "localhost"
#define DB_USERNAME "root"
#define DB_PASSWORD "root"
#define DB_NAME "test"

int main()
{
	int ret = 0;
	MYSQL   mysql;
    MYSQL   *con = NULL;

    printf("link to mysql ...");

    con = mysql_init(&mysql);
    if (con == NULL)
    {
        ret = mysql_errno(&mysql);
        printf("func mysql_init() err :%d\n", ret);
        return ret;
    }
    printf(" OK 1\n");

    //连接mysql服务器
    con = mysql_real_connect(&mysql, DB_HOST, DB_USERNAME, DB_PASSWORD, DB_NAME, 0, NULL, CLIENT_FOUND_ROWS);
    if (con == NULL)
    {
        ret = mysql_errno(&mysql);
        printf("func mysql_real_connect() err :%d\n", ret);
        return ret;
    }
    else
    {
        printf("func mysql_real_connect() ok\n");
    }
    
    printf("Close mysql link ...\n");
    mysql_close(&mysql);

    return ret;
}
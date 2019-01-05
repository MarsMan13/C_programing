#include <stdio.h>

typedef struct dbshort{

    unsigned short upper;
    unsigned short lower;

}DBShort;

typedef union rdbuf{

    int iBuf;
    char bBuf[4];
    DBShort sBuf;

}RDBuf;


int main(void){

    RDBuf buf;
    printf("ENter the int: ");
    scanf("%d", &buf.iBuf);


    printf("upper 2byte: %u \n", buf.sBuf.upper);
    printf("lower 2byte: %u \n", buf.sBuf.lower);

    printf("upper 1byte: %c \n", buf.bBuf[0]);
    printf("lower 1byte: %c \n", buf.bBuf[3]);



    return 0;
}

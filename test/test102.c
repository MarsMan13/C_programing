#include <stdio.h>



int main(void){

    char id[7];
    char name[10];

    fputs("Enter the your id_num: ", stdout);
    fgets(id, sizeof(id), stdin);

    //while(getchar()!= '\n');

    fputs("Enter the your name: ", stdout);
    fgets(name, sizeof(name), stdin);

//    while(getchar() != '\n');
    
    printf("id_num is %s\n", id);
    printf("name is %s\n", name);
    
    printf("6: |%d|\n", id[6]);
    printf("5: |%d|\n", id[5]);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void read_box(char *filename, int ***box, int *row, int *col);
void print_box(int **box, int row, int col);
int drop_box(int **box, int row, int col);
void free_box(int ***box, int row);

int main(void){
        
    int row, col;
    char *filename;
    int **box;

    filename = (char *)malloc(30 * sizeof(char));
    
    read_box(filename, &box, &row, &col);
    printf("check\n");
    print_box(box, row, col);


    return 0;
}

void read_box(char *filename, int ***box, int *row, int *col){
    
    int res;
    int num;
    int count = 0;
    int i, j;

    scanf("%s", filename);
    FILE *inp = fopen(filename, "r");
    if(inp == NULL) printf("its Error\n");    
    res = fscanf(inp, "%d %d", row, col);
    *box = (int **)malloc(*row *sizeof(int));

    for(i = 0; i<*col; i++)
        *(*box + i) = (int *)calloc(*col, sizeof(int));
    
    printf("%d %d\n", *row, *col);
    while(1){
        res = fscanf(inp, "%d", &num);
        if(res == EOF) break;

        if(num == 0 || num == 1){
            //*(*(*box + (int)(count/(*col))) +(int)(count%(*col))) = num;
            (*box)[(int)(count/(*col))][count%(*col)] = num;
            count++;
        printf("!\n");
        }
    }
    printf("check0\n");
    fclose(inp);
    
    return;
}

void print_box(int **box, int row, int col){
    
    int i, j;

    for(i = 0; i<row; i++){
        for(j = 0; j<col; j++)
            printf("%d ", box[i][j]);
        printf("\n");

    }
    


    return;
}

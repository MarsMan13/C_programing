#include<stdio.h>
#include<stdlib.h>

void read_box(char* filename, int*** box, int* row, int* col);
void print_box(int **box, int row, int col);
int drop_box(int **box, int row, int col);
void free_box(int ***box, int row);

int main()
{
	int **box;
	char *f_name;
	int row, col, result;

	f_name = (char *)malloc(sizeof(char) * 21);
	scanf("%s", f_name);

	read_box(f_name, &box, &row, &col);
	print_box(box,row,col);
	result = drop_box(box,row,col);
	printf("%d\n",result + 1);
	
    free_box(&box,row);
	return 0;
}


void read_box(char* filename, int*** box, int* row, int* col)
{
	FILE *fp;
	int i, j;
	fp = fopen(filename, "r");
	fscanf(fp,"%d %d", row, col);
	*box = (int **)malloc(sizeof(int *)*(*row));
	for(i=0;i<*row;i++)
	{
		(*box)[i] = (int *)malloc(sizeof(int)*(*col+1));
	}
	for(i=0;i<*row;i++)
	{
		for(j=0;j<*col;j++)
		{
			if(fscanf(fp, "%d", &(*box)[i][j]) == EOF)
			{
				break;
			}
		}
	}

	fclose(fp);
}


void print_box(int **box, int row, int col)
{
	int i,j;

    printf("%d %d\n", row, col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}
}



int drop_box(int **box, int row, int col)
{
	int result, i, j, k;
	
    for(i=0;i<row;i++){
		box[i][col] = 0;
	}
	
    for(i=0;i<col+1;i++){
		if(box[0][i] == 0){
			k = i;
			for(j=0;j<row-1;j++){
				for(;k<col+1;k++){
					if(box[j+1][k]==0){
						break;
					}
				}
			}
			break;
		}
	}

	result = k;
	return result;
}



void free_box(int ***box, int row)
{
	int i;
	for(i=0;i<row;i++)
		free((*box)[i]);
	free(*box);
}




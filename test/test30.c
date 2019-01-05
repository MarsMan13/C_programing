#include <stdio.h>
#define maxrow 1000
#define maxcol 1000

void print_square (int[]);

int main(void)
{
    int table [maxrow][maxcol] =
    {
        {0,1,2,3},
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33},
        {40,41,42,43}
    };

    for(int row = 0; row < maxrow; row++)
        print_square(table[row]);

    return 0;
}

void print_square(int x[])
{
    for(int col = 0; col < maxcol; col++)
        printf("%6d", x[col]*x[col]);
    printf("\n");

}

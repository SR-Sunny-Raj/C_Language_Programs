#include<stdio.h>
int a[5][5],b[5][5],row,col;
void add_matrices(int(*)[5]);
int main()
{
    int c[5][5],i,j;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    printf("Enter the number of column : ");
    scanf("%d",&col);
    printf("Enter elements of matrix A :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix B :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
 {
            scanf("%d",&b[i][j]);
        }
    }
    add_matrices(c);
    printf("The Addition of matrix A and B gives :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}

void add_matrices(int c[5][5])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j]; }}}                                                         


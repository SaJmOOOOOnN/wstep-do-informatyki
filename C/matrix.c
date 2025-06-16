#include <stdio.h>
#include <stdlib.h>
float **createMatrix(int w, int k)
{
    int **tab_2;
    tab_2=malloc(sizeof(float*)*w);
    if(tab_2!=NULL)
    {
        for(int i=0;i<w;i++)
        {
            tab_2[i]=malloc(sizeof(float)*k);
            if(tab_2[i]==NULL)
                return NULL;
        }
    }
    return tab_2;
}
void fillMatrix(float **tab,int w, int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            tab[i][j]=i+j;
        }
    }
}
void printMatrix(float **tab, int w, int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("%f ",tab[i][j]);
        }
        printf("\n");
    }
}
void deleteMatrix(float ***tab, int w)
{
    for(int i=0;i<w;i++)
    {
        free(*(*tab));
    }
    free(*tab);
    *tab=NULL;
}
int main()
{
    int row, col;
    printf("Podaj liczbe wierszy:");
    scanf("%d",&row);
    printf("Podaj liczbe kolumn: ");
    scanf("%d",&col);
    float **tab_1;
    tab_1=createMatrix(row,col);
    if(tab_1!=NULL)
    {
        fillMatrix(tab_1,row,col);
        printMatrix(tab_1,row,col);
        deleteMatrix(&tab_1,row);
    }
    return 0;
}

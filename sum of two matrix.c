#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3],total[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of two matrix\n\n");
    for(i=0; i<3 ;i++)
    {
        for(j=0;j<3;j++)
        {
            total[i][j]=a[i][j]+b[i][j];
            printf("%d\t",total[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
C PROGRAM TO FIND THE DIAGONAL OD A MATRIX
DARSHAN BABU K S
2020EC0007
*/
#include <stdio.h>
int main()
{
    int a[100][100],n,i,j;
    scanf("%d",&n);
    printf("Enter the matrix elements");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Diagonol elements are ");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i==j)
                printf("%d, ",a[i][j]);
    
        }
    }
    return 0;
}

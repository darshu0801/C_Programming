#include <stdio.h>
void input(int array[],int num);
void search (int array[],int keynum,int num);

int main()
{  
    int num;
    int keynum;
    printf("Enter the number of elements :\n");
    scanf("%d", &num);
    int array[100];
    printf("Enter the elements :\n");
    input(array,num);
    printf("Enter the key to be searched :\n");
    scanf("%d", &keynum);
    search(array,keynum,num);
    return 0;
}
    void input(int array[],int num)
    {
        int i;
        for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    }
    void search (int array[],int keynum,int num)
    {
        int i, found = 0;
        for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("The key is present in the array.At index %d\n",i);
    else
        printf("The key is not present in the array.\n");
    }
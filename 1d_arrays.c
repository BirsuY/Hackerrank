//birsuyilmaz
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num;
    int *ptr;
    int sum = 0;

    scanf("%d", &num);
    int arr[num];
    ptr = arr;
     
    for(int i = 0; i < num; i++)
    {
        scanf("%d", (ptr+i));
    }
     
    for(int j = 0; j < num; j++)
    {      
       sum += arr[j];          
    }

    printf("%d\n", sum);
    return 0;
}
//birsuyilmaz
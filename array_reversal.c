//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
    int arr_rev[num];
    
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


     
    for(i = 0; i < num; i++) {
       arr_rev[i] = arr[i];
    }
    
    for(i = 0; i < num; i++) {
       arr[i] = arr_rev[num - i -1];
    }

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}
//birsuyilmaz
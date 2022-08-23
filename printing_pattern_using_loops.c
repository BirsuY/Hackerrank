//birsuyilmaz
#include <stdio.h>

void func(int n){
    for(int j = n; j > 0; j--){
        for(int m = n; m > j; m--){
            printf("%d ", m);
        }
        for(int k = 0; k < 2*j-1; k++){
            printf("%d ", j);
            
        }
        for(int l = j; l < n; l++){
            printf("%d ", l+1);
        }
        printf("\n");
    }    
}

void func_1(int n){
    for(int j = 1; j < n; j++){
        for(int m = n; m > j; m--){
            printf("%d ", m);
        }
        for(int k = 0; k < 2*j-1; k++){
            printf("%d ", j+1);
            
        }
        for(int l = j; l < n; l++){
            printf("%d ", l+1);
        }
        printf("\n");
    }     
}

int main() 
{
    int n;
    scanf("%d", &n);
    func(n);
    func_1(n);
    return 0;
}
//birsuyilmaz

//birsuyilmaz
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    char *elements[ ] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    int n;
    for (n = a; n <= b; n++){
        if (n > 9) {
            if (n % 2 == 0) { 
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
        else{
            printf("%s\n", elements[n-1]);
        }
    }

    return 0;
}
//birsuyilmaz
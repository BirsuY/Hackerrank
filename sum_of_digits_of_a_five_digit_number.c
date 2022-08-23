//birsuyilmaz
#include <stdio.h>
#include <math.h>


int main() {
	
    int n, sum;
    int ones, tens, hundreds, thousands, tenthousands;
    scanf("%d", &n);
    
    tenthousands = n / 10000;
    n -= tenthousands * 10000;
    thousands = n / 1000;
    n -= thousands * 1000;
    hundreds = n / 100;
    n -= hundreds * 100;
    tens = n / 10;
    n -= tens * 10;
    ones = n / 1;
    sum = ones + tens + hundreds + thousands + tenthousands;
    printf("%d", sum);
    
    return 0;
}
//birsuyilmaz
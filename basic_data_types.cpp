//birsuyilmaz
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num1;
    long num2;
    double doub1, doub2;
    char c1;

    scanf("%d %ld %c %lf %lf", &num1, &num2, &c1, &doub1, &doub2);
    printf("%d\n%ld\n%c\n%.3lf\n%.9lf\n", num1, num2, c1, doub1, doub2);
    
    return 0;
}
//birsuyilmaz
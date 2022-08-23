//birsuyilmaz
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    
    int arr[3] = {b, c, d};
    int mxm = a;
    for(int i = 0; i < 3; i++){
        mxm = (arr[i] > mxm ? arr[i] : mxm);
    }
    return mxm;
}
//birsuyilmaz
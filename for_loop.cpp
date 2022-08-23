//birsuyilmaz
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = num1; i <= num2; i++){
        if((9>=i) && (i >= 1)){
            cout << arr[i-1] << "\n";
        }
        else if((i > 9) && (i % 2 == 0)){
            cout << "even\n";
        }
        else if((i > 9) && (i % 2 != 0)){
            cout << "odd\n";
        }
    }
    return 0;
}
//birsuyilmaz
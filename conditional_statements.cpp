//birsuyilmaz
#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    string arr[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << (n > 9 ? arr[0] : arr[n]);
    return 0;
}
//birsuyilmaz
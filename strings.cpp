//birsuyilmaz
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, a_new, b_new;
	cin >> a >> b;
    a_new = a;
    a_new[0] = b[0];
    b_new = b;
    b_new[0] = a[0];
    cout << a.size() << " " << b.size() << "\n" << a+b << "\n" << a_new + " " + b_new + "\n";
  
    return 0;
}
//birsuyilmaz
/*
*****
****
***
**
*
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

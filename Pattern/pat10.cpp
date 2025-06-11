/*

*
**
***
****
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
    for (int i = 0; i < n*2 - 1; i++) {
        if (i < n) {
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        else {
            for (int j = i - n + 1; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}

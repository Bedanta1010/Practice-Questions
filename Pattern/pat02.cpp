/*
*
**
***
****
*****
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

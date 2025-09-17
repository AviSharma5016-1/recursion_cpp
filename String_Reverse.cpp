#include<iostream>
using namespace std;

int rev_str(string str, int n) {
    if (n < 0)
        return 0;
    else {
        cout << str[n];
        return rev_str(str, n - 1);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Reversed string is: ";
    rev_str(str, str.length() - 1);
    cout << endl;

    return 0;
}

/*OUTPUT
Enter a string: Avi
Reversed string is: ivA
*/

#include <iostream>
using namespace std;

int fact_reverse(int n) {
    if (n <= 0)
        return 1;
    else {
        cout << n << " ";
        return fact_reverse(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Natural numbers in reverse order up to " << num << " are: ";
    fact_reverse(num);
    cout << endl;

    return 0;
}

/*OUTPUT
Enter a number: 24
Natural numbers in reverse order up to 24 are: 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
*/

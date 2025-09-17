#include <iostream>
using namespace std;

int fact_add(int n) {
    if (n <= 1)
        return 1;
    else
        return n + fact_add(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is " << fact_add(num) << endl;

    return 0;
}

/*OUTPUT
Enter a number: 10
Sum of first 10 natural numbers is 55
*/

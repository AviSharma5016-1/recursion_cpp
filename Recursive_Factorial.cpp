#include<iostream>
using namespace std;


int fact(int n){
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
    }

int main(){
    int num;
    cout<<"Enter a number: ";   
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;

    return 0;
}

/*OUTPUT
Enter a number: 5
Factorial of 5 is 120
*/

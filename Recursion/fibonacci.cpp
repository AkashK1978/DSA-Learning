#include<bits\stdc++.h>
using namespace std;

int fibo(int n){
    if(n <= 1){
        return n;
    }
    else{
        int last = fibo(n-1);
        int secLast = fibo(n-2);
        return last + secLast ;
    }
}

int main(){
    int n;
    cout << "Enter Index Number : ";
    cin >> n;

     cout << "Fibonacci Number is : " << fibo(n);

    return 0;
}
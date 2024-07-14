#include <bits/stdc++.h>
using namespace std;

// evenly divides like 12 so it should divide by 1 and 2 both...
// int evenlyDivides(int N)
// {
//    int count = 0;
//    int originalNumber = N;

//    while (N > 0)
//    {
//       int lastDigit = N % 10;

//       if (lastDigit != 0 && originalNumber % lastDigit == 0)
//       {
//          count++;
//       }

//       N = N / 10; 
//    }

//    return count;
// }

//count Digit of number
// int countDigit(int num){
//    int count = (int)(log10(num) + 1);

// return count;
// }

// Print Divisors..
// void printDiviors(int n){
//    for(int i = 1; i <= n; i++){
//       if(n % i == 0){
//          cout << i << " ";
//       }
//    }
// }

int main(){

   // evenly divide driver code
   //  int num;
   //  cin >> num;
   // int result = evenlyDivides(num);
   // cout << "Number of digits that evenly divide " << num << " is: " << result << endl;


    // You are given a number 'n'.
    // Return number of digits in ‘n’.
    //  int num ;
    //  cin>>num;
    //  int count = 0;
    //  while (num > 0)
    //  {
    //     int lastDigit = num%10;
    //     cout << "lastDigit is :  " <<lastDigit <<endl;;

    //  // counter for count the digit..
    //     count = count + 1;

    //     num = num/10;
    //     cout << "Number is : " << num <<endl; ;
    //  }

    //  cout << "Total Number of digit is: " <<count;

    // another method
    //  int num;
    //  cin >> num;
    //  int result =  countDigit(num);
    //  cout << result ;

    // // reverse a number
    //  int num ;
    //  cin>>num;
    //  while (num > 0)
    //  {
    //     int lastDigit = num%10;
    //     cout << lastDigit ;
    //     num = num/10;
    //  }

    // // PALINDROME NUMBER...
    // int n;
    // cin>>n;
    // int originalNum = n;
    // int revNum = 0;
    // while (n>0)
    // {
    //    int lastDigit = n % 10;
    //    revNum = (revNum * 10) + lastDigit;
    //    n = n / 10 ;
    // }
    // cout << "Reverse Number : " <<revNum <<endl;
    // if(revNum == originalNum){
    //    cout << "Number is a Palindrome Number"<<endl;
    // }
    // else{

    //    cout << "Number is not Palindrome Number" << endl;
    // }

    // // ARMSTRONG NUMBER...
    // int n;
    // cin >> n;
    // int sum = 0;
    // int originalNum = n;
    // while (n > 0)
    // {
    //    int lastDigit = n % 10;
    //    sum = sum + (lastDigit * lastDigit * lastDigit);
    //    n = n / 10;
    // }
    // if(sum == originalNum){
    //    cout << "Number is a Armstrong Number"<<endl;
    // }
    // else{

    //    cout << "Number is not Armstrong Number" << endl;
    // }


    // PRINT DIVISOR DRIVER CODE
   // int n;
   // cin >> n;
   // printDiviors(n);

   return 0;
}
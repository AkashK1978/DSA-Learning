#include<iostream>
using namespace std;

// Functions are set of code which performs something for you.
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times


// non-parameterised
// void printName(){
//     cout << "Hey Akash";
// }

// int main(){
//     printName();
//     return 0 ;
// }

// parameterised
// void printName(string name){
//     cout << "Hey " << name <<endl ;
// }

// int main(){
//     string name ;
//     cin >> name;
//     printName(name);

//     string name2 ;
//     cin >> name2;
//     printName(name2);
//     return 0 ;
// }

// Take two numbers and print its sum
// void  --> which does not returns anything
// void sum(int a , int b){
//     cout << a+b <<endl;
// }
// int main(){
//     int a, b ;
//     cout << "Enter Two Numbers For Sum : " ;
//     cin >> a >> b ;

//     sum(a, b);

//     int a1, b1 ;
//     cout << "Enter Two Numbers For Sum : " ;
//     cin >> a1 >> b1;

//     sum(a1,b1);

//     return 0 ;
// }

// return
int sum(int num1, int num2)
{
    int num3 = num1 + num2 ;
    return num3;
}
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers For Sum : ";
    cin >> num1 >> num2;

    int result = sum(num1 , num2);
    cout << result;

    return 0;
}
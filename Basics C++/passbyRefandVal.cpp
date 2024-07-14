#include<iostream>
using namespace std;


// pass by value 
// void doSomething(int num){
//     cout << num <<endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }

// int main(){
//     // in pass by value copy goes original number didn't go...
//     int num =10;
//     doSomething(num);
//     cout << num << endl;
//     return 0 ;
// }

// // pass by value 
// void doSomething(string s){
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     // in pass by value copy goes original number didn't go...
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0 ;
// }

// pass by reference
// void doSomething(string &s){
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     // in pass by reference  original value passed...
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0 ;
// }

// void doSomething(int &num){
//     cout << num <<endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }
// int main(){
//     int num =10;
//     doSomething(num);
//     cout << num << endl;
//     return 0 ;
// }

// pass by reference
void doSomething(int arr[] , int size){  //  array hamesha reference ke sath jata hai
  arr[0] += 100;
  cout << "value inside function : " << arr[0] <<endl;
}

int main(){
    int size = 5 ;
    int arr[size];
    for (int i = 0; i < size; i = i + 1)
    {
        cin >> arr[i];
    }
    doSomething(arr, size); //  array hamesha reference ke sath jata hai

    cout << "value inside main function : " << arr[0] << endl;
    return 0 ;
}
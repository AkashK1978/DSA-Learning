#include<iostream>
using namespace std;

int main(){

    string s = "AaKaSh";
    // cout << s[0] <<endl;
    // cout << s[1] <<endl;
    // cout << s[2] <<endl;
    // cout << s[03] <<endl;
    // cout << s[4] <<endl;

    int len = s.size();
    cout << len <<endl;
    s[len-1] = 'H';
    cout << s[len -1];


    return 0 ;
}
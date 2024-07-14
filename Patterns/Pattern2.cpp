#include<iostream>
using namespace std;
/*

*
**
***
****

*/
void Print2(int num){
    int i,j;
    for(i=0; i<num; i++){
        for(j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int test;
    cout << "Enter Test Case Number : ";
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int num;
        cout << "Enter The Value For Print : ";
        cin >> num;
        Print2(num);
    }


    return 0 ;
}
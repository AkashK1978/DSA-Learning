#include<iostream>
using namespace std;

// ****
// ****
// ****
// ****

void Print1(int num){
    int i, j;
    for (i = 0; i < num; i = i + 1)
    {
        for (j = 0; j < num; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}


    // int main()
    // {   
    //     int num;
    //     cout << "Enter The Value For Print : " ;
    //     cin >> num;
    //     Print(num);

    //     return 0;
    // }

    // but sometime in backend there are some test case you might be face that you have tu run this pattern multiple time ek sath..for eg:
    int main(){
        int test;
        cout << "Enter Test Case Number : ";
        cin >> test;
        for(int i = 0 ; i<test; i++){
                int num;
                cout << "Enter The Value For Print : " ;
                cin >> num;
                Print1(num);

        }
    }
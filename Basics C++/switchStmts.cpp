#include<iostream>
using namespace std;

int main(){

        int day;
        cout << "Enter Day Number : " ;
        cin >> day ;

        switch (day)
        {
        case 1 :
            cout<<"Monday"<<endl;
            break;
        case 2 :
            cout<<"Tuesday"<<endl;
            break;
        case 3 :
            cout<<"Wednesday"<<endl;
            break;
        case 4 :
            cout<<"Thursday"<<endl;
            break;
        case 5 :
            cout<<"Friday"<<endl;
            break;
        case 6 :
            cout<<"Saturday"<<endl;
            break;
        case 7 :
            cout<<"Sunday"<<endl;
            break;

        default:
            cout << "Invalid";
            break;
        }
        
    // break --> break stmt will breakout all conditional stmts that you have written..
    // default --> if none of cases is excuted then default will execute..
        return 0;
}
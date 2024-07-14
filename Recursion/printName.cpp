#include<bits\stdc++.h>
using namespace std;


// Without Base Condtion....
/*void printName(int n){
    string s;
    cout << "Enter Your Name : " ;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        cout << s << endl;
    }
    
}

int main(){
    int n;
    cin>>n;

    printName(n);

    return 0;
}*/


// Using Base Condition
void printName(int i, int n){
    if(i > n){
        return;
    }
    else{
        cout << "Akash" <<endl;
        printName(i+1 , n);
    }
}

int main(){
    
    int n;
    cin >> n;

    printName(1,n);

    return 0;
}
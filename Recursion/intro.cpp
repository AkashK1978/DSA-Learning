#include<bits\stdc++.h>
using namespace std;


// RECURSION //
/*
--> WHEN A FUNCTION CALLS ITSELF UNTIL A SPECIFIED CONDITION IS MET.
*/

// it will be print 1 again and again because function callint itself in function.
// void printNum(){
//     int num = 1;
//     cout << num;
//     printNum();
  
// }

// int main(){

//     printNum();

//     return 0;
// }


// So to stop this we'll use -->  Base Condition
int global_count = 0;

void printNum()
{
    if (global_count == 4)
    {
        return;
    }
    else
    {
        cout << global_count << endl;
        global_count++;
        printNum();
    }
}

int main()
{
    printNum();
    return 0;
}
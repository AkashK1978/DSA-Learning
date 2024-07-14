#include<iostream>
using namespace std;

// int main(){
//     int num1 , num2;
//     cout << "Enter Two Numbers : " ;
//     cin >> num1 >> num2;

//     int minimum = min(num1 , num2);
//     cout << "Minimum Number Is : " << minimum <<endl;
//     int maximum = max(num1 , num2);
//     cout << "Maximum Number Is : " << maximum <<endl;
//     return 0 ;
// }

// without inbuilt function finding max min -->

// Maximum
// int maxx(int num1 , int num2){
//     if(num1 >= num2){
//         return num1;
//     }
//     else{
//         return num2 ;
//     }
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter Two Numbers : ";
//     cin >> num1 >> num2;

//     int maximum = maxx(num1, num2);
//     cout << "Maximum Number Is : " << maximum << endl;
//     return 0;
// }

// Minimum Number
// int minn(int num1, int num2)
// {
//     if (num1 <= num2)
//     {
//         return num1;
//     }
//     else
//     {
//         return num2;
//     }
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter Two Numbers : ";
//     cin >> num1 >> num2;

//     int minimum = minn(num1, num2);
//     cout << "Minimum Number Is : " << minimum << endl;
//     return 0;
// }

// If you don't write else and condition in if is false then it always give garbage value ..
// for working above statement you will always give return type..
int minn(int num1, int num2)
{   // 6 <= 5
    if (num1 <= num2)
    {
        return num1;
    }
 
    return num2;
   // looking for a return line
    
}
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers : ";
    cin >> num1 >> num2;

    int minimum = minn(num1, num2);
    cout << "Minimum Number Is : " << minimum << endl;
    return 0;
}
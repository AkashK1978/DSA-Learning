#include <bits/stdc++.h>
using namespace std;

// void explainVector()
// {
//     vector<int>v;  // creating empty container
//     v.push_back(1); // it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
//     v.emplace_back(2); // simmilar to push_back,dynamically increase size and push at back

//     vector<pair<int,int>>vec;
//     vec.push_back({1,2});
//     vec.emplace_back(1,2); // there is no requirement of curly braces it'll automatically detect that this is pair

//     vector<int> V(5,100); // {100,100,100,100,100} 5 instances of 100
//     vector<int> V(5); // {0,0,0,0,0} 5 instances of garbage value

//     vector<int> V1(5, 10); // {10,10,10,10,10} 5 instances of 100
//     vector<int> V2(V1);  // copy the value of V1 in V2  (JUST COPY)

//     vector<int>::iterator it = v.begin(); //  it returns an iterator pointing to the first element of the vector.
//     it++;
//     cout<<*(it)<<" ";

//     it = it + 2;
//     cout<<*(it)<<" ";

//     // vector<int>::iterator it = v.end(); // it returns an iterator pointing to the element theoretically after the last element of the vector.
//     // vector<int>::iterator it = v.rend();// reverse end
//     // vector<int>::iterator it = v.rbegin();// reverse begin pointing last element of vector

//     cout <<v[0]<<" "<<v.at(0);
//     cout<<v.back()<<" ";

//     // Printing Entire Vector
//     // auto : auto automatically assign vector iterator you dont need to write vector<int>::iterator it.
//     // and automatically assign or define datatype
//     for (auto it = v.begin(); it != v.end(); it++)
//         cout << *(it) << " ";

//     // Other Method
//         for(auto it : v){
//             cout<<it<<" ";
//         }

//         cout << "\nInserting 5 at the beginning:" << endl;
//         v.insert(v.begin(), 5);
//         cout << "\nInserting 10,20,30 at the beginning:" << endl;
//         v.insert(v.begin()+1,2,10); // begin at 2nd position add 2 operands of 10
//         cout << "The first element is: " << v[0] << endl;
//         cout << "Erasing the first element" << endl;
//         v.erase(v.begin());
//         cout << "Erasing the second and fourth element" << endl;
//         v.erase(v.begin()+1,v.begin()+3);
//         cout << "Now the first element is: " << v[0] << endl;

//         vector<int>copy(2,50);
//         v.insert(v.begin(),copy.begin(),copy.end());

//         cout << "\nThe front element of the vector: " << v.front();
//         cout << "\nThe last element of the vector: " << v.back();
//         cout << "\nThe size of the vector: " << v.size();
//         cout << "\nDeleting element from the end: " << v[v.size() - 1];
//         v.pop_back();
//         V1.swap(V2);//swapping of two vectors
//         v.clear();// clear entirely vector

//         if (v.empty())
//             cout << "\nvector is empty";
//         else
//             cout << "\nvector is not empty" << endl;

//         v.clear();
//         cout << "Size of the vector after clearing the vector: " << v.size();
// }

// void printVector(vector<int>&vecty){
//     cout << "Size: "<<vecty.size()<<endl;
//     for(int i =0; i<vecty.size(); i++){
//         // v.size() --> O(1)                
//         cout << vecty[i] <<" ";             
//     }                                       
//     vecty.push_back(9); // adding vector by reference 
//     cout<<endl;
//}

// void printVector(vector<pair<int, int>> &v)
// {
//     cout << "Size: " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//      cout << v[i].first << " "<<v[i].second<<endl;
//     }
//     cout << endl;
// }

int main()
{
    // vector<int>vecty;
    // int size;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //    int value;
    //    cin>>value;
    //    printVector(vecty);
    //    vecty.push_back(value); // T.C --> O(1)
    // }

    // vector<int>vecty(5,3); // 5 size ka vector banega or usme sari value 3 dal jayegi
    // vecty.push_back(7); // last me add karta hai

    // // vecty.pop_back(); // last value ko nikal raha h
    // // printVector(vecty);

    // vector<int>vecty1 = vecty;
    // vecty1.push_back(5);
    // printVector(vecty);
    // printVector(vecty);
    // printVector(vecty1);

    // vector<pair<int,int>>v = {{1,2},{4,6},{8,9}};
    // printVector(v);
}
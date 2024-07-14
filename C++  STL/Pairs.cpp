#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p= {1,3};
    cout<<p.first<<" "<<p.second<<" -> Simple Pair"<<endl;

    pair<int,pair<int,int>>P={1,{3,4}};
    cout<<p.first<<" "<< P.second.second<<" "<<P.second.first<<" -> Nested Pair"<<endl;;

    pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second <<" -> Pair Stored in Array";

}

int main(){

    pair<int,string> p;
    // p = make_pair(2,"abc");
    p = {2,"abcd"};
    pair<int,string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second <<endl;

    pair<int, int> arr[5] = {{1, 2}, {2, 3}, {3, 4}};
    swap(arr[0],arr[2]);
    for (int i = 0; i < 3; i++)
    {
       cout << arr[i].first<< " "<<arr[i].second<<endl;
    }
    
    cout << arr[1].second << " -> Pair Stored in Array";
    // explainPair();

    return 0 ;
}
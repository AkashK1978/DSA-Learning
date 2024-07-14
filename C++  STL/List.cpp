#include <bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> li;

    li.push_back(2); //{2}
    li.emplace_back(4); //{2,4}
    li.push_front(5); // {5,2,4}
    li.emplace_front(); // {2,4}
}
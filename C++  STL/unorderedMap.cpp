#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    // printing map(sorted order me hongi)
    for (auto &Pair : m)
    {
        cout << Pair.first << " " << Pair.second << endl;
    }
}

int main()
{

    // unordered map me :
    // 1. inbuilt hash table use karte h
    // 2. Time complexity O(1) ho jati h
    // 3. valid keys datatype --> map me directly pair insert kar sakte ho..

    unordered_map<int, string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cde";
    m[3] = "acd";
    // other method
    m.insert({4, "fgh"});

    auto it = m.find(7); // will return iterator ... O(1)
    if (it != m.end())
    {                // safety check
        m.erase(it); // O(1)
    }

    //    if (it == m.end())
    //    {
    //        cout << "NO value";
    //     }else{
    //         cout << (*it).first << " " <<(*it).second<<endl;
    //     }

    printMap(m);

    cout << endl;
}

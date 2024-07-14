#include<bits/stdc++.h>
using namespace std;

void printMap(map<int,string> &m){
    cout << m.size()<<endl;
    // printing map(sorted order me hongi)
    for (auto &Pair : m)
    {
        cout << Pair.first << " " << Pair.second << endl;
        
    }
}


int main(){

// ordered map me : 
// 1. inbuilt implementation
// 2. Time complexity
// 3. valid keys datatype


   map<int,string> m ;
   m[1] = "abc";  // O(log(n))
   m[5] = "cde" ;
   m[3] = "acd"; 
   // other method
   m.insert({4,"fgh"});

   auto it = m.find(7); // will return iterator ... O(log(n))
   if(it != m.end()){ // safety check
       m.erase(it); // O(log(n))
   }

//    if (it == m.end())
//    {
//        cout << "NO value";
//     }else{
//         cout << (*it).first << " " <<(*it).second<<endl;
//     }

    printMap(m);

  
   
   cout<<endl;
}


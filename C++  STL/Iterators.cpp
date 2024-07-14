#include<bits/stdc++.h>
using namespace std;






int main(){
    vector<int>v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int> :: iterator it = v.begin();
    // cout << (*it+1) <<endl;
    // for(it = v.begin(); it != v.end(); it++){
    //     cout<<(*it)<<endl;
    // }

    // vector<pair<int,int>>vp = {{2,3},{4,5},{6,7}};
    // vector<pair<int, int>> :: iterator it;
    // for(it = vp.begin(); it != vp.end(); it++){
    //     cout << (*it).first<<" "<<(*it).second<<endl;
    // }
    // cout<<endl;

    // for(it = vp.begin(); it != vp.end(); it++){
    //     cout << (it->first)<<" "<<(it->second)<<endl;
    // }
    // cout<<endl;
    //(*it).first <=> (it -> first) ke equal hai



    for( auto it = v.begin(); it != v.end(); it++){
        cout<<(*it)<<endl;
    }

    vector<pair<int, int>> vp = {{4, 5}, {6, 7}};
    for (auto &value : vp)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
    auto a = 1;
    // auto : auto automatically assign vector iterator you dont need to write vector<int>::iterator it and automatically assign or define datatype
    
    
   
    // for ( int &value : v)
    // {
    //     /* range based loop */
    //     /* inderctly value uss variable me aa jati hai */
    //     /* value copy hoti hai actual element ki */

    //     value++ ;
    //     // cout << value << " ";
    // }
    //     for(int value : v){
    //         cout<<value<<" ";
    //     }
    //     cout<<endl;
    }
    


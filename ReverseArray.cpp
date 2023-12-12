
REVERING AN ARRAY LEETCODE
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> reverse(vector<int>v){
    
    int s=0,e=v.size()-1;
    while(s<=e){
        
        swap(v[s],v[e]);
        s++;
        e--;
        
    }
    return v; 
}
void print (vector<int> v){
    
    for (int i =0;i<v.size();i++){
        
       cout<<v[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
    
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(14);
    v.push_back(28);
    v.push_back(25);
    v.push_back(45);
    
    vector<int>ans= reverse(v);
    cout<<"printing reverse array"<<endl;
    print(ans);
}

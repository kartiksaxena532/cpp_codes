CPP STANDERED TEMPLATE LIBRARY : STL

vector is a data structure same as array 
jo ki cintegious memory location follow karra hai
jisme ki agar aap uske size se zayda elements daaloge toh woh apna
size double kar lega.ye ek nya vector banayega 
jisme saare purane elements daal dega aur 
purane vector ko dump kar dega.

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;
int main() {
    vector<int> v;
    
    
    // Write C++ code here
    v.push_back(1);
    cout << "capacity of the vector is: "<< v.capacity()<<endl;
    v.push_back(3);
    cout << "capacity of the vector is: "<< v.capacity()<<endl;
    v.push_back(5);
    cout << "capacity of the vector is: "<< v.capacity()<<endl;

    cout<<"size of v is :"<<v.size()<<endl;
    


    return 0;
}
//capacity of the vector is: 1
//capacity of the vector is: 2
//capacity of the vector is: 4
push_back se daalo pop back se nikaalo 

elemnt ko acess kar  sakte ho baaki a.at(2) ka mtlb hota hai ki a ke second index ko assign karni hoti hai
koi value uske liye
a.begin() used for first element 
a.clear() is for clearing the size of array


vector<int> a(5,1)
cout<<"print a"<<endl;
for(int i:a){
cout<<i<<" ";
}

Iska mtlb hai ki size 5 ka array banao aur saare element ko 1 se initilize karde


vector <int>last (a);
cout<<"print last"<<endl;
for(int i:last){
cout<<i<<" ";

}cout<<endl;
iska mtlb hua ki a ke saare elemsnt uth ke iss new last naam ke array mei aajyenge.

baaki deqeue ke case mein double side operation bhi ho sakta hia jisme aap dono side se fisrt ya last 
d.front()
d.back()
d.empty()
d.erase(d.begin(),d.begin()+1)

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    int count =1;
    while(row<=n){
    int col=1;
    while(col<=row){
        cout<<count;
       count=row+1;
        col=col+1;
        
    }
    cout<<endl;
    row=row+1;
}
    return 0;
}

1
23
344
4555
56666

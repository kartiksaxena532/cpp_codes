# cpp_codes
adding topics such as binary search tress and avl trees

// agar banani ho koi bhi 2d array 

vector<vector<int>>dp(m,vector<int>dp(n,0)) 

//generally used for matrix

agar koi modulo lena hai toh uss value ko ek int ya kisi aur mien store kar lo
like int M = 100000007 ; 

aur jab return karo ans toh (return ans % M) karo iski maa ka maje hi maje

// jab bhi string ko kisi interger value ki tarah store karna hai 
toh use unordered_map <char , int > mp ; 

ek map ban gya jisse ki char ko ek interger value assign ho jaayegi 

//today we are just a new code of line away in the whole thing

I/O Stream Optimization:

std::ios_base::sync_with_stdio(0); and cin.tie(0);: These lines optimize input and output streams for faster execution. sync_with_stdio(0) disables synchronization between C and C++ standard streams, and tie(0) unties cin from cout, improving performance.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    cin.tie(0);
    int n;
    cin>>n;
    cout<<n<<endl;

    return 0;
}
// if you want to compare 2 intergers arrays ya fir aur kuch jaise ki ek array ka smallest common element 
toh use while loop i aur j declare karo num1[i] aur num2[j] jab tak equal na ho tab tak i++ ya j++ karte raho




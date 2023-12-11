SELECTION SORT
#include <iostream>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

isme ek ko min index mann lete hia fir poori array mein check karte hai ki iss index se choota 
aur to nhi hai agar hai toh usko swap karwa dete hai
ab index ko update kar dete hai uske baad aur firse wahi check krte hai ki koi aur chota toh nhi 
aur firse swap ho jata hai 
pehel loop for index updation
doosra for loop checking each item to compare
fir swap function implementation

space complexity is O(1)
TIME COMPLEXITY IS O(n^2) this also the beat and worst case time complexity cause best case mein 
agar array sorted bhi hai tab bhi comparision toh utte hi karne padenge
aur worst case mein bhi utte hi karne pademnge


USE CASE :
jabbhui array ya vector ya list ka size chota sa hoga hamehsa isko soch ke dekhio kaam aayega


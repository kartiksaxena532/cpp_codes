bubble sort mein baaju wale se comapre kara rahe hai agar j]baaju wala bada hai toh ignore krre hai
aur agar choota hai toh swap krre hai
approach to code is same as selection sort lekin usme tha ki hum poore mein se lete they aur laake patak 
dete they lekin yahan toh adjacent ko yes ya no leke swap krre hai
iska mtlb ussi code mein ek condition bool ki true ya false ki aaygyi jo process ko igore
ya break kregi

#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
use case:
bubble sort ke harr nth round mein aap largest element ko pakad ke sort ya right place
pe kar dete ho


space complexity is O(1)
TIME COMPLEXITY IS O(n^2) but best case senerio gives it O(n) when all the elements are arranged 
in the ascending order.

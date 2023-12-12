INSERTION SORT

Isme na swap krrre hai na hi index utha ke dalre hai isme krre hai shifting jo ki check krti hai 
agar peeche wala chota hai toh uskoaage shift kardo nhi toh rene do bhaimmyaa
first elemnt ko sorted maan ke chalte hai hai uske hisaab se compare krke shifting krte rehte hau 


#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}
it is a very adaptive algoritm and very khatanaak sorting algo

space complexity is O(1)
TIME COMPLEXITY IS O(n^2) best cae is already sorted O(n)

binary search
conditn: Elements should be in monotonic functions.
taking middle element and compare it with the key (i.e. the desired number) 
agar sam eaaya toh mein wahi index retunr kar doonga nhi toh mere paas ab 2 halfes hai unme se ek half ko 
pakad ke usme middle element leke karunga aise hi half half karke todunga aur search karunga'iiss 
isse fayda ye hai ki saare element check nhi krne padh rahe hai humko aur processing bhi 
kaafi zayda fast hori hai isme jo ki accha hai for time complexity

linear search vs the binary search :n


1.linear search mein mujhe worst case senerio mein 1000 steps lene padenge but 
1.binary search ke ahrr step mein mere array ka size just half hota jaara hai

2. for binary search comlexity is O (logn) but for linear its O(n)
// kyu logn? bhai n/2^0+ n/2^1+.......(n/2^k)=1 kyuki 1 hi element bacha na toh k = Log n

mid = (start+end)/2 

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
// y eisiliye kiy ahaigaya mein start aur end dono ki value 2^31 daal doonga toh range ke bahar ho kyerga mamla
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

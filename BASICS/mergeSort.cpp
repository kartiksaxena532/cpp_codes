merge sorted arrays 

merging 2 arrays needs ki hum first elemnt ke index ko leke jaayenge dono arrays ke aur unko ek saath
compare karwake ek new array mein uss order mein daal denege jisme woh hone chaiye hai i.e. jo ki sorted ho'


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
        }
        else{
         arr3[k]=arr2[j];
         k++;
         j++;
        }
         
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
        
        
        
        
    }     
       while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
        
        
        
        
    }    
    
    
    }

    
}

void print (int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
        
        
        
    }
    cout<<endl;
}




int main() {
    
    int arr1[6]={2,56,78,86,53,24};
    int arr2[3]={27,5,75};
    int arr3[10]={0};
    merge(arr1,6,arr2,3,arr3);
    
   
    
    
    
    return 0;
}

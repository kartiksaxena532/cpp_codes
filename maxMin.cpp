maxmin.cpp

#include<bits/stdc++.h>
using namespace std;
 int getMax(int num[], int n){
     
     int max = INT_MIN;// INT KI EK value hoti hai -2 ki power 31
     //i.e int min se lekar (2ki power 31 )-1 tak i.e. int max
     for( int i=0;i<n;i++){
         if (num[i]>max){
             max=num[i];
         }
     }
     //returning  max value
     return max;
 }
 int getMin(int num[], int n){
     
     int max = INT_MAX;// INT KI EK value hoti hai -2 ki power 31
     //i.e int min se lekar (2ki power 31 )-1 tak i.e. int max
     for( int i=0;i<n;i++){
         if (num[i]<min){
             min=num[i];
         }
     }
     //returning  min value
     return min;
 }

 int main() {
     int size;
     cin >> size;
     int num [100];
    //taking input in array
     for(int i = 0; i<size; i++) {
         cin >> num[i];
     }
cout<<"maximum value is: "<<getMax(num,size)<<endl;
cout<<"minimum value is: "<<getMin(num,size)<<endl;
     return 0;
}

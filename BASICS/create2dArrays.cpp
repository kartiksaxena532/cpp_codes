CREATING 2D ARRAYS 

the first example is given as the game of tic tac toe in which we declare an array of 9 elements and 
maps each element with the coressponding element using a formula i.e. c*i+j 
c gives us the total number of columns of the 2d array and i , j gives us the total coordinates of each element of the matrix

but visualizing and mapping each element like this can be a long process so we can devise a differrnt
method to do it.
step 1: declare a 2D array
in this we will visualize it in 2d table but in memory it will be stored as a linear array form only.
int arr[10};
but  can be decalred as int arr[3][3];
for taking input in a 2d array we will do cin>>arr[i][j];

 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 int main(){

 int arr[3][4];     
     
 
 for(int i=0;i<4;i++){
     for(int j=0;j<3;j++){
         
         cin>>arr[i][j];
     }
     
 }
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         
         cout<<arr[i][j]<<" ";
     }
     
    cout << endl;
 }
}






############################################################################
#include<iostream> 
using namespace std; 

bool isPresent(int arr[][3], int target, int row, int col) {

  for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            
            if( arr[row][col] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}

//to print row wise sum
void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}


//to print row wise sum
void printSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main() {

    //create 2 d array
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }


/*
//taking input -> col wise input
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }
*/

    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
/*
    cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }
    printColSum(arr, 3, 3 );
    */
   int ansIndex = largestRowSum(arr,3,3);
   cout << " Max row is at index " << ansIndex << endl;

    return 0;
}




Q. why we have to specify the column size while passing an 2d array?
A.When passing a two-dimensional array to a function, 
you must specify the number of columns as a constant when you write the parameter type
, so the compiler can pre-calculate the memory addresses of individual elements.

STRINGS IN C++ ARE 1 DIMENSIONAL CHARACTER ARRAYS.
Basic code for char :

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

    char arr[10];
    
    
cin>>arr;
cout<<"the output is :"<<arr[3]<<endl;
    return 0;
}
JAB AAP STRING KE ANDAR "SPACE" "TAB" "ENTER" DAAL DETE HO TOH COMPILER USKO NULL CHARACTER KI TARAH
READ KRTA HAI TOH WOH PRINTING MEIN USKE AAGE READ HI NHI KRTA.

String jab bhi store hoti hai toh usme jityte bhi chracter hote hai usme ek add kardo 
jaise agar miene "kartik" daala toh store woh hoga "kartik(10)" -->(10) impilies a null chracater 
kyuki agar nhi hoga aise toh string terminate nhi hogi.
20:00 lecture 22

Reversing a string involves same concept as reversing an array

#include <iostream>
class Solution{
public:
 void reverseString(vector<char>& s){
int st=0;
int e=s.size()-1;

while(st<e){
swap(s[st++],s[e--]);

}

}


};


INTRODUCTION TO STRINGS CODE:
#include<iostream> 
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

KAAFI ZAYDA ACCHA METHOD TO COVERT IN LOWER CASE YE HORA HAI KI E.G.: B EK CHAR HAI (B-A) KARDO
TOH AAYA 1 AB ye 1 add krde a mein toh aaya chota b : yr hora hai due to ascii values .


bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}

int main( ) {
/*
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';
    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;
    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;
    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;
    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;
    */

   string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}

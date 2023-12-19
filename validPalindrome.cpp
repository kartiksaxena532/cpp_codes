
CHECKING THE VALID PALINDROME
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
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
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};




REVERSING THE STRING 
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;

        while(st<e) {
            swap(s[st++], s[e--]);
        }
    }
};

REMOVE OCCURENCES IN ARRAY
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};




Cin stops apna excution jab bhi usko koi "enter" "space" "tab" ya newline charater ka input de 
idya jay.
toh agar mujhe chaiye "my name is khan" toh kaise lnege 
iske liye use krte hai hum cin.getline() function ka ek baar mien poori line utha leta hia ye.


H/W 
explore cin.getline and how to add custom delimeter.

///SOME INBUILT FUNCTIONS:

for length of a string 
we will use 
int len= strlen(name);

for comaparing 2 string we use:
strcmp(s2,s2);
!=0;
aur equal hone par 1 dega ye.

for copying the string 
we use strcpy(s1,s2);
s1 is the destination string;
s2 is the source string;


Q. REPLACING SPACES AND ADD @40 with it--->


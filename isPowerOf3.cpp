class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0){
            return false;
        }
           else if(n==1){
            return true;
        }
        return n%3==0 && isPowerOfThree(n/3);
    }
};

isme kya krre hai ki three ka modulo leke hum remainder 0 aur power of three mein three se divide karke daal rahe hai isse ye hora hai ki hum 
usss input number ka remainder aur divide hone pe baad quotent apnitarah se set krre hai

agar hota ki power of five nikaalo 

to hum krte 

if (n ==0){
return false;
}
if (n==1){
return true;
}

return n%5==0 && isPowerofFive(n/5);

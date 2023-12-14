ADDING 2 ARRAYS 
There can be 3 cases here jab:
first:
phela array dusre ki length se bada ho 
2nd:
doosra array phele se bada ho toh
3rd case:
dono same lenth ke hai par acrry ka kya karoge

toh itta pata hai ki hum additon end se krte hai toh loops bhi end se shru karnge
aur loop ke andar 
int i
int j
int carry ki 3 condition likh lenge 
jisme ki hoga sum/10 for carry and sum%10 for the remainder 
ab isme theeno ko i--;j--;carry--; kardo 
bas khtam.lekin abhi bhi ans wrong aayega kyuki add karne ke baad jab filling hogi array ki toh
woh automatically reverse ho jyega. toh bas ab ek reversing an array ki condition aur lagani hai
jo hoti hai swap function use krke.

CODE:

vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //print(ans);
    return reverse(ans);
}

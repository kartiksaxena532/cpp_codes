// subsequences of the string
void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
}

kya krre hai ek string lere hai hu "abc" i/p mein aur outpiut lere hai
" "
index =0 se start


ab kay krre hai 2 case bana rahe hai for subset ya sub sequnce
ki index wale ko include krna hai output mein ya exclude karna hai

harr baar jab index aage badega toh firse 2 case banao include aur exclude
ab inn sab answers ko store karlo "ans" mein using push back

aur mann vichalit hai ki bhai vector<string>kya hhai toh kuch nhi hai bas array maan lo string ka
aur vector<vector<string>> hai array of arrays 

aur hn "&" idko use karna mat bhulna kyuki iske bina ssara kaam ek copy mirn hoga 
string ki jabki humko original mein karn hai
refrencing karna bhutzaruri hai

isme 4 parameter honge solve ke
ek toh "ans" for storing the exclude include answers
ek toh str hai hi
ek output 
aur ek index
baaki code esy hai



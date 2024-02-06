class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            int ch=s[i]-'a';
            arr[ch]++;
        }
        for(int i=0;i<n;i++){
            int ch=s[i]-'a';
            if(arr[ch]==1)
            return i;
        }
        return -1;
    }
};

// range of for loop 
// from a to s auto will make a range of for loop
//using undordered map in of the range isme hum map mein string ko store karenge 
// fir ek doosra loop chalayenge jisme hum check karenge ki kis index pe string ki value 1 hai toh hum us index ko return karenge
//using undordered map in of the range isme hum map mein string ko store karenge

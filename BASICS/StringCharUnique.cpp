class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int> mp;

        for (auto a : s) mp[a]++;
        for (int i = 0; i < s.size(); i++)if(mp[s[i]] == 1)return i;

        return -1;
    }
}; 

// range of for loop 
// from a to s auto will make a range of for loop
//using undordered map in of the range isme hum map mein string ko store karenge 
// fir ek doosra loop chalayenge jisme hum check karenge ki kis index pe string ki value 1 hai toh hum us index ko return karenge
//using undordered map in of the range isme hum map mein string ko store karenge

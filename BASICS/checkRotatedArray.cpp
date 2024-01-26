CHECK IF ARAY IS SORTED AND ROTATED:

class Solution {
public:
    bool check(vector<int>& nums) {
    int count =0;
        int n = nums.size();
        for(int i=1; i<n ; i++){// 1 se shuru karo kyuki 0 pe negative chalega
            if (nums[i-1]>nums[i]){

count++;

            }
           
        }
 if (nums[n-1]>nums[0]){

                count++;
            }
            return count<=1;// PHELE galat aara tha jab count==1 kiya tha.
    }
};

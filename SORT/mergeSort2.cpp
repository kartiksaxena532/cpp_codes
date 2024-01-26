class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                swap(nums[i],nums[i+1]);
            }
            else{
                break;
            }

        }
    }
};


YE KYU NHI HOGA???
kyuki i aur j dono swap kiye jaare hai 
aur do zero reh jaate hai toh ek choot jaata hai
jabki dono aage jaane chaiye.

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int max_length = 1;
        
        int n=nums.size();
        
        vector<int> inc(n,1), dec(n,1);
            
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                inc[i] = dec[i-1]+1;
            }else if(nums[i]==nums[i-1]-1){
                dec[i] = (inc[i-1] > 1 ? inc[i-1]+1:1); // since sequence should start with s1=s0+1
            }
            
            max_length = max(max_length, max(inc[i],dec[i]));
        }
        
        return (max_length > 1 ? max_length:-1);
    }
};

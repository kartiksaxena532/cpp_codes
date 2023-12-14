Rotating an array mein concept lgta hai
ki humne pada tha ki agar kisi number n se kisi bhi nhmber ko mod kar dete hai toh
remainder ki value [0.....(n-1)] tak aati hai bhau

to rotating miein formula dekha ki 
arr[(i+k)%n]=arr[i};

isme array ki length khatam hori hai toh k ki value utna se hi aage aati hai value
e.g.: rotate array [2,5,6,7,8] when k=2
roatted array is [7,8,2,5,6]


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size();i++){

            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
};

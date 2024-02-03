class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long element = 1;
        vector<int> ans;
        ans.push_back(1);
        for(int col=0;col<rowIndex;col++) {
            element = element * (rowIndex - col);
            element = element / (col + 1);
            ans.push_back(element);
        }
        return ans;
    }
};

// isme lagao nCr ka formula jisme row ko select karna hai with column index
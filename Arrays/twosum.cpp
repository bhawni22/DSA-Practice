//TWO SUM PROBLEM
// TC=O(n)
// SC=O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int second=target-nums[i];
            if(m.find(second)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[nums[i]]=i;
        } return ans;


        
    }
};
#MAXIMUM SUBARRAY SUM


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int n=nums.size();
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            currSum+=nums[i];
            maxSum=max(maxSum,currSum);
            if(currSum<0){
                currSum=0;
                continue;
            }
        }return maxSum;

    }
};
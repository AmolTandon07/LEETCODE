class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i,j,freq,val;
        vector<int>ans;
        for(i=0;i<=nums.size()-2;i=i+2)
        {
            freq=nums[i];
            val=nums[i+1];
            for(j=1;j<=freq;j++)
            {
                ans.push_back(val);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,count=0;
        for(i=0;i<nums.size();i++)
        {
            int element=nums[i];
            if((element>=10 && element<=99)
            || (element>=1000 && element<=9999)||(element==100000))
            {
                count++;
            }
        }
        return count ;
    }
};

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int strlength=boxes.length();
        int i,j,sumOfSteps=0;
        vector<int>ans;
        char ch;
        for(i=0;i<strlength;i++)
        {
            sumOfSteps=0;
            for(j=0;j<strlength;j++)
            {
                ch=boxes[j];
                if(ch=='1')
                sumOfSteps=sumOfSteps+ abs(j-i);
            }
            ans.push_back(sumOfSteps);
        }
        return ans;
    }
};

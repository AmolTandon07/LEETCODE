class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i,j,col,count=0;
        if(ruleKey=="type")
        col=0;
        if(ruleKey=="color")
        col=1;
        if(ruleKey=="name")
        col=2;
        for(i=0;i<items.size();i++)
        {
            for(j=col;j<=col;j++)
            {
                if(items[i][j]==ruleValue)
                count++;
            }
        }
        return count;
    }
};

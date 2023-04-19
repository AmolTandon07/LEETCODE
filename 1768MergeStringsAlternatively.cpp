class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i,j;
        i=0;
        int l1,l2;
        l1=word1.length();
        l2=word2.length();
        string ans;
        while(i<l1 && i<l2)
        {
            ans=ans+word1[i];
            ans=ans+word2[i];
            i++;
        }
        for(j=i;j<l1;j++)
        {
            ans=ans+word1[j];
        }

        for(j=i;j<l2;j++)
        {
            ans=ans+word2[j];
        }
        return ans;
    }
};

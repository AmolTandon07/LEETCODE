class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int i,maxi=INT_MIN;
        for(i=0;i<strs.size();i++)
        {
           string s;
           s=strs[i];
           int j,a=0,d=0;
           for(j=0;j<s.length();j++)
           {
               if(isalpha(s[j]))
               {
                   a++;
                   break;
               }
           } 
           if(a>0)
           {
               int si=s.size();
           maxi=max(si,maxi);
           }
           else
           maxi=max(stoi(s),maxi);
        }
        return maxi;
    }
};

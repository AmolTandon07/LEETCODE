class Solution {
public:
    string reverseWords(string s) {
        s=s+" ";
        int start=0,end=s.length();
        char ch;
        string word,ans;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            word=s[i]+word;
            else
            {
                if(i!=s.length()-1)
                ans=ans+word+" ";
                else
                ans=ans+word;
                word="";
            }
        }
        return ans;
    }
};

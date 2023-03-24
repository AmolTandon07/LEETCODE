class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        sentence=" "+sentence;
        int sentlength=sentence.length();
        int wordlength=searchWord.length();

        int i,index=1,pos,ans=-1,count=0;
        for(i=0;i<sentlength;i++)
        {
            char ch;
            ch=sentence[i];
            if(ch==' ')
            {
                count++;
                
                    if(sentence.substr(i+1,wordlength)==searchWord)
                    {
                        ans=count;
                        break;
                    }
                
            }
        }
        return ans;
    }
};

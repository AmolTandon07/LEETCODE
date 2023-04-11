class Solution {
public:
    string removeStars(string s) {
       int i;
       stack<char>stk;

       for(i=0;i<s.length();i++)
       {
           if(s[i]!='*')
           {
               stk.push(s[i]);
           }
           else
           {
               stk.pop();
           }
       } 
        string ans;
       while(!stk.empty())
       {
           ans=ans+stk.top();
           stk.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};



class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;

        for(int i=0;i<s.size();i++){
            char cur = s[i];
            if(cur == '*'){
                stk.pop();
            }else{
                stk.push(cur);
            }
        }
        string ans = "";
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

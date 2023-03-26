class Solution {
public:
    bool isAnagram(string s, string t) {
        int lengths=s.length();
        int lengtht=t.length();
        int i=0;
        char t_letter;
        if(lengths!=lengtht)
        return false;
        while(i<lengths)
        {
          t_letter=t[i];
          int pos=s.find(t_letter);
          if(s.find(t_letter)!= string::npos)
          {
             s[pos]='\0';
             i++;
          }
          else
          return false;
        }
        return true;
        
        
    }
};

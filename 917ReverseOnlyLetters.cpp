class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i;
        int length=s.length();
        int start=0;
        int end= length-1;
        while(start<=end)
        {
          char ch1=s[start];
          char ch2=s[end];
          if(isalpha(ch1) && isalpha(ch2))
          {
              swap(s[start], s[end]);
              start++;
              end--;
          }
          else if(!(isalpha(ch2)))
          {
             end--; 
          }
          else  if(!(isalpha(ch1)))
          {
              start++;
          }
        }
        return s;
    }
};

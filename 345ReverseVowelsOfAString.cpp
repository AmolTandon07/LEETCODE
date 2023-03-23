class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<=end)
        {
          char ch1=s[start];
          char ch2=s[end];
          if((ch1=='a'|| ch1=='e'|| ch1=='o'|| ch1=='u' || ch1== 'i' || ch1=='A'|| ch1=='E'|| ch1=='O'|| ch1=='U' || ch1== 'I')  && (ch2=='a'|| ch2=='e'|| ch2=='o'|| ch2=='u' || ch2== 'i' || ch2=='A'|| ch2=='E'|| ch2=='O'|| ch2=='U' || ch2== 'I' ))
          {
              swap(s[start], s[end]);
              start++;
              end--;
          }
          else if((ch1=='a'|| ch1=='e'|| ch1=='o'|| ch1=='u' || ch1== 'i' || ch1=='A'|| ch1=='E'|| ch1=='O'|| ch1=='U' || ch1== 'I') && (ch2!='a'&& ch2!='e'&& ch2!='o'&& ch2!='u' && ch2!= 'i' && ch2!='A'&& ch2!='E'&& ch2!='O'&& ch2!='U' && ch2!= 'I') )
          {
              end--;
          }
          else if((ch1!='a'&& ch1!='e'&& ch1!='o'&& ch1!='u' && ch1!= 'i' && ch1!='A'&& ch1!='E'&& ch1!='O'&& ch1!='U' && ch1!= 'I' ) && (ch2=='a'|| ch2=='e'|| ch2=='o'||ch2=='u' || ch2== 'i' || ch2=='A'|| ch2=='E'|| ch2=='O'|| ch2=='U' || ch2== 'I') )
          {
              start++;
          }
          else
          {
              start++;
              end--;
          }
        }
        return s;
    }
};

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int i,x,j,sum=0,lines=1;
        char ch;
        vector<int>pixel;
        vector<int>ans;
        for(i=0;i<s.length();i++)
        {
           ch=s[i];
           x=ch-97;
           if(sum+widths[x]>100)
           {
           lines++;
           pixel.push_back(sum);
           sum=0;
           sum=sum+widths[x];
           }
           else
           sum=sum+widths[x];
        }
    pixel.push_back(sum);
   ans.push_back(lines);
   ans.push_back(pixel[pixel.size()-1]);
   cout<<pixel[pixel.size()-1]<<endl;
   return ans;
    }
};

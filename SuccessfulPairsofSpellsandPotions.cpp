class Solution {
public:
int solve(vector<int>& potions,int spell , long long target)
{
   int s,e,mid;
   int index=-1;
   s=0;
   e=potions.size()-1;
   mid=s+(e-s)/2;
   while(s<=e)
   {
       if((long long)potions[mid]*spell>=target)
       {
           index=mid;
           e=mid-1;
       }
       else
       {
           s=mid+1;
       }
       mid=s+(e-s)/2;
   }
   if(index==-1)
   return 0;
   int totalelements;
   totalelements=potions.size()-index;
   return totalelements;
}
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int i;
        vector<int>successpair;
        sort(potions.begin(), potions.end());
        for(i=0;i<spells.size();i++)
        {
           int ans = solve(potions,spells[i],success);
           successpair.push_back(ans);
        }
        return successpair;
    }
};


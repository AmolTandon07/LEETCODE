class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>xcordinates;
        int i;
        for(i=0;i<points.size();i++)
        {
            xcordinates.push_back(points[i][0]);
        }
        sort(xcordinates.begin(),xcordinates.end());
        int maximum=0;
        for(i=0;i<xcordinates.size()-1;i++)
        {
            maximum=max(maximum, (xcordinates[i+1]-xcordinates[i]));
        }
        return maximum;
    }
};

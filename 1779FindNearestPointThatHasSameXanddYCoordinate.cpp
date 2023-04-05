class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> valid;
        vector<int>temp;
        int i,j;
        for(i=0;i<points.size();i++)
        {
            if(points[i][0]==x)
            {
            temp.push_back(points[i][0]);
            temp.push_back(points[i][1]);
            valid.push_back(temp);
            temp.pop_back();
            temp.pop_back();
            }
             if(points[i][1]==y)
            {
            temp.push_back(points[i][0]);
            temp.push_back(points[i][1]);
            valid.push_back(temp);
            temp.pop_back();
            temp.pop_back();
            }
        }
        int distance=0,xc,yc;
        int mini=INT_MAX;
        int ansx=INT_MAX,ansy=INT_MAX;
        for(i=0;i<valid.size();i++)
        {
           xc=valid[i][0];
           yc=valid[i][1];
           distance=abs(xc-x)+abs(yc-y);
           
           if(distance<mini)
           {
               mini=distance;
                   ansx=xc;
                   ansy=yc;
           }
        }
        int finalans;
        for(i=0;i<points.size();i++)
        {
            int xcordinate,ycordinate;
            xcordinate=points[i][0];
            ycordinate=points[i][1];
            if(xcordinate==ansx && ycordinate==ansy)
            {
            finalans=i;
            break;
            }
        }
        // int finalans=min(ansx,ansy);
        if(ansx==INT_MAX && ansy==INT_MAX)
        return -1;
        return finalans;
    }
};

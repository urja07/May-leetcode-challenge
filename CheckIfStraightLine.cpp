class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n= coordinates.size();
        int x = coordinates[1][0]-coordinates[0][0];
        int y = coordinates[1][1]-coordinates[0][1];
        int currx,curry;
        for(int i=2;i<n;i++)
        {
            currx=coordinates[i][0]-coordinates[i-1][0];
            curry=coordinates[i][1]-coordinates[i-1][1];
            if(y*currx!=x*curry)
                return false;
        }
        return true;
    }
};

// The API isBadVersion is defined for you
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid=0;
        int i=0,j=n;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(isBadVersion(mid))
                j=mid-1;
            else
                i=mid+1;
        }
        if(isBadVersion(mid))
            return mid;
        else
            return mid+1; 
    }
};

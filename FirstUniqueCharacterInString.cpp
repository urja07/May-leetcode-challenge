class Solution {
public:
    int firstUniqChar(string s) {
        int a[27]={0};
        int i;
        int k=0;
        int n=s.length();
        for(i=0;i<n;i++)
        {
            a[s[i]-96]++;
        }
        for(i=0;i<n;i++)
        {
            if(a[s[i]-96]==1)
            {
                k=i;
                break;
            }
        }
        if(i==n)
            return -1;
        return k;
    }
};

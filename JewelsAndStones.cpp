class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int a[125]={0};
        int i,j,count=0;
        int m,n;
        n=J.length();
        m=S.length();
        for(i=0;i<n;i++)
        {
            a[J[i]]++;
        }
        for(i=0;i<125;i++)
            cout<<a[i];
        for(i=0;i<m;i++)
        {
            if(a[S[i]]>=1)
                count++;
        }
        return count;
    }
};

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int a[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            a[i][0]=i;
        }
        for(int i=0;i<=n;i++)
        {
            a[0][i]=i;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(word1[i-1]==word2[j-1])
                    a[i][j]=a[i-1][j-1];
                else
                    a[i][j]=1+min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]));
            }
        }
        return a[m][n];
    }
};

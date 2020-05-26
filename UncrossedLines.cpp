class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int m=A.size();
        int n=B.size();
        int a[m+1][n+1];
        for(int i=0;i<m+1;i++){
            a[i][0]=0;
        }
        for(int i=0;i<n+1;i++){
            a[0][i]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(A[i-1]==B[j-1])
                   a[i][j]=1+a[i-1][j-1];
                else
                   a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        return a[m][n];
    }
};

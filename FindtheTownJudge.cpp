class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int> score(N+1,0);
        int n= trust.size(),i;
        for(int i=0;i<n;i++)
        {
            int a, b;
            a = trust[i][0];
            b = trust[i][1];
            score[a]--;
            score[b]++;
        }
        for(i=1;i<=N;i++)
        {
            if(score[i]==N-1)
                return i;
        }
        return -1;
    }
};

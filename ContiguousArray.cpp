class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        if(n<=1)
            return 0;
        unordered_map<int,int> m;
        m[0]=-1;
        int count = nums[0]==1 ? 1: -1;
        m[count]=0;
        
        for(int i=1;i<n;i++){
            count = nums[i]==0 ? count-1: count+1;
            
            if(m.find(count)!=m.end())
                maxlen = max(maxlen, i-m[count]);
            else 
                m[count]=i;
        }
        return maxlen;
    }
};

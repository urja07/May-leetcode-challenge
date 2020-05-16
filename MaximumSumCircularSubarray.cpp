class Solution {
public:
    int kadane(vector<int>& A,int n) {
        int cur,glo;
        cur=glo=A[0];
        for(int i=1;i<n;i++){
            cur=A[i]>(A[i]+cur)?A[i]:(A[i]+cur);
            if(cur>glo){
                glo=cur;
            }
        }
        return glo;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int n= A.size();
        int count=0,i;
        int case1= kadane(A,n);
        for(i=0;i<n;i++){
            if(A[i]<0)
                count++;
        }
        int case2=0;
        int sum=0;
        for(i=0;i<n;i++){
            sum=sum+A[i];
            A[i]=-A[i];
        }
        case2=sum+kadane(A,n);
        if(count==n)
            return case1>case2?case2:case1;
        return case1>case2?case1:case2;
        
    }
};

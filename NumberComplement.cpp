class Solution {
public:
    int findComplement(int num) {
        int rem=0;
        vector <int> a;
        if(num==1)
            return 0;
        if(num==0)
            return 1;
        while(num!=0)
        {
            rem=num%2;
            a.push_back(rem);
            num=num/2;
        }
        a.push_back(1);
        int res=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==1)
                a[i]=0;
            else
                a[i]=1;
        }
        for(int i=0;i<a.size();i++)
        {
            res=res+a[i]*pow(2,i);
        }
        return res;
    }
};

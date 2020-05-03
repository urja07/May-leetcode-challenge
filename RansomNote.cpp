class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m = ransomNote.size();
        int n = magazine.size();
        int a[27]={0};
        int b[27]={0};
        int i;
        if(m>n)
            return false;
        
        if(m==0)
            return true;
        
        for(int i=0;i<m;i++)
        {
            a[ransomNote[i]-96]++;
        }
        for(int i=0;i<n;i++)
        {
            b[magazine[i]-96]++;
        }
        for(i=0;i<m;i++)
        {
            if(b[ransomNote[i]-96]<a[ransomNote[i]-96])
                break;
        }
        if(i==m)
            return true;
        else
            return false;
            
    }
};

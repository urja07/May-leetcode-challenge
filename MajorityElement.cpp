class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     int i,count=0,k;
        for(i=0;i<n;i++)
        {
            if(count==0)
            {
                k=nums[i];
                count++;
            }
            else 
            {
                if(nums[i]==k)
                   count++;
                else
                    count--;
            }
        }
        count=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==k)
                count++;
        }
        if(count>n/2)
            return k;
        return 0;
    }
};

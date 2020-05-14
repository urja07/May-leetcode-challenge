public:
    string removeKdigits(string num, int k) {
        
        int i=0;
        int n=num.length();
        while( i<n-1 && k>0)
        {
            if(num[i]<=num[i+1])
                i++;
            else {
                num.erase(num.begin()+i);
                k--;
                if(i>0)
                    i--;
            }
        }
        
        if(k!=0)
        {
            int p=n-k;
            num.erase(num.begin()+p,num.end());
        }
        if(num.compare(0,1,"0")==0)
        {
            while(num.length() > 0 && (num.compare(0, 1, "0") == 0)) 
            {   
                num.erase(num.begin()+0);
            }
        }
        if(num=="")
            return "0";
        return num;
    }
};

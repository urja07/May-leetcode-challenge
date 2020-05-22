class Solution {   
public:
    string frequencySort(string s) {
        int a[256]={0};                
        int ar[256];                    
        for(int i=0;i<256;i++){
            ar[i]=i; 
        }
        for(char i:s) {
            a[i]++;
        }
        sort(begin(ar), end(ar), [&](const int b, const int c) { return a[b]>a[c]; }); 
        string res="";
        for(int i:ar) {
            res += string(a[i], i);
        }
        return res;
    }
};

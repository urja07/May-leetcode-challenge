class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<=num;i++){
            if(i%2==0){
                int k=i/2;
                v.push_back(v[k]);
            }
            else {
                v.push_back(1+v[i-1]);
            }
        }
        return v;
    }
};

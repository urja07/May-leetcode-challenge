bool sortbyval(const vector<float>& v1, 
               const vector<float>& v2 ){
        return (v1[1] < v2[1]);
    }
class Solution {
    float sqrt1(int a,int b){
        float res;
        res= sqrt(pow((a-0),2)+pow((b-0),2));
        return res;
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n=points.size();
        vector<vector<float>> v;
        vector<vector<int>> v1;
        for(int i=0;i<n;i++){
            vector<float> p;
            p.push_back(i);
            p.push_back(sqrt1(points[i][0],points[i][1]));
            v.push_back(p);
        }
        sort(v.begin(),v.end(),sortbyval);
        
        for(int i=0;i<K;i++){
            vector<int> x;
            x.push_back(points[v[i][0]][0]);
            x.push_back(points[v[i][0]][1]);
            v1.push_back(x);
        }
        return v1;
    }
};

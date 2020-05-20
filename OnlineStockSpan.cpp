class StockSpanner {
    vector<int> prices;
    vector<int> span;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int n=prices.size()-1;
        while(n>=0 && prices[n]<=price){
            int span=spans[n];
            n=n-span;
        }
        prices.push_back(price);
        int span= prices.size()-1-n;
        spans.push_back(span);
        return span;
    }
};


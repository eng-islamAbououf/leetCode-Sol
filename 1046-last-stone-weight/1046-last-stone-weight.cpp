class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq ;
        int n = (int) stones.size() ;
        for (int i = 0; i < n; ++i) {
            pq.push(stones[i]) ;
        }

        while (pq.size()>2){
            int x = pq.top() ;
            pq.pop() ;
            int y = pq.top() ;
            pq.pop() ;
            if(x!=y)
                pq.push(x-y) ;
        }
        if(pq.size()==2){
            int x = pq.top() ;
            pq.pop() ;
            int y = pq.top() ;
            pq.pop() ;
            return x-y ;
        }else {
            return pq.top() ;
        }
    }
};
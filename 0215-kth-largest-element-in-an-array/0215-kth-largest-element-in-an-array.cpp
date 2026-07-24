class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i:nums){
            pq.push(i);
        }
        for(int i=1;i<=k-1;i++){
            pq.pop();
        }
        return pq.top();
        // priority_queue<int, vector<int>, greater<int>> pq;
        // for(int x:nums){
        //     pq.push(x);
        
        // if(pq.size()>k){
        //     pq.pop();
            
        // }}
        // return pq.top();
    }
};
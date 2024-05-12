#include <bits/stdc++.h> 
// Ref: https://www.naukri.com/code360/problems/min-heap_4691801

class MinHeap{
public:
    vector<int> arr;
    MinHeap(){
        /*
            child at 2i+1, 2i+2
            parent at (i-1)/2;
            0 1 2 3 4 5 6 7 8
        */
    }

    void push(int k){
        arr.push_back(k);
        // bubble up
        int idx = arr.size() - 1;
        while(idx > 0){
            int parIdx = (idx-1)/2;
            if(arr[parIdx] > arr[idx]) swap(arr[parIdx], arr[idx]);
            idx = parIdx;
        }
    }

    int top(){
        if(arr.empty()) return -1;
        return arr[0];
    }

    void pop(){
        if(arr.empty()) return;
        swap(arr.front(), arr.back());
        arr.pop_back();
        // bubble down top with highest priority child
        int Idx = 0;
        while(Idx < arr.size()){
            int childIdx0 = 2*Idx+1, childIdx1 = 2*Idx+2;
            int minIdx = Idx;
            if(childIdx0 < arr.size() and arr[minIdx] > arr[childIdx0]){
                minIdx = childIdx0;
            }
            if(childIdx1 < arr.size()  and arr[minIdx] > arr[childIdx1]){
                minIdx = childIdx1;
            }
            if(minIdx != Idx){
                swap(arr[Idx], arr[minIdx]);
                Idx = minIdx;
            } 
            else break;
        }
    }


};
vector<int> minHeap(int n, vector<vector<int>>& queries) {
    /*
    To implement minHeap
    if Query is 0 X -> add X in heap
    1 -> print top and pop it
    */
    // priority_queue<int, vector<int>, greater<int>> h;
    MinHeap h;
    vector<int> res;

    for(auto& q : queries){
        if(q[0] == 0){
            h.push(q[1]);
        }else{  
            res.push_back(h.top());
            h.pop();
        }
    }
    return res;
}

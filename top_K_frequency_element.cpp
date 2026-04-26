#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:freq){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};  

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    Solution ob;
    vector<int> ans = ob.topKFrequent(nums,k);
    cout<<"The top "<<k<<" frequent elements are: ";
    for(int num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
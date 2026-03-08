#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int largestSumWith0Sum(vector<int> arr){
    unordered_map<int, int> m;
    int sum = 0;
    int ans = 0;

    for(int j = 0; j < arr.size(); j++){
        sum += arr[j];

        if(m.count(sum)){
            int currlen = j-m[sum];
            ans = max(ans, currlen);
        } else {
            m[sum] = j;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
    cout << "largest subarray with sum 0 : " << largestSumWith0Sum(arr) << endl;

    return 0;
}
// subarray with zero sum exist or not

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){

    vector<int> arr = {1, 2, -3, 4, 5};
    int prefixSum = 0;
    bool zeroSumSubarrayExists = false;
    unordered_set<int> prefixSums;

    for(int i = 0; i < arr.size(); i++){
        prefixSum += arr[i];
        if(prefixSum == 0 || prefixSums.find(prefixSum) != prefixSums.end()){
            zeroSumSubarrayExists = true;
            break;
        }
        prefixSums.insert(prefixSum);
    }

    if(zeroSumSubarrayExists){
        cout << "Zero sum subarray exists." << endl;
    }
    else{
        cout << "No zero sum subarray exists." << endl;
    }


    return 0;
}
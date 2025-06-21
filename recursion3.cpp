#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> &arr, vector<int> &ans, int i){
if(i == arr.size()){
        for(int j = 0; j < ans.size(); j++){
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }

    // Include the current element
    ans.push_back(arr[i]);
    printSubset(arr, ans, i + 1);
    ans.pop_back(); // backtrack

    
    // Exclude the current element
    printSubset(arr, ans, i + 1);

}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets

    printSubset(arr, ans, 0);

    return 0;
}
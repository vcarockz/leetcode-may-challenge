/* Majority Element - LC 167*/
#include<bits/stdc++.h>
using namespace std;

/* Increment the count of each element in a Hash Map*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> count;
        int n = nums.size();
        for(int num: nums){
            count[num]++;
            if(count[num] > n/2) return num;
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums) << endl; 
}
/* First Bad Version - LC 278*/
#include<bits/stdc++.h>
using namespace std;

// A test API equivalent 
int def_version;
bool isBadVersion(int n){
    return (n >= def_version ? true : false);
}

//Binary Search 
class Solution{
public:
    int firstBadVersion(int n){
        int start = 1, end = n;
        while(start < end){
            int mid = start + (end - start)/2;
            if(!isBadVersion(mid)) start = mid+1;
            else end = mid;
        }
        return start;
    }
};

int main(){
    Solution sol;
    int n = 2;
    def_version = 2;
    cout << sol.firstBadVersion(n) << endl; 
}
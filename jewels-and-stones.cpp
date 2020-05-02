/* Jewels and Stones - LC 771*/
#include<bits/stdc++.h>
using namespace std;

//Hash Set Search
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> mp;
        for(int i=0; i<J.size(); i++) mp.insert(J[i]);
        int ans = 0;
        for(int i=0; i<S.size(); i++) if(mp.find(S[i]) != mp.end()) ans++;
        return ans;
    }
};

int main(){
    Solution sol;
    string J = "aA";
    string S = "aAAbbbb"; 
    cout << sol.numJewelsInStones(J,S) << endl; 
}
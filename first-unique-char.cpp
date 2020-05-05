/* Number Compliment - LC 387*/
#include<bits/stdc++.h>
using namespace std;

/* If curr letter is found in HashSet, set index to -1
   Iterate thru all letters and find min index */

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        memset(arr,-1,sizeof(arr[0])*26);
        unordered_set<char> st;
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i]) == st.end()) arr[s[i]-'a'] = i;
            else arr[s[i]-'a'] = -1;
            st.insert(s[i]);
        }
        int ans = INT_MAX;
        for(int i=0; i<26; i++){
            if(arr[i] != -1) ans = min(ans, arr[i]);
        }
        return (ans == INT_MAX ? -1:ans);
    }
};

int main(){
    Solution sol;
    string str = "loveleetcode";
    cout << sol.firstUniqChar(str) << endl; 
}
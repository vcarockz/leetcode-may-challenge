/* Ransom Note - LC 383*/
#include<bits/stdc++.h>
using namespace std;

/* Add all magazine chars to Hash Table
   If any char in ransomNote is not present or exceeds the limit return false */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char x: magazine){
            if(mp.find(x) == mp.end()) mp[x] = 1;
            else mp[x]++;
        }
        for(char x: ransomNote){
            if(mp.find(x) == mp.end()) return false;
            else mp[x]--;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second < 0) return false;
        }
        return true;
    }
};

int main(){
    Solution sol;
    string ransomNote = "aA";
    string magazine = "ab"; 
    cout << sol.canConstruct(ransomNote,magazine) << endl; 
}
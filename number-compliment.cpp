/* Number Compliment - LC 476*/
#include<bits/stdc++.h>
using namespace std;

/* Right shift num while its non zero and
   Find the last digit of the num, append its compliment to the ans */
class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int i=0;
        while(num){
            int lastdigit =  num & 1;
            ans |= (1-lastdigit) << i;
            num = num >> 1;
            i++;
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int num = 5;
    cout << sol.findComplement(num) << endl; 
}
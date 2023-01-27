#include<iostream>
#include<vector>
#include<string>
using namespace std;

// leetcode 3 lengthOfLongestSubstring
class Solution3 {
public:
    string s;

    int lengthOfLongestSubstring() {
        vector<int> pos(128, -1);
        int ans = 0; 
        for (int i=0, j=0; i < s.length(); i++){    // i,j -> right,left bound
            j = max(j, pos[s[i]] + 1);  // s[i] --> ASCII（0->127） code to record the letter position in the given s.
            ans = max(ans, i - j + 1);  
            pos[s[i]] = i;
        }
        return ans;
    }

    int example(){
        s = "pwwkew";
        int ans = lengthOfLongestSubstring();
        cout << ans << endl;
    }

};

int main(){
    Solution3 solution;
    solution.example();
}
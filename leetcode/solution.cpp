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
        for (int i=0, j=0; i < s.length(); i++){
            j = max(j, pos[s[i]] + 1);  // s[i]
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
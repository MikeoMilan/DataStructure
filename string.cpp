#include<iostream>
#include<string>
using namespace std;

int main(){
    // string s;
    // getline(cin, s);
    // cout << s;

    // int len = s.length();
    // for (int i=0; i<len; i++){
    //     cout << s[i] << " ";
    // }

    //拷贝 
    string s1="hello", s2="world";
    cout << s1 <<  " " << s2 << endl;
    s1 = s2;
    cout << s1 <<  " " << s2 << endl;

    //拼接
    s1="hello", s2="world";
    s1.append(" ") += s2;
    cout << s1 << endl;

    //比较 
    s1="A", s2="B";
    string ans;
    if (s1.compare(s2) == 0){
        ans = "yes";
    }
    else {ans = "no";}
    cout << ans << endl;
    // 查找
    s1 = "to be or not to be";
    s2 = "to";
    int pos=0, n_overlap=0, n_len=s2.length();
    
    // for loop 实现
    for (int i=0; i < s1.length()-n_len; i++){
        if (s1.substr(i, n_len) == s2){
            n_overlap += 1;
        }
    }
    cout << n_overlap << endl;

    // while loop 实现
    while (pos < s1.length()){
        if (s1.substr(pos, n_len) == s2){
            n_overlap += 1;
            pos += n_len;
        }
        else{
            pos += 1;
        }
    }
    cout << n_overlap << endl;
}
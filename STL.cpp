// vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool FindPrime(int& num)
{
    for (int i=2; i<num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int in_len, num;
int main(){
    cout << "输入待检测数组的长度: " << endl;
    cin >> in_len;

    vector<int> in_vec(in_len),ans;
    cout << "输入待检测的数字: " << endl;
    for (int i=0; i<in_len; i++){
        cin >> num;
        in_vec[i] =num;

        if (FindPrime(in_vec[i]) && (in_vec[i]!=1)){
            ans.push_back(in_vec[i]);
        }
    }

    cout << "检测为质数的数字有: " << endl;
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    cout << "需要第几小的质数: " << endl;
    int k;
    cin >> k;
    sort(ans.begin(), ans.end());

    cout << "最后结果为: " << endl;
    cout << ans[k-1] << endl;
}
// 8 6 4 3 2 7 9 1 5 
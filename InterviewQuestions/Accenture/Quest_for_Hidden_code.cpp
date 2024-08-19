#include <iostream>
#include <string>
using namespace std;

string subStr(string s1, string s2, int N, int M)
{
    int dp[N + 1][M + 1];
    int mx = 0;
    int end = 0;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
                if(dp[i][j] > mx){
                    mx = dp[i][j];
                    end = i;
                }
            }
            else{
                dp[i][j] = 0;
            }
            
        }
    }
    if (mx == 0)
    {
        return "";
    }
    return s1.substr(end - mx, mx);
    
}
int main()
{
    string s1 = "abcdxyz";
    string s2 = "xyzabcd";
    int N = s1.length();
    int M = s2.length();
    string ans = subStr(s1, s2, N, M);
    cout << ans << endl;
    return 0;
}

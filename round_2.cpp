#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;
    while (low < high)  {
        if (str[low] != str[high])
        return false;
        low++;high--;
        }
    return true;
}

string solve(string str) {
    string solution;
    for(int i=0;i<=str.length();i++){
        if(isPalindrome(str.substr(0,i))) solution+=str.substr(0,i);
    }
    return solution;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string sol = solve("acaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacaporyiueoooeuiyropacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacaplwerintawerq");
    for (int i = 0; i < sol.size(); i++)
    {
        if(i>=47 && i%47==0)
        cout<<sol[i];
    }
}

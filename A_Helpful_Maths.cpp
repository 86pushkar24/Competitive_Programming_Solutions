// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+') continue;
		v.push_back(s[i]-'0');
	}
	sort(v.begin(),v.end());
	string t="";
	for(int i=0;i<v.size();i++){
		t=t+(char)(v[i]+'0')+ "+";
	}
	t.pop_back();
 
cout<<t<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}

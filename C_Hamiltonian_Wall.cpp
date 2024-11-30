// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    bool judge1 = true;
    bool judge2 = true;
    int cnt1 = 0;
    for(int i=0;i<n;i++)
    {
    	if(str1[i]=='B'&&str2[i]=='B'&&judge1==true)
    	{
    		continue;
    	}
    	else if(judge1==true&&(str1[i]=='B'||str2[i]=='B'))
    	{
    		judge1 = false;
    		if(str1[i]=='B')
    		{
    			cnt1 = 0;
    		}
    		else
    		{
    			cnt1 = 1;
    		}
    	}
    	else if(str1[i]=='B'&&str2[i]=='B')
    	{
    		cnt1 = cnt1^1;
    	}
    	else if(str1[i]=='B'||str2[i]=='B')
    	{
    		if(str1[i]=='B'&&cnt1==1||str2[i]=='B'&&cnt1==0)
    		{
    			judge2 = false;
    			break;
    		}
    	}
    	else
    	{
    		judge2 = false;
    		break;
    	}
    }
    if(judge2)
    {
    	cout<<"YES\n";
    }
    else
    {
    	cout<<"NO\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}


#include<bits/stdc++.h>
using namespace std;
bool isprct(long long x){
	long long s=sqrt(x);
	if(s*s==x)
		return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+2];
		long long ans=0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			if(isprct(a[i]))ans++;
		}
        if(n==1){
			cout<<"1\n";
			continue;
		}
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				long long dif=a[j]-a[i];
				for(long long k=1;k*k<=dif;k++){
					if(dif%k==0){
						long long mn=k,mx=dif/k;
						if((mn+mx)%2)continue;
						long long x=(mn+mx)/2;
						x*=x;
						x-=a[j];
						if(x<0)continue;
						long long cnt=0;
						for(long long id=0;id<n;id++)if(isprct(a[id]+x))cnt++;
						ans=max(ans,cnt);
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
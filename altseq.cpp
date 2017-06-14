#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[t],dp[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
		dp[i]=1;
	}
	int maxim=dp[0];
	for(int i=1;i<t;i++){
		for(int j=0;j<i;j++){
			if( (abs(arr[j]) < abs(arr[i])) && ((arr[i]<0 && arr[j]>0) || (arr[i]>0 && arr[j]<0))){
				dp[i]=max(dp[i],1+dp[j]);
			}
		}
		maxim=max(maxim,dp[i]);
	}
	cout<<maxim<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	string s;
	while(1){
		cin>>n>>k>>s;
		sort(s.begin(),s.end());
		int count=1,i=1,height=s[0]-96,sum=height;
		while(count!=k&&i!=n){
			if(s[i]>=height+98){
				count++;
				sum=sum+s[i]-96;
				height=s[i]-96;
			}
			i++;
		}
		if(count<k)printf("-1");
		else printf("%d",sum);
	}
	return 0;
}
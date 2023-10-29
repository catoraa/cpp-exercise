#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	string s;
	while(cin>>n>>k>>s){
        int a[n];
		sort(s.begin(),s.end());
        for (int i = 0; i < n; i++)a[i]=s[i]-'a'+1;
        int i=1,height=a[0],sum=height;
        for (int i = 1; i < n; i++){
            if(k&&a[i]>=height+2){
				k--;
				sum=sum+a[i];
				height=s[i];
			}
        }
		if(k)printf("-1");
		else printf("%d\n",sum);
	}
	return 0;
}
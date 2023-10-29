#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	string s;
	while(cin>>n>>k>>s){
        int a[n];
		sort(s.begin(),s.end());
        for (int i = 0; i < n; i++)a[i]=s[i]-'a'+1;//先统一转，后面不用转
        int height=a[0],sum=height;//首球必选
        k--;
        for (int i = 1; i < n; i++){
            if(k&&a[i]>=height+2){
				k--;//k可以被修改，不需要另建一个值统计
				sum=sum+a[i];
				height=a[i];
			}
        }
		if(k)printf("-1\n");
		else printf("%d\n",sum);
	}
	return 0;
}
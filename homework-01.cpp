#include<stdio.h>
#include<math.h>
#define MaxN 1000000
inline int Max(long long x,long long y) { return x>y?x:y; }
inline int Err(char* str) { printf("%s",str); return -1; }
int main(int argc,char* argv[])
{
	long long n(0),arr[MaxN],ans;
	if (!(--argc)) return Err("Args not enough");
	freopen(argv[argc],"r",stdin);
	while (~scanf("%lld",&arr[n++]));
	if (!(--n)) return Err("Num not enough");
	ans=arr[n-1];
	for (int i(1);i!=n;++i) {
		arr[i]=Max(arr[i]+arr[i-1],arr[i]);
		ans=Max(ans,arr[i]);
	}
	printf("The max sub-array-sum: %lld\n",ans);
	return 0;
}
#include<stdio.h>
int main(int argc,char* argv[])
{
	long long n(0),tmp(0),seq(0),ans(-9E18);
	freopen(argv[argc-1],"r",stdin);
	while (~scanf("%lld",&tmp)) ans=ans>(seq=seq>0?seq+tmp:tmp)?ans:seq;
	printf("The max sub-array-sum: %lld\n",ans);
	return 0;
}
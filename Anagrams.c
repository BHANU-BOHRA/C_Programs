#include<stdio.h>
void main()
{
	char s1[200],s2[200];
	int cnt[128],i;
	printf("\nEnter the First String  : ");
	gets(s1);
	printf("\nEnter the Second String : ");
	gets(s2);
	for(i=0;i<128;i++)cnt[i]=0;
	for(i=0;s1[i];i++)cnt[s1[i]]++;
	for(i=0;s2[i];i++)cnt[s2[i]]++;
	for(i=0;i<128&&(cnt[i]==0||cnt[i]%2==0);i++);
	if(i==128)printf("\n\"%s\" and \"%s\" are Anagrams",s1,s2);
	else printf("\n\"%s\" and \"%s\" are not Anagrams",s1,s2); 
}

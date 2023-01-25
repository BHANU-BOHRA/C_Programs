#include<stdio.h>
void encrypt(char a[])
{
	int i;
	for(i=0;a[i];i++)a[i]+=1;
}
void decrypt(char a[])
{
	int i;
	for(i=0;a[i];i++)a[i]-=1;
}

void main()
{
	char c,s[]="Apna Kaam Kar le,**BHOSHIYE**";
	int i;
	printf("\nDo You want see the String(Y/N) : ");
	scanf("%c",&c);fflush(stdin);
	if(c=='Y'||c=='y')
	{
		encrypt(s);
	    printf("\n\nEncrypted String : %s",s);
	    printf("\n\nDo you Want Decrypt the String(Y/N) : ");
	    scanf("%c",&c);fflush(stdin);
	    if(c=='Y'||c=='y')
	    {
		    decrypt(s);
		    printf("\n\nDecrypted String : %s",s);
	    }
	}
	else printf("\n\nKuch karna Nahi toh Program Run kyu Kiya..");
	getch();
}

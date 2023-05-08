#include<stdio.h>
#include<conio.h>
int Binarys(int[],int,int);
main()
{
	int a[10],n,k,i,pos;
	printf("enter the element N");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search key");
	scanf("%d",&k);
	pos=Binarys(a,n,k);
	if(pos!=-1)
	{
		printf("available in list %d",pos);
	}
	else
	{
		printf("not available in the list");
	}
	getch();
	return 0;
}
int Binarys(int a[],int n,int k)
{
	int F,L,M;
	F=0,L=n-1;
	while(L>=F)
	{
		M=(F+L)/2;
		if(k<a[M])
		L=M-1;
		else if(k>a[M])
		L=M+1;
		else if(k==a[M])
		return M;
}
return -1;
}

#include<bits/stdc++.h>
using namespace std;
int check(int x,int y,int count)
{
	if(count==10)
	{
		check(y+1,y+1,0);
	}
	else
	{
		int B[10],i=0,sum=0;
		while(x>0)
		{
			B[i]=x%10;
			x=x/10;
			i++;
		}
		for(int j=0;j<i;j++)
		{
			sum+=B[j]*B[j];
		}
		if(sum==1)
		{
			return y;
		}
		else
		{
			check(sum,y,count+1);
		}
	}
}
int main()
{
	int T,A[200],i,x;
	cin>>T;
	for(i=0;i<T;i++)
	cin>>A[i];
	i=0;
	while(T--)
	{
		x=A[i]+1;
		int res=check(x,x,0);
		cout<<res<<endl;
		i++;	
	}
}


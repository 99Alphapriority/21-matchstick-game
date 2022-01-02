#include<stdio.h>
int main()
{ int i=21,p,c;
	while(i>=0)
	{
		printf("Enter number of matches to pick (1 or 2 or 3 or 4)\n");
		scanf("%d",&p);
		if(p>4 || p<1)
		{	printf("wrong choice! choose again\n");
			continue;
		}	
		else{
		i-=p;
		c=5-p;
		printf("Computer picked %d matche(s)\n",c);
		i-=c;
		if(i==1){
			printf("you lost the game\n");
			break;
			}
	}
	}
return 0;
}

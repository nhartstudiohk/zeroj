#include <stdio.h>

int main(){
	int M, D, S;
	scanf("%d%d", &M, &D);
	S=(M*2+D)%3;

	if(S==0)
	{printf("普通");}
	
	if(S==1)
	{printf("吉");}

	if(S==2)
	{printf("大吉");}

	return 0;
}

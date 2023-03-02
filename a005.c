#include <stdio.h>

int main(){
int t;
scanf("%d", &t);

while(t--){
int a1, a2, a3, a4;
scanf("%d%d%d%d", &a1, &a2, &a3, &a4);

if(a4-a3==a3-a2 && a2-a1 == a3-a2)
{printf("%d %d %d %d %d\n",a1, a2, a3, a4, a4+(a4-a3));}

else
{printf("%d %d %d %d %d\n",a1, a2, a3, a4, a4*(a4/a3));}

}
return 0;
}

#include<stdio.h>
#include<math.h>
int main(void){
  int d,c,t,cost=0;
  int dist;
  cost=cost+c;
  scanf("%d,%d",&c,&d);
    while(c>0){
      dist=(d*c)/100;
      c=c-dist;
      cost=cost+c;
    }
  printf("%d",c);
  return 0;
}


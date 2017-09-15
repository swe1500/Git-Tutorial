#include <stdio.h>

int main(int argv, char** argc){
int b=5;
int F[20]={0,1};
int* a;
*a = 5;
for(int i=2;i<20;i++)
F[i] = F[i-1] + F[i-2];

printf("Hello world,F[20]=%d\n",F[19]);
return 0;
}

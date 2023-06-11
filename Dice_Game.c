#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
int i,j,n;
srand((unsigned)time(NULL));

printf("Rolling dice...\n");
i = rand()%6+1;
j = rand()%6+1;
printf("Die 1: %d\n",i);
printf("Die 2: %d\n",j);
printf("Total value: %d\n",i+j);

return 0;
}
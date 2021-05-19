#include<stdio.h>
n,*i,c,k[81]={[40]=1};
main(){for(i=k,c=0;i<k
+80;putchar(32+10**i),
n=c^(*i|*(i+1)),c=*i,*
i++=n);putchar(10);*k
||main();}
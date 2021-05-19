typedef unsigned int ui;char f[]="H\tM\t\x0c"
"\x14\x1e""AMH]_\tWH]_\tWH]_\tM\x18\3\x19\4"
"\1M\x19\5"/* Making your tutor */"\x08M\x1a"
"\2\x1f\6"/* cry, introduction to*/"\x1e\5\2"
"\x1dLg";t=/*   C obfuscation   */0x60a47f30,
b=0x60877020,x=86400,y=3600,z=60,d,a,h,m,s,i,
j;main(){/* Hosted by UNSW CSESoc */d=t-time(
d^d),a=d/ /*    1pm 20/05/2021    */x,h=d%x/y
,m=d%y/z,/*   gcc -w -o b me.c    */s=d%z,d=(
d*40)/(t-b);for(char*c=f;*c;*c^='m',c++);for(
;j<6;j+=printf(&"+\n\0|\n\0"[!!(j%5)*3])/2)
for(i=!printf(&"+\0|\0"[!!(j%5)*2]);i<40;i++)
printf(j%5?(i>=40-d?" ":"\e[9%dm%c\e[0m"):"-"
,(((ui)&t>>4)^(j*43+i))%6+1,"@8Oo0*"[(((ui)&t
>>4)^(j*43+i))%6]);printf(f,a,h,m,s);}//-Nick
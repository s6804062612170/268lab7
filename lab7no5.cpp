#include<stdio.h>
long convert(long h, long m, long s);
int main(){
	long hour,minute,seconds;
	scanf("%d %d %d",&hour,&minute,&seconds);
	convert(hour,minute,seconds);
	return 0;
}
long convert(long h, long m, long s){
    long hour,minute,time;
    hour = h*3600;
    minute = m*60;
    time = hour+minute+s;
    printf("%d",time);
    
    
}

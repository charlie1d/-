#include<stdio.h>
void exchange(int *a,int *b){
	int t;
	t=*a;*a=*b;*b=t;
}
int main(){
	int a=10,b=20;
	exchange(&a,&b);
	printf("a=%d,b=%d",a,b);
	printf("%c",219);
	return 0;
}


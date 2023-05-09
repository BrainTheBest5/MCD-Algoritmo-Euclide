#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,d,e,resto;
	printf("Inserisci un numero: ");
	scanf("%f",&a);
	printf("Inserisci un altro numero: ");
	scanf("%f",&b);
	d=a;
	e=b;
	if (b==0){
		printf("Il massimo comune divisore di ");
        	printf("%f",d);
	        printf(" e ");
	        printf("%f",e);
	        printf(" risulta ");
        	printf("%f\n",d);
		return 0;
	}
	do{
		resto=fmod(a,b);
        a=b;
		b=resto;
	}
	while(b!=0);
	c=a;
	printf("Il massimo comune divisore di ");
	printf("%f",d);
	printf(" e ");
	printf("%f",e);
	printf(" risulta ");
	printf("%f\n",c);
	return 0;
}
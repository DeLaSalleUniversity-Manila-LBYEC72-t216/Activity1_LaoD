#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float base, height, area;

printf("\ninput Triangle's Base and Height: ");
scanf("%f%f", &base,&height);

area = (base*height)/2;

printf("Area is %2f", area);



return 0;
system("pause");
}



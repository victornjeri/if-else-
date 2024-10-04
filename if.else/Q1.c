#include <stdio.h>
int main ()
{
	int age;
	float income;
	
	//prompt the user to input age and income
	printf("enter your age:");
	scanf("%d",&age);
	
	printf("enter your annual income:");
	scanf("%F",&income);
	//check if the user quallifies for a loan
	if (age >=21 &income>=2100) {
		printf("congratulations you qualify for a loan .\n");
	}
	else{
		printf("unfortunately, we are unable to offer you a loan at this time.\n");
	}
return 0;
}
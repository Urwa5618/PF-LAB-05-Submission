#include <stdio.h>
int main(){
	int age;
	printf("enter age: ");
	scanf("%d", &age);
	if (age <=10){
		printf("Child\n");
	}else if (age > 10 && age <= 18){
		printf("Teenager\n");
	}else if (age > 18 && age < 35){
		printf("Adult\n");
	}else {
	printf("Senior\n");
	}
	return 0;
}

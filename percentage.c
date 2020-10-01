#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b); // For take input
	printf("%d", (a/b) * 100); // Perform percntage operation here.
	return 0;
}

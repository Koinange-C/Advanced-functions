//use of functon pointers on all operations
#include<stdio.h>


//Function declarations
int add(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);


//Driver program
int main(){
	//array of pointers to functions returning int and taking two int parameters
	int (*array[])(int, int) = {
		add, 
		subtraction, 
		multiplication, 
		division};

	int result;

	int product = (*array[2])(3, 15);
	int subtraction = (*array[1], (5,3));
	int division = (*array[3], (8,2));
	int add = (*array[0], (8, 3));

	printf("product: %d\n", product);
	printf("subtraction: %d\n", subtraction);
	printf("division: %d\n", division);
	printf("add: %d\n", add);
}


//Functions

int add(int x, int y){
	return x + y;
}


int subtraction(int x, int y){
	return x - y;
}

int multiplication(int x, int y){
	return x * y;
}

int division(int x, int y){
	if (y==0){
		printf("Error\n");
		return 0;
	}
	return x / y;
}


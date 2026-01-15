//summation using reference to pointers
#include<stdio.h>
#include<string.h>

int add(int a, int b);

int main(){
	int result;
	/*int- return type (int)
	 * (*ptr)- name of pointer
	 * (int, int)- 1st parameter int, 2nd parameter int
	 * */
	int(*ptr)(int, int);

	//assign function to pointer
	//ptr= &add work the same
	ptr = add;

	//call the pointer
	result = ptr(10, 20);
	
	printf("%d\n", result);
}

int add(int a, int b){
	return a + b;
}

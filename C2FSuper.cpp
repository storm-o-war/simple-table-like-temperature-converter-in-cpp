#include <iostream>
#include <stdio.h>



int main(){
	uint x = 0;
	printf("enter C starting from 0 : ");
	std::cin >> x;
	
	for (int i = 0; i < x; i++) {
		printf("%f\n", ((9*(float)i)/5) +32);
	}

	return 0;
}

#include "randomizeArray.h"
#include <iostream>

using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	mtjrandom::randmize_array(a, 10);
	
	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}

// con3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

void swapints (int x, int y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swapints_ (int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void swapints_2 (int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}


void farr(int array1[]){
	array1[0] = 11;
}

int main(int argc, _TCHAR* argv[])
{
	int a = 2;
	int b = 3;

	int t =0;
	int *ptr;
	int &ref = a;

	ptr = &a;
	*ptr = 7;

	std::cout << a << " " << b << "\n";
	swapints_2(a,b);
	std::cout << a << " " << b << "\n";


/*
	std::cout << a << " " << b << "\n";
	t = a;
	a = b;
	b = t;
	std::cout << a << " " << b << "\n";
	swapints(a,b);
	std::cout << a << " " << b << "\n";


	std::cout << a << " " << b << "\n";
	std::cout << &a << " " << &b << "\n";
	std::cout << *(&a) << " " << *(&b) << "\n";
	swapints_(&a, &b);
	std::cout << a << " " << b << "\n";


	int arr[3] = {5,7,2};
	std::cout << arr[0]  << "\n";
	std::cout << arr  << "\n";
	std::cout << (arr+1)  << "\n";
	std::cout << *arr  << "\n";
	std::cout << *(arr+1)  << "\n";
	farr(arr);
	std::cout << arr[0]  << "\n";

	int arr[3];
	int x = 9;

	std::cout << x << "\n";
	for (int i=0; i < 4; i++) {
//		arr[i] = i;
		*(arr + i) = i;
	} 
	for (int i=0; i < 4; i++) {
		std::cout << arr[i] << " ";
	} 
	std::cout << "\n";
	std::cout << x << "\n";

	int arr[3] = {1,2,3};
	int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	std::cout << arr2[1][1] << "\n";

	std::cout << arr << "\n";
	std::cout << (arr+1) << "\n";

	std::cout << arr2[0] << "\n";
	std::cout << *arr2[0] << "\n";
	std::cout << arr2[1] << "\n";
	std::cout << *arr2[1] << "\n";
	std::cout << &(arr2[1][0]) << "\n";
	std::cout << &(arr2[1][1]) << "\n";
*/

	std::cin >> t;
	return 0;
}


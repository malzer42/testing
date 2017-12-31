#include "fibonacci.h"

int fibonacci(int nFibonacci)
{
	if(nFibonacci < 2)return nFibonacci;
	return fibonacci(nFibonacci - 1) + fibonacci(nFibonacci - 2);
}

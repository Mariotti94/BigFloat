#include <iostream>
#include "BigFloat.h"

BigFloat factorial(const BigFloat& n)
{
	if(n>1)
    	return n*factorial(n-1);
    else
    	if(n==0)
    		return 1;
    	else
    		return n;
}

int main()
{
	//For reference, execution times on an old Core 2 Duo
	//200!  --> 375 digits  - no optimization: 5 seconds
	//300!  --> 615 digits  -	no optimization: 20 seconds,   compiled with -O3: 1 seconds
	//500!  --> 1135 digits - no optimization: 115 seconds,	 compiled with -O3: 4 seconds
	//1000! --> 2568 digits - no optimization: 1200 seconds, compiled with -O3: 47 seconds
	BigFloat fact,num(1000);
	fact = factorial(num);
	std::cout<<fact<<std::endl;
	std::cout<<fact.Ints()<<std::endl;
	return 0;
}

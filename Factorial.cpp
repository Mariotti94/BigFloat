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
	//200! takes 5 sec
	//300! takes 20 sec,	615 cifre	--> compiled with -O6: 1 sec
	//500! takes 115 sec, 	1135 cifre,	--> compiled with -O6: 4 sec
	//1000! takes 1200 sec,	2568 cifre,	--> compiled with -O6: 47 sec
	BigFloat fact,num(1000);
	fact = factorial(num);
	std::cout<<fact<<std::endl;
	std::cout<<fact.Ints()<<std::endl;
	return 0;
}

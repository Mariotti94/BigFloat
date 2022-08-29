#include <iostream>
#include "BigFloat.h"

int main()
{
    //Test
    BigFloat a, b, c;

    //NaN test
    std::cout << a << std::endl;
    std::cout << a.ToDouble() << std::endl;
    std::cout << a.ToFloat() << std::endl;
    std::cout << a.ToString() << std::endl;
    std::cout << std::endl;

    //Error Codes test
    if(a.HasError())
        std::cout << a.GetError() << std::endl;
    a = 11.5;
    if(a.HasError())
        std::cout << a.GetError() << std::endl;
    b = a % 2;
    std::cout << b.GetError() << std::endl;
    b = 15;
    std::cout << b.GetError() << std::endl;
    b = a / 0;
    std::cout << b.GetError() << std::endl;
    std::cout << std::endl;

    //Assignation,SetPrecision,Trim test
    BigFloat d(a);
    std::cout << "d " << d << std::endl;
    d = -14.34434340000;
    std::cout << "d " << d << std::endl;
    d = "000.645343400000";
    std::cout << "d " << d << std::endl;
    std::cout << "d dec " << d.Decimals() << std::endl;
    d.TrailTrim();
    d.LeadTrim();
    std::cout << "d " << d << std::endl;
    d.SetPrecision(2);
    std::cout << "d set(2) " << d << std::endl;
    d.SetPrecision(0);
    std::cout << "d set(0) " << d << std::endl;
    d = "-1000.12323";
    std::cout << "d exp " << d.Exp() << std::endl;
    d = "-1.1223222";
    std::cout << "d exp " << d.Exp() << std::endl;
    d = "-1";
    std::cout << "d exp " << d.Exp() << std::endl;
    d = "-0.0000123453434";
    std::cout << "d exp " << d.Exp() << std::endl;
    d = "-0.0000000000000";
    std::cout << "d exp " << d.Exp() << std::endl;
    std::cout << std::endl;


    std::cout << "Inserisci 2 numeri:" << std::endl;
    std::cin >> a >> b;
    std::cout << std::endl;
    std::cout << "a " << a << "\tb " << b << std::endl;
    std::cout << std::endl;

    //Operations +,-,*,/ Test
    c = a + b;
    std::cout << "a+b " << c << std::endl;

    c = a - b;
    std::cout << "a-b " << c << std::endl;

    c = a * b;
    std::cout << "a*b " << c << std::endl;

    c = a / b;
    std::cout << "a/b " << c << std::endl;

    c = BigFloat::PrecDiv(a, b, 10);
    std::cout << "PrecDiv(a,b,10) " << c << std::endl;

    c = a % b;
    std::cout << "a%b " << c << std::endl;

    c = BigFloat::Power(a, b);
    std::cout << "Power(a,b) " << c << std::endl;

    c = BigFloat::Power(a, b, 10); //for negative exponents
    std::cout << "Power(a,b,10) " << c << std::endl;

    //Comparation Test
    std::cout << std::endl;
    std::cout << "a==b " << (a == b) << std::endl;
    std::cout << "a>b " << (a > b) << std::endl;
    std::cout << "a<b " << (a < b) << std::endl;
    std::cout << "a>=b " << (a >= b) << std::endl;
    std::cout << "a<=b " << (a <= b) << std::endl;

    //Transformation Test
    std::cout << std::endl;
    std::cout << "ToDouble " << a.ToDouble() << std::endl;
    std::cout << "ToFloat " << a.ToFloat() << std::endl;
    std::cout << "ToString " << a.ToString() << std::endl;

    //++,-- Test
    std::cout << std::endl;
    std::cout << "++a " << ++a << std::endl;
    std::cout << "a++ " << a++ << std::endl;
    std::cout << "--a " << --a << std::endl;
    std::cout << "a-- " << a-- << std::endl;

    //Miscellaneous test
    std::cout << std::endl;
    std::cout << "a ints " << a.Ints() << std::endl;
    std::cout << "a decimals " << a.Decimals() << std::endl;
    std::cout << "a memory size " << a.MemorySize() << std::endl;

    return 0;
}

#include <iostream>
using namespace std::literals;

int main()
{
    for ( int a = 1 ; a <= 9 ; ++a )
    {
        for ( int b = 1 ; b <= 9 ; ++b )
        { std::cout << a*b << "\t"s ; }

        std::cout << "\n"s ;
    }
}
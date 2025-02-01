#include <iostream>
using namespace std::literals;

int plus(int x, int y){
    return x + y;
}

int main()
{
    auto print = [](auto x){
        std::cout << x << std::endl;
    };

    print(1);
    print("hello");

    // auto plus = [](auto x, auto y){
    //     return x + y;
    // };

    std::cout << plus(1,5) << std::endl;


}
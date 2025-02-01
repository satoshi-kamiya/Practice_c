#include <iostream>
using namespace std::literals;

int main(){
    double height;
    double mass;

    std::cin >> height >> mass;

    double bmi = mass / (height * height);

    std::cout << bmi << std::endl;

    auto status = [](double bmi){
        if(bmi < 18.5){
            return "Underweight.";
        }else if(bmi < 25.0){
            return "Normal.";
        }else if(bmi < 30.0){
            return "Overweight.";
        }else{
            return "Obse.";
        }
    };

    std::cout << status(bmi);

}
int main(){
    int object = 0;

    object = 123;

    std::cout << object;

    int &reference = object;

    reference = 456;

    std::cout << object;

    object = 789;

    std::cout << reference;
}
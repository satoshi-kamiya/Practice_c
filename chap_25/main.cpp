int main()
{
    array<int,5> a = {1,2,3,4,5} ;

    auto iter = a.begin() ;

    std::cout << *iter ; // 1
    ++iter ;
    std::cout << *iter ; // 2
}
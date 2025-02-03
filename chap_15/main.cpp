void f( const std::vector<int> & v )
{
    std::cout << v.at(1234) ;
}

int main()
{
    // 10000個の要素を持つvector
    std::vector<int> v(10000) ;

    f( v ) ;
}

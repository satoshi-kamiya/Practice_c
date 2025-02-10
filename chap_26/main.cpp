struct Object
{
    std::string name ;
    // コンストラクター
    Object( std::string const & name ) : name(name) 
    { std::cout << name << " is constructed.\n"s ; }

    // デストラクター
    ~Object()
    { std::cout << name << " is destructed.\n"s ; }
} ;


void f()
{
    Object obj("f"s) ;
    throw 0 ;
}

void g()
{
    Object obj("g"s) ;
    f() ;
}

int main()
{
    Object obj("main"s) ;

    try {
        g() ;
    } catch( int e )
    {
        std::cout << "caught.\n"s ;
    }

}
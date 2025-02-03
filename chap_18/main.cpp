struct fractional
{
    int num ;
    int denom ;

    void set( int num_ )
    {
        num = num_ ;
        denom = 1 ;
    }
    void set( int num_, int denom_ )
    {
        num = num_ ;
        denom = denom_ ;
    }
} ;

int main()
{
    fractional x ;


    x.set(5) ;
    // x.num == 5
    // x.denom == 1

    x.set( 2, 3 ) ;
    // x.num == 2
    // x.denom == 3
}
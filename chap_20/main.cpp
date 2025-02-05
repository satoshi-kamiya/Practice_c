// 常にゼロを返すクラス
// 何を書き込んでもゼロを返す
struct null_array
{
    int dummy ;
    // 引数は無視
    int & operator [] ( std::size_t )
    {
        dummy = 0 ;
        return dummy ;
    }
} ;

int main()
{
    null_array a ;

    // 0
    std::cout << a[0] ;
    // 0
    std::cout << a[999] ;

    a[100] = 0 ;
    // 0
    std::cout << a[100] ;
}
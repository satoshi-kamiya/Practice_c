int input(void){
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    std::vector<int> v = { 8, 3, 7, 4, 2, 9, 3 } ;

    std::size_t size = v.size();

    // 先頭をずらすループ 
    for ( std::size_t head = 0 ; head != size ; ++head )
    {
        std::size_t min = head ;
        // 現在の要素の範囲から最小値を見つけるループ
        for ( std::size_t index = head+1 ; index != size ; ++index )
        {
            if ( v.at(index) < v.at(min) )
                min = index ;
        }
        // 出力
        std::cout << v.at(min) << std::endl;;

        // 最小値を先頭と交換
        auto temp = v.at(head) ;
        v.at(head) = v.at(min) ;
        v.at(min) = temp ;
    }

        
    for ( std::size_t index = 0, size = v.size() ; index != size ; ++index )
    {
        std::cout << v.at(index) << std::endl; ;
    }
}
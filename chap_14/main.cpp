auto output_all = [](auto begin,auto end){
    for(auto iter = begin;iter != end;++iter ){
        std::cout << *iter << std::endl;
    }
};

int main()
{
    std::vector<int> v = {1,2,3,4,5};

    output_all( std::begin(v), std::end(v) );

}
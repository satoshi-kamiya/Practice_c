auto output_all = [](auto begin,auto end){
    for(auto iter = begin;iter != end;++iter ){
        std::cout << *iter << std::endl;
    }
};

int main()
{
    std::filesystem::directory_iterator first("./"), last ;

    output_all( first, last );

}
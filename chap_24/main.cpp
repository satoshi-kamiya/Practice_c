template <typename T,std::size_t N>
struct array
{
    T strage[N];

    T & operator [] (std::size_t i)
    {
        return strage[i];
    }
};



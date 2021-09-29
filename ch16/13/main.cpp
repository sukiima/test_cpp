auto none_of = []( auto first, auto last, auto pred )
{
    for ( auto iter = first ; first != last ; ++iter )
    {
        if ( pred(*iter) )
            return false ;
    }
    return true ;
} ;

int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    // 値は100か？
    auto is_100 = [](auto x){ return x == 100 ; } ;

    bool b = std::none_of( std::begin(v), std::end(v), is_100 ) ;

    std::cout << b ;
}

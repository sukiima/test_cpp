auto count = [](auto first, auto last, auto pred)
{
	auto counter = 0u ;

	for(auto i = first ; i != last ; ++i)
	{
		if(pred(*i) != false)
			++counter ;
	}
	return counter ;
} ;


int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5} ;

	auto first = std::begin(v) ;
	auto last = std::end(v) ;

	auto a = std::count_if(first, last,
		[](auto x){return x%2 == 1 ;}) ;

	std::cout << a ;
}

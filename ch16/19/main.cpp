auto count = [] (auto first, auto last, auto value)
{
	auto counter = 0u ;
	
	for(auto i = first ; i != last ; ++i)
	{
		if(*i == value)
			++counter ;
	}
	return counter ;
} ;


int main()
{
	std::vector<int> v = {1, 2, 1, 1, 3, 3} ;

	auto a = std::count(std::begin(v), std::end(v), 1) ;

	auto b = std::count(std::begin(v), std::end(v), 2) ;

	auto c = std::count(std::begin(v), std::end(v), 3) ;

	std::cout << a << b << c ;
}


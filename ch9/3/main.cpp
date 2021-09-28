int main()
{
	std::vector<int>v = {1, 2, 3} ;

	auto x = std::begin(v) ;
	auto y = std::end(v) ;

	std::cout << (x == y) ;
	++x ;
	std::cout << (x == y) ;
	++x ;
	std::cout << (x == y) ;
	++x ;
	std::cout << (x == y) ;
}


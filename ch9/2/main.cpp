int main()
{
	std::vector <int> v = {1, 2, 3, 4, 5} ;

	auto x = std::begin(v) ;
	auto y = x ;

	bool b1 = (x == y) ;
	bool b2 = (x != y) ;

	++x ;

	bool b3 = (x == y) ;

	bool b4 = (x != y) ;

	std::cout << b1 << b2 << b3 << b4 ;

}

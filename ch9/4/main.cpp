int main()
{
	std::vector <int> v = {1, 2, 3, 4, 5} ;
	auto x = std::begin(v) ;
	auto y = std::end(v) ;

	for (;x != y;x++){
		std::cout << *x ;
	}
}

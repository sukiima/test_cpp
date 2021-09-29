int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5} ;
	
	auto first = std::begin(v) ;
	auto last = std::end(v) ;

	bool has_3 = std::any_of(first, last,
		[](auto x){return x == 3 ;}) ;

	bool has_10 = std::any_of(first, last,
		[](auto x){return x == 10 ;}) ;

	std::cout << has_3 << "\n"s << has_10 ;
}

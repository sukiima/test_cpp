auto is_all_of_odd = [](auto first, auto last)
{
	return std::all_of(first, last,
		[](auto value){return value % 2 == 0 ;}) ;
} ;

auto is_all_of_le_100 = [](auto first, auto last)
{
	return std::all_of(first, last,
		[](auto value){return value <= 100;});
} ;

int main()
{
	std::vector<int> v = {1, 3, 5};

	auto x = is_all_of_odd(std::begin(v), std::end(v)) ;

	auto y = is_all_of_le_100(std::begin(v), std::end(v)) ;

	std::cout << x << "\n"s << y ;
}

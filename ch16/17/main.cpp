int main()
{
	std::vector<int> v = {1, 3, 4, 5, 6} ;

	auto is_even = [] (auto value)
	{
		return value % 2 == 0 ;
	} ;

	auto is_odd = [] (auto value)
	{
		return value % 2 == 1 ;
	} ;

	auto even = std::find_if(std::begin(v), std::end(v), is_even) ;

	auto odd = std::find_if(std::begin(v), std::end(v), is_odd) ;

	std::cout << *even << " "s << *odd ;
}

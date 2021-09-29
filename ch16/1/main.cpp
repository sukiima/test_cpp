int main()
{
	std::vector<int> v = {1, 3, 5, 7, 9} ;

	for (
		auto i = std::begin(v),
		     j = std::end(v);
		i != j ;
		++i )
	{
		std::cout << *i ;
	}
}

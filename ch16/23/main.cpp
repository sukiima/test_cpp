auto transform = [] (auto first, auto last, auto result, auto op)
{
	for(auto iter = first ; iter != last ; ++iter, ++result)
	{*result = op(*iter) ; }

	return result ;
} ;

int main()
{
	std::vector<int> a = {1, 2, 3, 4, 5} ;

	std::vector<int> b(5) ;
	std::transform(std::begin(a), std::end(a), std::begin(b),
			[](auto x){return 2*x ;}) ;
	
}

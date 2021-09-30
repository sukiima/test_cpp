auto equal = [](auto first1, auto last1, auto first2, auto last2)
{
	auto size1 = std::distance(first1, last1) ;
	auto size2 = std::distance(first2, last2) ;

	if(size1 != size2)
		return false ;
	
	for (auto i = first1, j = first2 ;
		i != last1 ; ++i, ++j)
	{
		if(*i != *j)
			return false ;
	}
		return true ;
};

int main()
{
	std::vector<double> v = {1.3, 2.2, 3.0, 4.9, 5.7} ;
	std::vector<double> w = {1.9, 2.4, 3.8, 4.5, 5.0} ;

	auto comp = [](auto a, auto b)
	{
		return std::floor(a) == std::floor(b) ;
	} ;

	bool b = std::equal(
		std::begin(v), std::end(v),
		std::begin(w), std::end(w), comp) ;

	std::cout << b ;
}

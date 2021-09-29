auto none_of = [](auto first, auto last, auto pred)
{
	for(auto iter = first; first != last ; ++iter)
	{
		if(pred(*iter))
			return false ;
	}
	return true ;
} ;

int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5} ;

	auto is_100 = [](auto x){return x == 100 ;} ;

	bool b = none_of(std::begin(v), std::end(v), is_100) ;

	std::cout << b ;
}

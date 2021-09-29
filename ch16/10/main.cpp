auto any_of = [](auto first, auto last, auto pred)
{
	for (auto iter = first ; iter != last ; ++iter)
	{
		if(pred(*iter))
			return true ;
	}
	return false ;
} ;

int main()
{
	std::vector<int> v = {1, 2, 3} ;
	bool x = any_of(std::begin(v), std::end(v)
	,	[](auto x){return x == 3;}) ;

	std::cout << x ;
}

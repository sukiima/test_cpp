auto all_of = [] (auto first, auto last, auto pred)
{
	for(auto iter = first ; iter != last ; ++iter)
	{
		if(pred(*iter) == false)
			return false ;
	}
	return true ;
};

int main()
{
	std::vector<int> v ;

	bool b = all_of(std::begin(v), std::end(v),
		[](auto value){return false ;}) ;

	std::cout << b  ;
}

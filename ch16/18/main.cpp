auto find_if = [](auto first, auto last, auto pred)
{
	for (auto iter = first ; iter != last ; ++iter)
	{
		if(pred(*iter))
			return iter ;
	}
} ;

int main()
{

	std::vector<int> v = {1, 2, 3, 5} ;
	
	auto is_even = [](auto value){
		return value % 2 == 0 ;
	} ;

	auto even = std::find_if(std::begin(v), std::end(v),
			is_even) ;

	std::cout << *even ;
}

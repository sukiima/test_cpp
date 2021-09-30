int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5} ;

	auto pos = std::find(std::begin(v), std::end(v), 0) ;

	if(pos != std::end(v))
	{
		std::cout << "found"s ;
	}
	else{
		std::cout << "not found"s ;
	}
}

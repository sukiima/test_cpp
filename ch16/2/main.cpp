auto print_all = [](auto first, auto last)
{
	for(auto iter = first ; iter != last ; ++iter)
	{
		std::cout << *iter ;
	}
} ;

int main()
{
	std::vector<int> v = {1, 3, 5, 7, 3} ;

	print_all(std::begin(v), std::end(v)) ;
}

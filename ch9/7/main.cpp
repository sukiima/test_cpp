auto output_all = [](auto first, auto last)
{
	for (auto iter = first ; iter != last ; ++iter)
	{
		std::cout << *iter << "\n"s ;
	}
} ;

int main()
{
	std::vector<int> v = {2, 4, 3, 5, 1} ;

	output_all(std::begin(v), std::end(v)) ;
}

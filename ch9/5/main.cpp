int main()
{
	std::vector<int> v = {2, 4, 5 ,2, 3} ;

	for (auto iter = std::begin(v), last = std::end(v);
			iter != last; ++iter)
	{
		std::cout << *iter; 
	}
}	

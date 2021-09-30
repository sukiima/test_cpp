int main()
{
	std::vector<int> source = {1, 2, 3, 4, 5} ;

	std::vector<int> destination  (5) ;

	std::copy(std::begin(source), std::end(source),
			std::begin(destination)) ;

	std::cout << destination ; 
}

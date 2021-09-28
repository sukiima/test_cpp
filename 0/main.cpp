int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5} ;

	int x = v.at(2) ;
	v.at(2) = 0 ;

	std::cout << x ;
}

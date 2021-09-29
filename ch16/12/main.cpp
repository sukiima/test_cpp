int main()
{
	std::vector<int> v = {1, 2} ;

	auto is_100 = [](auto x){return x == 100 ;} ;

	bool b = std::none_of(std::begin(v), std::end(v), is_100) ;

	std::cout << b ;
}

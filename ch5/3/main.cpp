int main()
{
	std::cout << std::boolalpha ;
	auto print = [](auto b)
	{ std::cout << b << "\n"s ;} ;

	print(false && false) ;
	print(false && true) ;
	print(true && false) ;
	print(true && true) ;
}

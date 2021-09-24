int main()
{
	auto hello = []()
	{std::cout << "hello\n"s ;} ;
	
	while (true)
		hello() ;
}

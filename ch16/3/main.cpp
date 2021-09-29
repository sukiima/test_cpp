int main()
{
	auto call_func = [](auto func)
	{
		func(123) ;
	} ;

	auto print = [] (auto x) {std::cout << x ;} ;

	call_func(print) ;

	auto print_twice = [](auto x){std::cout << 2*x ;} ;

	call_func (print_twice) ;
}

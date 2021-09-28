int main()
{
	int a = 1 ;
	int & ref = a ;

	ref = 3 ;

	std::cout << ref ;
}

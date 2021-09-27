void table()
{
	int i = 1 ;

	while(i != 82)
	{
		if (i % 9 != 0)
		{
			std::cout << i << " "s ;
		}
		else
		{
			std::cout << i << "\n"s ;
		}
		i++ ;
}
}
int main()
{
	table() ;
}


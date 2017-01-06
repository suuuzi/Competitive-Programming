// Multiple of 11 (http://www.codewars.com/kata/multiple-of-11)

bool eleven(const std::string input) 
{
	unsigned long evens = 0;
	unsigned long odds = 0;
	
	bool even = true;
	
	for(int i = 0; i < input.length(); i++)
	{ 
		if(even)
		{
			evens += input[i] -48;
			even = false;
		}
		else
		{
			odds += input[i] -48;
			even = true;
		}
	}	
	
	if(evens + odds == 0)
		return 0;

	return (evens % 11) == (odds % 11);
}

#include <stdio.h>

template <typename T>

T Min(T a, T b)
{

	if (a > b)
	{

		return  static_cast<float>(a);

	}

	else
	{

		return static_cast<float>(b);

	};

}


template <>
char Min<char>(char a, char b)
{

	return printf("”šˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ\n");

}


int main(void)
{


	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%f\n", Min<double>(11.4f, 51.4f));
	
	Min<char>('a', 'b');

	return 0;

}




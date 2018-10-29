#include <iostream>

namespace mystd
{
	using namespace std;
	class
	{
	public:
		void operator<< (char * str)
		{
			printf("%s", str);
		}
		void operator<< (char str)
		{
			printf("%s", str);
		}
		void operator<< (int num)
		{
			printf("%d", num);
		}
		void operator<< (double e)
		{
			printf("%g", e);
		}
		void operator<< (ostream& (*fp) (ostream &ostm))
		{
			fp(*this);
		}
	};
	ostream& endl(ostream &ostm)
	{
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}

int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "simple something";
	cout << endl;
	cout << 3.14;
	cout << endl;
}


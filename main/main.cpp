#include <Daycycle.hpp>

using namespace std;
using namespace earthtwo;

int main()
{
	// earthtwo::Country gelenjik;
	Country a{"qyalnoc"};

	Country b = a;

	cout << b.get_name() << endl;
	// ofstream ofs("/Users/aamirkha/Desktop/earthtwo/report/dayCycleReport");

	// f_Daycycle cycle{ofs};

	// cycle(15);

	return 0;
}

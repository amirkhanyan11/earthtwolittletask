#include <Daycycle.hpp>

using namespace std;
using namespace earthtwo;

int main()
{
	// earthtwo::Country gelenjik;

	ofstream ofs("/Users/aamirkha/Desktop/earthtwo/report/dayCycleReport");

	f_Daycycle cycle{ofs};

	cycle(15);

	return 0;
}

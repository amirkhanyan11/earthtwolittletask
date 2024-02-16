#ifndef DAYCYCLE_H
#define DAYCYCLE_H

#include <Earth.hpp>
#include <unistd.h>
#include <fstream>

namespace earthtwo
{

	using std::fstream, std::ifstream, std::ofstream;

	class f_Daycycle : public Daytime
	{

	private:

		ofstream& m_dayCycleReport;

	public:

		f_Daycycle(ofstream& file, e_Daytime time = e_Daytime::DAY);

	public:

		ofstream& operator()(int count = 1);

	};


}


#endif

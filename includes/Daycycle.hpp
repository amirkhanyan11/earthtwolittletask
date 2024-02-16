#include <Daycycle.h>

using namespace earthtwo;

f_Daycycle::f_Daycycle(ofstream& file, e_Daytime time)

	: m_dayCycleReport{file}
{
	m_daytime = time;
}


ofstream& f_Daycycle::operator()(int count)
{
	while (count > 0)
	{
		m_dayCycleReport << "----------------------------\n";
		Earth::get_instance().set_time(m_daytime, m_dayCycleReport);
		usleep(100000);
		count--;
	}
	return (m_dayCycleReport);
}

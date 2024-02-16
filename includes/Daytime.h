#ifndef DAYTIME_H
#define DAYTIME_H

#include <iostream>
#include <fstream>

namespace earthtwo
{

	using std::string, std::fstream, std::ofstream, std::cout;

	enum class e_Daytime
	{
		DAY,
		NIGHT
	};

	class Daytime
	{

	protected:

		e_Daytime m_daytime{};

	public:

		virtual ~Daytime() = default;

	public:

		virtual void set_time(e_Daytime& daytime, ofstream& file) noexcept;

	};


}


#endif

#ifndef DAYTIME_H
#define DAYTIME_H

#include <iostream>

namespace earthtwo
{

	using std::string;

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

		virtual void set_time(e_Daytime const) noexcept;

	};


}


#endif

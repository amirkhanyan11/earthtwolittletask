#ifndef NAMEDENTITY_H
#define NAMEDENTITY_H

#include <iostream>

namespace earthtwo
{

	using std::string;

	class Name
	{

	protected:

		string m_name{};

	public:

		virtual void set_name(const string&) noexcept;
		virtual string& get_name() noexcept;
		virtual const string& get_name() const noexcept;
	};


}


#endif

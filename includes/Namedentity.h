#ifndef NAMEDENTITY_H
#define NAMEDENTITY_H

#include <iostream>

namespace earthtwo
{

	using std::string;

	class NamedEntity
	{

	protected:

		string m_name{};

	public:

		virtual void set_name(const string&) noexcept = 0;
		virtual string& get_name() noexcept = 0;
		virtual const string& get_name() const noexcept = 0;
	};


}


#endif

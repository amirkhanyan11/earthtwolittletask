#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
#include <Namedentity.h>

namespace earthtwo
{

	using std::string, std::cout, std::cin;


	class Citizen : public NamedEntity
	{

	// Member data
	private:

		int m_age{};


	// Constructors
	public:

		Citizen() = default;
		Citizen(const string&, int const);

	// Public interface
	public:

		void set_name(const string&) noexcept override;
		void set_age(int const) noexcept;
		string& get_name() noexcept override;
		const string& get_name() const noexcept override;
		int& get_age() noexcept;
		const int& get_age() const noexcept;
	};

}


#endif

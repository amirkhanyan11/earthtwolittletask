#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
#include <Name.h>

namespace earthtwo
{

	using std::string, std::cout, std::cin;


	class Citizen : public Name
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

		// void set_name(const string&) noexcept override;
		// string& get_name() noexcept override;
		// const string& get_name() const noexcept override;

		void set_age(int const) noexcept;
		int& get_age() noexcept;
		const int& get_age() const noexcept;
	};

}


#endif

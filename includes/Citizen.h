#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>

namespace earthtwo
{

	using std::string, std::cout, std::cin;


	class Citizen
	{

	// Member data
	private:

		string m_name{};
		int m_age{};


	// Constructors
	public:

		Citizen() = default;
		Citizen(const string&, int const);

	// Public interface
	public:

		void set_name(const string&) noexcept;
		void set_age(int const) noexcept;
		string& get_name() noexcept;
		const string& get_name() const noexcept;
		int& get_age() noexcept;
		const int& get_age() const noexcept;
	};

}

#include "../srcs/Citizen.hpp"

#endif

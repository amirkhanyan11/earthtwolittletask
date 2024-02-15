#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <memory>
#include <vector>
#include <Citizen.h>
#include <Daytime.h>

namespace earthtwo
{

	using std::string, std::vector, std::cout, std::cin;

	class Country : public Name, public Daytime
	{

	private:

	using CitizenUptrVec = std::vector<std::unique_ptr<Citizen>>;

	// Member data
	private:

		CitizenUptrVec m_population{};

	// Constructors
	public:

		Country();
		Country(const string&, const Citizen& citizen = Citizen(), e_Daytime daytime = e_Daytime::DAY);
		Country(std::initializer_list<Citizen>);
		Country(const Country&);
		Country(Country&&);
		~Country();

	// Public interface
	public:

		// void set_name(const string&) noexcept override;
		// string& get_name() noexcept override;
		// const string& get_name() const noexcept override;
		// void set_time(e_Daytime const) noexcept override;

		void add_citizen(const Citizen&) noexcept;
		const CitizenUptrVec& get_citizens() const noexcept;
		CitizenUptrVec& get_citizens() noexcept;

	};


}

#endif

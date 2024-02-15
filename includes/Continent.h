#ifndef CONTINENT_H
#define CONTINENT_H

#include <Country.h>

namespace earthtwo
{

	using std::string, std::cout, std::cin;

	class Continent : public Name, public Daytime
	{

	// Member data
	private:

		vector<Country> m_countries{};

	// Constructors
	public:

		Continent();
		Continent(const Continent& other);
		Continent(Continent&&);
		Continent(const string&, const vector<Country>& = vector<Country>());

	// Public interface
	public:


	// void set_name(const string&) noexcept override;
	// string& get_name() noexcept override;
	// const string& get_name() const noexcept override;
	// void set_time(e_Daytime) noexcept override;

	void add_country(const Country&) noexcept;
	void add_country(std::initializer_list<Country>) noexcept;
	const vector<Country>& get_countries() const noexcept;
	vector<Country>& get_countries() noexcept;

	};



}

#endif

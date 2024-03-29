#ifndef CONTINENT_H
#define CONTINENT_H

#include <Country.h>
#include <fstream>

namespace earthtwo
{

	using std::string, std::cout, std::cin, std::fstream, std::ostream;

	class Continent : public Name, public Daytime
	{

	// Member data
	private:

		// Change to hashtable
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
		//void set_time(e_Daytime&) noexcept override;

		virtual void set_time(e_Daytime& daytime, ostream& file = cout) noexcept;
		void add_country(const Country&) noexcept;
		void add_country(std::initializer_list<Country>) noexcept;
		const vector<Country>& get_countries() const noexcept;
		vector<Country>& get_countries() noexcept;

	public:

		constexpr Continent& operator=(Continent&&)& noexcept;

	};



}

#endif

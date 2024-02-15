#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <memory>
#include <vector>
#include <Citizen.h>

namespace earthtwo
{

	enum class Daytime
	{
		DAY,
		NIGHT
	};

	using std::string, std::vector, std::cout, std::cin;

	class Country : public NamedEntity
	{

	private:

	using CitizenUptrVec = std::vector<std::unique_ptr<Citizen>>;

	// Member data
	private:

		CitizenUptrVec m_population{};
		Daytime m_daytime{};

	// Constructors
	public:

		Country();
		Country(const string&, const Citizen& citizen = Citizen(), Daytime daytime = Daytime::DAY);
		Country(std::initializer_list<Citizen>);
		Country(const Country&);
		Country(Country&&);

	// Public interface
	public:

		void set_name(const string&) noexcept override;
		string& get_name() noexcept override;
		const string& get_name() const noexcept override;
		void add_citizen(const Citizen&) noexcept;
		void set_time(Daytime const) noexcept;
		const CitizenUptrVec& get_citizens() const noexcept;
		CitizenUptrVec& get_citizens() noexcept;

	};


}

#endif

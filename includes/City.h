#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <memory>
#include <vector>
#include <Citizen.h>

namespace earthtwo
{

	using std::string, std::vector, std::cout, std::cin;

	class City
	{

	private:

	enum class Daytime
	{
		DAY,
		NIGHT
	};

	using CitizenUptrVec = std::vector<std::unique_ptr<Citizen>>;

	private:

		CitizenUptrVec m_population{};
		Daytime m_daytime{};

	public:

		City();
		City(const Citizen& citizen, Daytime daytime = Daytime::DAY);
		City(std::initializer_list<Citizen>);
		City(City&&);

	public:

		void add_citizen(const Citizen&) noexcept;
		void set_time(Daytime const) noexcept;
		const CitizenUptrVec& get_citizens() const noexcept;
		CitizenUptrVec& get_citizens() noexcept;


	};


}

#include "../srcs/City.hpp"

#endif

#include <City.h>

using namespace earthtwo;


// Constructors

City::City() : m_daytime{City::Daytime::DAY}
{
	m_population.push_back(std::make_unique<Citizen>("Lendrush", 42));
	m_population.push_back(std::make_unique<Citizen>("Julberto", 19));
	m_population.push_back(std::make_unique<Citizen>("Alexandro", 80));
}

City::City(City&& other)

	: m_population{std::move((other.m_population))},
	  m_daytime{other.m_daytime} {}

City::City(const Citizen& citizen, Daytime daytime)
{
	m_population.push_back(std::make_unique<Citizen>(citizen));
	m_daytime = daytime;
}


City::City(std::initializer_list<Citizen> citizen_list)
{
	for (auto citizen : citizen_list)
	{
		m_population.push_back(std::make_unique<Citizen>(citizen));
	}
}

// Member methods

void City::add_citizen(const Citizen& citizen) noexcept
{
	m_population.push_back(std::make_unique<Citizen>(citizen));
}

void City::set_time(City::Daytime const daytime) noexcept
{
	m_daytime = daytime;
}

const City::CitizenUptrVec& City::get_citizens() const noexcept
{
	return (m_population);
}

City::CitizenUptrVec& City::get_citizens() noexcept
{
	return (const_cast<CitizenUptrVec&>
	(
		static_cast<const City*>(this)->get_citizens()
	));
}

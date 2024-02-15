#include <Country.h>

using namespace earthtwo;


// Constructors

Country::Country()

	: m_daytime{Daytime::DAY}
{
	m_name = "some_country";
	m_population.push_back(std::make_unique<Citizen>("Lendrush", 42));
	m_population.push_back(std::make_unique<Citizen>("Julberto", 19));
	m_population.push_back(std::make_unique<Citizen>("Alexandro", 80));
}

Country::Country(const Country& other)

	: m_daytime{other.m_daytime}
{
	m_name = other.m_name;
	for (auto&& i : other.m_population)
	{
		m_population.push_back(std::make_unique<Citizen>(*i));
	}
}

Country::Country(Country&& other)

	: m_population{std::move((other.m_population))},
	  m_daytime{other.m_daytime}
{
	m_name = std::move(other.m_name);
}

Country::Country(const string& name, const Citizen& citizen, Daytime daytime)
{
	m_population.push_back(std::make_unique<Citizen>(citizen));
	m_daytime = daytime;
	m_name = name;
}

Country::Country(std::initializer_list<Citizen> citizen_list)
{
	for (auto citizen : citizen_list)
	{
		m_population.push_back(std::make_unique<Citizen>(citizen));
	}
}

// Member methods

void Country::add_citizen(const Citizen& citizen) noexcept
{
	m_population.push_back(std::make_unique<Citizen>(citizen));
}


const Country::CitizenUptrVec& Country::get_citizens() const noexcept
{
	return (m_population);
}

Country::CitizenUptrVec& Country::get_citizens() noexcept
{
	return (const_cast<CitizenUptrVec&>
	(
		static_cast<const Country*>(this)->get_citizens()
	));
}


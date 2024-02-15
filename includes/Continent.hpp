#include <Continent.h>
#include <Country.hpp>

using namespace earthtwo;

// Constructors

Continent::Continent()
{
	m_name = "someContinent";
	m_countries.push_back(Country("country1"));
	m_countries.push_back(Country("country2"));
}

Continent::Continent(Continent&& other)

	: m_countries{std::move(other.m_countries)}
{
	m_name = std::move(other.m_name);

}

Continent::Continent(const string& name, const vector<Country>& county_list)

	: m_countries{county_list}
{
	m_name = name;

}


Continent::Continent(const Continent& other)
	:  m_countries{other.m_countries}
{
	m_name = other.m_name;
}


// Member methods


void Continent::add_country(const Country& country) noexcept
{
	m_countries.push_back(country);
}

void Continent::add_country(std::initializer_list<Country> country_list) noexcept
{
	for (auto& i : country_list)
	{
		this->add_country(i);
	}
}

const vector<Country>& Continent::get_countries() const noexcept
{
	return (m_countries);
}

vector<Country>& Continent::get_countries() noexcept
{
	return (const_cast<vector<Country>&>
	(
		static_cast<const Continent*>(this)->get_countries()
	));
}



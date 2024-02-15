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



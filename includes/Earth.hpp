#include <Earth.h>

using namespace earthtwo;

// Constructors

Earth::Earth()
{
	m_continents[0] = Continent{"Asia"};
	m_continents[1] = Continent{"Africa"};
	m_continents[2] = Continent{"North America"};
	m_continents[3] = Continent{"South America"};
	m_continents[4] = Continent{"Antarctica"};
	m_continents[5] = Continent{"Europe"};
	m_continents[6] = Continent{"Australia"};
}

const Earth::ContinentArr& Earth::get_continents() const noexcept
{
	return (m_continents);
}

Earth::ContinentArr& Earth::get_continents() noexcept
{
	return (const_cast<Earth::ContinentArr&>
	(
		static_cast<const Earth*>(this)->get_continents()
	));
}

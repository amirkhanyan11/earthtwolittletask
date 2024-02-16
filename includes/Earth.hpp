#include <Earth.h>

using namespace earthtwo;

// Constructors


Earth::Earth()
{
	m_continents[e_Continents::Asia] = Continent{"Asia"};
	m_continents[e_Continents::Africa] = Continent{"Africa"};
	m_continents[e_Continents::North_America] = Continent{"North America"};
	m_continents[e_Continents::South_America] = Continent{"South America"};
	m_continents[e_Continents::Antarctica] = Continent{"Antarctica"};
	m_continents[e_Continents::Europe] = Continent{"Europe"};
	m_continents[e_Continents::Australia] = Continent{"Australia"};
}

const Earth::ContinentMap& Earth::get_continents() const noexcept
{
	return (m_continents);
}

Earth::ContinentMap& Earth::get_continents() noexcept
{
	return (const_cast<Earth::ContinentMap&>
	(
		static_cast<const Earth*>(this)->get_continents()
	));
}

void Earth::set_time(e_Daytime& daytime, ofstream& file) noexcept
{
	if (!file.is_open())
	{
		return ;
	}
	m_continents[e_Continents::Europe].set_time(daytime, file);
	m_continents[e_Continents::Asia].set_time(daytime, file);
	m_continents[e_Continents::Africa].set_time(daytime, file);
	m_continents[e_Continents::Australia].set_time(daytime, file);

	daytime = (daytime == e_Daytime::NIGHT) ? e_Daytime::DAY : e_Daytime::NIGHT;

	m_continents[e_Continents::North_America].set_time(daytime, file);
	m_continents[e_Continents::South_America].set_time(daytime, file);
	m_continents[e_Continents::Antarctica].set_time(daytime, file);

}

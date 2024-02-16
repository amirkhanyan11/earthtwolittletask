#include <Continent.h>

using namespace earthtwo;


void Continent::set_time(e_Daytime& daytime, ostream& file) noexcept
{
	switch(daytime)
	{
		case e_Daytime::NIGHT :
			file << "Continent " << this->m_name << " is sleeping\n";
			break;
		default:
			file << "Continent " << this->m_name << " is awake\n";
	}
}


// void Continent::set_name(const string& name) noexcept
// {
// 	this->m_name = name;
// }

// const string& Continent::get_name() const noexcept
// {
// 	return (m_name);
// }

// string& Continent::get_name() noexcept
// {
// 	return (const_cast<string&>
// 	(
// 		static_cast<const Continent*>(this)->get_name()
// 	));
// }

// void Continent::set_time(e_Daytime) noexcept
// {

// }

#include <Continent.h>

using namespace earthtwo;

void Continent::set_name(const string& name) noexcept
{
	this->m_name = name;
}

const string& Continent::get_name() const noexcept
{
	return (m_name);
}

string& Continent::get_name() noexcept
{
	return (const_cast<string&>
	(
		static_cast<const Continent*>(this)->get_name()
	));
}

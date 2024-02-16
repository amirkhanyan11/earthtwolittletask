#include <Citizen.h>

using namespace earthtwo;

Citizen::Citizen(const string& name, int const age)
	: m_age{age}
{
	m_name = name;
}

// Member methods

void Citizen::set_age(int const age) noexcept
{
	if (age > 14 && age < 100)
		m_age = age;
}

const int& Citizen::get_age() const noexcept
{
	return (m_age);
}

int& Citizen::get_age() noexcept
{
	return (const_cast<int&>
	(
		static_cast<const Citizen*>(this)->get_age()
	));
}

#include <Citizen.h>

using namespace earthtwo;

Citizen::Citizen(const string& name, int const age)
	: m_age{age}
{
	m_name = name;
}

// Member methods

void Citizen::set_name(const string& name) noexcept
{
	this->m_name = name;
}

void Citizen::set_age(int const age) noexcept
{
	if (age > 14 && age < 100)
		m_age = age;
}

const string& Citizen::get_name() const noexcept
{
	return (m_name);
}

string& Citizen::get_name() noexcept
{
	return (const_cast<string&>
	(
		static_cast<const Citizen*>(this)->get_name()
	));
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

#include <Name.h>

using namespace earthtwo;

void Name::set_name(const string& name) noexcept
{
	this->m_name = name;
}

const string& Name::get_name() const noexcept
{
	return (m_name);
}

string& Name::get_name() noexcept
{
	return (const_cast<string&>
	(
		static_cast<const Name*>(this)->get_name()
	));
}

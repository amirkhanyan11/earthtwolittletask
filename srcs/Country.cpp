#include <Country.h>

using namespace earthtwo;

Country::~Country() = default;

// void Country::set_time(e_Daytime&) noexcept
// {
// 	cout << "Country " << this->m_name << " is sleeping\n";
// }

// void Country::set_name(const string& name) noexcept
// {
// 	m_name = name;
// }

// const string& Country::get_name() const noexcept
// {
// 	return (m_name);
// }

// string& Country::get_name() noexcept
// {
// 	return (const_cast<string&>
// 	(
// 		static_cast<const Country*>(this)->get_name()
// 	));
// }

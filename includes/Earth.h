#ifndef EARTH_H
#define EARTH_H

#include <Continent.hpp>
#include <array>

namespace earthtwo
{

	class Earth : public Daytime
	{

	private:

		using ContinentArr = std::array<Continent, 7>;

		ContinentArr m_continents{};

	private:

		Earth();
		Earth(const Earth&) = delete;

	public:

		static Earth& get_instance()
		{
			static Earth instance;

			return (instance);
		}

	public:

		const ContinentArr& get_continents() const noexcept;
		ContinentArr& get_continents() noexcept;

	};

}

#endif

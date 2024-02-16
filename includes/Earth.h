#ifndef EARTH_H
#define EARTH_H

#include <Continent.hpp>
#include <unordered_map>

namespace earthtwo
{

	enum class e_Continents
	{
		Asia,
		Africa,
		North_America,
		South_America,
		Antarctica,
		Europe,
		Australia
	};

	class Earth : public Daytime
	{

	private:

		using ContinentMap = std::unordered_map<e_Continents, Continent>;

		ContinentMap m_continents{};

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

		//void set_time(e_Daytime&) noexcept override;

		void set_time(e_Daytime& daytime, ofstream& file) noexcept override;
		const ContinentMap& get_continents() const noexcept;
		ContinentMap& get_continents() noexcept;

	};

}

#endif

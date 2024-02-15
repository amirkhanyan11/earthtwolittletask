#include <Earth.hpp>

int main()
{
	// earthtwo::Country gelenjik;

	auto& arr = Earth::get_instance().get_continents();

	for (auto& i : arr)
	{
		std::cout << i.get_name() << std::endl;
	}

	// for (auto&& i : gelenjik.get_citizens())
	// {
	// 	std::cout << i->get_name() << std::endl;
	// }
	// std::cout << "hello world!" << std::endl;
	return 0;
}

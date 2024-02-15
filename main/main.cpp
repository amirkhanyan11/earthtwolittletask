#include <Continent.hpp>

int main()
{
	earthtwo::Country gelenjik;

	for (auto&& i : gelenjik.get_citizens())
	{
		std::cout << i->get_name() << std::endl;
	}
	std::cout << "hello world!" << std::endl;
	return 0;
}

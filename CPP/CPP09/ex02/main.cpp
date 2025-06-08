# include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
	std::vector<int> numbers;

	if (argc > 1)
	{
		numbers = create_fill_container(argc, argv);
		pmergeme_vector(numbers);
		print_vector(numbers);
	}
	return 0;
}


# include "PmergeMe.hpp"

VectInt pmergeme_vector(VectInt &numbers)
{
	VectInt big;
	VectInt small;
	int		last;

	create_containers(big, small, numbers);
	if (numbers.size() % 2 == 1)
	{
		last = numbers.back();
		small.push_back(last);
	}
	if (big.size() > 1)
		numbers = pmergeme_vector(big);
	numbers = binary_insertion(big, small);
	return numbers;
}

VectInt binary_insertion(VectInt &big, VectInt &small)
{
	VectInt jacob;
	VectInt index;
	VectIntIt it;
	int insert_idx;
	int big_len_ini;
    int big_len;
	int idx_jacob;

	big_len_ini = static_cast<int>(big.size());
    big_len = big_len_ini;
	jacob = create_serie(static_cast<int>(small.size()) - 1);
	for (size_t i = 0; i < big.size(); i++)
		index.push_back(i);
	for (int i = 0; i < static_cast<int>(small.size()); i++)
	{
		idx_jacob = calculate_max_index(jacob, i, index, big_len_ini, big_len);
		insert_idx = binary_search(small[jacob[i]], big, 0, idx_jacob);
		it = big.begin();
		big.insert(it + insert_idx, small[jacob[i]]);
		for (size_t j = 0; j < index.size(); j++)
		{
			if (insert_idx <= index[j])
				index[j]++;
		}
        big_len++;
	}
	return big;
}

int binary_search(int num, VectInt big, int idx_min, int idx_max)
{
	int mid;

	if (idx_min == idx_max)
	{
		if (num < big[idx_min])
			return (idx_min);
		else
			return (idx_min + 1);
	}
	if (idx_min > idx_max)
		return idx_min;
	
	mid = (idx_min + idx_max) / 2;
	if (num > big[mid])
		return binary_search(num, big, mid + 1, idx_max);
	else if (num < big[mid])
		return binary_search(num, big, idx_min, mid - 1);
	else
		return mid;
}

VectInt create_serie(int n)
{
	int j = 0;
	std::vector<int> serie;
	std::vector<int> v;

	v = jacobsthal(n);
	if (n == 0 || n == 1)
	{
		return v;
	}
	serie.push_back(0);
	for (size_t i = 1; i < v.size(); i++)
	{
		j = v[i];
		while (j > v[i - 1])
		{
			if (j <= n)
				serie.push_back(j);
			j--;
		}
	}

	return serie;
}

VectInt jacobsthal(int const n)
{
	int arr[] = {0, 1, 1};
	VectInt aux(arr, arr + sizeof(arr) / sizeof(arr[0]));
	VectInt jacob(arr, arr + sizeof(arr) / sizeof(arr[0]) - 1);
	int i = aux.size();
	int value;
	while (n > aux.back())
	{
		value = aux[i - 1] + 2 * aux[i - 2];
		aux.push_back(value);
		jacob.push_back(value);
		i++;
	}
	if (n == 0)
	{
		jacob.pop_back();
		return jacob;
	}
	return jacob;
}

int calculate_max_index(VectInt jacob, int i, VectInt index, int big_len_ini, int big_len)
{
	if (jacob[i] == big_len_ini)
		return (big_len - 1);
	else
		return (index[jacob[i]]);
}

VectInt create_fill_container(int argc, char const *argv[])
{
	VectInt numbers;
	int temp;
	
	for (int i = 1; i < argc; i++)
	{
		validate_number(argv[i]);
		temp = atoi(argv[i]);
		numbers.push_back(temp);
	}
	return numbers;
}

void	create_containers(VectInt &big, VectInt &small, VectInt &numbers)
{
	for (size_t i = 0; i < numbers.size() - 1; i++)
	{
		if (numbers[i] > numbers[i + 1])
		{
			big.push_back(numbers[i]);
			small.push_back(numbers[i + 1]);
		}
		else
		{
			small.push_back(numbers[i]);
			big.push_back(numbers[i + 1]);
		}
		if (i != numbers.size() - 1)
			i++;
	}
}

void print_vector(VectInt numbers)
{
	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}

void validate_number(char const *argv)
{
	std::string aux = static_cast<std::string>(argv);

	for (size_t i = 0; i < aux.length(); i++)
	{
		if (i == 0 && (aux[0] == '-' || aux[0] == '+'))
			continue;
		if (isdigit(argv[i]) == false)
		{
			std::cerr << "Error" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	double temp;
	temp = atof(argv);
	if (temp > INT_MAX || temp < INT_MIN)
	{
		std::cerr << "Error" << std::endl;
		exit(EXIT_FAILURE);
	}
}


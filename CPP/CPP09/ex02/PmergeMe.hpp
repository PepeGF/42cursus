# pragma once

# include <iostream>
# include <cstdlib>
# include <vector>
# include <iomanip>


# define INT_MAX 2147483647
# define INT_MIN -2147483648


typedef std::vector<int> 			VectInt;
typedef std::vector<int>::iterator	VectIntIt;


/*           VECTOR FUNCTIONS SORT             */
VectInt	pmergeme_vector(VectInt &numbers);
VectInt binary_insertion(VectInt &big, VectInt &small);
int		binary_search(int num, VectInt big, int idx_min, int idx_max);
VectInt	create_serie(int n);
VectInt	jacobsthal(int const n);
int     calculate_max_index(VectInt jacob, int i, VectInt index, int big_len_ini, int big_len);

/*           VECTOR FUNCTIONS AUX             */
VectInt	create_fill_container(int argc, char const *argv[]);
void	create_containers(VectInt &big, VectInt &small, VectInt &numbers);
void	print_vector(VectInt numbers);

/*              COMMON FUNCTIONS              */
void	validate_number(char const *argv);

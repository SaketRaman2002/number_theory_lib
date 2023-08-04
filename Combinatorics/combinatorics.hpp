#ifndef COMBINATORICS_ADVANCED_HPP
#define COMBINATORICS_ADVANCED_HPP

#include <vector>
#include <utility>

namespace CombinatoricsAdvanced
{
    int factorial(int n);
    int binomial_coefficient(int n, int k);
    int permutation(int n, int k);
    int count_solutions_linear_diophantine(int a, int b, int c);
    int binomial_expansion_coefficient(int n, int k, int x, int y);
} // namespace CombinatoricsAdvanced

#endif // COMBINATORICS_ADVANCED_HPP

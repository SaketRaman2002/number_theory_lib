#ifndef NUMBER_THEORY_CORE_HPP
#define NUMBER_THEORY_CORE_HPP

namespace NumberTheoryCore
{
    int gcd(int a, int b);
    int lcm(int a, int b);
    int mod_inverse(int a, int m);
    int mod_add(int a, int b, int m);
    int mod_sub(int a, int b, int m);
    int mod_mul(int a, int b, int m);
    int mod_pow(int a, int b, int m);
}

#endif // NUMBER_THEORY_CORE_HPP

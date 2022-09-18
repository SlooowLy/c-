# include <string>
# include <iostream>

typedef uint16_t fixed_point_t;


inline double fixed_to_double(fixed_point_t input)
{
    return ((double)input / (double)(1 << 8));
}

inline fixed_point_t double_to_fixed(double input)
{
    return (fixed_point_t)(round(input * (1 << 8)));
}

int main()
{
    std::cout << double_to_fixed(10);
}
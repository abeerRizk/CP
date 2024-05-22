#include <iostream>
using namespace std;
//BitMasks
bool Even_Or_Odd(int x)
{
    return (x & 1);
}
void to_binary(int x)
{
    while (x)
    {
        cout << (x & 1);
        x >>= 1;
    }
    return;
}
int count_bits_1(int x)
{
    int counter = 0;
    while (x)
    {
        counter += (x & 1);
        x >>= 1;
    }
    /*
    while (x)
    {
        x &= (x - 1);
        counter++;
    }
    */
    return counter;
}
int Get_bit(int x, int  indx)
{
    return ((x >> indx) & 1);
}
int Convert_bit_To_1(int x, int  indx)
{
    x |= (1 << indx);
    return x;
}
int Convert_bit_To_0(int x, int  indx)
{
    x &= (~(1 << indx));
    return x;
}
int Flip(int x, int indx)
{
    x ^= (1 << indx);
    return x;
}
int How_many_bits(int x)
{
    int counter = 0;
    while (x)
    {
        x >>= 1;
        counter++;
    }
    return counter;
}
bool if_power_of_two(int x)
{
    return (x & (x - 1)) == 0;
}
int first_power_of_two(int x)
{
    if (if_power_of_two(x))
        return x;
    else
        return 1 << (How_many_bits(x)-1);
}
void flip_first_one_from_right(int x)
{
    x &= (x - 1);

}
int get_value_of_first_one(int x)
{
    return x - (x & (x - 1));
    // return ~ (x - 1) & x;
}
int main() {
	// your code goes here
	return 0;
}

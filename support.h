/* 
 * Header for file containing support fuctions.
 */

#include <sstream>
using namespace std;

// create a string of binary values from an int.
string int_to_bstring(unsigned x, unsigned int n);

// Counts all the set bits of an int.
unsigned int count_set_bits(unsigned int n);
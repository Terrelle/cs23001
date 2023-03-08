// Terrelle Tettey
// Bigint Implementation
// CS23001

#include "bigint.hpp"

bigint::bigint()
{
    for (int i = 0; i < CAPACITY; ++i)
    {
        array[i] = 0;
    }
}

bigint::bigint(int a)
{
    // CONVERTS AN INTEGER TO A BIGINT
    int temp_a;  // create a temp variable

    for (int i = 0; i < CAPACITY; ++i)
    {
        temp_a = a % 10;
        a /= 10;
        array[i] = temp_a;
    }
}

/*
bigint::bigint(const char valuechar[]){
    int counter = 0;
    while(valuechar[counter] != '\0') ++counter;
    for(int i = counter-1; i >= 0; --i){
        digit[counter-i-1] = valuechar[i] - '0';
    }
}
*/

bigint::bigint(const char valuechar[]) : bigint()
{
    // Setting up logic to count through the characters in the array [ '8', '4', '1', etc...] - 5 lines
    int temp_char = 0;
    while (valuechar[temp_char] != '\0')
    {
        ++temp_char;
    }

    // logic to iterate through entire character array and set that to valuechar[i] - 0
    for (int i = temp_char - 1; i >= 0; --i)
    {
        array[temp_char - i - 1] = valuechar[i] - '0';
    }
} // temp_char = number of elements at that point in time.
// So if: ['3', '4', '6', '2', '8'] (5 elements),
// array[5-0-1] = 4 -> so this corresponds to the index of the last element, 8 (++i)
// array[5-1-1] = 3 -> so this corresponds to the index of the last but one element, 2 (++i) etc

void bigint::debugPrint(std::ostream &out) const
{
    for (int i = CAPACITY - 1; i >= 0; --i)
    {
        out << array[i] << "|";
    }
}

std::ostream &operator<<(std::ostream &out, const bigint &rhs)
{
    int num_count = 0;
    int i = CAPACITY - 1;

    for (; i > 0 && rhs.array[i] == 0; --i)
    {
    }

    for (; i >= 0; --i)
    {
        if (num_count < 80)
            out << rhs.array[i];

        else
            out << rhs.array[i] << std::endl;
    }

    return out;
}

bool bigint::operator==(const bigint &equalValue) const
{

    for (int i = 0; i < CAPACITY; ++i)
    {
        if (array[i] != equalValue.array[i])
            return false;
    }
    return true;
}

std::istream& operator>>(std::istream &in, bigint &object)
{
   int i = 0;
   char ch = 0;
   char temp_var[CAPACITY];

   while(!in.eof()){
       if(ch != ';'){
           temp_var[i] = ch;
           ++i;
       } else 
       break;
   }
   temp_var[i] = ch;
   object = bigint(temp_var);
   return in;
}

bigint bigint::operator+(const bigint &rhs) const{
    bigint result;
    int temp_val;
    int carry_over;
    
    for (int i = 0; i < CAPACITY; ++i){
    temp_val = array[i] + rhs.array[i] + carry_over;
    result.array[i] = temp_val % 10;
    carry_over = temp_val/10;
    
    }
    
    return result;
}


int bigint::operator[](int exp) const
{
        if (exp < 0 || exp > CAPACITY)
            return -1;
    return array[exp];
}


bigint bigint::timesDigit(int singleDigit) const {

   bigint product = *(this);
   int carry_over = 0;
   int finalValue = 0;
   int tempValue = 0;

   for(int i = 0; i < CAPACITY; ++i){
       tempValue = carry_over + array[i] * singleDigit;
       finalValue = tempValue % 10;
       carry_over = tempValue / 10; // pulling out the remainder
       product.array[i] = finalValue;
   }
   return product;
}


bigint bigint::times10(int n) const{
    bigint NewValue;
    
    for (int i = CAPACITY-n-1; i >= 0; --i) // CAPACITY-n-1 serves as a guard to prevent us from exceeding max capacity
    {
        NewValue.array[i + n] = array[i];
    }

    return NewValue;
}

bigint bigint::operator*(const bigint& rhs) const{
    bigint product;

    for(int i = 0; i < CAPACITY; ++i){
        product = product + (timesDigit(rhs.array[i]).times10(i));
    }
    return product;
}


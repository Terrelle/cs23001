// Terrelle Tettey
// Bigint Header
// CS23001

#include <iostream>

#ifndef biginit_hpp
#define biginit_hpp

const int CAPACITY = 200;

class bigint
{

public:
        bigint();
        bigint(int);
        bigint(const char[]);
        void debugPrint(std::ostream &) const;
        bool operator==(const bigint &) const;

        friend std::ostream &operator<<(std::ostream &, const bigint &);
        friend std::istream &operator>>(std::istream &, bigint &);
        bigint operator+(const bigint&) const;

        int operator[](int) const;
        bigint timesDigit(int) const;
        bigint times10(int) const;
        bigint operator*(const bigint&) const;

private:
        int array[CAPACITY];
};

#endif

#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
using namespace std;

namespace ariel 
{
class MagicalContainer 
{
private:
    std::vector<int> elements; //the container

public:
    // constructor
     MagicalContainer(); 
     MagicalContainer(MagicalContainer &other);
    ~MagicalContainer();
    // function's
    void addElement(int element);
    void removeElement(int element);
    const std::vector<int>& getElements() const;
    int size() const;

    // sub_class
        class AscendingIterator;
        class SideCrossIterator;
        class PrimeIterator;

};

/*AscendingIterator class*/
class MagicalContainer::AscendingIterator // ascending order - סדר עולה
{
private:
    const MagicalContainer& container;
    int currentIndex;
    
public:
    //constructor
    AscendingIterator(const MagicalContainer& container); // defult
    AscendingIterator(const AscendingIterator& ascIter); //copy
    ~AscendingIterator(); // destructor

    //function
    AscendingIterator& operator=(const AscendingIterator& other);
    bool operator==(const AscendingIterator& other) const;
    bool operator!=(const AscendingIterator& other) const;
    bool operator>(const AscendingIterator& other) const;
    bool operator<(const AscendingIterator& other) const;
    int operator*();
    AscendingIterator& operator++();
    AscendingIterator begin();
    AscendingIterator end();
};

/*SideCrossIterator class*/
 class MagicalContainer::SideCrossIterator // cross order - סדר צולב
{
private:
    const MagicalContainer& container;
    int currentIndex;
   

public:
    //constructor
    SideCrossIterator(const MagicalContainer& container); // defult
    SideCrossIterator(const SideCrossIterator& ascIter); //copy
    ~SideCrossIterator(); // destructor

    //function
    SideCrossIterator& operator=(const SideCrossIterator& other);
    bool operator==(const SideCrossIterator& other) const;
    bool operator!=(const SideCrossIterator& other) const;
    bool operator>(const SideCrossIterator& other) const;
    bool operator<(const SideCrossIterator& other) const;
    int operator*();
    SideCrossIterator& operator++();
    SideCrossIterator begin();
    SideCrossIterator end();
};

/*PrimeIterator class*/
 class MagicalContainer::PrimeIterator // prime numbers
{
private:
    const MagicalContainer& container;
    int currentIndex;

public:
    //constructor
    PrimeIterator(const MagicalContainer& container); // defult
    PrimeIterator(const PrimeIterator& ascIter); //copy
    ~PrimeIterator(); // destructor

    //function
    PrimeIterator& operator=(const PrimeIterator& other);
    bool operator==(const PrimeIterator& other) const;
    bool operator!=(const PrimeIterator& other) const;
    bool operator>(const PrimeIterator& other) const;
    bool operator<(const PrimeIterator& other) const;
    int operator*();
    PrimeIterator& operator++();
    PrimeIterator begin();
    PrimeIterator end();
};

} // namespace ariel

#include "MagicalContainer.hpp"
#include <algorithm>
#include <vector>

namespace ariel 
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//MagicalContainer
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

MagicalContainer::MagicalContainer()
{

}

MagicalContainer::MagicalContainer(MagicalContainer &other)
{
this->elements = other.elements;
}

MagicalContainer::~MagicalContainer() 
{

}

void MagicalContainer::addElement(int element) 
{
    elements.push_back(element);
}

void MagicalContainer::removeElement(int element) 
{
// Declare an iterator to traverse the elements
    std::vector<int>::iterator it;
// Iterate over the elements and remove the specified element
    for (it = elements.begin(); it != elements.end(); ++it) {
        if (*it == element) 
        {
            elements.erase(it);
            break;  
        }
    }
}

const std::vector<int>& MagicalContainer::getElements() const 
{
    return elements;
}

int MagicalContainer::size() const  
{
    int size_ = elements.size();
    return size_;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AscendingIterator
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// constrctor
 MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer& other)
        : container(other), currentIndex(0)
    {

    }

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other)
        : container(other.container), currentIndex(other.currentIndex)
        {

        } 

    MagicalContainer::AscendingIterator::~AscendingIterator()
    {}

    //function
     MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other)
    {
        return *this;
    }

    
     bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const
    {
        return false;
    }

     bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const
    {
        return false;
    }

     bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const
    {
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*() 
    {
    return 0;
    }

      MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
    {
        return *this;
    }

     MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
    {
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
    {
        return *this;
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SideCrossIterator
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// constrctor
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer& other)
        : container(other), currentIndex(0)
    {

    }


    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other)
        : container(other.container), currentIndex(other.currentIndex)
    {

    } 

   MagicalContainer::SideCrossIterator::~SideCrossIterator()
    {

    }
    //function
     MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other) {
        return *this;
    }
    
     bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const {
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*() {
        return 0;
    }

     MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() {
        return *this;
    }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PrimeIterator
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// constrctor
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer& other)
    : container(other), currentIndex(0) 
{

}

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other)
    : container(other.container), currentIndex(other.currentIndex) 
{

}

MagicalContainer::PrimeIterator::~PrimeIterator()
{

}

// function
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other)
{
return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const
{
return false;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const
{
return false;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const
{
return false;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const
{
return false;
}

int MagicalContainer::PrimeIterator::operator*()
{
return 0;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
return *this;
}


} // namespace ariel
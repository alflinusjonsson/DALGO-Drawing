#include "student4_arrayque.h"
#include "assert.h"

const char* nameOfStudentAQue(){
    return "Linus Jönsson";
}

AQue::AQue()
{
    _theArr = new float [10];
    _capacity = 10;
    _size = 0;
    _indexOfFront = 0;
}

AQue::~AQue()
{
    delete [] _theArr;
}

void AQue::pushBack(float value)
{
    _theArr[(_indexOfFront + _size) % _capacity] = value;
    _size+=1;
}

float &AQue::back()
{
    return _theArr[((_indexOfFront +_size-1) % _capacity)];
}

void AQue::popFront()
{
    assert (_size > 0);

    _size-=1;
    if (_indexOfFront >= 9)
        _indexOfFront = 0;
    else
        _indexOfFront += 1;
}

float &AQue::front()
{
    return _theArr[_indexOfFront];
}

int AQue::size()
{
    return _size;
}


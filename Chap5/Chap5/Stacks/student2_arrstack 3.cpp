#include "student2_arrstack.h"
#include <assert.h>
#include <algorithm>

const char* nameOfStudentAStack(){
    return "Linus Jönsson";
}

AStack::AStack()
{
    _theArr = new float [10];
    _capacity = 10;
    _size = 0;
}

AStack::~AStack()
{
    delete [] _theArr;
}

void AStack::pushBack(float value)
{

    if (_size >=_capacity) {

        _capacity = _capacity+10;

        float *arr = _theArr;
        _theArr = new float [_capacity+10];
        for(int i=0; i < _size; i++)
        {
             _theArr[i] = arr[i];
        }

        delete [] arr;
    }
        _theArr[_size] = value;
        _size +=1;

}

float &AStack::back()
{
    assert(_size > 0);
    return _theArr[_size-1];
}

void AStack::popBack()
{
    assert(_size > 0);
    _size-= 1;
}

int AStack::size()
{
    return _size;
}

/******** kommentar som efterfrågades i "öka istället linjärt"

  blev det någon skillnad när du ökade arraystorleken med 10 istället för med dubbleing?

  +10 tar mycket längre tid, antagligen för att just att lägga till 10 enheter kommer göras betydligt fler gånger än vad
  en dubblering hade gjorts.
***********************************************************************/

#ifndef AQUE_H
#define AQUE_H

const char* nameOfStudentAQue();


class AQue
{
    // Till studenten: Man får ändra på denna privata del av klassen om man vill

    float *_theArr;
    int    _capacity;
    int    _indexOfFront;
    int    _size;

public:
    // Till studenten: implementera dessa metoder i cpp-filen
    // Alla metoder ha (genomsnittlig) komplexitet O(1)
    AQue();
    ~AQue();

    void pushBack(float value);
    float &back();
    void popFront();
    float &front();
    int  size();
};

#endif // AQUE_H

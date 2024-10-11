#include <iostream>

struct PointCort
{
    int firstPoint;
    int secondPoint;
};

struct PrzmoUgolnik
{
    PointCort leftUpPoint;
    PointCort rightDownPoint;
};

void chek(PrzmoUgolnik pru, PointCort po)
{
    if (po.firstPoint >= pru.leftUpPoint.firstPoint && po.firstPoint <= pru.rightDownPoint.firstPoint
        && po.secondPoint <= pru.leftUpPoint.secondPoint && po.secondPoint >= pru.rightDownPoint.secondPoint)
    {
        std::cout << "All good";
    }
    else
    {
        std::cout << "No";
    }
}

int main()
{
    PrzmoUgolnik obe = { {0,10},{10,0} };

    PointCort onePoint={ 5,5 };
    PointCort twoPoint={ 15,15 };

    chek(obe, onePoint);
    chek(obe, twoPoint);
}


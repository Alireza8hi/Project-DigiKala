#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include"Commodity.h"

class DigiKala : public QObject
{
    Q_OBJECT
private:
        Commodity * digikala_commonities;
public:
    DigiKala();
};

#endif // DIGIKALA_H

#pragma once
#include "../utility/Unit.h"

class QuantityMeasurement {

    double value;
    Unit unit;
    
public:
    QuantityMeasurement(Unit, double);
   
    bool operator== (QuantityMeasurement) const;
    bool operator== (QuantityMeasurement*) const;
    bool compare(QuantityMeasurement);
    double add(QuantityMeasurement);
};
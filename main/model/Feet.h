#pragma once

class Feet {

    double value;
    
public:
    Feet(double);
   
    bool operator== (Feet) const;
    bool operator== (Feet*) const;
};
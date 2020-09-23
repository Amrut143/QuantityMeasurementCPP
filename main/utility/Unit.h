#pragma once
#include "TypesOfUnit.h"

class Unit {

    public:
        double base_conversion_factor;
        TypesOfUnit types_of_unit;

        Unit(double base_conversion_factor, TypesOfUnit types_of_unit);
    
    public:
        Unit();
        static Unit INCH;
        static Unit FEET;
        static Unit YARD;
        static Unit CM;
        static Unit GALLON;
        static Unit LITRE;
        static Unit ML;
        static Unit KG;
        static Unit GRAM;
        static Unit TONNE;

        double get_base_value(double value);
};
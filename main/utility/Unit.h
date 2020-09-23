#pragma once

class Unit {

    double base_conversion_factor;

    Unit(double base_conversion_factor);
    
    public:
        Unit();
        static Unit INCH;
        static Unit FEET;

        double get_base_value(double value);
};
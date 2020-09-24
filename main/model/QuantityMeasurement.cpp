#include <typeinfo>
#include "../model/QuantityMeasurement.h"

QuantityMeasurement::QuantityMeasurement(Unit unit, double value) {
    this->value = value;
    this->unit = unit;
}

bool QuantityMeasurement::compare(QuantityMeasurement that) {
    if(this->unit.types_of_unit == that.unit.types_of_unit) {
        double first_value = unit.get_base_value(this->value);
        double second_value = that.unit.get_base_value(that.value);
        return (first_value == second_value);
    }
    return false;
}

bool QuantityMeasurement::compareTemperature(QuantityMeasurement that) {
    double first_value = 0.0;
    if(this->unit.types_of_unit == that.unit.types_of_unit) {
        if(this->unit == unit.CELSIUS)
            first_value = unit.get_temp_base_value(this->value);
        double second_value = that.unit.get_base_value(that.value);
        return (first_value == second_value);
    }
    return false;
}

double QuantityMeasurement::add(QuantityMeasurement that) {
    if(this->unit.types_of_unit == that.unit.types_of_unit) {
        double first_value = unit.get_base_value(this->value);
        double second_value = that.unit.get_base_value(that.value);
        return (first_value + second_value);
    }
    return 0.0;
}


bool QuantityMeasurement::operator== (QuantityMeasurement other) const {
    if((this->value == other.value &&
            typeid(this->value).name() == typeid(other.value).name())) {
                return true;
    }
    return false;
}

bool QuantityMeasurement::operator== (QuantityMeasurement *other) const {
    if (other == nullptr) {
        return false;
    }
    return (this->value == other->value &&
             typeid(this->value).name() == typeid(other->value).name());
}
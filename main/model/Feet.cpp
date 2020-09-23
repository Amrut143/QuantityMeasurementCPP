#include <typeinfo>
#include "../model/Feet.h"

Feet::Feet(double value) {
    this->value = value;
}

bool Feet::operator== (Feet other) const {
    if((this->value == other.value &&
            typeid(this->value).name() == typeid(other.value).name())) {
                return true;
    }
    return false;
}

bool Feet::operator== (Feet *other) const {
    if (other == nullptr) {
        return false;
    }
    return (this->value == other->value &&
             typeid(this->value).name() == typeid(other->value).name());
}
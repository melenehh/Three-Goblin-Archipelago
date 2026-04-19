#include "PropertyPathTestObject.h"

UPropertyPathTestObject::UPropertyPathTestObject() {
    this->bool = false;
    this->EnumOne = One;
    this->EnumTwo = One;
    this->EnumThree = One;
    this->EnumFour = One;
    this->Integer = 0;
    this->String = TEXT("Default");
    this->float = 0.00f;
    this->InnerObject = NULL;
}

void UPropertyPathTestObject::SetStructRef(FPropertyPathTestStruct InStruct) {
}

void UPropertyPathTestObject::SetStructConstRef(FPropertyPathTestStruct InStruct) {
}

void UPropertyPathTestObject::SetStruct(FPropertyPathTestStruct InStruct) {
}

void UPropertyPathTestObject::SetFloat(float InFloat) {
}

FPropertyPathTestStruct UPropertyPathTestObject::GetStructRef() const {
    return FPropertyPathTestStruct{};
}

FPropertyPathTestStruct UPropertyPathTestObject::GetStructConstRef() const {
    return FPropertyPathTestStruct{};
}

FPropertyPathTestStruct UPropertyPathTestObject::GetStruct() const {
    return FPropertyPathTestStruct{};
}

float UPropertyPathTestObject::GetFloat() const {
    return 0.0f;
}



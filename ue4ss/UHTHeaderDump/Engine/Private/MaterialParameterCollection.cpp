#include "MaterialParameterCollection.h"

UMaterialParameterCollection::UMaterialParameterCollection() {
}

TArray<FName> UMaterialParameterCollection::GetVectorParameterNames() const {
    return TArray<FName>();
}

FLinearColor UMaterialParameterCollection::GetVectorParameterDefaultValue(FName ParameterName, bool& bParameterFound) const {
    return FLinearColor{};
}

TArray<FName> UMaterialParameterCollection::GetScalarParameterNames() const {
    return TArray<FName>();
}

float UMaterialParameterCollection::GetScalarParameterDefaultValue(FName ParameterName, bool& bParameterFound) const {
    return 0.0f;
}



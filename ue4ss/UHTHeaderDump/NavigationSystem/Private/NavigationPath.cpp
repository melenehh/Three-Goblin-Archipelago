#include "NavigationPath.h"

UNavigationPath::UNavigationPath() {
    this->RecalculateOnInvalidation = ENavigationOptionFlag::Default;
}

bool UNavigationPath::IsValid() const {
    return false;
}

bool UNavigationPath::IsStringPulled() const {
    return false;
}

bool UNavigationPath::IsPartial() const {
    return false;
}

double UNavigationPath::GetPathLength() const {
    return 0.0;
}

double UNavigationPath::GetPathCost() const {
    return 0.0;
}

FString UNavigationPath::GetDebugString() const {
    return TEXT("");
}

void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation) {
}

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor) {
}



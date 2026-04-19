#include "PhysicsObjectBlueprintLibrary.h"

UPhysicsObjectBlueprintLibrary::UPhysicsObjectBlueprintLibrary() {
}

FTransform UPhysicsObjectBlueprintLibrary::GetPhysicsObjectWorldTransform(UPrimitiveComponent* Component, FName BoneName) {
    return FTransform{};
}

FClosestPhysicsObjectResult UPhysicsObjectBlueprintLibrary::GetClosestPhysicsObjectFromWorldLocation(UPrimitiveComponent* Component, const FVector& WorldLocation) {
    return FClosestPhysicsObjectResult{};
}

bool UPhysicsObjectBlueprintLibrary::ExtractClosestPhysicsObjectResults(const FClosestPhysicsObjectResult& Result, FName& OutName) {
    return false;
}

void UPhysicsObjectBlueprintLibrary::ApplyRadialImpulse(UPrimitiveComponent* Component, FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bApplyStrain) {
}



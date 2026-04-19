#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ClosestPhysicsObjectResult -FallbackName=ClosestPhysicsObjectResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERadialImpulseFalloff -FallbackName=ERadialImpulseFalloff
#include "BlueprintFunctionLibrary.h"
#include "PhysicsObjectBlueprintLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPhysicsObjectBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhysicsObjectBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetPhysicsObjectWorldTransform(UPrimitiveComponent* Component, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FClosestPhysicsObjectResult GetClosestPhysicsObjectFromWorldLocation(UPrimitiveComponent* Component, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ExtractClosestPhysicsObjectResults(const FClosestPhysicsObjectResult& Result, FName& OutName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRadialImpulse(UPrimitiveComponent* Component, FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bApplyStrain);
    
};


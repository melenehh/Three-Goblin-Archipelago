#pragma once
#include "CoreMinimal.h"
#include "PointLightComponent.h"
#include "SpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpotLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterConeAngle;
    
    USpotLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};


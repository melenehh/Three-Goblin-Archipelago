#pragma once
#include "CoreMinimal.h"
#include "ELightUnits.h"
#include "LightComponent.h"
#include "LightmassPointLightSettings.h"
#include "LocalLightComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULocalLightComponent : public ULightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightUnits IntensityUnits;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InverseExposureBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightmassPointLightSettings LightmassSettings;
    
    ULocalLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIntensityUnits(ELightUnits NewIntensityUnits);
    
    UFUNCTION(BlueprintCallable)
    void SetAttenuationRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
    
};


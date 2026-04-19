#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldResolutionType -FallbackName=EFieldResolutionType
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataProcessingResolution.generated.h"

class UFieldSystemMetaDataProcessingResolution;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldResolutionType> ResolutionType;
    
    UFieldSystemMetaDataProcessingResolution(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType);
    
};


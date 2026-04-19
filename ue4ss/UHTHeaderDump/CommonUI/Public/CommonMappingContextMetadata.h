#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommonMappingContextMetadataInterface.h"
#include "CommonMappingContextMetadata.generated.h"

class UCommonInputMetadata;
class UInputAction;

UCLASS(Blueprintable)
class COMMONUI_API UCommonMappingContextMetadata : public UDataAsset, public ICommonMappingContextMetadataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonInputMetadata* EnhancedInputMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, UCommonInputMetadata*> PerActionEnhancedInputMetadata;
    
    UCommonMappingContextMetadata();


    // Fix for true pure virtual functions not being implemented
};


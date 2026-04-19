#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "CompositeFallbackFont.h"
#include "CompositeSubFont.generated.h"

USTRUCT(BlueprintType)
struct FCompositeSubFont : public FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInt32Range> CharacterRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cultures;
    
    SLATECORE_API FCompositeSubFont();
};


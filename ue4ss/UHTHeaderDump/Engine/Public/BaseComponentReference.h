#pragma once
#include "CoreMinimal.h"
#include "BaseComponentReference.generated.h"

USTRUCT(BlueprintType)
struct FBaseComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToComponent;
    
    ENGINE_API FBaseComponentReference();
};


#pragma once
#include "CoreMinimal.h"
#include "Redirector.generated.h"

USTRUCT(BlueprintType)
struct FRedirector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewName;
    
    ENGINE_API FRedirector();
};


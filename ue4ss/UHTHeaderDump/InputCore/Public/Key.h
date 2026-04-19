#pragma once
#include "CoreMinimal.h"
#include "Key.generated.h"

USTRUCT(BlueprintType)
struct FKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
public:
    INPUTCORE_API FKey();
};
FORCEINLINE uint32 GetTypeHash(const FKey) { return 0; }


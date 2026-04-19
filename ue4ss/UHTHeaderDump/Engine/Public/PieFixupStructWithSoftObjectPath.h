#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "PieFixupStructWithSoftObjectPath.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPieFixupStructWithSoftObjectPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TypedPtr;
    
    ENGINE_API FPieFixupStructWithSoftObjectPath();
};


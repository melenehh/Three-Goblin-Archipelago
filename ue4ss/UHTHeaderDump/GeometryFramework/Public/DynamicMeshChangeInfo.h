#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshAttributeChangeFlags.h"
#include "EDynamicMeshChangeType.h"
#include "DynamicMeshChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct FDynamicMeshChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMeshChangeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMeshAttributeChangeFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRevertChange;
    
    GEOMETRYFRAMEWORK_API FDynamicMeshChangeInfo();
};


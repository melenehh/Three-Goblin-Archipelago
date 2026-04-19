#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkeletalMeshEditorData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USkeletalMeshEditorData : public UObject {
    GENERATED_BODY()
public:
    USkeletalMeshEditorData();

};


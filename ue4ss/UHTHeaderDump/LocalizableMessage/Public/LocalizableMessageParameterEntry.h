#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "LocalizableMessageParameterEntry.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessageParameterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Value;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessageParameterEntry();
};


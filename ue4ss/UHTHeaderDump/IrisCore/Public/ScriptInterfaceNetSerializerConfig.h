#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "ScriptInterfaceNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* InterfaceClass;
    
    IRISCORE_API FScriptInterfaceNetSerializerConfig();
};


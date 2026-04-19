#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SupportsStructNetSerializerConfig.h"
#include "ReplicationStateDescriptorConfig.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UReplicationStateDescriptorConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList;
    
public:
    UReplicationStateDescriptorConfig();

};


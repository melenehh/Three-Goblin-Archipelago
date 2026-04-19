#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AISystemBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UAISystemBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath AISystemClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    FName AISystemModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    bool bInstantiateAISystemOnClient;
    
public:
    UAISystemBase();

};


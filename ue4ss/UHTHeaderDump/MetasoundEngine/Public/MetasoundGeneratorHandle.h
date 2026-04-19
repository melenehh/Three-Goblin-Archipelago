#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaSoundOutput.h"
#include "OnMetasoundOutputValueChangedDelegate.h"
#include "MetasoundGeneratorHandle.generated.h"

class UAudioComponent;
class UMetasoundGeneratorHandle;
class UMetasoundParameterPack;

UCLASS(Blueprintable)
class METASOUNDENGINE_API UMetasoundGeneratorHandle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOutputValueChangedMulticast, FName, Name, const FMetaSoundOutput&, Output);
    
    UMetasoundGeneratorHandle();

    UFUNCTION(BlueprintCallable)
    bool WatchOutput(FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    
    UFUNCTION(BlueprintCallable)
    static UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyParameterPack(UMetasoundParameterPack* Pack);
    
};


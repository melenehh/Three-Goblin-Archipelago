#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "OnMetasoundOutputValueChangedDelegate.h"
#include "MetaSoundOutputSubsystem.generated.h"

class UAudioComponent;
class UMetasoundGeneratorHandle;

UCLASS(Blueprintable)
class METASOUNDENGINE_API UMetaSoundOutputSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMetasoundGeneratorHandle*> TrackedGenerators;
    
public:
    UMetaSoundOutputSubsystem();

    UFUNCTION(BlueprintCallable)
    bool WatchOutput(UAudioComponent* AudioComponent, FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    
};


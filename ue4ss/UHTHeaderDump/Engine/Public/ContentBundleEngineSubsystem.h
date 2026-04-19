#pragma once
#include "CoreMinimal.h"
#include "EngineSubsystem.h"
#include "ContentBundleEngineSubsystem.generated.h"

class UContentBundleTypeFactory;

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UContentBundleEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UContentBundleTypeFactory> ContentBundleTypeFactoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UContentBundleTypeFactory* ContentBundleTypeFactory;
    
public:
    UContentBundleEngineSubsystem();

};


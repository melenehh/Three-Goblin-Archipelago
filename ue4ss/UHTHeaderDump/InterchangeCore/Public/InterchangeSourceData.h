#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeSourceData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSourceData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
public:
    UInterchangeSourceData();

    UFUNCTION(BlueprintCallable)
    bool SetFilename(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilename() const;
    
};


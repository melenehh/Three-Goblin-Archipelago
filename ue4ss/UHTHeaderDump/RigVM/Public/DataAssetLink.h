#pragma once
#include "CoreMinimal.h"
#include "NameSpacedUserData.h"
#include "DataAssetLink.generated.h"

class UDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class RIGVM_API UDataAssetLink : public UNameSpacedUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* DataAsset;
    
    UDataAssetLink();

    UFUNCTION(BlueprintCallable)
    void SetDataAsset(UDataAsset* InDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataAsset* GetDataAsset() const;
    
};


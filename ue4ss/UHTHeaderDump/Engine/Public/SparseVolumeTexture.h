#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SparseVolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USparseVolumeTexture : public UObject {
    GENERATED_BODY()
public:
    USparseVolumeTexture();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumMipLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFrames() const;
    
};


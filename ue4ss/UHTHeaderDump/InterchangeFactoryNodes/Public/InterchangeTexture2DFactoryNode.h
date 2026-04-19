#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
#include "InterchangeTextureFactoryNode.h"
#include "InterchangeTexture2DFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeTexture2DFactoryNode();

    UFUNCTION(BlueprintCallable)
    void SetSourceBlocks(const TMap<int32, FString>& InSourceBlocks);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBlockByCoordinates(int32 X, int32 Y, const FString& InSourceFile);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBlock(int32 BlockIndex, const FString& InSourceFile);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddressY(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddressX(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FString> GetSourceBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSourceBlockByCoordinates(int32 X, int32 Y, FString& OutSourceFile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSourceBlock(int32 BlockIndex, FString& OutSourceFile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue) const;
    
};


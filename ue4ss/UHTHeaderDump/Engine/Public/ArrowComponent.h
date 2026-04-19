#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PrimitiveComponent.h"
#include "ArrowComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UArrowComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ArrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsScreenSizeScaled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTreatAsASprite: 1;
    
    UArrowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseInEditorScaling(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTreatAsASprite(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenSize(float NewScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void SetIsScreenSizeScaled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowSize(float NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowLength(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowFColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowColor(FLinearColor NewColor);
    
};


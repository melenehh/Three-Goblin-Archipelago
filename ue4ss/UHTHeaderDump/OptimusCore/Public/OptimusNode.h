#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EOptimusDiagnosticLevel.h"
#include "OptimusNode.generated.h"

class UOptimusNodePin;

UCLASS(Abstract, Blueprintable)
class OPTIMUSCORE_API UOptimusNode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FVector2D GraphPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodePin*> Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TSet<FName> ExpandedPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDiagnosticLevel DiagnosticLevel;
    
public:
    UOptimusNode();

    UFUNCTION(BlueprintCallable)
    bool SetGraphPosition(const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNodeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNodeCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGraphPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
};


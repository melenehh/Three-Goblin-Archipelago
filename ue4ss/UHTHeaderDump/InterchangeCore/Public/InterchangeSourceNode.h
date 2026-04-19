#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseNode.h"
#include "InterchangeSourceNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSourceNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSourceNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceTimelineStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceTimelineEnd(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceFrameRateNumerator(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceFrameRateDenominator(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportUnusedMaterial(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimatedTimeStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimatedTimeEnd(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSourceNode(const FString& UniqueID, const FString& DisplayLabel);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceTimelineStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceTimelineEnd(double& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceFrameRateNumerator(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceFrameRateDenominator(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportUnusedMaterial(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimatedTimeStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimatedTimeEnd(double& AttributeValue) const;
    
};


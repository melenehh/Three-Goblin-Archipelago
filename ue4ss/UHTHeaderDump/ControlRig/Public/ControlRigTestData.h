#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ControlRigTestDataFrame.h"
#include "EControlRigTestDataPlaybackMode.h"
#include "ControlRigTestData.generated.h"

class UControlRig;
class UControlRigTestData;

UCLASS(Blueprintable)
class CONTROLRIG_API UControlRigTestData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ControlRigObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigTestDataFrame Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigTestDataFrame> InputFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigTestDataFrame> OutputFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FramesToSkip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Tolerance;
    
    UControlRigTestData();

    UFUNCTION(BlueprintCallable)
    bool SetupReplay(UControlRig* InControlRig, bool bGroundTruth);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseReplay();
    
    UFUNCTION(BlueprintCallable)
    bool Record(UControlRig* InControlRig, double InRecordingDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTimeRange(bool bInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlRigTestDataPlaybackMode GetPlaybackMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrameIndexForTime(double InSeconds, bool bInput) const;
    
    UFUNCTION(BlueprintCallable)
    static UControlRigTestData* CreateNewAsset(const FString& InDesiredPackagePath, const FString& InBlueprintPathName);
    
};


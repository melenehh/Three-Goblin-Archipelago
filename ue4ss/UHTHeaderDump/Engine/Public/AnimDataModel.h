#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimDataModelModifiedDynamicEventDelegate.h"
#include "AnimatedBoneAttribute.h"
#include "AnimationCurveData.h"
#include "AnimationDataModel.h"
#include "BoneAnimationTrack.h"
#include "AnimDataModel.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, MinimalAPI)
class UAnimDataModel : public UObject, public IAnimationDataModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BracketCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimDataModelModifiedDynamicEvent ModifiedEventDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneAnimationTrack> BoneAnimationTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationCurveData CurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimatedBoneAttribute> AnimatedBoneAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopulated;
    
public:
    UAnimDataModel();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsValidBoneTrackName(const FName& TrackName) const override PURE_VIRTUAL(IsValidBoneTrackName, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidBoneTrackIndex(int32 TrackIndex) const override PURE_VIRTUAL(IsValidBoneTrackIndex, return false;);
    
    UFUNCTION(BlueprintCallable)
    double GetPlayLength() const override PURE_VIRTUAL(GetPlayLength, return 0.0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumBoneTracks() const override PURE_VIRTUAL(GetNumBoneTracks, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfTransformCurves() const override PURE_VIRTUAL(GetNumberOfTransformCurves, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfKeys() const override PURE_VIRTUAL(GetNumberOfKeys, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfFrames() const override PURE_VIRTUAL(GetNumberOfFrames, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfFloatCurves() const override PURE_VIRTUAL(GetNumberOfFloatCurves, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FFrameRate GetFrameRate() const override PURE_VIRTUAL(GetFrameRate, return FFrameRate{};);
    
    UFUNCTION(BlueprintCallable)
    void GetBoneTrackNames(TArray<FName>& OutNames) const override PURE_VIRTUAL(GetBoneTrackNames,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBoneTrackIndexByName(FName TrackName) const override PURE_VIRTUAL(GetBoneTrackIndexByName, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBoneTrackIndex(const FBoneAnimationTrack& Track) const override PURE_VIRTUAL(GetBoneTrackIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FBoneAnimationTrack GetBoneTrackByName(FName TrackName) const override PURE_VIRTUAL(GetBoneTrackByName, return FBoneAnimationTrack{};);
    
    UFUNCTION(BlueprintCallable)
    FBoneAnimationTrack GetBoneTrackByIndex(int32 TrackIndex) const override PURE_VIRTUAL(GetBoneTrackByIndex, return FBoneAnimationTrack{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBoneAnimationTrack> GetBoneAnimationTracks() const override PURE_VIRTUAL(GetBoneAnimationTracks, return TArray<FBoneAnimationTrack>(););
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetAnimationSequence() const override PURE_VIRTUAL(GetAnimationSequence, return NULL;);
    
};


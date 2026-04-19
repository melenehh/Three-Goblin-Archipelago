#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BoneAnimationTrack.h"
#include "AnimationDataModel.generated.h"

class UAnimSequence;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UAnimationDataModel : public UInterface {
    GENERATED_BODY()
};

class IAnimationDataModel : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsValidBoneTrackName(const FName& TrackName) const PURE_VIRTUAL(IsValidBoneTrackName, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsValidBoneTrackIndex(int32 TrackIndex) const PURE_VIRTUAL(IsValidBoneTrackIndex, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual double GetPlayLength() const PURE_VIRTUAL(GetPlayLength, return 0.0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumBoneTracks() const PURE_VIRTUAL(GetNumBoneTracks, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumberOfTransformCurves() const PURE_VIRTUAL(GetNumberOfTransformCurves, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumberOfKeys() const PURE_VIRTUAL(GetNumberOfKeys, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumberOfFrames() const PURE_VIRTUAL(GetNumberOfFrames, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumberOfFloatCurves() const PURE_VIRTUAL(GetNumberOfFloatCurves, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FFrameRate GetFrameRate() const PURE_VIRTUAL(GetFrameRate, return FFrameRate{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetBoneTrackNames(TArray<FName>& OutNames) const PURE_VIRTUAL(GetBoneTrackNames,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetBoneTrackIndexByName(FName TrackName) const PURE_VIRTUAL(GetBoneTrackIndexByName, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetBoneTrackIndex(const FBoneAnimationTrack& Track) const PURE_VIRTUAL(GetBoneTrackIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FBoneAnimationTrack GetBoneTrackByName(FName TrackName) const PURE_VIRTUAL(GetBoneTrackByName, return FBoneAnimationTrack{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FBoneAnimationTrack GetBoneTrackByIndex(int32 TrackIndex) const PURE_VIRTUAL(GetBoneTrackByIndex, return FBoneAnimationTrack{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FBoneAnimationTrack> GetBoneAnimationTracks() const PURE_VIRTUAL(GetBoneAnimationTracks, return TArray<FBoneAnimationTrack>(););
    
    UFUNCTION(BlueprintCallable)
    virtual UAnimSequence* GetAnimationSequence() const PURE_VIRTUAL(GetAnimationSequence, return NULL;);
    
};


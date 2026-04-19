#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESwapRootBone -FallbackName=ESwapRootBone
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneSkeletalAnimRootMotionTrackParams.h"
#include "MovieSceneSkeletalAnimationTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacySectionIndexBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendFirstChildOfRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwapRootBone SwapRootBone;
    
    UMovieSceneSkeletalAnimationTrack();

    UFUNCTION(BlueprintCallable)
    void SetSwapRootBone(ESwapRootBone InValue);
    
    UFUNCTION(BlueprintCallable)
    ESwapRootBone GetSwapRootBone() const;
    
};


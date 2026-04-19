#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimatedSparseVolumeTextureController.generated.h"

class USparseVolumeTexture;
class USparseVolumeTextureFrame;

UCLASS(Blueprintable, MinimalAPI)
class UAnimatedSparseVolumeTextureController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USparseVolumeTexture* SparseVolumeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingStreamingRequests;
    
    UAnimatedSparseVolumeTextureController();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    USparseVolumeTextureFrame* GetFrameByIndex(int32 FrameIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetFractionalFrameIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetDuration();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentFramesForInterpolation(USparseVolumeTextureFrame*& Frame0, USparseVolumeTextureFrame*& Frame1, float& LerpAlpha);
    
    UFUNCTION(BlueprintCallable)
    USparseVolumeTextureFrame* GetCurrentFrame();
    
};


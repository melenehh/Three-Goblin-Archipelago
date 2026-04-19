#ifndef UE4SS_SDK_IGLE_A_ExamplePlacableIconMaker_HPP
#define UE4SS_SDK_IGLE_A_ExamplePlacableIconMaker_HPP

class AIGLE_A_ExamplePlacableIconMaker_C : public AActor
{
    class URectLightComponent* RectLight5;                                            // 0x0298 (size: 0x8)
    class URectLightComponent* RectLight4;                                            // 0x02A0 (size: 0x8)
    class URectLightComponent* RectLight3;                                            // 0x02A8 (size: 0x8)
    class URectLightComponent* RectLight2;                                            // 0x02B0 (size: 0x8)
    class URectLightComponent* RectLight1;                                            // 0x02B8 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x02C0 (size: 0x8)
    class USceneCaptureComponent2D* IconCapture;                                      // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)

    void CapturePlacableIcons(TArray<class AActor*>& TempActors, TMap<class TSubclassOf<AActor>, class UTexture*>& ActorClassToIconMap);
}; // Size: 0x2D8

#endif

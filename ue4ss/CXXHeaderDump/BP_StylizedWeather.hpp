#ifndef UE4SS_SDK_BP_StylizedWeather_HPP
#define UE4SS_SDK_BP_StylizedWeather_HPP

class ABP_StylizedWeather_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SunBillboard;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cloud_01;                                             // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cloud_00;                                             // 0x02B0 (size: 0x8)
    class USkyLightComponent* SkyLight;                                               // 0x02B8 (size: 0x8)
    class UDirectionalLightComponent* DirectionalLight;                               // 0x02C0 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* SkySphere;                                            // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)
    float AddWindOffset_timeCorse_11DBF1FF43395BCADEB902A5594032E5;                   // 0x02E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AddWindOffset__Direction_11DBF1FF43395BCADEB902A5594032E5; // 0x02E4 (size: 0x1)
    class UTimelineComponent* AddWindOffset;                                          // 0x02E8 (size: 0x8)
    float TL_SetSunVisible_Alpha_CB339DB3495012A8B7FB5D88011EFD2E;                    // 0x02F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_SetSunVisible__Direction_CB339DB3495012A8B7FB5D88011EFD2E; // 0x02F4 (size: 0x1)
    class UTimelineComponent* TL_SetSunVisible;                                       // 0x02F8 (size: 0x8)
    float TL_Change_Wind_Dir_Alpha_38C48ECF44E19BC239D678A209260972;                  // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_Change_Wind_Dir__Direction_38C48ECF44E19BC239D678A209260972; // 0x0304 (size: 0x1)
    class UTimelineComponent* TL_Change Wind Dir;                                     // 0x0308 (size: 0x8)
    float TL_TimeCourse_timeCorse_242ACB254976C52A12324FA73993243C;                   // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_TimeCourse__Direction_242ACB254976C52A12324FA73993243C; // 0x0314 (size: 0x1)
    class UTimelineComponent* TL_TimeCourse;                                          // 0x0318 (size: 0x8)
    bool TimeDebug;                                                                   // 0x0320 (size: 0x1)
    int32 Init Hour;                                                                  // 0x0324 (size: 0x4)
    int32 Init Minute;                                                                // 0x0328 (size: 0x4)
    double 1 Hour Seconds;                                                            // 0x0330 (size: 0x8)
    TArray<class UMaterialInstance*> TimeMaterial;                                    // 0x0338 (size: 0x10)
    class UMaterialInstanceDynamic* CloudMaterial;                                    // 0x0348 (size: 0x8)
    class UMaterialInstanceDynamic* SphereMaterial;                                   // 0x0350 (size: 0x8)
    class UMaterialInstanceDynamic* CurrentDynamicParam;                              // 0x0358 (size: 0x8)
    class UMaterialInstance* CurrentParam;                                            // 0x0360 (size: 0x8)
    class UMaterialInstance* NextParam;                                               // 0x0368 (size: 0x8)
    int32 CurrentHour;                                                                // 0x0370 (size: 0x4)
    int32 Current Minute;                                                             // 0x0374 (size: 0x4)
    double WorldTime;                                                                 // 0x0378 (size: 0x8)
    class UDataTable* WeatherData;                                                    // 0x0380 (size: 0x8)
    TEnumAsByte<Enum_Weaher::Type> InitWeather;                                       // 0x0388 (size: 0x1)
    TEnumAsByte<Enum_Weaher::Type> Before Weather;                                    // 0x0389 (size: 0x1)
    int32 WeatherChangeCycle;                                                         // 0x038C (size: 0x4)
    FVector WindDir;                                                                  // 0x0390 (size: 0x18)
    double WindSpeed;                                                                 // 0x03A8 (size: 0x8)
    bool WindChange;                                                                  // 0x03B0 (size: 0x1)
    double WindChangeCycle Seconds Min;                                               // 0x03B8 (size: 0x8)
    double WindChangeCycle Seconds Max;                                               // 0x03C0 (size: 0x8)
    TArray<FStruct_Weather> RaffleWeatherArray;                                       // 0x03C8 (size: 0x10)
    class UCurveLinearColor* NextSunColor;                                            // 0x03D8 (size: 0x8)
    class UCurveLinearColor* CurrentSunColor;                                         // 0x03E0 (size: 0x8)
    class UCurveLinearColor* NextSkyLightColor;                                       // 0x03E8 (size: 0x8)
    class UCurveLinearColor* CurrentSkyLightColor;                                    // 0x03F0 (size: 0x8)
    FStruct_Weather NextWeather;                                                      // 0x03F8 (size: 0x48)
    FStruct_Weather NextWeather Buf;                                                  // 0x0440 (size: 0x48)
    FVector WindOffset;                                                               // 0x0488 (size: 0x18)
    FVector CurrentWindDir_buf;                                                       // 0x04A0 (size: 0x18)
    FVector NextWindDir;                                                              // 0x04B8 (size: 0x18)
    class UCurveLinearColor* NextFogColor;                                            // 0x04D0 (size: 0x8)
    class UCurveLinearColor* CurrentFogColor;                                         // 0x04D8 (size: 0x8)
    class UCurveFloat* SunAngle;                                                      // 0x04E0 (size: 0x8)
    double AngleClamp;                                                                // 0x04E8 (size: 0x8)
    class UCurveFloat* DarknessParam;                                                 // 0x04F0 (size: 0x8)
    class UCurveFloat* SunRizeOffset;                                                 // 0x04F8 (size: 0x8)
    double RiseTime(DebugParam);                                                      // 0x0500 (size: 0x8)
    double DownTime(DebugParam);                                                      // 0x0508 (size: 0x8)
    FRotator RotationSetting;                                                         // 0x0510 (size: 0x18)
    class UMaterialInterface* SunMaterial;                                            // 0x0528 (size: 0x8)
    double SunSize;                                                                   // 0x0530 (size: 0x8)
    class UMaterialInterface* MoonMaterial;                                           // 0x0538 (size: 0x8)
    double MoonSize;                                                                  // 0x0540 (size: 0x8)
    class UCurveLinearColor* CurrentOverallColor;                                     // 0x0548 (size: 0x8)
    class UCurveLinearColor* NextOverallColor;                                        // 0x0550 (size: 0x8)
    double BaseScale;                                                                 // 0x0558 (size: 0x8)
    bool SunVisible;                                                                  // 0x0560 (size: 0x1)
    double SphereSize;                                                                // 0x0568 (size: 0x8)
    TArray<class AActor*> WeatherEvent Actors;                                        // 0x0570 (size: 0x10)

    void WeatherEventCall Setup();
    void WeatherEventCall();
    void CreateDynamicMat();
    void Time Skip(int32 Hour, int32 Minute, TEnumAsByte<Enum_Weaher::Type> Weather);
    void ChangeMatParam(double InputAlpha);
    void WeatherRaffleSetting();
    void InitializeSetting(int32 Hour, int32 Minute, TEnumAsByte<Enum_Weaher::Type> Weather);
    void ChangeSunParam(double Time, double NextWeatherAlpha);
    void SetNextWeather(int32 NextHour);
    void Change Param(double Time);
    void Setup();
    void UserConstructionScript();
    void AddWindOffset__FinishedFunc();
    void AddWindOffset__UpdateFunc();
    void TL_Change Wind Dir__FinishedFunc();
    void TL_Change Wind Dir__UpdateFunc();
    void TL_SetSunVisible__FinishedFunc();
    void TL_SetSunVisible__UpdateFunc();
    void TL_TimeCourse__FinishedFunc();
    void TL_TimeCourse__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void PlayTimeLine NewTime(double NewTime);
    void ChangeWindDir();
    void SetSunVisible();
    void ExecuteUbergraph_BP_StylizedWeather(int32 EntryPoint);
}; // Size: 0x580

#endif

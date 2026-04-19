#ifndef UE4SS_SDK_Struct_Weather_HPP
#define UE4SS_SDK_Struct_Weather_HPP

struct FStruct_Weather
{
    TEnumAsByte<Enum_Weaher::Type> WeatherName_26_F72244384181F932930C06A074C9BC4D;   // 0x0000 (size: 0x1)
    int32 Weight_25_E779B5B244389F928CC6F3AD130B9EEA;                                 // 0x0004 (size: 0x4)
    class UMaterialInstance* MaterialInstance_37_6AE97BF348D227751A816595DBDC2670;    // 0x0008 (size: 0x8)
    class UCurveLinearColor* SunColor_19_1A68A0664FA7D88543A94EB791BF27BC;            // 0x0010 (size: 0x8)
    class UCurveLinearColor* SkyLightColor_22_4895B0E140DA8DDA0FF0468DEA02380A;       // 0x0018 (size: 0x8)
    class UCurveLinearColor* FogColor_42_165ADA774FC44E89B22F6D9220A38315;            // 0x0020 (size: 0x8)
    class UCurveLinearColor* OverallColor_53_9180AB814770FBFCB26B6EBE53254EEB;        // 0x0028 (size: 0x8)
    TArray<FStruct_ScalarParamOverride> ScalarParamOverride_35_0FB9EF2C4407839DBD7EFF86050D4F3B; // 0x0030 (size: 0x10)
    bool SunVisible_49_EF4F0C624EE4F7C55381E2920ADD7A12;                              // 0x0040 (size: 0x1)

}; // Size: 0x41

#endif

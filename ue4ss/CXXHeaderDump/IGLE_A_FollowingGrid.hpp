#ifndef UE4SS_SDK_IGLE_A_FollowingGrid_HPP
#define UE4SS_SDK_IGLE_A_FollowingGrid_HPP

class AIGLE_A_FollowingGrid_C : public AActor
{
    class UStaticMeshComponent* Plane;                                                // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double PrimaryGridLineWidth;                                                      // 0x02A8 (size: 0x8)
    double SecondaryGridSize;                                                         // 0x02B0 (size: 0x8)
    double SecondaryGridLineWidth;                                                    // 0x02B8 (size: 0x8)
    double PrimaryGridSize;                                                           // 0x02C0 (size: 0x8)
    class UMaterialInterface* GridMaterial;                                           // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* GridMatInstance;                                  // 0x02D0 (size: 0x8)
    double ConstantZLocation;                                                         // 0x02D8 (size: 0x8)

    void UpdateGrid();
    void UserConstructionScript();
}; // Size: 0x2E0

#endif

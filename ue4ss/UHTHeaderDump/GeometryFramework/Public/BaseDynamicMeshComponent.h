#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=ToolFrameworkComponent -FallbackName=ToolFrameworkComponent
#include "EDynamicMeshComponentColorOverrideMode.h"
#include "EDynamicMeshVertexColorTransformMode.h"
#include "MeshCommandChangeTarget.h"
#include "MeshReplacementCommandChangeTarget.h"
#include "MeshVertexCommandChangeTarget.h"
#include "BaseDynamicMeshComponent.generated.h"

class UDynamicMesh;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBaseDynamicMeshComponent : public UMeshComponent, public IToolFrameworkComponent, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplicitShowWireframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WireframeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMeshComponentColorOverrideMode ColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ConstantColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMeshVertexColorTransformMode ColorSpaceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFlatShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableViewModeOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideRenderMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SecondaryRenderMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRayTracing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BaseMaterials;
    
    UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewModeOverridesEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryRenderMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryBuffersVisibility(bool bSetVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideRenderMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWireframeRenderPass(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRaytracing(bool bSetEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFlatShading(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetConstantOverrideColor(FColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOverrideRenderMaterial(int32 K) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetViewModeOverridesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShadowsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetSecondaryRenderMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSecondaryBuffersVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlatShadingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableWireframeRenderPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableRaytracing() const;
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* GetDynamicMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetConstantOverrideColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDynamicMeshComponentColorOverrideMode GetColorOverrideMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSecondaryRenderMaterial();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideRenderMaterial();
    

    // Fix for true pure virtual functions not being implemented
};


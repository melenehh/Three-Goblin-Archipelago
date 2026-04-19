#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMHost -FallbackName=RigVMHost
#include "ERigExecutionType.h"
#include "RigControlElement.h"
#include "RigControlElementCustomization.h"
#include "RigElementKey.h"
#include "RigHierarchySettings.h"
#include "RigInfluenceMapPerEvent.h"
#include "Templates/SubclassOf.h"
#include "ControlRig.generated.h"

class AActor;
class UAnimationDataSourceRegistry;
class UControlRig;
class UControlRigShapeLibrary;
class UObject;
class URigHierarchy;
class UTransformableControlHandle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CONTROLRIG_API UControlRig : public URigVMHost, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnControlSelectedBPControlRig, EnterPropertyName, UControlRig*, Rig, const FRigControlElement&, Control, bool, bSelected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERigExecutionType ExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigHierarchySettings HierarchySettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigHierarchy* DynamicHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ShapeLibraryNameMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* InteractionRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> InteractionRigClass;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlSelectedBP OnControlSelected_BP;
    
public:
    UControlRig();

    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintCallable)
    void SelectControl(const FName& InControlName, bool bSelect);
    
    UFUNCTION(BlueprintCallable)
    void RequestConstruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlSelected(const FName& InControlName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* GetInteractionRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHostingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigHierarchy* GetHierarchy();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UControlRig*> FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> CurrentControlSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTransformableControlHandle* CreateTransformableControlHandle(UObject* Outer, const FName& ControlName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlSelection();
    

    // Fix for true pure virtual functions not being implemented
};


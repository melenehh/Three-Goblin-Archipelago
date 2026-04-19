#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=NameSpacedUserData -FallbackName=NameSpacedUserData
#include "ControlRigShapeLibraryLink.generated.h"

class UControlRigShapeLibrary;

UCLASS(Blueprintable, EditInlineNew)
class CONTROLRIG_API UControlRigShapeLibraryLink : public UNameSpacedUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRigShapeLibrary* ShapeLibrary;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ShapeNames;
    
public:
    UControlRigShapeLibraryLink();

    UFUNCTION(BlueprintCallable)
    void SetShapeLibrary(UControlRigShapeLibrary* InShapeLibrary);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRigShapeLibrary* GetShapeLibrary() const;
    
};


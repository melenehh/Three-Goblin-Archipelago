#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPropertyPathTestEnum.h"
#include "PropertyPathTestStruct.h"
#include "PropertyPathTestObject.generated.h"

class UPropertyPathTestObject;

UCLASS(Blueprintable)
class UPropertyPathTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPropertyPathTestEnum> EnumOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPropertyPathTestEnum> EnumTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPropertyPathTestEnum> EnumThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPropertyPathTestEnum> EnumFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Integer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyPathTestStruct Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyPathTestStruct StructRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyPathTestStruct StructConstRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPropertyPathTestObject* InnerObject;
    
    UPropertyPathTestObject();

    UFUNCTION(BlueprintCallable)
    void SetStructRef(FPropertyPathTestStruct InStruct);
    
    UFUNCTION(BlueprintCallable)
    void SetStructConstRef(FPropertyPathTestStruct InStruct);
    
    UFUNCTION(BlueprintCallable)
    void SetStruct(FPropertyPathTestStruct InStruct);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(float InFloat);
    
    UFUNCTION(BlueprintCallable)
    FPropertyPathTestStruct GetStructRef() const;
    
    UFUNCTION(BlueprintCallable)
    FPropertyPathTestStruct GetStructConstRef() const;
    
    UFUNCTION(BlueprintCallable)
    FPropertyPathTestStruct GetStruct() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFloat() const;
    
};


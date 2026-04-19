#pragma once
#include "CoreMinimal.h"
#include "SoftObjectPath.h"
#include "TestUndeclaredScriptStructObjectReferencesTest.generated.h"

class UObject;

USTRUCT(BlueprintType, NoExport)
struct FTestUndeclaredScriptStructObjectReferencesTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* StrongObjectPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SoftObjectPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SoftObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> WeakObjectPointer;
    
    COREUOBJECT_API FTestUndeclaredScriptStructObjectReferencesTest();
};


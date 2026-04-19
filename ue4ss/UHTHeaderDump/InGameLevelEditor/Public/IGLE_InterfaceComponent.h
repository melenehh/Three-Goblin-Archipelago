#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IGLEProperty.h"
#include "IGLE_OnPropertyValueChangedDelegate.h"
#include "IGLE_InterfaceComponent.generated.h"

class AActor;
class UIGLE_PropertyValueObject;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INGAMELEVELEDITOR_API UIGLE_InterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlacableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlacableDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlacableCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PlacableIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGLEProperty> Properties;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGLE_OnPropertyValueChanged OnPropertyValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CallOnPropertyChangedOnLoad;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RuntimePlacableName;
    
    UIGLE_InterfaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRuntimeName(const FString& NewRuntimeName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* Owner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyValueByName(const FString& PropertyName, UIGLE_PropertyValueObject*& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyByValueObject(UIGLE_PropertyValueObject* PropertyValueObject, FIGLEProperty& Property);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyByName(const FString& PropertyName, FIGLEProperty& Property);
    
    UFUNCTION(BlueprintCallable)
    void CallOnPropertyValueChanged(const FString& PropertyName);
    
};


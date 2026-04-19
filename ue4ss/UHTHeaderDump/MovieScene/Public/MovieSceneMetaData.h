#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneMetaDataInterface.h"
#include "MovieSceneMetaData.generated.h"

UCLASS(Blueprintable, MinimalAPI, PerObjectConfig, Config=EditorSettings)
class UMovieSceneMetaData : public UObject, public IMovieSceneMetaDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Created;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Notes;
    
public:
    UMovieSceneMetaData();

    UFUNCTION(BlueprintCallable)
    void SetNotes(const FString& InNotes);
    
    UFUNCTION(BlueprintCallable)
    void SetCreated(FDateTime InCreated);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthor(const FString& InAuthor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNotes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthor() const;
    

    // Fix for true pure virtual functions not being implemented
};


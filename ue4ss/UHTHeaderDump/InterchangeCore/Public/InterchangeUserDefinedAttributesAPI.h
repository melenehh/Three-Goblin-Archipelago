#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeUserDefinedAttributeInfo.h"
#include "InterchangeUserDefinedAttributesAPI.generated.h"

class UInterchangeBaseNode;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeUserDefinedAttributesAPI : public UObject {
    GENERATED_BODY()
public:
    UInterchangeUserDefinedAttributesAPI();

    UFUNCTION(BlueprintCallable)
    static bool RemoveUserDefinedAttribute(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserDefinedAttributeInfos(const UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserDefinedAttribute_Int32(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, int32& OutValue, FString& OutPayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserDefinedAttribute_FString(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserDefinedAttribute_Float(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserDefinedAttribute_Double(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserDefinedAttribute_Boolean(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateAllUserDefinedAttribute(const UInterchangeBaseNode* InterchangeSourceNode, UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserDefinedAttribute_Int32(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const int32& Value, const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserDefinedAttribute_FString(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const FString& Value, const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserDefinedAttribute_Float(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const float& Value, const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserDefinedAttribute_Double(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const double& Value, const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserDefinedAttribute_Boolean(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const bool& Value, const FString& PayloadKey);
    
};


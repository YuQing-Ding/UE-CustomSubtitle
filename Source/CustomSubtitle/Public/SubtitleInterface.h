// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SubtitleInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleReceivedSignature, const FText&, SubtitleText);

// This class does not need to be modified.
UINTERFACE(MinimalAPI, NotBlueprintable, BlueprintType)
class USubtitleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CUSTOMSUBTITLE_API ISubtitleInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    UFUNCTION(BlueprintCallable, Category = "SubtitleHook")
    virtual void UpdateSubtitleText(const FText& SubtitleText) = 0;

    UFUNCTION(BlueprintCallable, Category = "SubtitleHook")
    virtual void SetAutoUpdateText(bool NewValue);

    UFUNCTION(BlueprintCallable, Category = "SubtitleHook")
    virtual bool GetAutoUpdateText() const;
protected:
    bool bAutoUpdateText = true;
};

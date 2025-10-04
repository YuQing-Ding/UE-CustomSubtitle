// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "SubtitleInterface.h"
#include "SubtitleTextBlock.generated.h"


/**
 * 
 */
UCLASS()
class CUSTOMSUBTITLE_API USubtitleTextBlock : public UTextBlock, public ISubtitleInterface
{
	GENERATED_BODY()
	
public:
	USubtitleTextBlock(const FObjectInitializer& ObjectInitializer);

	
	

	// Inherited via ISubtitleInterface
	virtual void UpdateSubtitleText(const FText& SubtitleText) override;
	
	UPROPERTY(BlueprintAssignable, Category="SubtitleHook")
	FSubtitleReceivedSignature OnSubtitleReceived;
};

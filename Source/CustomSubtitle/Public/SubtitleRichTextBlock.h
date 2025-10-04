// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "SubtitleInterface.h"
#include "SubtitleRichTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMSUBTITLE_API USubtitleRichTextBlock : public URichTextBlock, public ISubtitleInterface
{
	GENERATED_BODY()
	
public:
	USubtitleRichTextBlock(const FObjectInitializer& ObjectInitializer);
	
	virtual void UpdateSubtitleText(const FText& SubtitleText) override;

	UPROPERTY(BlueprintAssignable, Category = "SubtitleHook")
	FSubtitleReceivedSignature OnSubtitleReceived;
};

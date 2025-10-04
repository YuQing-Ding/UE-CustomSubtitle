// Fill out your copyright notice in the Description page of Project Settings.


#include "SubtitleRichTextBlock.h"
#include "SubtitleManager.h"

USubtitleRichTextBlock::USubtitleRichTextBlock(const FObjectInitializer& ObjectInitializer)
	: URichTextBlock(ObjectInitializer)
{
	if (FSubtitleManager* SubtitleManager = FSubtitleManager::GetSubtitleManager())
	{
		SubtitleManager->OnSetSubtitleText().AddUFunction(this, FName("UpdateSubtitleText"));
	}
}

void USubtitleRichTextBlock::UpdateSubtitleText(const FText& SubtitleText)
{
	if (GetAutoUpdateText())
	{
		SetText(SubtitleText);
	}
	else
	{
		if (OnSubtitleReceived.IsBound())
			OnSubtitleReceived.Broadcast(SubtitleText);
	}
}





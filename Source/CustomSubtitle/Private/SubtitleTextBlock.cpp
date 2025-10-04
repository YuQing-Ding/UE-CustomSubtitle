// Fill out your copyright notice in the Description page of Project Settings.


#include "SubtitleTextBlock.h"
#include "SubtitleManager.h"

USubtitleTextBlock::USubtitleTextBlock(const FObjectInitializer& ObjectInitializer)
{
	if (FSubtitleManager* SubtitleManager = FSubtitleManager::GetSubtitleManager())
	{
		SubtitleManager->OnSetSubtitleText().AddUFunction(this, FName("UpdateSubtitleText"));
	}
}

void USubtitleTextBlock::UpdateSubtitleText(const FText& SubtitleText)
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

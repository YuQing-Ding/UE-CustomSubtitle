// Fill out your copyright notice in the Description page of Project Settings.


#include "SubtitleInterface.h"


// Add default functionality here for any ISubtitleInterface functions that are not pure virtual.

void ISubtitleInterface::SetAutoUpdateText(bool NewValue)
{
	bAutoUpdateText = NewValue;
}

bool ISubtitleInterface::GetAutoUpdateText() const
{
	return bAutoUpdateText;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteFiles.h"

bool UReadWriteFiles::LoadTxt(FString FileName, FString& LoadedText)
{
	return FFileHelper::LoadFileToString(LoadedText, *(FPaths::GameSourceDir() + FileName));
}

bool UReadWriteFiles::SaveTxt(FString TextToSave, FString FileName)
{
	return FFileHelper::SaveStringToFile(TextToSave, *(FPaths::GameSourceDir() + FileName));
}
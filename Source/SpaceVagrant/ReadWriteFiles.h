// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "ReadWriteFiles.generated.h"

/**
 * Blueprint function library code to save and load different file types
 */
UCLASS()
class SPACEVAGRANT_API UReadWriteFiles : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintPure, Category = "SaveLoadFiles", meta = (Keywords = "LoadTxt"))
			static bool LoadTxt(FString FileName, FString& LoadedText);

		UFUNCTION(BlueprintCallable, Category = "SaveLoadFiles", meta = (Keywords = "SaveTxt"))
			static bool SaveTxt(FString TextToSave, FString FileName);

	
};

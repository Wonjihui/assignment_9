// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HW09GameBlueprintFunctionLibary.generated.h"

/**
 * 
 */
UCLASS()
class CHATX_API UHW09GameBlueprintFunctionLibary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable)
	static FString GenerateSecretNumber();

	UFUNCTION(BlueprintCallable)
	static bool IsGuessNumberString(const FString& InNumberString);

	UFUNCTION(BlueprintCallable)
	static FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	
};

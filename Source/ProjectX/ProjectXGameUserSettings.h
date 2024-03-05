// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ProjectXGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTX_API UProjectXGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UProjectXGameUserSettings* GetProjectXGameUserSettings();

	// Global sound volume
	UFUNCTION(BlueprintCallable)
	void SetSoundGlobalVolume(float NewVolume);

	UFUNCTION(BlueprintPure)
	float GetSoundGlobalVolume() const;

	// Music sound volume
	UFUNCTION(BlueprintCallable)
	void SetSoundMusicVolume(float NewVolume);

	UFUNCTION(BlueprintPure)
	float GetSoundMusicVolume() const;

	// SFX sound volume
	UFUNCTION(BlueprintCallable)
	void SetSoundSFXVolume(float NewVolume);

	UFUNCTION(BlueprintPure)
	float GetSoundSFXVolume() const;

	// Ambient sound volume
	UFUNCTION(BlueprintCallable)
	void SetSoundAmbientVolume(float NewVolume);

	UFUNCTION(BlueprintPure)
	float GetSoundAmbientVolume() const;

	// Footsteps sound volume
	UFUNCTION(BlueprintCallable)
	void SetSoundFootstepsVolume(float NewVolume);

	UFUNCTION(BlueprintPure)
	float GetSoundFootstepsVolume() const;
	
protected:
	UPROPERTY(Config)
	float SoundGlobalVolume;

	UPROPERTY(Config)
	float SoundMusicVolume;

	UPROPERTY(Config)
	float SoundSFXVolume;

	UPROPERTY(Config)
	float SoundAmbientVolume;

	UPROPERTY(Config)
	float SoundFootstepsVolume;
};

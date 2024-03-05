// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectXGameUserSettings.h"

UProjectXGameUserSettings::UProjectXGameUserSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SoundGlobalVolume = 1.0f;
	SoundMusicVolume = 0.8f;
	SoundSFXVolume = 0.65f;
	SoundAmbientVolume = 0.915f;
	SoundFootstepsVolume = 0.45f;
}

void UProjectXGameUserSettings::SetSoundGlobalVolume(float NewVolume)
{
	SoundGlobalVolume = NewVolume;
}

float UProjectXGameUserSettings::GetSoundGlobalVolume() const
{
	return SoundGlobalVolume;
}

void UProjectXGameUserSettings::SetSoundMusicVolume(float NewVolume)
{
	SoundMusicVolume = NewVolume;
}

float UProjectXGameUserSettings::GetSoundMusicVolume() const
{
	return SoundMusicVolume;
}

void UProjectXGameUserSettings::SetSoundSFXVolume(float NewVolume)
{
	SoundSFXVolume = NewVolume;
}

float UProjectXGameUserSettings::GetSoundSFXVolume() const
{
	return SoundSFXVolume;
}

void UProjectXGameUserSettings::SetSoundAmbientVolume(float NewVolume)
{
	SoundAmbientVolume = NewVolume;
}

float UProjectXGameUserSettings::GetSoundAmbientVolume() const
{
	return SoundAmbientVolume;
}

void UProjectXGameUserSettings::SetSoundFootstepsVolume(float NewVolume)
{
	SoundFootstepsVolume = NewVolume;
}

float UProjectXGameUserSettings::GetSoundFootstepsVolume() const
{
	return SoundFootstepsVolume;
}

UProjectXGameUserSettings* UProjectXGameUserSettings::GetProjectXGameUserSettings()
{
	return Cast<UProjectXGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

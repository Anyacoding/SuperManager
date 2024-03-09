// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSuperManagerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
#pragma region ContentBrowserMenuExtention

	TArray<FString> FolderPathsSelected;
	
	void InitContentBrowserExtention();
	TSharedRef<FExtender> CustomContentBrowserExtender(const TArray<FString>& SelectedPaths);
	void AddContentBrowserEntry(FMenuBuilder& MenuBuilder);
	void OnDeleteUnusedAssetButtonClicked();
	void FixUpRedirectors();

#pragma endregion 
};

// Copyright (C) 2023 Gon�alo Marques - All Rights Reserved

using UnrealBuildTool;
using System.IO;

public class UINavigationEditor : ModuleRules
{
    public UINavigationEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "InputCore",
                "Engine",
                "UINavigation"
            }
        );
    }
}

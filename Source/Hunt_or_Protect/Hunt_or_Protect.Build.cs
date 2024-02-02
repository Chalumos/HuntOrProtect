// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hunt_or_Protect : ModuleRules
{
	public Hunt_or_Protect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

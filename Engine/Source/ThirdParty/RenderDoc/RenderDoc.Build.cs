﻿// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RenderDoc : ModuleRules
{
	public RenderDoc(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string ApiPath = Target.UEThirdPartySourceDirectory + "RenderDoc/";
            PublicSystemIncludePaths.Add(ApiPath);
        }
    }
}

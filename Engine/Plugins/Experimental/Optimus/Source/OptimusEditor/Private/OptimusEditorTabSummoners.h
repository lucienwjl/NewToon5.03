﻿// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "WorkflowOrientedApp/WorkflowTabFactory.h"

class FOptimusEditor;

struct FOptimusEditorNodePaletteTabSummoner :
	public FWorkflowTabFactory
{
	static const FName TabId;
	
	explicit FOptimusEditorNodePaletteTabSummoner(TSharedRef<FOptimusEditor> InEditorApp);
	
	TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;

protected:
	TWeakPtr<FOptimusEditor> EditorPtr;
};


struct FOptimusEditorExplorerTabSummoner :
	public FWorkflowTabFactory
{
	static const FName TabId;
	
	explicit FOptimusEditorExplorerTabSummoner(TSharedRef<FOptimusEditor> InEditorApp);
	
	TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;

protected:
	TWeakPtr<FOptimusEditor> EditorPtr;
};


struct FOptimusEditorGraphTabSummoner :
	public FWorkflowTabFactory
{
	static const FName TabId;
	
	explicit FOptimusEditorGraphTabSummoner(TSharedRef<FOptimusEditor> InEditorApp);
	
	TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;

protected:
	TWeakPtr<FOptimusEditor> EditorPtr;
};



struct FOptimusEditorCompilerOutputTabSummoner :
	public FWorkflowTabFactory
{
	static const FName TabId;
	
	explicit FOptimusEditorCompilerOutputTabSummoner(TSharedRef<FOptimusEditor> InEditorApp);
	
	TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;

protected:
	TWeakPtr<FOptimusEditor> EditorPtr;
};

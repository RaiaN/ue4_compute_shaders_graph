#pragma once

#include "Modules/ModuleManager.h"

class COMPUTESHADER_API IComputeShaderModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};


#pragma once

#include<list>
#include "Globals.h"
#include "Module.h"
#include "ModuleEditor.h"

class ModuleRender;
class ModuleWindow;
class ModuleTextures;
class ModuleInput;
class ModuleProgram;
class ModuleRenderExercise;
class ModuleEditor;
class ModuleCamera;

class Application
{
public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

public:
	ModuleRender* renderer			= nullptr;
	ModuleWindow* window			= nullptr;
	ModuleInput* input				= nullptr;
	ModuleProgram* program			= nullptr;
	ModuleRenderExercise* exercise  = nullptr;
	ModuleEditor* editor			= nullptr;
	ModuleCamera* camera			= nullptr;
private:
	std::list<Module*> modules;
};

extern Application* App;

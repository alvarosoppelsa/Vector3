#pragma once

#include "Module.h"
#include "ILogObserver.h"
#include "Globals.h"
#include "ImGui/imgui.h"
#include <vector>

class ImVec4;

class ModuleEditor : public Module, public ILogObserver
{
public:
	// Module
	bool Init() override;
	update_status PreUpdate() override;
	update_status Update() override;
	update_status PostUpdate() override;
	bool CleanUp() override;
	void ConsoleLog(char* line);

	// ILogObserver
	void SubscribeToLogger() override;
	void UnsubscribeToLogger() override;
	void Log(char* msg) override;

private:
	bool show_demo_window;
	bool show_console;
	bool show_about_window;
	ImVec4 clear_color;
	std::vector<char*> console_outputs;
};


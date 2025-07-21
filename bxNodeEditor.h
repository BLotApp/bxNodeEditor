#pragma once
#include "core/AddonBase.h"
#include <functional>
#include <string>
#include <unordered_map>

class bxNodeEditor : public blot::AddonBase {
  public:
	bxNodeEditor();
	~bxNodeEditor();

	bool init();
	void setup();
	void update(float deltaTime);
	void draw();
	void cleanup();
 
  private:
	bool m_initialized;
	float m_time;

};

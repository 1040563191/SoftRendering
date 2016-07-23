#pragma once

// �豸��Ⱦ

#include "Config.h"
#include "Vertex.h"

class Device
{
public:
	Device();

	void init(int w, int h, uint32* fb);
	void close();

	void drawPoint(const Vector& p);
	void drawLine(const Vertex& v1, const Vertex& v2);

private:
	uint32 ** framebuffer;
	float ** zbuffer; 
	uint32 background; // ������ɫ
	uint32 foreground; // �߿���ɫ
	int width;
	int height; 
};
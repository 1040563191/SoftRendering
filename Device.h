#pragma once

// �豸��Ⱦ

#include "Config.h"

class Transform;
struct Vertex;
struct Vector;
struct Color;
struct Texcoord;

class Device
{
public:
	Device();

	void init(int w, int h, uint32* fb, Transform* ts, int **tex);
	void clear();
	void close();

	void drawPoint(const Vector& p, const Color& color, const Texcoord& tc);
	void drawLine(const Vector& p1, const Vector& p2);
	void drawTriangle(const Vertex& v1, const Vertex& v2, const Vertex& v3);

private:
	Transform* transform;
	int** textures;
	uint32 ** framebuffer;
	float * zbuffer; 
	uint32 background; // ������ɫ
	uint32 foreground; // �߿���ɫ
	int width;
	int height; 
};
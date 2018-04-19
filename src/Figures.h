#ifndef FIGURES_H
#define FIGURES_H

#include <glm.hpp>
#include "Vertex.h"

using namespace glm;

// данные о вершинах
int triangleVertexCount = 4*6;
float const CUBE_SIDE = 0.37f;
Vertex triangleVertexes[] = {
    //                ВЕРШИНА                   ЦВЕТ
    Vertex(vec3(0.0f,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(CUBE_SIDE,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),
    Vertex(vec3(CUBE_SIDE,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(0.0f,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),

    Vertex(vec3(CUBE_SIDE,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(CUBE_SIDE,  0.0f, -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),
    Vertex(vec3(CUBE_SIDE,  CUBE_SIDE, -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(CUBE_SIDE,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),

    Vertex(vec3(CUBE_SIDE,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(CUBE_SIDE,  CUBE_SIDE, -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),
    Vertex(vec3(0.0f,  CUBE_SIDE, -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(0.0f,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),

    Vertex(vec3(0.0f,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(0.0f,  CUBE_SIDE,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),
    Vertex(vec3(0.0f,  CUBE_SIDE,  -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(0.0f,  0.0f,  -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),

    Vertex(vec3(CUBE_SIDE,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(0.0f,  0.0f,  0.0f),   vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),
    Vertex(vec3(0.0f,  0.0f,  -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(CUBE_SIDE,  0.0f,  -CUBE_SIDE),  vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),

    Vertex(vec3(0.0f, 0.0f, -CUBE_SIDE), vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 0.0f)),
    Vertex(vec3(0.0f, CUBE_SIDE, -CUBE_SIDE), vec3(0.5f, 0.8f, 0.5f), vec2(0.0f, 1.0f)),
    Vertex(vec3(CUBE_SIDE, CUBE_SIDE, -CUBE_SIDE), vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 1.0f)),
    Vertex(vec3(CUBE_SIDE, 0.0f, -CUBE_SIDE), vec3(0.5f, 0.8f, 0.5f), vec2(1.0f, 0.0f)),
};

#endif

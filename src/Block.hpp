//
// Created by slinky on 5/19/23.
//

#ifndef PLUSCRAFT_BLOCK_HPP
#define PLUSCRAFT_BLOCK_HPP

#include <glm/glm.hpp>

#include "Shader.hpp"
#include "Entity.hpp"

struct Block : public Entity {
    glm::vec3 pos;

    void draw(const Shader& _shader);
};

float CUBE_VERTICES[];


#endif //PLUSCRAFT_BLOCK_HPP

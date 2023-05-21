//
// Created by slinky on 5/19/23.
//

#ifndef PLUSCRAFT_BLOCK_HPP
#define PLUSCRAFT_BLOCK_HPP

#include <glm/glm.hpp>

#include "Shader.hpp"
#include "Entity.hpp"
#include "Texture.hpp"

struct Block : public Entity {
    glm::vec3 pos;

    void draw(const Shader& _shader, const Texture& _texture);
};

#endif //PLUSCRAFT_BLOCK_HPP

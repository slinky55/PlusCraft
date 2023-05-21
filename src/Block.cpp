//
// Created by slinky on 5/19/23.
//

#include "Block.hpp"
#include "Texture.hpp"

#include <glm/gtc/matrix_transform.hpp>

void Block::draw(const Shader &_shader, const Texture& _texture)
{
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, _texture.id);

    glm::mat4 model = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    model = glm::translate(model, pos);
    _shader.setMat4("model", model);

    glDrawArrays(GL_TRIANGLES, 0, 36);
}
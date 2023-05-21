//
// Created by slinky on 5/20/23.
//

#include "Texture.hpp"

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "stb_image.h"

Texture::Texture(std::string_view _path)
{
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);


}
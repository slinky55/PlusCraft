//
// Created by slinky on 5/20/23.
//

#ifndef PLUSCRAFT_TEXTURE_HPP
#define PLUSCRAFT_TEXTURE_HPP

#include <string_view>
#include <cstdint>

struct Texture {
    std::uint32_t id;

    explicit Texture(std::string_view _path);
};

#endif //PLUSCRAFT_TEXTURE_HPP

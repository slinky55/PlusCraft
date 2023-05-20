//
// Created by slinky on 5/18/23.
//

#ifndef PLUSCRAFT_COLOR_HPP
#define PLUSCRAFT_COLOR_HPP

#include <cstdint>

struct Color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;

    constexpr Color() noexcept : r(0), g(0), b(0), a(0) {}
    constexpr Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255) noexcept : r(r), g(g), b(b), a(a) {}

    [[nodiscard]] constexpr float getRGL() const noexcept { return (float)r / 255.f; }
    [[nodiscard]] constexpr float getGGL() const noexcept { return (float)g / 255.f; }
    [[nodiscard]] constexpr float getBGL() const noexcept { return (float)b / 255.f; }
    [[nodiscard]] constexpr float getAGL() const noexcept { return (float)a / 255.f; }
};



#endif //PLUSCRAFT_COLOR_HPP

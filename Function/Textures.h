#pragma once
#include <assert.h>

#include <SFML/Graphics.hpp>
#include <map>
#include <memory>
const std::string filename =
    "C:/Users/ADMIN/Pictures/Screenshots/Screenshot (95).png";
namespace Textures {
enum ID { Landscape, Airplane, Missile, DumbPic };
}

class TextureHolder {
   public:
    void load(Textures::ID id, const std::string& filename);
    auto get(Textures::ID id) const -> sf::Texture&;

   private:
    std::map<Textures::ID, std::unique_ptr<sf::Texture>> mTextureMap;
};
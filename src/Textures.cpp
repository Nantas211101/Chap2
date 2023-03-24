#include "../Function/Textures.hpp"

void TextureHolder::load(Textures::ID id, const std::string &filename){
    std::unique_ptr<sf::Texture> texture(new sf::Texture()); // new pointer
    if(!texture->loadFromFile(filename)) // loading from file
        throw std::runtime_error("TextureHolder::load - Failed to load" + filename);
    auto inserted = mTextureMap.insert(std::make_pair(id, std::move(texture))); // insert texture into the map
    assert(inserted.second);
}   

sf::Texture& TextureHolder::get(Textures::ID id) const{
    auto found = mTextureMap.find(id);
    assert(found != mTextureMap.end());
    return *found->second;
}
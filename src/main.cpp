#include <iostream>
// #include "../Function/Textures.hpp"
#include "../Function/ResourceHolder.hpp"

const std::string filename = "C:/Users/ADMIN/Pictures/Screenshots/Screenshot (95).png";

namespace Textures {
enum ID { Landscape, Airplane, Missile, DumbPic };
}

int main() {
    // TextureHolder textures;
    // textures.load(Textures::DumbPic, filename);

    // sf::Sprite playerPlane;
    // playerPlane.setTexture(textures.get(Textures::DumbPic));

    ResourceHolder<sf::Texture, Textures::ID> resource;
    resource.load(Textures::DumbPic, filename);

    sf::Sprite playerPlane;
    playerPlane.setTexture(resource.get(Textures::DumbPic));

    sf::RenderWindow mWindow(sf::VideoMode(640, 480), "Test TextureHolder");
    playerPlane.setPosition(100.f, 100.f);

    while (mWindow.isOpen()) {
        sf::Event event;
        while (mWindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed) mWindow.close();
        }
        mWindow.clear();
        mWindow.draw(playerPlane);
        mWindow.display();
    }
    return 0;
}
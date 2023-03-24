#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <map>
#include <assert.h>
const std::string filename = "C:/Users/ADMIN/Pictures/Screenshots/Screenshot (95).png";

template <typename Resource, typename Identifier>
class ResourceHolder{
    public:
        void                load(Identifier id, const std::string& filename);

        // Resource&           get(Identifier id);
        Resource&     get(Identifier id) const;

    private:
        std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;

};

// #include "../Template/ResourceHolder.inl"

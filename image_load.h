#ifndef IMAGE_LOAD_H_INCLUDED
#define IMAGE_LOAD_H_INCLUDED

void loadImage()
{

    std::cout << "filename" << std::endl;
    std::cin >> filename;
    image.loadFromFile(filename/* + ".bmp"*/);
    texture.loadFromImage(image);
    sprite.setTexture(texture);

    window.setSize(image.getSize());

    //std::cout << "image X resolution" << std::endl;
    //std::cin >> image_X_res;

    //std::cout << "image Y resolution" << std::endl;
    //std::cin >> image_Y_res;

}

#endif // IMAGE_LOAD_H_INCLUDED

#ifndef IMAGE_SORT_H_INCLUDED
#define IMAGE_SORT_H_INCLUDED

void sortImage()
{


    for(int Y = 0; Y != image_Y_res; Y++)
    {
        for(int X = 0; X != image_X_res; X++)
        {
            if(
               image.getPixel(X, Y).r < image.getPixel(X + 1, Y).r
               || image.getPixel(X, Y).b < image.getPixel(X + 1, Y).b
               || image.getPixel(X, Y).g < image.getPixel(X + 1, Y).g)
            {
                /*
                f = num_arr[i];
                num_arr[i] = num_arr[i+1];
                num_arr[i+1] = f;
                */

                colour_1 = image.getPixel(X, Y);
                hold = colour_1;
                colour_2 = image.getPixel(X+1, Y);

                colour_1 = colour_2;
                colour_2 = hold;

                image.setPixel(X, Y, colour_1);
                image.setPixel(X+1, Y, colour_2);

                //std::cout <<"blue swap ";
                //std::cout << "X " << X << " || Y " << Y << "R = " << image.getPixel(X, Y).b << std::endl;
            }

            //std::cout <<"swap fail " << std::endl;


            window.clear();
            window.draw(sprite);
            window.display();
        }
    }image.saveToFile(filename + "output.bmp");

}


#endif // IMAGE_SORT_H_INCLUDED

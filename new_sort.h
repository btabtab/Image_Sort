#ifndef NEW_SORT_H_INCLUDED
#define NEW_SORT_H_INCLUDED

void newSort()
{

    for(int Y = 0; Y != image_Y_res; Y++)
    {
        for(int t = 0; t != image_X_res; t++)
        {
            for(int X = 0; X != image_X_res; X++)
            {
            std::cout << t << " " << X << std::endl;

                if(
                   image.getPixel(X-t, Y).r < image.getPixel(X, Y).r
                   || image.getPixel(X-t, Y).b < image.getPixel(X, Y).b
                   || image.getPixel(X-t, Y).g < image.getPixel(X, Y).g)
                {
                    /*
                    f = num_arr[i];
                    num_arr[i] = num_arr[i+1];
                    num_arr[i+1] = f;
                    */

                    colour_1 = image.getPixel(X, Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(X-t, Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(X, Y, colour_1);
                    image.setPixel(X-t, Y, colour_2);

                    //std::cout <<"blue swap ";
                    //std::cout << "X " << X << " || Y " << Y << "R = " << image.getPixel(X, Y).b << std::endl;
                }

                //std::cout <<"swap fail " << std::endl;


                window.clear();
                window.draw(sprite);
                window.display();
            }
        }

    }image.saveToFile(filename + "output.bmp");

}



#endif // NEW_SORT_H_INCLUDED

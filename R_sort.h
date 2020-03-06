#ifndef R_SORT_H_INCLUDED
#define R_SORT_H_INCLUDED

void sortImage_red()
{

                /*
                f = num_arr[i];
                num_arr[i] = num_arr[i+1];
                num_arr[i+1] = f;
                */

    for(int Y = 0; Y != image_Y_res; Y++)
    {
        for(int X = 0; X != image_X_res; X++)
        {
            if(image.getPixel(X, Y).r < image.getPixel(X + 1, Y).r)
            {
                colour_1 = image.getPixel(X, Y);
                hold = colour_1;
                colour_2 = image.getPixel(X+1, Y);

                colour_1 = colour_2;
                colour_2 = hold;

                image.setPixel(X, Y, colour_1);
                image.setPixel(X+1, Y, colour_2);
            }

        }
    }
    std::cout << "red done" << std::endl;

}

#endif // R_SORT_H_INCLUDED

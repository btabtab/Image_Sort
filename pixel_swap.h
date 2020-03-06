#ifndef PIXEL_SWAP_H_INCLUDED
#define PIXEL_SWAP_H_INCLUDED

void pixel_swap(int X, int Y)
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
}

#endif // PIXEL_SWAP_H_INCLUDED

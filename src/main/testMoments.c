/* -*- c-basic-offset: 3 -*-
 *
 * ENSICAEN
 * 6 Boulevard Marechal Juin
 * F-14050 Caen Cedex
 *
 * This file is owned by ENSICAEN students.
 * No portion of this document may be reproduced, copied
 * or revised without written permission of the authors.
 */

/**
 * @author Pierre Chopinet <pierre.chopinet@ecole.ensicaen.fr>
 * @version 0.0.1 / 2017-12-16
 */

/**
 * @file testMoments.c
 */
#include <image.h>
#include <moments.h>

int main(){
  image im= FAIRE_image();
  image_charger(im,"../../img/lenna.ppm");
  int M0;
  int M2[3];
  int M3[3];
  give_moments(&im,1,1,1,&M0,&M2,&M3);
  printf("%d\n",M0);

}

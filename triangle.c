/* triangle.c  -- Meixintong Zha */	
#include <stdio.h>
#include <math.h>

/*calculate and print the lengths of the three sides, calculate and print the circumference of the triangle, and calculate and print the area of the triangle.*/
 int main()
{   
  float xA, xB, xC, yA, yB, yC;
  float l_ab, l_bc, l_ca, circumference, semi, area;

  printf("Enter the x- and y-coordinates of point A:\n");
  scanf("%f %f", &xA,&yA);
  printf("Enter the x- and y-coordinates of point B:\n");
  scanf("%f %f", &xB,&yB);
  printf("Enter the x- and y-coordinates of point C:\n");
  scanf("%f %f", &xC,&yC);

  l_ab=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
  l_bc=sqrt((xB-xC)*(xB-xC)+(yB-yC)*(yB-yC));
  l_ca=sqrt((xC-xA)*(xC-xA)+(yC-yA)*(yC-yA));
  circumference= l_ab+l_bc+l_ca;
  semi=circumference/2;
  area=sqrt(semi*(semi-l_ab)*(semi-l_bc)*(semi-l_ca));
  
  printf("Length of AB is %.3f\n", l_ab);
  printf("Length of BC is %.3f\n", l_bc);
  printf("Length of CA is %.3f\n", l_ca);
  printf("Circumference is %.3f\n", circumference);
  printf("Area is %.3f\n", area);


return 0;
}

 



 




 
   

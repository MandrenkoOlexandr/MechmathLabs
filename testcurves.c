#include "ccurves.h"


CEllipse test_create_ellipse_console(FILE * fh, FILE * fi){
    CEllipse ellipse;
    int t = ellipse_input(fi, ellipse);
    fprintf(fh, "\n");
    ellipse_print(fh, ellipse);
    if (t) fprintf(fh, "Test complited!\n");
    else  fprintf(fh, "Test failed!\n");
    return ellipse; 
}


int test_check_point_ellipse_console(FILE * fh, FILE * fi, CEllipse ellipse){
    CPoint x;
    fprintf(fh, "Is inside point test\n");
    printf("Is inside point test\n");
    printf("Enter point \n");
    printf( "x = ");
    fscanf(fi, "%lf", &x.x);
    printf( "y = ");
    fscanf(fi, "%lf", &x.y);
    fprintf(fh, "CPoint: x = %lf y = %lf\n", x.x, x.y);
    int res = ellipse_is_inside(ellipse, x);
    
    fprintf(fh, "Test complited!\n");
    fprintf(fh, "Result: %i \n", res); 
    return res;
} 



double test_square_ellipse_console(FILE * fh,FILE * fi,  CEllipse ellipse){
    fprintf(fh, "Square of ellipse\n");
    printf( "Square of ellipse\n");
    double res = ellipse_get_square(ellipse);
    if (res >= 0) fprintf(fh, "Test complited!\n");
    else fprintf(fh, "Test failed!\n");
    fprintf(fh, "Result: %lf\n", res); 
    return res;
}


double test_get_value_ellipse(FILE * fh,FILE * fi,  CEllipse ellipse  ){
    double res, x;
    fprintf(fh, "Value in the point!\n");
    printf("Value in the point!\n");
    fscanf(fi, "%lf", &x);
    
    res = ellipse_get_value(ellipse, x, 1);
    if (fabs(res) == fabs(ellipse_get_value(ellipse, x, -1))){
        fprintf(fh, "Test completed!\n");
    }
    else fprintf(fh, "Test failed!\n");
    
    fprintf(fh, "Result: %lf\n", res);
    return res;
    
}


CPoint * test_intersection_ellipse_with_ellipse(FILE * fh,FILE * fi,  CEllipse ellipse){
    fprintf(fh, "test_intersection_ellipse_with_ellipse\n");
    printf( "test_intersection_ellipse_with_ellipse\n");
    CEllipse ellipse_2;
    ellipse_input(fi, ellipse);
             
    static CPoint *root;
     
    root = ellipse_intersection_with_ellipse(ellipse, ellipse_2);
    for (int i = 0; i<8; i++){
        if (((*(root+i)).x!=0) || ((*(root+i)).y !=0)) 
        {
            fprintf(fh, "CPoint %i\n",  i+1);
            fprintf(fh, "x: %lf\n", (*(root+i)).x);
            fprintf(fh, "y: %lf\n", (*(root+i)).y);
        }
    }
    fprintf(fh, "Test completed!\n");
    return root;
}


double * test_intersection_ellipse_with_line(FILE * fh,FILE * fi,  CEllipse ellipse){
             
    static double *root;
    double m, c;
    fprintf(fh, "test_intersection_ellipse_with_line y = mx+c\n");
    printf( "test_intersection_ellipse_with_line y = mx+c\n");
    printf( "m = ");
    fscanf(fi, "%lf", &m);
    printf( "c = ");
    fscanf(fi, "%lf", &c);

    root = ellipse_intersection_with_line(ellipse, m, c);
    
    for (int i = 0; i<4; i++){
        if (((*(root+i))!=0) || ((*(root+i+1)) !=0)) 
        {
            

            fprintf(fh, "CPoint \n");
            fprintf(fh, "x: %lf\n", (*(root+i)));
            i++;
            fprintf(fh, "y: %lf\n", (*(root+i)));
            
        }
    }
    fprintf(fh, "Test completed!\n");
    return root;
}







CParabola test_create_parabol(FILE * fh, FILE * fi){
    CParabola parabola;
    fprintf(fh, "/n");
    fprintf(fh, "Test create parabola/n");
    printf( "Test create parabola/n");
    parabola_input(fi, parabola);
    fprintf(fh, "\n");
    parabola_print(fh, parabola);
    fprintf(fh, "Test complited!\n");
    return parabola; 
}



int test_check_point_parabola(FILE * fh,FILE * fi,  CParabola parabola  ){
    CPoint x;
    fprintf(fh, "Is inside point test\n");
    printf( "Is inside point test\n");
    printf( "Enter point \n");
    printf( "x = ");
    fscanf(fi, "%lf", &x.x);
    printf( "y = ");
    fscanf(fi, "%lf", &x.y);
    fprintf(fh, "CPoint: x = %lf y = %lf\n", x.x, x.y);
    int res = parabola_check_point(parabola, x);
    
    fprintf(fh, "Test complited!\n");
    fprintf(fh, "Result: %i\n", res); 
    return res;
} 


double test_get_value_parabola(FILE * fh,FILE * fi,  CParabola parabola){
    double x;
    fprintf(fh, "Get value test\n");
    printf( "Get value test\n");
    printf( "Enter x\n");
    printf( "x = ");
    fscanf(fi, "%lf", &x);

    double res = parabola_get_value(parabola, x);
    fprintf(fh, "CPoint: f(x) = %lf", res);
    fprintf(fh, "Test complited!\n");
    return res;
} 



CPoint test_get_focus_parabola(FILE * fh,FILE * fi,  CParabola parabola  ){
    fprintf(fh, "Get focus test\n");
    printf( "Get focus test\n");

    CPoint res = parabola_get_focus(parabola);
    fprintf(fh, "CPoint: x = %lf y = %lf\n", res.x, res.y);
    if (parabola_check_point(parabola, res)) fprintf(fh, "Test complited!\n");
    else fprintf(fh, "Test failed!\n");
    return res;
} 


double * parabola_intersection(FILE * fh,FILE * fi,  CParabola parabola){
    int choice;
    double *root;
    fprintf(fh, "Intersection test\n");
    printf( "Intersection test\n");
    printf("Intersection with 1 -- line, 2 -- parabola\n");
    fscanf(fi, "%i", &choice);
    if (choice == 1){
        fprintf(fh, "LINE\n");
        printf("LINE\n");
        double k, m;
        printf( "k = ");
        fscanf(fi, "%lf", &k);
        printf( "m = ");
        fscanf(fi, "%lf", &m);
        root = parabola_intersection_with_line(parabola, k, m);
        
    }
    else{
        fprintf(fh, "CParabola\n");
        printf( "CParabola\n");
        CParabola parabola_2;
        parabola_input(fi, parabola_2);
        root = parabola_intersection_with_parabola(parabola, parabola_2);
                
    }

    for (int i = 0; i<4; i++){
        if (((*(root+i))!=0) || ((*(root+i+1)) !=0)) 
        {
            
            fprintf(fh, "CPoint \n");
            fprintf(fh, "x: %lf\n", (*(root+i)));
            i++;
            fprintf(fh, "y: %lf\n", (*(root+i)));
            
        }
    }
    fprintf(fh, "Test completed!\n");
    return root;
}



double test_parabola_intersection_square(FILE * fh,FILE * fi,  CParabola parabola){
    int choice;
    double root;
    fprintf(fh, "Intersection square\n");
    printf( "Intersection square\n");
    printf( "Intersection with 1 -- line, 2 -- parabola\n");
    fscanf(fi, "%i", &choice);
    if (choice == 1){
        fprintf(fh, "LINE\n");
        printf( "LINE\n");
        double k, m;
        printf( "k = ");
        fscanf(fi, "%lf", &k);
        printf( "m = ");
        fscanf(fi, "%lf", &m);
        root = parabola_intersection_square_with_line(parabola, k, m);
        
    }
    else{

        fprintf(fh, "CParabola\n");
        printf("CParabola\n");
        CParabola parabola_2;
        parabola_input(fi, parabola_2);
        root = parabola_intersection_square_with_parabola(parabola_2, parabola);
                
    }
    fprintf(fh, "Result: %lf\n", root);
    fprintf(fh, "Test completed!\n");
    return root;
}



CHyperbole  test_create_hyperbole(FILE * fh, FILE * fi){
    fprintf(fh, "\nTest create hyperbole\n");
    printf( "\nTest create hyperbole\n");
    CHyperbole  hyperbole;
    hyperbole_input(fi, hyperbole);
    fprintf(fh, "\n");
    hyperbole_print(fh, hyperbole);
    fprintf(fh, "Test complited!\n");
    return hyperbole; 
}


int test_check_point_hyperbole(FILE * fh, FILE * fi, CHyperbole  hyperbole  ){
    CPoint x;
    fprintf(fh, "Is inside point test\n");
    printf( "Is inside point test\n");
    printf( "Enter point \n");
    printf( "x = ");
    fscanf(fi, "%lf", &x.x);
    printf( "y = ");
    fscanf(fi, "%lf", &x.y);
    fprintf(fh, "CPoint: x = %lf y = %lf\n", x.x, x.y);
    int res = hyperbole_check_point(hyperbole, x);
    
    fprintf(fh, "Test complited! RES = %i\n", res);
    return res;
}




double test_get_value_hyperbole(FILE * fh,FILE * fi, CHyperbole  hyperbole){
    double x;
    fprintf(fh, "Get value test\n");
    printf( "Get value test\n");
    printf("Enter x\n");
    printf("x = ");
    fscanf(fi, "%lf", &x);

    double res = hyperbole_get_value(hyperbole, x, 1);
    fprintf(fh, "Result: %lf\n", res);
    fprintf(fh, "Test complited!\n");
    return res;
} 



CPoint * test_get_foci_hyperbole(FILE * fh,FILE * fi, CHyperbole  hyperbole  ){
    fprintf(fh, "Get focus test\n");
    printf( "Get focus test\n");

    CPoint *res = hyperbole_get_foci(hyperbole);
    fprintf(fh, "CPoint1: x = %lf  y = %lf", (*(res)).x, (*(res)).y);
    fprintf(fh, "CPoint2: x = %lf  y = %lf", (*(res+1)).x, (*(res+1)).y);
    if (hyperbole_check_point(hyperbole, *(res))) fprintf(fh, "Test complited!\n");
    else fprintf(fh, "Test failed!\n");
    return res;
} 




CPoint * test_hyperbole_intersection(FILE * fh,FILE * fi, CHyperbole  hyperbole){
    int choice;
    CPoint *root;
    fprintf(fh, "Intersection test\n");
    printf("Intersection test\n");
    printf( "Intersection with 1 -- parabola, 2 -- hyperbole\n");
    fscanf(fi, "%i", &choice);
    if (choice == 1){
        fprintf(fh, "CParabola\n");
        printf( "CParabola\n");
        CParabola parabola;
        parabola_input(fi, parabola);
        root = hyperbole_intersection_p(hyperbole, parabola);
        
    }
    else{
        fprintf(fh, "CHyperbole \n");
        printf( "CHyperbole \n");
        CHyperbole  hyperbole_2;
        hyperbole_input(fi, hyperbole);
        root = hyperbole_intersection(hyperbole, hyperbole_2);
                
    }

    for (int i = 0; i<4; i++){
        // if (((*(root+i)).x!=0) || ((*(root+i)).y !=0)) 
        // {
            fprintf(fh, "CPoint %i \n", i+1);

            fprintf(fh, "x: %lf\n", (*(root+i)).x);
            fprintf(fh, "y: %lf\n", (*(root+i)).y);
        // }
    }
    fprintf(fh, "Test completed!\n");
    return root;
}







int main(){
    CParabola p;
    CHyperbole  h;
    CEllipse e;
    
    
    char filename[20];
    int choice;
    printf("Enter 1 to print in file, else 0: ");
    scanf( "%i", &choice);    
    FILE * fp;
    FILE * fi;

    // If the program was invoked with an argument, treat it as a filename
    // and write the output to that file. Otherwise, write to stdout.
    if(choice)
    {
        printf("Enter filename: ");
        scanf( "%s", filename);
        fp = fopen(filename, "w");
    }
    else fp = stdout;
    
    
    
    printf("Enter 1 to fscanf fi, from file, else 0: ");
    scanf("%i", &choice);    
    
    if (choice){
        
        char filename[20];
        scanf("Enter filename: %s", filename);
                
        while(NULL != (fi = fopen("filename", "w"))) printf("\nFILE ERROR please, try again\n"); 
        
        e = test_create_ellipse_console(fp, fi);
        h = test_create_hyperbole(fp, fi);
        p = test_create_parabol(fp, fi);
        
        test_check_point_ellipse_console(fp,fi, e);
        test_square_ellipse_console(fp,fi, e);
        test_get_value_ellipse(fp,fi, e);
        test_intersection_ellipse_with_ellipse(fp,fi, e);
        test_intersection_ellipse_with_line(fp,fi, e);
        
        test_check_point_parabola(fp,fi, p);
        test_get_value_parabola(fp,fi, p);
        test_get_focus_parabola(fp,fi, p);
        parabola_intersection(fp,fi, p);
        test_parabola_intersection_square(fp,fi, p);
        
        
        test_check_point_hyperbole(fp,fi, h);
        test_get_value_hyperbole(fp,fi, h);
        test_get_foci_hyperbole(fp,fi, h);
        test_hyperbole_intersection(fp,fi, h);
        fclose(fi);
      }
    else{
        fi = stdin;
        e = test_create_ellipse_console(fp, fi);
        h = test_create_hyperbole(fp, fi);
        p = test_create_parabol(fp, fi);
        
        test_check_point_ellipse_console(fp,fi, e);
        test_square_ellipse_console(fp,fi, e);
        test_get_value_ellipse(fp,fi, e);
        test_intersection_ellipse_with_ellipse(fp,fi, e);
        test_intersection_ellipse_with_line(fp,fi, e);
        
        test_check_point_parabola(fp,fi, p);
        test_get_value_parabola(fp,fi, p);
        test_get_focus_parabola(fp,fi, p);
        parabola_intersection(fp,fi, p);
        test_parabola_intersection_square(fp,fi, p);
        
        
        test_check_point_hyperbole(fp,fi, h);
        test_get_value_hyperbole(fp,fi, h);
        test_get_foci_hyperbole(fp,fi, h);
        test_hyperbole_intersection(fp,fi, h);
               
    }

    fclose(fp);
             
    return 0;
}
/* ############################################################################
Name           : alg2.h
Company        : S. Vagionitis
Project        : Finding Clones
Programmer     : S. Vagionitis
Revisor        : S. Vagionitis
Description    : Header file for alg_lvl2.c.


Programmer     Date           Action
============== ============== =================================================
S. Vagionitis  10/06/2010     Creation

############################################################################ */
#ifndef __ALG2_H__
#define __ALG2_H__

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#define PI  		3.1415926535897932384626433832795
#define RAD(x)		((x)*PI/180.0)
#define DEG(x)		((x)*180.0/PI)
#define MIN(a,b)	((a)<=(b)?(a):(b))
#define MAX(a,b)	((a)>=(b)?(a):(b))
#define MIN3(a,b,c)	((a)<=(b) ? (a)<=(c)?(a):(c) : (b)<=(c)?(b):(c) )
#define MAX3(a,b,c)	((a)>=(b) ? (a)>=(c)?(a):(c) : (b)>=(c)?(b):(c) )


#define GREYSCALE1(r, g, b)	((unsigned char)(0.2126 * (double)(r)) + \
                                 (unsigned char)(0.7152 * (double)(g)) + \
                                 (unsigned char)(0.0722 * (double)(b)))

#define GREYSCALE2(r, g, b)	((unsigned char)(0.2989 * (double)(r)) + \
                                 (unsigned char)(0.5870 * (double)(g)) + \
                                 (unsigned char)(0.1140 * (double)(b)))

#pragma pack(1)

/*Structure for sobel operator*/
typedef struct sobel_t{
	unsigned char magnitude;
	unsigned char direction;
	}sobel;

int transform_1D_to_2D(unsigned char *, int, int);
int export_ppm_from_2D(unsigned char, int, int);
int convert_to_greyscale(int, int);
int convert_to_red(int, int);
int convert_to_green(int, int);
int convert_to_blue(int, int);
int noise_reduction(int, int);
int Sobel_operator(unsigned char, int, int);
int non_maximum_suppression(int, int);
int calculate_thresholds(int, int, int *, int *);

int hysteresis_thresholding(int, int, int, int);
int trace(int, int, int, int, int, unsigned char **);
int range(int, int, int, int);


extern unsigned char ***data2D;
extern sobel **sobel_data;

#endif


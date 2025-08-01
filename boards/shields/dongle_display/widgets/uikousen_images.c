#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN1
#define LV_ATTRIBUTE_IMG_UIKOUSEN1
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN1 uint8_t uikousen1_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xef, 0xff, 0x6f, 0xeb, 0xef, 0xff, 0x80, 
  0xef, 0xbf, 0x5f, 0xfb, 0xfe, 0xe7, 0xc0, 
  0xef, 0xbf, 0x3f, 0xf7, 0xf7, 0xb7, 0x80, 
  0xef, 0xff, 0x7f, 0xf1, 0xff, 0xef, 0x80, 
  0xef, 0xff, 0x7f, 0xfb, 0xfb, 0xf7, 0xc0, 
  0xf7, 0xff, 0x7e, 0xfe, 0xff, 0xff, 0xc0, 
  0xf3, 0xff, 0x7f, 0xff, 0x7f, 0xfb, 0xc0, 
  0xf0, 0x7f, 0x00, 0x3f, 0x99, 0xfb, 0xc0, 
  0xeb, 0xff, 0x1f, 0xff, 0xe3, 0xfb, 0xc0, 
  0xcb, 0xff, 0x7f, 0xff, 0xe6, 0x7b, 0xc0, 
  0xd1, 0x7f, 0x7f, 0xff, 0xf3, 0x9f, 0xc0, 
  0xc5, 0x7f, 0x7f, 0xff, 0xfc, 0xf3, 0xc0, 
  0xcd, 0x7b, 0xff, 0xff, 0xfe, 0x7f, 0xc0, 
  0xd9, 0x7b, 0xff, 0xff, 0xff, 0x1f, 0xc0, 
  0xb5, 0xff, 0xff, 0xe3, 0xff, 0xcd, 0xc0, 
  0xfd, 0xfd, 0xff, 0xed, 0xff, 0xf1, 0xc0, 
  0xfd, 0xff, 0xbf, 0xfd, 0xff, 0xfd, 0xc0, 
  0xfd, 0xfe, 0xbf, 0xfd, 0xff, 0xff, 0xc0, 
  0xfd, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xc0, 
  0xf9, 0xff, 0x7f, 0xff, 0xff, 0xfe, 0xc0, 
  0xfb, 0xff, 0x9f, 0xeb, 0xff, 0xff, 0xc0, 
  0xf8, 0x3f, 0x5f, 0xf7, 0xff, 0xf7, 0xc0, 
  0xff, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xc0, 
  0xfe, 0xf7, 0x7f, 0xff, 0xff, 0xe7, 0x40, 
  0xfe, 0xd7, 0x3f, 0xff, 0xff, 0xf7, 0x40, 
  0x1e, 0xd7, 0x9f, 0xff, 0xff, 0xff, 0x40, 
};

const lv_img_dsc_t uikousen1 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen1_map,
};



#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN2
#define LV_ATTRIBUTE_IMG_UIKOUSEN2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN2 uint8_t uikousen2_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xdf, 0xfb, 0xbf, 0xf6, 0xfe, 0x7f, 0xc0, 
  0xfe, 0xff, 0xfd, 0x7e, 0x7f, 0xff, 0xc0, 
  0xfe, 0xff, 0x7d, 0xff, 0xff, 0xfd, 0xc0, 
  0xbe, 0xff, 0xff, 0xbf, 0xff, 0x3f, 0xc0, 
  0xbf, 0xfe, 0xfe, 0xbf, 0x3f, 0xbf, 0xc0, 
  0xbf, 0xfd, 0xff, 0x7f, 0x7f, 0xfe, 0xc0, 
  0xbf, 0xfb, 0xfb, 0x4f, 0x5f, 0xfe, 0xc0, 
  0xbf, 0xf7, 0xff, 0xff, 0x40, 0xbf, 0xc0, 
  0xbf, 0xf7, 0xe1, 0xff, 0x1f, 0x1f, 0x80, 
  0xbf, 0xf6, 0x03, 0xff, 0xc3, 0xdf, 0x00, 
  0xdd, 0xf0, 0x7f, 0xff, 0xf8, 0x5f, 0x00, 
  0xcd, 0xf3, 0xff, 0xff, 0xff, 0x1f, 0x40, 
  0x87, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xc0, 
  0x07, 0xff, 0xff, 0x87, 0xff, 0xdf, 0xc0, 
  0x07, 0xff, 0xff, 0xb7, 0xff, 0xdf, 0xc0, 
  0xd7, 0xff, 0xff, 0xbf, 0xff, 0xdb, 0xc0, 
  0xcf, 0xdf, 0xff, 0xbf, 0xff, 0xdf, 0xc0, 
  0xce, 0xdb, 0xff, 0xf7, 0xff, 0xdf, 0xc0, 
  0x8c, 0xfb, 0xff, 0xf7, 0xff, 0xdf, 0xc0, 
  0x8c, 0xef, 0xff, 0xf7, 0xff, 0xf7, 0x80, 
  0x9c, 0xfd, 0xff, 0xdf, 0xff, 0xff, 0x80, 
  0x9d, 0xf5, 0xff, 0xef, 0xff, 0xaf, 0x80, 
  0xfd, 0xfb, 0xff, 0xff, 0xff, 0xdf, 0xc0, 
  0xbd, 0xfc, 0xff, 0xff, 0xff, 0x3e, 0xc0, 
  0xbb, 0x7c, 0x7f, 0xff, 0xff, 0xde, 0xc0, 
  0xc3, 0x7c, 0x7f, 0xff, 0xff, 0xdc, 0xc0, 
};

const lv_img_dsc_t uikousen2 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen2_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN3
#define LV_ATTRIBUTE_IMG_UIKOUSEN3
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN3 uint8_t uikousen3_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xfb, 0x6f, 0xdf, 0xf7, 0xf7, 0xdf, 0xc0, 
  0xff, 0xbf, 0xbf, 0xfb, 0xff, 0xdf, 0xc0, 
  0xfd, 0x97, 0xbf, 0xef, 0xff, 0xdf, 0xc0, 
  0xfd, 0xbf, 0xbf, 0xef, 0xfb, 0xdf, 0xc0, 
  0xf7, 0xeb, 0xaf, 0xed, 0xff, 0x07, 0xc0, 
  0xf3, 0xb3, 0xaf, 0xe5, 0xfc, 0x31, 0xc0, 
  0xf6, 0x9b, 0xa8, 0x15, 0xfd, 0x41, 0xc0, 
  0xde, 0xdf, 0xa1, 0xe1, 0xfd, 0xaf, 0xc0, 
  0xfe, 0xde, 0x70, 0x01, 0xdc, 0xaf, 0xc0, 
  0xff, 0xd9, 0xf3, 0xff, 0xfe, 0xd7, 0xc0, 
  0xef, 0xc7, 0xff, 0xff, 0xff, 0xdb, 0xc0, 
  0xef, 0x7f, 0xff, 0xff, 0xff, 0xeb, 0xc0, 
  0xff, 0x7f, 0xff, 0xff, 0xff, 0x6f, 0xc0, 
  0xdf, 0x1f, 0xff, 0xff, 0xfe, 0x75, 0xc0, 
  0xde, 0x3f, 0xff, 0xff, 0xde, 0xf1, 0xc0, 
  0xfc, 0x7f, 0xff, 0xff, 0xde, 0xbd, 0xc0, 
  0xb9, 0xff, 0x8f, 0xff, 0xfe, 0xb9, 0xc0, 
  0xf3, 0xfe, 0xef, 0xff, 0xbe, 0x87, 0xc0, 
  0xc7, 0xfe, 0xff, 0xfd, 0xfe, 0xbf, 0xc0, 
  0x1f, 0xfe, 0xff, 0xfd, 0x7e, 0xff, 0xc0, 
  0x3f, 0xff, 0x7f, 0xfe, 0x7e, 0xff, 0xc0, 
  0xff, 0xff, 0x7f, 0xf9, 0x7e, 0xdf, 0xc0, 
  0xff, 0xff, 0xbf, 0xff, 0x76, 0xdf, 0xc0, 
  0x7f, 0xff, 0xff, 0xff, 0x76, 0xdf, 0xc0, 
  0x7f, 0xff, 0xff, 0xfe, 0x7a, 0xff, 0xc0, 
  0x3f, 0xff, 0xff, 0xfe, 0x72, 0xff, 0xc0, 
};

const lv_img_dsc_t uikousen3 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen3_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN4
#define LV_ATTRIBUTE_IMG_UIKOUSEN4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN4 uint8_t uikousen4_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xed, 0xff, 0x7f, 0xd7, 0xf7, 0xef, 0xc0, 
  0xee, 0xbf, 0x5f, 0xdf, 0xf7, 0xef, 0xc0, 
  0xee, 0xdf, 0xdf, 0xeb, 0xff, 0xdf, 0xc0, 
  0xf6, 0x5f, 0xff, 0xe3, 0xfb, 0x8f, 0xc0, 
  0xf6, 0xaf, 0xff, 0xf7, 0xf8, 0x03, 0xc0, 
  0xfe, 0x67, 0xff, 0x97, 0xfd, 0x4d, 0xc0, 
  0xfb, 0x77, 0xfc, 0x3d, 0xfd, 0xa0, 0xc0, 
  0xdb, 0x7f, 0xe3, 0xf1, 0xdc, 0xb6, 0xc0, 
  0xdf, 0xfe, 0x70, 0x01, 0xdc, 0xd7, 0xc0, 
  0xde, 0xfd, 0xf0, 0x7d, 0xdf, 0xdb, 0xc0, 
  0xfe, 0xf7, 0xff, 0xfd, 0xff, 0xdb, 0xc0, 
  0xfc, 0x8f, 0xff, 0xfd, 0xdf, 0xed, 0xc0, 
  0xbd, 0xbf, 0xff, 0xfd, 0xde, 0x6d, 0xc0, 
  0xbd, 0xbf, 0xff, 0xfd, 0xde, 0x6d, 0xc0, 
  0xfd, 0x3f, 0xff, 0xfd, 0xde, 0xf9, 0xc0, 
  0x7e, 0x7f, 0xff, 0xfd, 0xbe, 0xfd, 0xc0, 
  0x7c, 0xff, 0x9f, 0xff, 0xbe, 0xb9, 0xc0, 
  0xf1, 0xff, 0x0f, 0xff, 0x7e, 0x87, 0xc0, 
  0xe7, 0xfe, 0xff, 0xfa, 0xfe, 0xdf, 0xc0, 
  0xcf, 0xff, 0xf7, 0xf9, 0xfe, 0xff, 0xc0, 
  0x9f, 0xff, 0xf7, 0xfb, 0xfe, 0xff, 0xc0, 
  0x3f, 0xff, 0x77, 0xf7, 0xfe, 0xef, 0xc0, 
  0xff, 0xff, 0xf7, 0xff, 0xfe, 0xef, 0xc0, 
  0xff, 0xff, 0xb7, 0xff, 0xf6, 0xef, 0xc0, 
  0xff, 0xff, 0xef, 0xfe, 0xf6, 0xef, 0xc0, 
  0xff, 0xff, 0xff, 0xfe, 0xf6, 0xff, 0xc0, 
};

const lv_img_dsc_t uikousen4 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen4_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN5
#define LV_ATTRIBUTE_IMG_UIKOUSEN5
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN5 uint8_t uikousen5_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0x7d, 0xbf, 0xff, 0xbf, 0xef, 0xbf, 0xc0, 
  0xf7, 0xff, 0xff, 0xd7, 0xff, 0xbf, 0xc0, 
  0xf6, 0xff, 0xdf, 0xdf, 0xf7, 0x3f, 0xc0, 
  0xf3, 0x5f, 0xdf, 0xff, 0xf6, 0x3f, 0xc0, 
  0xf7, 0x2f, 0xdf, 0xef, 0xf8, 0x4f, 0xc0, 
  0xf7, 0x8f, 0xdf, 0xab, 0xfa, 0xa7, 0xc0, 
  0xf5, 0xa7, 0xde, 0x2b, 0xfb, 0x97, 0xc0, 
  0xf5, 0xb7, 0xc1, 0xf1, 0xbb, 0x43, 0xc0, 
  0xf7, 0x7f, 0x5f, 0x03, 0xbb, 0x5b, 0xc0, 
  0xef, 0x7f, 0x60, 0x3b, 0xb9, 0xdf, 0xc0, 
  0xdf, 0x7d, 0xf7, 0xfb, 0xbd, 0xef, 0xc0, 
  0xbf, 0x7b, 0xff, 0xfb, 0xbd, 0xaf, 0xc0, 
  0xff, 0xef, 0xff, 0xfb, 0xff, 0xaf, 0xc0, 
  0xee, 0xdf, 0xff, 0xfb, 0xff, 0xcf, 0xc0, 
  0xee, 0xbf, 0xff, 0xfb, 0x7f, 0xcf, 0xc0, 
  0xee, 0xbf, 0xff, 0xfb, 0x7e, 0xef, 0xc0, 
  0xff, 0x3f, 0xff, 0xff, 0xfe, 0xef, 0xc0, 
  0xfe, 0x7f, 0xcf, 0xfe, 0xfe, 0x0f, 0xc0, 
  0xdc, 0xff, 0x7f, 0xfd, 0xfd, 0xbf, 0xc0, 
  0xd9, 0xff, 0xff, 0xf7, 0xff, 0xbf, 0xc0, 
  0xfb, 0xff, 0x77, 0xf3, 0xff, 0xbf, 0xc0, 
  0xb7, 0xff, 0x7f, 0xe7, 0xff, 0xff, 0xc0, 
  0xe7, 0xff, 0xff, 0xff, 0xef, 0xff, 0xc0, 
  0x1f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xc0, 
  0x1f, 0xff, 0xe7, 0xfe, 0xef, 0xdf, 0xc0, 
  0x3f, 0xff, 0xff, 0xfe, 0xeb, 0xdf, 0xc0, 
};

const lv_img_dsc_t uikousen5 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen5_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN6
#define LV_ATTRIBUTE_IMG_UIKOUSEN6
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN6 uint8_t uikousen6_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0x3f, 0x7f, 0xfb, 0xff, 0xfd, 0xf7, 0xc0, 
  0x7f, 0x37, 0xf9, 0xff, 0xfd, 0xf7, 0xc0, 
  0xff, 0x3a, 0xfd, 0xfe, 0xff, 0xf7, 0xc0, 
  0xff, 0x7b, 0xff, 0xfe, 0xfe, 0xef, 0xc0, 
  0xef, 0x59, 0x7f, 0xfc, 0xfe, 0xc7, 0xc0, 
  0xef, 0x58, 0x7f, 0xfc, 0xff, 0x03, 0xc0, 
  0xef, 0x79, 0x7a, 0x03, 0xff, 0xc9, 0xc0, 
  0xef, 0x7d, 0xfb, 0xfc, 0x7f, 0xcd, 0xc0, 
  0xeb, 0xed, 0xe6, 0x00, 0x7f, 0x61, 0xc0, 
  0xef, 0xed, 0xbe, 0x1f, 0x7f, 0x74, 0xc0, 
  0xef, 0xe4, 0xff, 0xff, 0x7f, 0xf6, 0xc0, 
  0xee, 0xe5, 0xff, 0xff, 0x7f, 0xf6, 0xc0, 
  0xfe, 0xef, 0xff, 0xff, 0xff, 0xef, 0xc0, 
  0xef, 0xf3, 0xff, 0xff, 0xff, 0xef, 0xc0, 
  0xed, 0xf7, 0xff, 0xff, 0xff, 0xef, 0xc0, 
  0xed, 0xef, 0xff, 0xff, 0xef, 0xab, 0xc0, 
  0xef, 0xdf, 0xfb, 0xff, 0xef, 0xbb, 0xc0, 
  0xeb, 0x9f, 0xf5, 0xff, 0x7f, 0xb3, 0xc0, 
  0xef, 0x3f, 0xef, 0xff, 0x5f, 0xb3, 0xc0, 
  0xe6, 0x7f, 0xef, 0xff, 0x5f, 0x87, 0xc0, 
  0xe4, 0xff, 0xff, 0xff, 0x1f, 0xef, 0xc0, 
  0xe9, 0xff, 0xff, 0xff, 0x5f, 0xef, 0xc0, 
  0xef, 0xff, 0xff, 0xfe, 0xdf, 0xff, 0xc0, 
  0x67, 0xff, 0xfb, 0xff, 0xdc, 0xff, 0xc0, 
  0x67, 0xff, 0xff, 0xff, 0xdc, 0x7f, 0xc0, 
  0x0b, 0xff, 0xff, 0xff, 0x9c, 0x7f, 0xc0, 
};

const lv_img_dsc_t uikousen6 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen6_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN7
#define LV_ATTRIBUTE_IMG_UIKOUSEN7
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN7 uint8_t uikousen7_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xc7, 0xfe, 0xff, 0x77, 0xef, 0xff, 0xc0, 
  0xb7, 0xff, 0xff, 0xf7, 0xff, 0xbf, 0xc0, 
  0x77, 0xf7, 0xf7, 0xf7, 0xff, 0xbf, 0xc0, 
  0xff, 0xeb, 0xb7, 0xf7, 0xf7, 0xff, 0xc0, 
  0xff, 0x7f, 0x97, 0xf0, 0x07, 0xfd, 0xc0, 
  0xff, 0x7f, 0x96, 0x1f, 0xe7, 0xfd, 0xc0, 
  0xef, 0x7f, 0xb1, 0xff, 0xff, 0xc0, 0x40, 
  0xef, 0x77, 0xbf, 0xe0, 0x07, 0xd1, 0x80, 
  0xff, 0x7f, 0x7f, 0xff, 0xff, 0xdc, 0x00, 
  0xff, 0x6f, 0xbf, 0xff, 0xff, 0xdb, 0xc0, 
  0xff, 0x6f, 0x3f, 0xff, 0xff, 0xda, 0xc0, 
  0xff, 0x7c, 0x7f, 0xff, 0xff, 0xfc, 0xc0, 
  0xff, 0x59, 0xff, 0xff, 0xff, 0xed, 0x40, 
  0x7f, 0x27, 0xfe, 0x7f, 0xff, 0xff, 0x40, 
  0x1f, 0x0f, 0xfd, 0xbf, 0xff, 0xfe, 0xc0, 
  0x3f, 0x3f, 0xfd, 0xbf, 0xfe, 0xf7, 0x00, 
  0x3f, 0x7f, 0xfd, 0xbf, 0xff, 0xf7, 0x80, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x80, 
  0x3f, 0xff, 0xff, 0xbf, 0xf5, 0xf3, 0x40, 
  0x3f, 0xff, 0xff, 0xbf, 0xf7, 0xf2, 0xc0, 
  0x7d, 0xbf, 0xfe, 0xff, 0xfb, 0xf5, 0xc0, 
  0x7f, 0xbf, 0xff, 0x7f, 0xe3, 0xf7, 0xc0, 
  0x7f, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 
  0x7f, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xc0, 
  0xff, 0x5f, 0xff, 0xff, 0xeb, 0xbf, 0xc0, 
  0x2f, 0xef, 0xff, 0xff, 0xc3, 0xbf, 0xc0, 
};

const lv_img_dsc_t uikousen7 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen7_map,
};



#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN8
#define LV_ATTRIBUTE_IMG_UIKOUSEN8
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN8 uint8_t uikousen8_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xf7, 0xde, 0xff, 0xbf, 0x7f, 0x77, 0x80, 
  0xf7, 0xfe, 0xdf, 0x1f, 0xfe, 0x7f, 0x80, 
  0xff, 0xfe, 0xbf, 0xdf, 0xbf, 0xff, 0xc0, 
  0xff, 0xfe, 0xff, 0xbf, 0x7f, 0x7b, 0xc0, 
  0xf7, 0xfe, 0xff, 0xaf, 0x5f, 0x3f, 0xc0, 
  0xf7, 0xbe, 0xfc, 0xc3, 0xdf, 0xbf, 0xc0, 
  0xf7, 0xbe, 0xff, 0xdc, 0x4f, 0xbf, 0xc0, 
  0xfb, 0xbe, 0xf8, 0xff, 0x73, 0xbd, 0xc0, 
  0xf9, 0xbe, 0x00, 0xff, 0x3d, 0xbd, 0x80, 
  0xc0, 0x3e, 0x1f, 0xff, 0x0e, 0xfd, 0x80, 
  0xc0, 0xbe, 0xff, 0xff, 0xf1, 0x7e, 0x00, 
  0xe0, 0xbe, 0xff, 0xff, 0xf8, 0x3e, 0x40, 
  0xfa, 0xb7, 0xff, 0xff, 0xff, 0x7f, 0x40, 
  0xf9, 0xb7, 0xff, 0xc7, 0xff, 0xfe, 0x00, 
  0xf5, 0xbf, 0xff, 0xdf, 0xff, 0xfe, 0x00, 
  0xed, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 
  0xe3, 0x7f, 0x7f, 0xff, 0xff, 0xfe, 0x80, 
  0xfb, 0x7b, 0x7f, 0xff, 0xff, 0xff, 0x80, 
  0xf7, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0xff, 0x7d, 0xff, 0xdf, 0xff, 0xff, 0x80, 
  0xee, 0x7f, 0xff, 0xd7, 0xff, 0xff, 0x80, 
  0xef, 0xfe, 0xbf, 0xef, 0xff, 0xb7, 0xc0, 
  0xf5, 0xdf, 0x7f, 0xff, 0xff, 0xb7, 0x80, 
  0xfb, 0xdf, 0x5f, 0xff, 0xff, 0xef, 0x40, 
  0xff, 0xdf, 0x3f, 0xff, 0xff, 0x5d, 0xc0, 
  0xff, 0xff, 0x3f, 0xff, 0xfe, 0x3d, 0x80, 
};

const lv_img_dsc_t uikousen8 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen8_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN9
#define LV_ATTRIBUTE_IMG_UIKOUSEN9
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN9 uint8_t uikousen9_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xff, 0xfb, 0xff, 0xfb, 0xdb, 0xfe, 0x00, 
  0xff, 0xff, 0xdb, 0xfb, 0xee, 0xde, 0x80, 
  0xff, 0xff, 0xd7, 0xf3, 0xef, 0x4e, 0xc0, 
  0xff, 0xff, 0xcf, 0xfd, 0xe7, 0xaf, 0xc0, 
  0xff, 0x77, 0xdf, 0xfb, 0xff, 0xef, 0xc0, 
  0xff, 0x77, 0xdf, 0x9c, 0xfb, 0xef, 0x40, 
  0xff, 0x77, 0xff, 0xfc, 0xf3, 0xff, 0x40, 
  0xff, 0x07, 0xdc, 0x1f, 0x17, 0xf7, 0x40, 
  0xfe, 0x17, 0xc0, 0x1f, 0xe7, 0xf7, 0xc0, 
  0xfc, 0x1f, 0xdf, 0xff, 0xe4, 0xf7, 0xc0, 
  0xf8, 0x3e, 0xdf, 0xff, 0xf3, 0x77, 0xc0, 
  0xfb, 0x2e, 0xdf, 0xff, 0xf8, 0xcf, 0x80, 
  0xff, 0x2e, 0xdf, 0xff, 0xfe, 0x77, 0x80, 
  0xfe, 0xae, 0xff, 0xff, 0xff, 0x9f, 0x80, 
  0xfe, 0xe7, 0xff, 0xf8, 0xff, 0xef, 0x80, 
  0xfe, 0xe7, 0xff, 0xf7, 0xff, 0xff, 0xc0, 
  0xfd, 0x67, 0x7f, 0xf7, 0xff, 0xf7, 0xc0, 
  0xfd, 0x67, 0xef, 0xf7, 0xff, 0xf7, 0xc0, 
  0xfc, 0xf7, 0xbf, 0xf7, 0xff, 0xf7, 0xc0, 
  0xfd, 0xf7, 0xff, 0xf6, 0xff, 0xff, 0xc0, 
  0xfe, 0xcf, 0xd7, 0xff, 0xff, 0xef, 0xc0, 
  0xff, 0x0f, 0xc7, 0xfd, 0xff, 0xef, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xc0, 
  0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xc0, 
  0xff, 0xff, 0xef, 0xff, 0xff, 0xfd, 0xc0, 
  0xff, 0xfa, 0xe7, 0xff, 0xff, 0xf5, 0xc0, 
};

const lv_img_dsc_t uikousen9 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen9_map,
};


#ifndef LV_ATTRIBUTE_IMG_UIKOUSEN0
#define LV_ATTRIBUTE_IMG_UIKOUSEN0
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UIKOUSEN0 uint8_t uikousen0_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/

  0xfb, 0xef, 0xfb, 0xfb, 0xf7, 0xef, 0x80, 
  0xfb, 0xef, 0xf7, 0xfa, 0xf7, 0xf7, 0x80, 
  0xfb, 0xff, 0xef, 0xfe, 0xfb, 0x77, 0xc0, 
  0xfb, 0xff, 0xdf, 0xfc, 0xfb, 0xfb, 0xc0, 
  0xfd, 0xff, 0xff, 0xff, 0x7d, 0xeb, 0xc0, 
  0xfc, 0xff, 0xff, 0x7e, 0xff, 0xff, 0xc0, 
  0xfc, 0x1f, 0xff, 0xff, 0x7c, 0xfd, 0xc0, 
  0xfa, 0x5f, 0x80, 0x1f, 0xdf, 0xfd, 0xc0, 
  0xf1, 0x5d, 0x80, 0xff, 0xe6, 0x7f, 0xc0, 
  0xf5, 0xdd, 0xdf, 0xff, 0xf0, 0xff, 0xc0, 
  0xf0, 0xdf, 0xdf, 0xff, 0xf2, 0xbe, 0xc0, 
  0xe4, 0xdf, 0xdf, 0xff, 0xf9, 0xce, 0xc0, 
  0xed, 0xde, 0xff, 0xff, 0xfc, 0xf9, 0xc0, 
  0xfd, 0xde, 0xff, 0xff, 0xff, 0x3c, 0xc0, 
  0xfd, 0xdf, 0xff, 0xf9, 0xff, 0x9f, 0xc0, 
  0xfc, 0xdf, 0x6f, 0xfa, 0xff, 0xc7, 0xc0, 
  0xfc, 0xcf, 0xff, 0xf7, 0xff, 0xf3, 0xc0, 
  0xfc, 0xcf, 0xbf, 0xff, 0xff, 0xf9, 0xc0, 
  0xfc, 0xcf, 0x97, 0xff, 0xff, 0xfc, 0xc0, 
  0xfd, 0xcf, 0xef, 0xfe, 0xff, 0xfc, 0xc0, 
  0xfc, 0x3f, 0xfb, 0xf7, 0xff, 0xfe, 0xc0, 
  0xff, 0x7d, 0xff, 0xf5, 0xff, 0xfa, 0xc0, 
  0xff, 0xfd, 0xdf, 0xff, 0xff, 0xfa, 0xc0, 
  0xff, 0xf7, 0xdf, 0xff, 0xff, 0xf7, 0xc0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xc0, 
  0xff, 0xfe, 0xff, 0xff, 0xff, 0xfa, 0x80, 
};

const lv_img_dsc_t uikousen0 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 26,
  .data_size = 190,
  .data = uikousen0_map,
};





/* Frame table + exported count */
const lv_img_dsc_t *uikousen_frames[] = {
    &uikousen0,&uikousen1,&uikousen2,&uikousen3,&uikousen4,&uikousen5,&uikousen6,&uikousen7,&uikousen8,&uikousen9,
};
const size_t UIKOUSEN_FRAME_CNT = 10;

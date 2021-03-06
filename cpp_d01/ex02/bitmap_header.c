/*
** bitmap_header.c for bitmap_header.c in /home/rayan/Piscine_CPP/cpp_d01/ex02
**
** Made by Rayan
** Login   <raihane.akkache@epitech.net>
**
** Started on  Wed Jan  4 23:16:56 2017 Rayan
** Last update Wed Jan  4 23:55:14 2017 Rayan
*/

#include "bitmap.h"

void	make_bmp_header(t_bmp_header *header, size_t size)
{
  header->magic = 0x4D42;
  header->size = sizeof(t_bmp_header) + sizeof(t_bmp_info_header) + size * size * 4;
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
}

void	make_bmp_info_header(t_bmp_info_header *header, size_t size)
{
  header->size = 40;
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * 4;
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_colors = 0;
}

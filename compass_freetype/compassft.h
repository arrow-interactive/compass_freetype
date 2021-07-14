
/*
Copyright © 2021 FOSSBAY / ARROW INTERACTIVE
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

                    The FreeType Project LICENSE
                    ----------------------------

                            2006-Jan-27

                    Copyright 1996-2002, 2006 by
          David Turner, Robert Wilhelm, and Werner Lemberg



Introduction
============

  The FreeType  Project is distributed in  several archive packages;
  some of them may contain, in addition to the FreeType font engine,
  various tools and  contributions which rely on, or  relate to, the
  FreeType Project.

  This  license applies  to all  files found  in such  packages, and
  which do not  fall under their own explicit  license.  The license
  affects  thus  the  FreeType   font  engine,  the  test  programs,
  documentation and makefiles, at the very least.

  This  license   was  inspired  by  the  BSD,   Artistic,  and  IJG
  (Independent JPEG  Group) licenses, which  all encourage inclusion
  and  use of  free  software in  commercial  and freeware  products
  alike.  As a consequence, its main points are that:

    o We don't promise that this software works. However, we will be
      interested in any kind of bug reports. (`as is' distribution)

    o You can  use this software for whatever you  want, in parts or
      full form, without having to pay us. (`royalty-free' usage)

    o You may not pretend that  you wrote this software.  If you use
      it, or  only parts of it,  in a program,  you must acknowledge
      somewhere  in  your  documentation  that  you  have  used  the
      FreeType code. (`credits')

  We  specifically  permit  and  encourage  the  inclusion  of  this
  software, with  or without modifications,  in commercial products.
  We  disclaim  all warranties  covering  The  FreeType Project  and
  assume no liability related to The FreeType Project.


  Finally,  many  people  asked  us  for  a  preferred  form  for  a
  credit/disclaimer to use in compliance with this license.  We thus
  encourage you to use the following text:

   """
    Portions of this software are copyright © <year> The FreeType
    Project (www.freetype.org).  All rights reserved.
   """

  Please replace <year> with the value from the FreeType version you
  actually use.


Legal Terms
===========

0. Definitions
--------------

  Throughout this license,  the terms `package', `FreeType Project',
  and  `FreeType  archive' refer  to  the  set  of files  originally
  distributed  by the  authors  (David Turner,  Robert Wilhelm,  and
  Werner Lemberg) as the `FreeType Project', be they named as alpha,
  beta or final release.

  `You' refers to  the licensee, or person using  the project, where
  `using' is a generic term including compiling the project's source
  code as  well as linking it  to form a  `program' or `executable'.
  This  program is  referred to  as  `a program  using the  FreeType
  engine'.

  This  license applies  to all  files distributed  in  the original
  FreeType  Project,   including  all  source   code,  binaries  and
  documentation,  unless  otherwise  stated   in  the  file  in  its
  original, unmodified form as  distributed in the original archive.
  If you are  unsure whether or not a particular  file is covered by
  this license, you must contact us to verify this.

  The FreeType  Project is copyright (C) 1996-2000  by David Turner,
  Robert Wilhelm, and Werner Lemberg.  All rights reserved except as
  specified below.

1. No Warranty
--------------

  THE FREETYPE PROJECT  IS PROVIDED `AS IS' WITHOUT  WARRANTY OF ANY
  KIND, EITHER  EXPRESS OR IMPLIED,  INCLUDING, BUT NOT  LIMITED TO,
  WARRANTIES  OF  MERCHANTABILITY   AND  FITNESS  FOR  A  PARTICULAR
  PURPOSE.  IN NO EVENT WILL ANY OF THE AUTHORS OR COPYRIGHT HOLDERS
  BE LIABLE  FOR ANY DAMAGES CAUSED  BY THE USE OR  THE INABILITY TO
  USE, OF THE FREETYPE PROJECT.

2. Redistribution
-----------------

  This  license  grants  a  worldwide, royalty-free,  perpetual  and
  irrevocable right  and license to use,  execute, perform, compile,
  display,  copy,   create  derivative  works   of,  distribute  and
  sublicense the  FreeType Project (in  both source and  object code
  forms)  and  derivative works  thereof  for  any  purpose; and  to
  authorize others  to exercise  some or all  of the  rights granted
  herein, subject to the following conditions:

    o Redistribution of  source code  must retain this  license file
      (`FTL.TXT') unaltered; any  additions, deletions or changes to
      the original  files must be clearly  indicated in accompanying
      documentation.   The  copyright   notices  of  the  unaltered,
      original  files must  be  preserved in  all  copies of  source
      files.

    o Redistribution in binary form must provide a  disclaimer  that
      states  that  the software is based in part of the work of the
      FreeType Team,  in  the  distribution  documentation.  We also
      encourage you to put an URL to the FreeType web page  in  your
      documentation, though this isn't mandatory.

  These conditions  apply to any  software derived from or  based on
  the FreeType Project,  not just the unmodified files.   If you use
  our work, you  must acknowledge us.  However, no  fee need be paid
  to us.

3. Advertising
--------------

  Neither the  FreeType authors and  contributors nor you  shall use
  the name of the  other for commercial, advertising, or promotional
  purposes without specific prior written permission.

  We suggest,  but do not require, that  you use one or  more of the
  following phrases to refer  to this software in your documentation
  or advertising  materials: `FreeType Project',  `FreeType Engine',
  `FreeType library', or `FreeType Distribution'.

  As  you have  not signed  this license,  you are  not  required to
  accept  it.   However,  as  the FreeType  Project  is  copyrighted
  material, only  this license, or  another one contracted  with the
  authors, grants you  the right to use, distribute,  and modify it.
  Therefore,  by  using,  distributing,  or modifying  the  FreeType
  Project, you indicate that you understand and accept all the terms
  of this license.

4. Contacts
-----------

  There are two mailing lists related to FreeType:

    o freetype@nongnu.org

      Discusses general use and applications of FreeType, as well as
      future and  wanted additions to the  library and distribution.
      If  you are looking  for support,  start in  this list  if you
      haven't found anything to help you in the documentation.

    o freetype-devel@nongnu.org

      Discusses bugs,  as well  as engine internals,  design issues,
      specific licenses, porting, etc.

  Our home page can be found at

    https://www.freetype.org



*/


#ifndef COMPASSFT_H
#define COMPASSFT_H

#include <ft2build.h>
#include FT_FREETYPE_H  

#ifndef COMPASS_GRAPHICS_H
#error Compass should already be included before using this library
#endif

#ifdef _WIN32
 
/* WIN32 (.dll) */
#ifdef COMPASSFT_BUILD_TYPE_SHARED   /* building compass as a .dll */
#define COMPASSFT_API   __declspec(dllexport)
#elif defined(COMPASSFT_USE_TYPE_SHARED) /* Using compass as a .dll */
#define COMPASSFT_API __declspec(dllimport) 
#else 
#define COMPASSFT_API  /* Compass as a static library, or a linux shared library */
#endif
#else 

#define COMPASSFT_API /* Compass as a static library, or a linux shared library */
#endif


typedef struct
{
    compass_texture_t texture;
    v2 advance;
    v2 size;
    v2 bearing;
} compassft_glyph_info_t;

typedef struct
{
    s8 chars;
    compassft_glyph_info_t glyph;
} compassft_glyph_t;

typedef struct  {
    s8 *text;
    s8 *font;
    u32 length;
    f32 x;
    f32 y;
    f32 scale;
    f32 size;
    f32 orgin_x;
    f32 tabs;
    Color color;
    u32 advanced_x;
    compassft_glyph_t* glyph;
    u32 glyph_used;
    u32 glyph_size;
    
} compassft_text_t;

COMPASSFT_API compassft_text_t
Compassft_CreateText(s8* text, s8* font, f32 x, f32 y, u32 size);

COMPASSFT_API void
Compassft_DrawText(compassft_text_t text, compass_renderer_t renderer);

#ifdef COMPASS_IMPL_FREETYPE 

COMPASSFT_API compassft_text_t
Compassft_CreateText(s8* text, s8* font, f32 x, f32 y, u32 size)
{
    
    compassft_text_t textObj = {0};
    textObj.text = text;
    textObj.font = font;
    textObj.x    = x;
    textObj.y    = y;
    textObj.scale= 1;
    textObj.glyph= COMPASS_MALLOC(sizeof(compassft_glyph_t) * 25);
    textObj.glyph_size = 25;
    textObj.glyph_used = 0;
    
    
    FT_Library flib;
    if (FT_Init_FreeType(&flib))
    {
        
        COMPASS_PRINTF("[compass:ft] Failed to initialize freetype library.\n");
        COMPASS_PRINTF("[compass:ft] Font failed to load.\n");
    }
    
    FT_Face face;
    if (FT_New_Face(flib, font, 0, &face))
    {
        COMPASS_PRINTF("[compass:ft] Failed to load font \"%s\".\n", font);
        COMPASS_PRINTF("[compass:ft] Font failed to load.\n");
    }
    
    textObj.size = size;
    FT_Set_Pixel_Sizes(face, 0, textObj.size);  
    
    
    for (u8 c = 0; c < 128;c++)
    {
        if (FT_Load_Char(face, c, FT_LOAD_RENDER))
        {
            COMPASS_PRINTF("[compass:ft] : Failed to load font glyph <%c>\n", c);
        }
        
        
        
        compass_texture_t texture =  Compass_LoadTextTexture(face->glyph->bitmap.width, face->glyph->bitmap.rows ,face->glyph->bitmap.buffer);
        
        
        if (textObj.glyph_used >= textObj.glyph_size)
        {
            textObj.glyph_size *= 2;
            textObj.glyph = COMPASS_REALLOC ( textObj.glyph, sizeof(compassft_glyph_t) * textObj.glyph_size);
        }
        
        compassft_glyph_info_t push = 
        {
            texture,
            (v2){face->glyph->advance.x,face->glyph->advance.y},
            (v2){face->glyph->bitmap.width,face->glyph->bitmap.rows },
            (v2){face->glyph->bitmap_left,face->glyph->bitmap_top }
            
        };
        compassft_glyph_t final = 
        {
            c,
            push
        };
        textObj.glyph[textObj.glyph_used++] = final;
        
        
        Compass_EndTexture();
    }  
    textObj.color.r = 255;
    textObj.color.g = 255;
    textObj.color.b = 255;
    textObj.color.a = 255;
    textObj.orgin_x = x;
    while (text[textObj.length++] != '\0');
    
    
    FT_Done_Face(face);
    FT_Done_FreeType(flib);
    
    return textObj;
    
}


COMPASSFT_API void
Compassft_DrawText(compassft_text_t text, compass_renderer_t renderer)
{
    
    compass_opengl_handle_t* handle = (compass_opengl_handle_t*)renderer.graphics.handle; 
    
    
    for (u32 c = 0; c < text.length ;c++){
        
        compassft_glyph_t character = text.glyph[(s8)text.text[c]];
        f32 xpos = text.x + character.glyph.bearing.x* text.scale ;
        f32 ypos = text.y + (character.glyph.size.y + character.glyph.bearing.y ) - character.glyph.size.y - character.glyph.bearing.y- character.glyph.bearing.y* text.scale ; 
        f32 h = character.glyph.size.y * text.scale ;
        f32 w = character.glyph.size.x * text.scale;
        
        if (character.chars != '\0' ){
            if (character.chars != '\n' ){
                if (character.chars != '\t' ){
                    f32 vertex_data[] =
                    {
                        xpos,ypos + h, 0, 
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0,
                        0.0f, 1.0f,
                        2,
                        
                        xpos,ypos,0,
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0, 0.0f, 0.0f,
                        2,
                        xpos + w,ypos,0,
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0,
                        
                        1.0f, 0.0f,
                        2,
                        xpos,ypos + h, 0,
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0,
                        0.0f, 1.0f,
                        2,
                        xpos + w, ypos,0, 
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0,
                        1.0f, 0.0f,
                        2,
                        xpos + w, ypos + h, 0,
                        text.color.r / 255.0,text.color.g / 255.0,text.color.b / 255.0,text.color.a / 255.0,
                        1.0f, 1.0f,
                        2
                    };
                    
                    
                    
                    
                    
                    Compass_BeginTexture(renderer, character.glyph.texture);
                    
                    if (character.chars != '\n'){
                        if (character.chars != '\0'){
                            if (character.chars != '\t'){
                                
                                Compass_PushVertex(vertex_data, sizeof(vertex_data), renderer);;
                            }
                        }
                    }
                }
            }
        }
        
        Compass_EndDrawing(COMPASS_DRAW_TriangleFan,renderer, 6);
        if (character.chars == '\t')
        {
            text.tabs++;
            text.x += ( (s32)character.glyph.advance.x >> 6 ) *text.scale * 3;
            
            
        }
        if (character.chars == '\n')
        {
            text.y += ( (s32)text.size )* text.scale ;
            text.x =  text.orgin_x ;
            
        } else
        {
            
            text.x += ( (s32)character.glyph.advance.x >> 6 )* text.scale ;
            
        }
        
    }
    
    
}

#endif 
#endif
/*
   
    Copyright (c) 2006 Florian Wesch <fw@dividuum.de>. All Rights Reserved.
    
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA

*/

#ifndef GL_VIDEO_H
#define GL_VIDEO_H

void         video_fullscreen_toggle();
void         video_flip();
void         video_set_title(const char *title);

int          video_width();
int          video_height();

void         video_resize(int w, int h);

void         video_init(int w, int h, int fs);
void         video_shutdown();

#endif

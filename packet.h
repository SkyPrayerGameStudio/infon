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

#ifndef PACKET_H
#define PACKET_H

#include <stdint.h>

typedef struct {
// Wire Data    
    uint8_t  len;
    uint8_t  type;
#define PACKET_PLAYER_UPDATE     0
#define PACKET_WORLD_UPDATE      1
#define PACKET_SCROLLER_MSG      2
#define PACKET_CREATURE_UPDATE   3
#define PACKET_QUIT_MSG          4
#define PACKET_KOTH_UPDATE       5
#define PACKET_WELCOME_MSG      32
    uint8_t  data[256];
// Mgmt Data    
    uint8_t  offset;
} packet_t __attribute__((packed));

void packet_rewind(packet_t *packet);
void packet_init  (packet_t *packet, int type);

int  packet_read08(packet_t *packet, uint8_t  *data);
int  packet_read16(packet_t *packet, uint16_t *data);
int  packet_read32(packet_t *packet, uint32_t *data);
int  packet_readXX(packet_t *packet, void *data, int len);
int  packet_write08(packet_t *packet, uint8_t  data);
int  packet_write16(packet_t *packet, uint16_t data);
int  packet_write32(packet_t *packet, uint32_t data);
int  packet_writeXX(packet_t *packet, const void *data, int len);

#endif
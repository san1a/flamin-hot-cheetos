#ifndef CREATEMOVE_H
#define CREATEMOVE_H

#pragma once

#include "stdafx.h"

void __stdcall CreateMove( int sequence_number, float input_sample_frametime, bool active );

typedef void( __stdcall* CreateMove_t )( int, float, bool );
extern CreateMove_t originalCreateMove;

#endif
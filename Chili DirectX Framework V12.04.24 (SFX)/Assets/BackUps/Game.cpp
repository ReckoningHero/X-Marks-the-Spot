/****************************************************************************************** 
 *	Chili DirectX Framework Version 12.04.24											  *	
 *	Game.cpp																			  *
 *	Copyright 2012 PlanetChili.net														  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "Game.h"

Game::Game( HWND hWnd,const KeyboardServer& kServer,const MouseServer& mServer )
:	gfx( hWnd ),
	audio( hWnd ),
	kbd( kServer ),
	mouse( mServer )
{}

void Game::Go()
{
	gfx.BeginFrame();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::ComposeFrame()
{
	gfx.PutPixel( 400,300,255,255,255 );
	gfx.PutPixel( 395,300,255,255,255 );
	gfx.PutPixel( 396,300,255,255,255 );
	gfx.PutPixel( 397,300,255,255,255 );
	gfx.PutPixel( 403,300,255,255,255 );
	gfx.PutPixel( 404,300,255,255,255 );
	gfx.PutPixel( 405,300,255,255,255 );
	gfx.PutPixel( 400,295,255,255,255 );
	gfx.PutPixel( 400,296,255,255,255 );
	gfx.PutPixel( 400,297,255,255,255 );
	gfx.PutPixel( 400,303,255,255,255 );
	gfx.PutPixel( 400,304,255,255,255 );
	gfx.PutPixel( 400,305,255,255,255 );
	
}
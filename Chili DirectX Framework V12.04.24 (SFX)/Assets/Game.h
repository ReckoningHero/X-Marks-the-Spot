/****************************************************************************************** 
 *	Chili DirectX Framework Version 12.04.24											  *	
 *	Game.h																				  *
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
#pragma once

#include "D3DGraphics.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Sound.h"
#include<conio.h>

#define NCircle 20
#define GOALRAD 20

class Game
{
public:
	Game( HWND hWnd,const KeyboardServer& kServer,const MouseServer& mServer );
	void Go();
private:
	void ComposeFrame();
	/********************************/
	/*  User Functions              */

	void DrawCursor( int x,int y );
	void DrawCircle( int x,int y );
	void DrawCursorEnemy(int CursorEnemyX, int CursorEnemyY);
	void DrawGameOver( int x,int y );
	void DrawWin(int x, int y);
	void UpdatedCursor();
	void UpdatedCircle();
	void UpdatedCursorEnemy();
	void ResetGoal();

	int GetCircleX( int index );
	int GetCircleY( int index );
	bool GetCircleEaten( int index );
	void SetCircleX( int index,int x );


	/********************************/
private:
	D3DGraphics gfx;
	KeyboardClient kbd;
	MouseClient mouse;
	DSound audio;
	/********************************/
	/*  User Variables              */
	int nCircle;
	int point;
	bool GameOver;
	bool YouWin;

	int CursorX;
	int CursorY;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;
	int x5;
	int y5;
	int x6;
	int y6;
	int goalX;
	int goalY;

	float CircleX[ NCircle ];
	float CircleY[ NCircle ];
	float CircleXVelocity[ NCircle ];
	float CircleYVelocity[ NCircle ];


	/********************************/
};
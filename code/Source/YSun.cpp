#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
//#include "audio.h"
#include "gamelib.h"
#include "YSun.h"

namespace game_framework {
	///////////////////////////////////////////////////////////////
	// YSun: Sun class
	///////////////////////////////////////////////////////////////

	YSun::YSun() {
		srand((int)time(NULL));
		x = (rand() % 550) + 100;		// 100~650
		y = -150;
		floor = (rand() % 250) + 250;	//250~500
		is_alive = true;
		sunflowerflag = false;
	}
	YSun::YSun(int x, int y) {
		this->x = x;
		this->y = y;
		floor = y + 45;
		is_alive = false;
		sunflowerflag = true;
		rising = true;
		velocity = 10;
	}

	YSun &  YSun::operator= (const YSun & other) {
		if (this != &other) {
			this->x = other.x;
			this->y = other.y;
			this->floor = other.floor;
			this->is_alive = other.is_alive;
			this->sunflowerflag = other.sunflowerflag;
			this->velocity = other.velocity;
			this->rising = other.rising;
		}
		return *this;

	}

	bool YSun::IsAlive() {
		return is_alive;
	}

	void YSun::LoadBitmap() {
		char *filename[5] = { ".\\bitmaps\\Sun\\sun0.bmp",".\\bitmaps\\Sun\\sun1.bmp",".\\bitmaps\\Sun\\sun2.bmp",".\\bitmaps\\Sun\\sun3.bmp"
		, ".\\bitmaps\\Sun\\sun4.bmp" };

		for (int i = 0; i < 5; i++)
			sunanimation.AddBitmap(filename[i], RGB(255, 255, 255));
	}

	void YSun::OnMove() {
		if (sunflowerflag) {
			if (rising) {			// �W�ɪ��A
				if (velocity > 0) {
					y -= velocity;	// ��t�� > 0�ɡAy�b�W��(����velocity���I�Avelocity����쬰 �I/��)
					velocity--;		// �����O�v�T�A�U�����W�ɳt�׭��C
					x += 1;
				}
				else {
					rising = false; // ��t�� <= 0�A�W�ɲפ�A�U���אּ�U��
					velocity = 1;	// �U������t(velocity)��1
					x += 1;
				}
			}
			else {				// �U�����A
				if (y < floor - 1) {  // ��y�y���٨S�I��a�O
					y += velocity;	// y�b�U��(����velocity���I�Avelocity����쬰 �I/��)
					velocity++;		// �����O�v�T�A�U�����U���t�׼W�[
					x += 1;
				}
			}
		}
		if (!sunflowerflag && GetY() > 0) {
			SetIsAlive(true);
		}
		if (!sunflowerflag && GetY() < GetFloor())
			y = y + 2;

		sunanimation.OnMove();
	}

	void YSun::OnShow() {
		if (IsAlive()) {
			sunanimation.SetTopLeft(x, y);
			sunanimation.OnShow();
		}
	}

	void YSun::SetIsAlive(bool alive) {
		is_alive = alive;
	}

	int YSun::GetSunFlowerSunX() {
		return x;
	}
	int YSun::GetSunFlowerSunY() {
		return y;
	}

	void YSun::SetY(int y) {
		srand((int)time(NULL));
		x = (rand() % 550) + 200;		// 200~750
		this->y = y;
		floor = (rand() % 250) + 250;	//250~500
	}

	int YSun::GetX() {
		return x;
	}

	int YSun::GetY() {
		return y;
	}

	int	YSun::GetFloor() {
		return floor;
	}

}


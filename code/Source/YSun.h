#ifndef YSUN_H
#define YSUN_H

namespace game_framework {
	
	class YSun
	{
	public:
		YSun();
		YSun(int x, int y);
		YSun & operator= (const YSun & other);
		bool IsAlive();											// �O�_����
		void LoadBitmap();										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
		void SetIsAlive(bool alive);							// �]�w�O�_����
		int GetSunFlowerSunX();
		int GetSunFlowerSunY();
		void SetY(int y);
		int  GetX();
		int  GetY();
		int	 GetFloor();
	private:
		//CMovingBitmap sun;
		int x, y;
		bool is_alive;
		CAnimation sunanimation;	// �Q�ΰʵe�@�ϧ�
		int floor;					// where sun stop
		bool sunflowerflag;
		int velocity;
		bool rising;

	};
}

#endif
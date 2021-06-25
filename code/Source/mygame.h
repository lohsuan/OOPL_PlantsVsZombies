#ifndef MYGAME_H
#define MYGAME_H

#include <memory>
#include <vector>
#include "YSun.h"
#include "YCard.h"
#include "YPlants.h"
#include "YMap.h"
#include "YZombies.h"
#include "YCar.h"


namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// Constants
	/////////////////////////////////////////////////////////////////////////////

	enum AUDIO_ID {				// �w�q�U�ح��Ī��s��
		AUDIO_START,
		AUDIO_MAIN,
		AUDIO_MENUTOGAME,
		AUDIO_SUNPICK,
		AUDIO_PLANTS,
		AUDIO_CAR,
		AUDIO_START_NIGHT,
		AUDIO_BOMB,
		AUDIO_VICTORY
	};


	/////////////////////////////////////////////////////////////////////////////
	// �o��class���C�����C���}�Y�e������
	/////////////////////////////////////////////////////////////////////////////

	class CGameStateInit : public CGameState {
	public:
		CGameStateInit(CGame *g);
		void OnInit();  								// �C������Ȥιϧγ]�w
		void OnBeginState();							// �]�w�C�������һݪ��ܼ�
		void OnKeyUp(UINT, UINT, UINT); 				// �B�z��LUp���ʧ@
		void OnLButtonDown(UINT nFlags, CPoint point);  // �B�z�ƹ����ʧ@

	protected:
		void OnShow();									// ��ܳo�Ӫ��A���C���e��
	private:
		CMovingBitmap	mainmenu;		
		CMovingBitmap	loadtext;
		CMovingBitmap	adventure0;
		CMovingBitmap   all_level_done;
	};

	/////////////////////////////////////////////////////////////////////////////
	// �o��class���C�����C�����檫��A�D�n���C���{�����b�o��
	/////////////////////////////////////////////////////////////////////////////

	class CGameStateRun : public CGameState {
	public:
		friend class YZombies;

		CGameStateRun(CGame *g);
		~CGameStateRun();
		void OnBeginState();							// �]�w�C�������һݪ��ܼ�
		void OnInit();  								// �C������Ȥιϧγ]�w
		void OnKeyDown(UINT, UINT, UINT);
		void OnKeyUp(UINT, UINT, UINT);
		void OnLButtonDown(UINT nFlags, CPoint point);  // �B�z�ƹ����ʧ@
		void OnLButtonUp(UINT nFlags, CPoint point);	// �B�z�ƹ����ʧ@
		void OnMouseMove(UINT nFlags, CPoint point);	// �B�z�ƹ����ʧ@ 
		void OnRButtonDown(UINT nFlags, CPoint point);  // �B�z�ƹ����ʧ@
		void OnRButtonUp(UINT nFlags, CPoint point);	// �B�z�ƹ����ʧ@

	protected:
		void OnMove();									// ���ʹC������
		void OnShow();									// ��ܳo�Ӫ��A���C���e��
	private:

		const int		NUMBALLS;
		CMovingBitmap	background;
		CMovingBitmap	background_night;

		CMovingBitmap	chooser;
		YShovelCard		shovel_card;
		int				picX, picY;
		int				flag;
		YSun			sun;
		int				sun_amount;	
		bool			generateSunFlowerFlag;
		bool			generatePeaShooterFlag;
		bool			generateWallNutFlag;
		bool			generateCherryBombFlag;
		bool			generateIceShooterFlag;
		bool			generatePotatomineFlag;
		bool			generateShooterFlag;
		bool			generateSquashFlag;

		bool			shovelFlag;

		YSunFlowerCard   sun_flower_card;
		YPeaShooterCard  pea_shooter_card;
		YWallNutCard	 wallnut_card;
		YCherryBombCard  cherrybomb_card;
		YIceShooterCard      ice_shooter_card;
		YPotatomineCard		potatomine_card;
		YShooterCard  shooter_card;
		YSquashCard  squash_card;

		int sun_flower_card_delay_flag;
		int peashooter_card_delay_flag;
		int wallnut_card_delay_flag;
		int cherrybomb_card_delay_flag;
		int iceshooter_card_delay_flag;
		int potatomine_card_delay_flag;
		int shooter_card_delay_flag;
		int squash_card_delay_flag;


		std::vector<shared_ptr<YSunFlower>>	sunflower_vector;
		std::vector<shared_ptr<YPeaShooter>>	peashooter_vector;
		std::vector<shared_ptr<YWallNut>>	wallnut_vector;
		std::vector<shared_ptr<YCherryBomb>>	cherrybomb_vector;
		std::vector<shared_ptr<YIceShooter>>	iceshooter_vector;
		std::vector<shared_ptr<YPotatoMine>>	potatomine_vector;
		std::vector<shared_ptr<YShooter>>	shooter_vector;
		std::vector<shared_ptr<YSquash>>	squash_vector;

		std::vector<shared_ptr<YNormalZombie>>	normalzombie_vector;

		YMap			map;
		bool			animation_flag;

		YCar car0;
		YCar car1;
		YCar car2;
		YCar car3;
		YCar car4;
		bool car0_flag;
		bool car1_flag;
		bool car2_flag;
		bool car3_flag;
		bool car4_flag;
		bool car0_sound_flag;
		bool car1_sound_flag;
		bool car2_sound_flag;
		bool car3_sound_flag;
		bool car4_sound_flag;
		bool zombie_home_flag;
		bool zombie_fast_mode;

	};

	/////////////////////////////////////////////////////////////////////////////
	// �o��class���C�����������A(Game Over)
	/////////////////////////////////////////////////////////////////////////////

	class CGameStateOver : public CGameState {
	public:
		CGameStateOver(CGame *g);
		void OnBeginState();
		void OnInit();
		void OnLButtonDown(UINT nFlags, CPoint point);
	protected:
		void OnMove();	
		void OnShow();
	private:
		int counter;
		CMovingBitmap	loose;
		CMovingBitmap	loose_night;
		CMovingBitmap	newplant;
		CMovingBitmap	bucket;
		CMovingBitmap	cherrybomb;
		CMovingBitmap	conehead;
		CMovingBitmap	flag;
		CMovingBitmap	newspaper;
		CMovingBitmap	potatomine;
		CMovingBitmap	puff_shroom;
		CMovingBitmap	snowpea;
		CMovingBitmap	wallnut;
		CMovingBitmap	squash;
		CMovingBitmap	victory;

	};

}


#endif
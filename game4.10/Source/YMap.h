#ifndef YMAP_H
#define YMAP_H

namespace game_framework {
	class YMap {
	private:
		int mymap[9][5];

	public:
		
		YMap() :mymap{ 0 } {

		}
		void clear() {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 5; j++) {
					mymap[i][j] = 0;
				}
			}
		}

		void setmyMap(int x, int y) {

			if (x >= 100-70 && x < 190-70) {
				if (y > 78 && y < 182) {
					mymap[0][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[0][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[0][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[0][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[0][4] = 1;
				}
			}
			else if (x >= 190-70 && x < 260-70) {
				if (y > 78 && y < 182) {
					mymap[1][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[1][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[1][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[1][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[1][4] = 1;
				}
			}
			else if (x >= 260-70 && x < 340-70) {
				if (y > 78 && y < 182) {
					mymap[2][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[2][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[2][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[2][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[2][4] = 1;
				}
			}
			else if (x >= 340-70 && x < 425-70) {
				if (y > 78 && y < 182) {
					mymap[3][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[3][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[3][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[3][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[3][4] = 1;
				}
			}
			else if (x >= 425-70 && x < 505-70) {
				if (y > 78 && y < 182) {
					mymap[4][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[4][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[4][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[4][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[4][4] = 1;
				}
			}
			else if (x >= 505-70 && x < 585-70) {
				if (y > 78 && y < 182) {
					mymap[5][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[5][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[5][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[5][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[5][4] = 1;
				}
			}
			else if (x >= 585-70 && x < 660-70) {
				if (y > 78 && y < 182) {
					mymap[6][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[6][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[6][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[6][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[6][4] = 1;
				}
			}
			else if (x >= 660-70 && x < 747-70) {
				if (y > 78 && y < 182) {
					mymap[7][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[7][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[7][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[7][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[7][4] = 1;
				}
			}
			else if (x >= 747-70 && x < 840-70) {
				if (y > 78 && y < 182) {
					mymap[8][0] = 1;
				}
				else if (y >= 182 && y < 270) {
					mymap[8][1] = 1;
				}
				else if (y >= 270 && y < 368) {
					mymap[8][2] = 1;
				}
				else if (y >= 368 && y < 464) {
					mymap[8][3] = 1;
				}
				else if (y >= 464 && y < 571) {
					mymap[8][4] = 1;
				}
			}
		}
		void unsetmyMap(int x, int y) {

			if (x >= 100-70 && x < 190-70) {
				if (y > 78 && y < 182) {
					mymap[0][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[0][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[0][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[0][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[0][4] = 0;
				}
			}
			else if (x >= 190-70 && x < 260-70) {
				if (y > 78 && y < 182) {
					mymap[1][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[1][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[1][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[1][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[1][4] = 0;
				}
			}
			else if (x >= 260-70 && x < 340-70) {
				if (y > 78 && y < 182) {
					mymap[2][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[2][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[2][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[2][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[2][4] = 0;
				}
			}
			else if (x >= 340-70 && x < 425-70) {
				if (y > 78 && y < 182) {
					mymap[3][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[3][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[3][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[3][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[3][4] = 0;
				}
			}
			else if (x >= 425-70 && x < 505-70) {
				if (y > 78 && y < 182) {
					mymap[4][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[4][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[4][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[4][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[4][4] = 0;
				}
			}
			else if (x >= 505-70 && x < 585-70) {
				if (y > 78 && y < 182) {
					mymap[5][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[5][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[5][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[5][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[5][4] = 0;
				}
			}
			else if (x >= 585-70 && x < 660-70) {
				if (y > 78 && y < 182) {
					mymap[6][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[6][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[6][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[6][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[6][4] = 0;
				}
			}
			else if (x >= 660-70 && x < 747-70) {
				if (y > 78 && y < 182) {
					mymap[7][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[7][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[7][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[7][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[7][4] = 0;
				}
			}
			else if (x >= 747-70 && x < 840-70) {
				if (y > 78 && y < 182) {
					mymap[8][0] = 0;
				}
				else if (y >= 182 && y < 270) {
					mymap[8][1] = 0;
				}
				else if (y >= 270 && y < 368) {
					mymap[8][2] = 0;
				}
				else if (y >= 368 && y < 464) {
					mymap[8][3] = 0;
				}
				else if (y >= 464 && y < 571) {
					mymap[8][4] = 0;
				}
			}
		}
		bool checkmyMap(const int x, const int y) {

			if (x >= 100-70 && x < 190-70) {
				if (y > 78 && y < 182) {
					if (mymap[0][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[0][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[0][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[0][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[0][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 190-70 && x < 260-70) {
				if (y > 78 && y < 182) {
					if (mymap[1][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[1][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[1][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[1][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[1][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 260-70 && x < 340-70) {
				if (y > 78 && y < 182) {
					if (mymap[2][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[2][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[2][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[2][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[2][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 340-70 && x < 425-70) {
				if (y > 78 && y < 182) {
					if (mymap[3][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[3][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[3][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[3][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[3][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 425-70 && x < 505-70) {
				if (y > 78 && y < 182) {
					if (mymap[4][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[4][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[4][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[4][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[4][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 505-70 && x < 585-70) {
				if (y > 78 && y < 182) {
					if (mymap[5][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[5][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[5][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[5][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[5][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 585-70 && x < 660-70) {
				if (y > 78 && y < 182) {
					if (mymap[6][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[6][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[6][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[6][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[6][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 660-70 && x < 747-70) {
				if (y > 78 && y < 182) {
					if (mymap[7][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[7][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[7][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[7][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[7][4] == 1)
						return true;
					return false;
				}
				return false;
			}
			else if (x >= 747-70 && x < 840-70) {
				if (y > 78 && y < 182) {
					if (mymap[8][0] == 1)
						return true;
					return false;
				}
				else if (y >= 182 && y < 270) {
					if (mymap[8][1] == 1)
						return true;
					return false;
				}
				else if (y >= 270 && y < 368) {
					if (mymap[8][2] == 1)
						return true;
					return false;
				}
				else if (y >= 368 && y < 464) {
					if (mymap[8][3] == 1)
						return true;
					return false;
				}
				else if (y >= 464 && y < 571) {
					if (mymap[8][4] == 1)
						return true;
					return false;
				}
				return false;
			}

			return false;

		}

		int  getXmyMapLocation(int x, int y) {

			if (x >= 100-70 && x < 190-70) {
				return 100-70;
			}
			else if (x >= 190-70 && x < 260-70) {
				return 190-70;
			}
			else if (x >= 260-70 && x < 340-70) {
				return 260-70;
			}
			else if (x >= 340-70 && x < 425-70) {
				return 340-70;
			}
			else if (x >= 425-70 && x < 505-70) {
				return 425-70;
			}
			else if (x >= 505-70 && x < 585-70) {
				return 505-70;
			}
			else if (x >= 585-70 && x < 660-70) {
				return 585-70;
			}
			else if (x >= 660-70 && x < 747-70) {
				return 660-70;
			}
			else if (x >= 747-70 && x < 840-70) {
				return 747-70;
			}
			return 0;
		}

		int  getYmyMapLocation(int x, int y) {
			if (y >= 78 && y < 182)
			{
				return 78;
			}
			else if (y >= 182 && y < 270)
			{
				return 182;
			}
			else if (y >= 270 && y < 368)
			{
				return 270;
			}
			else if (y >= 368 && y < 464)
			{
				return 368;
			}
			else if (y >= 464 && y < 571)
			{
				return 464;
			}
			return 0;
		}
	};
}
#endif
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void init_rand()
{
    srand (time(NULL));
}

int wep_sel;
void wep_select()
{
    wep_sel = rand() % 64 + 1;

    switch(wep_sel){
        //ARs
        case 1:
        std::cout << "AR: XM4";
        break;
        case 2:
        std::cout << "AR: AK-47";
        break;
        case 3:
        std::cout << "AR: Krig 6";
        break;
        case 4:
        std::cout << "AR: QBZ-83";
        break;
        case 5:
        std::cout << "AR: FFAR 1";
        break;
        case 6:
        std::cout << "AR: Groza";
        break;
        case 7:
        std::cout << "AR: FARA 83";
        break;
        case 8:
        std::cout << "AR: C58";
        break;
        case 9:
        std::cout << "AR: EM2";
        break;
        case 10:
        std::cout << "AR: Grav";
        break;
        case 11:
        std::cout << "AR: Vargo 52";
        break;
        //SMGs
        case 12:
        std::cout << "SMG: MP5";
        break;
        case 13:
        std::cout << "SMG: Milano 821";
        break;
        case 14:
        std::cout << "SMG: AK-74u";
        break;
        case 15:
        std::cout << "SMG: KSP 45";
        break;
        case 16:
        std::cout << "SMG: Bullfrog";
        break;
        case 17:
        std::cout << "SMG: MAC-10";
        break;
        case 18:
        std::cout << "SMG: LC10";
        break;
        case 19:
        std::cout << "SMG: PPSh-41";
        break;
        case 20:
        std::cout << "SMG: OTs 9";
        break;
        case 21:
        std::cout << "SMG: TEC-9";
        break;
        case 22:
        std::cout << "SMG: LAPA";
        break;
        case 23:
        std::cout << "SMG: UGR";
        break;
        //Tac Rifles
        case 24:
        std::cout << "Tac Rifle: Type 63";
        break;
        case 25:
        std::cout << "Tac Rifle: M16";
        break;
        case 26:
        std::cout << "Tac Rifle: AUG";
        break;
        case 27:
        std::cout << "Tac Rifle: DMR 14";
        break;
        case 28:
        std::cout << "Tac Rifle: CARV.2";
        break;
        //LMGs
        case 29:
        std::cout << "Tac Rifle: Stoner 63";
        break;
        case 30:
        std::cout << "Tac Rifle: RPD";
        break;
        case 31:
        std::cout << "Tac Rifle: M60";
        break;
        case 32:
        std::cout << "Tac Rifle: MG 82";
        break;
        //Snipers
        case 33:
        std::cout << "Sniper: Pelington 703";
        break;
        case 34:
        std::cout << "Sniper: LW3 Tundra";
        break;
        case 35:
        std::cout << "Sniper: M82";
        break;
        case 36:
        std::cout << "Sniper: ZRG 20mm";
        break;
        case 37:
        std::cout << "Sniper: Swiss K31";
        break;
        //Pistols
        case 38:
        std::cout << "Pistol: 1911";
        break;
        case 39:
        std::cout << "Pistol: Magnum";
        break;
        case 40:
        std::cout << "Pistol: Diamatti";
        break;
        case 41:
        std::cout << "Pistol: AMP63";
        break;
        case 42:
        std::cout << "Pistol: Marshal";
        break;
        //Shotguns
        case 43:
        std::cout << "Shotgun: Hauer 77";
        break;
        case 44:
        std::cout << "Shotgun: Gallo SA12";
        break;
        case 45:
        std::cout << "Shotgun: Streetsweeper";
        break;
        case 46:
        std::cout << "Shotgun: 410 Ironhide";
        break;
        //Launchers
        case 47:
        std::cout << "Shotgun: Cigma 2";
        break;
        case 48:
        std::cout << "Shotgun: RPG";
        break;
        //Melee
        case 49:
        std::cout << "Melee: Knife";
        break;
        case 50:
        std::cout << "Melee: Sledgehammer";
        break;
        case 51:
        std::cout << "Melee: Wakizashi";
        break;
        case 52:
        std::cout << "Melee: E-Tool";
        break;
        case 53:
        std::cout << "Melee: Machete";
        break;
        case 54:
        std::cout << "Melee: Baseball Bat";
        break;
        case 55:
        std::cout << "Melee: Mace";
        break;
        case 56:
        std::cout << "Melee: Cane";
        break;
        case 57:
        std::cout << "Melee: Sai";
        break;
        case 58:
        std::cout << "Melee: Battle Axe";
        break;
        case 59:
        std::cout << "Melee: Hammer and Sickle";
        break;
        case 60:
        std::cout << "Melee: Scythe";
        break;
        //Special
        case 61:
        std::cout << "Special: M79";
        break;
        case 62:
        std::cout << "Special: R1 Shadowhunter";
        break;
        case 63:
        std::cout << "Special: Ballistic Knife";
        break;
        case 64:
        std::cout << "Special: Nail Gun";
        break;
    }
}

int n = 100;
void clear(){
    while (n > 0)
    {
        std::cout << std::endl;
        n --;
    }
    n = 100;
}

char run = 'y';
int main()
{
    init_rand();

    while (run == 'y')
    {
        usleep(500000);
        clear();
        init_rand();

        wep_select();
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "Reroll (y/n)? ";
        std::cin >> run;
        if (run != 'y')
        {
            break;
        }
    }
    return 0;
}
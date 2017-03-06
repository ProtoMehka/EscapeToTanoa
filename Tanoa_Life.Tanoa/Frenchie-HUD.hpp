#define ST_RIGHT 0x01

class FrenchieHUD {
	idd = -1;
	onLoad = "uiNamespace setVariable ['FrenchieHUD', _this select 0]";
	onUnload = "uiNamespace setVariable ['FrenchieHUD', objNull]";
	onDestroy = "uiNamespace setVariable ['FrenchieHUD', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55554;
			x = safezoneX;
			y = safezoneY + safezoneH - 0.053;
			w = safezoneW;
			h = 0.06;
			shadow = false;
			colorBackground[] = { 0.074, 0.082, 0.105, 0.85 };
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="Chargement en cours..."; //Changer ici si vous le souhaitez.
			class Attributes {
				align="center";
				color = "#ffffff";
			};
		};
	};
};

class FrenchieHUDA {
	idd = -1;
	onLoad = "uiNamespace setVariable ['FrenchieHUDA', _this select 0]";
	onUnload = "uiNamespace setVariable ['FrenchieHUDA', objNull]";
	onDestroy = "uiNamespace setVariable ['FrenchieHUDA', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55555;
			x = safezoneX + safezoneW - 1.50;
			y = safezoneY + safezoneH - 0.035;
			w = 1.3;
			h = 0.07;
			shadow = false;
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="";
			class Attributes {
				align="left";
			};
		};
	};
};

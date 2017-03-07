/*File: fn_blackjack.sqf

Author: Le Rebellion KRinK

Description:	Create the Blackjack Guy*/

_store = blackjack;
denied1 = false;
_price = 2500;
if(life_cash < _price) exitWith {hint "Vous n'avez pas assez d'argent sur vous, cela coûte $2500";};
life_cash = life_cash - _price;removeAllActions blackjack;
hint "Vous êtes sur le train!";
_number = ceil(random 10);
_pplayer = _this select 0;

if (_number == 0) then {robberyreward = 7500; hint "19! Bien joué !";};
if (_number == 1) then {robberyreward = 0; hint "18! Perdu!";};
if (_number == 2) then {robberyreward = 0; hint "8! Ettt Ba non…";};
if (_number == 3) then {robberyreward = 0; hint "14! Retente une fois...";};
if (_number == 4) then {robberyreward = 0; hint "16! Rapide ! Allez, un tour de plus..!";};
if (_number == 5) then {robberyreward = 0; hint "12!Meme ma grand-mère joue mieux que vous!";};
if (_number == 6) then {robberyreward = 0; hint "13! Perdu à nouveau.. Vraiment mauvais..!";};
if (_number == 7) then {robberyreward = 10000; hint "20! Pffftt.. La chance du débutant! Vous avez gagné!";};
if (_number == 8) then {robberyreward = 0; hint "10! Donc, vous gagnez ... rien!";};
if (_number == 9) then {robberyreward = 0; hint "11! Alors la arretez de jouer!";};
if (_number == 10) then {robberyreward = 15000; hint "21!!! Jackpot!!";};

life_action_inUse = true;	sleep 2;_robberycash = robberyreward;_timer = time + (1 * 5);
_toFar = false;
_vault = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
while {true} do{	//Timer display (TO BE REPLACED WITH A NICE GUI LAYER)
_countDown = if(round(_timer - time) > 60) then {format["%1 minute(s)",round(round(_timer - time) / 60)]} else {format["%1 seconde(s)",round(_timer - time)]};
hintSilent format["Vous devez rester à la table et attendre votre tour!\n\nTemps restant:\n %1\n\nDistance: %2m",_countDown,round(player distance _vault)];
if(player distance _vault > 5) exitWith {_toFar = true;};	if((round(_timer - time)) < 1) exitWith {};	if(!alive player) exitWith {};
if(life_istazed) exitWith {hint "Vous étiez tazé , le jeu a échoué!";
	};
};

switch(true) do{	case (_toFar):	{		hint "Vous êtes trop loin, rester à la table";
_denied1 = false;		life_action_inUse = false;	};
case (!alive player):	{		hint "Le jeu a mal tourné , parce que tu es mort.";
_denied1 = false;		life_action_inUse = false;	};
case (life_istazed):	{		hint "Vous étiez tazé, le jeu a échoué!";
_denied1 = false;		life_action_inUse = false;	};
case ((round(_timer - time)) < 1):	{		hint format["Tu as gagné $%1.", _robberycash];
life_cash = life_cash + _robberycash;		_denied1 = false;		life_action_inUse = false;
	};
};

sleep 10;
blackjack addAction["Jouer au Black Jack ($2500)",life_fnc_blackjack,"blackjack"];
life_action_inUse = false;

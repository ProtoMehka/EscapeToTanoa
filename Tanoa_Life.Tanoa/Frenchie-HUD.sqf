//Frenchie-Life.fr
//Rykam Ishlava
//2016-2017
//
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

	_rscLayer = "FrenchieHUD" call BIS_fnc_rscLayer;
	_rscLayer cutRsc["FrenchieHUD","PLAIN"];
	[] spawn
	{

		Sleep 5;
		_colourDefault 	= parseText "#ffffff";
		_colourExtra	= parseText "#38bee1";
		_colour108		= parseText "#FF7000";
		_colour107		= parseText "#FF9000";
		_colour106		= parseText "#FFBB00";
		_colour105		= parseText "#FFCC00";
		_colour104		= parseText "#81CCDD";
		_colour103		= parseText	"#33AACC";
		_colour102		= parseText "#3388CC";
		_colour101		= parseText "#3366CC";
		_colour100 		= parseText "#00FF00";
		_colour90 		= parseText "#98FB98";
		_colour80 		= parseText "#FFA07A";
		_colour70 		= parseText "#FFA500";
		_colour60 		= parseText "#FF8C00";
		_colour50 		= parseText "#FF6347";
		_colour40 		= parseText "#FF4500";
		_colour30 		= parseText "#FF0000";
		_colour20 		= parseText "#FF0000";
		_colour10 		= parseText "#FF0000";
		_colour0 		= parseText "#FF0000";
		_colourDead 	= parseText "#1C1C1C";
		_uid = getPlayerUID player;


	while {true} do
	{

		Sleep 5;


		if(isNull ((uiNamespace getVariable "FrenchieHUD")displayCtrl 55554)) then
		{
			diag_log "Frenchie-Life.fr";
			disableSerialization;
			_rscLayer = "Frenchie-HUD" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["FrenchieHUD","PLAIN"];
		};

		_unit = _this select 0;
		_Vie = round ((1 - (damage player)) * 100);
		_Poche = [life_cash] call life_fnc_numberText;
		_Banque = [life_atmbank] call life_fnc_numberText;
		_yy = (format[_grid]) select  [3,3];
		_Faim = round (life_hunger);
		_Soif = round (life_thirst);


	//La vie du copain.
		_colourVie = _colourDefault;
		if(_Vie >= 100) then{_colourVie = _colour100;};
		if((_Vie >= 90) && (_Vie < 100)) then {_colourVie =  _colour100;};
		if((_Vie >= 80) && (_Vie < 90)) then {_colourVie =  _colour80;};
		if((_Vie >= 70) && (_Vie < 80)) then {_colourVie =  _colour70;};
		if((_Vie >= 60) && (_Vie < 70)) then {_colourVie =  _colour60;};
		if((_Vie >= 50) && (_Vie < 60)) then {_colourVie =  _colour50;};
		if((_Vie >= 40) && (_Vie < 50)) then {_colourVie =  _colour40;};
		if((_Vie >= 30) && (_Vie < 40)) then {_colourVie =  _colour30;};
		if((_Vie >= 20) && (_Vie < 30)) then {_colourVie =  _colour20;};
		if((_Vie >= 10) && (_Vie < 20)) then {_colourVie =  _colour10;};
		if((_Vie >= 1) && (_Vie < 10)) then {_colourVie =  _colour0;};
		if(_Vie < 1) then{_colourVie =  _colourDead;};
		
	//La bouffe c'est la vie.
		_colourFaim = _colourDefault;
		if(_Faim >= 100) then{_colourFaim = _colour100;};
		if((_Faim >= 90) && (_Faim < 100)) then {_colourFaim =  _colour100;};
		if((_Faim >= 80) && (_Faim < 90)) then {_colourFaim =  _colour80;};
		if((_Faim >= 70) && (_Faim < 80)) then {_colourFaim =  _colour70;};
		if((_Faim >= 60) && (_Faim < 70)) then {_colourFaim =  _colour60;};
		if((_Faim >= 50) && (_Faim < 60)) then {_colourFaim =  _colour50;};
		if((_Faim >= 40) && (_Faim < 50)) then {_colourFaim =  _colour40;};
		if((_Faim >= 30) && (_Faim < 40)) then {_colourFaim =  _colour30;};
		if((_Faim >= 20) && (_Faim < 30)) then {_colourFaim =  _colour20;};
		if((_Faim >= 10) && (_Faim < 20)) then {_colourFaim =  _colour10;};
		if((_Faim >= 1) && (_Faim < 10)) then {_colourFaim =  _colour0;};
		if(_Faim < 1) then{_colourFaim =  _colourDead;};
	
	//La bibine.
		_colourSoif = _colourDefault;
		if(_Soif >= 100) then{_colourSoif = _colour100;};
		if((_Soif >= 90) && (_Soif < 100)) then {_colourSoif =  _colour100;};
		if((_Soif >= 80) && (_Soif < 90)) then {_colourSoif =  _colour80;};
		if((_Soif >= 70) && (_Soif < 80)) then {_colourSoif =  _colour70;};
		if((_Soif >= 60) && (_Soif < 70)) then {_colourSoif =  _colour60;};
		if((_Soif >= 50) && (_Soif < 60)) then {_colourSoif =  _colour50;};
		if((_Soif >= 40) && (_Soif < 50)) then {_colourSoif =  _colour40;};
		if((_Soif >= 30) && (_Soif < 40)) then {_colourSoif =  _colour30;};
		if((_Soif >= 20) && (_Soif < 30)) then {_colourSoif =  _colour20;};
		if((_Soif >= 10) && (_Soif < 20)) then {_colourSoif =  _colour10;};
		if((_Soif >= 1) && (_Soif < 10)) then {_colourSoif =  _colour0;};
		if(_Soif < 1) then{_colourFaim =  _colourDead;};


	//Icones et leurs positions selon l'ordre de positionnement.
		((uiNamespace getVariable "FrenchieHUD")displayCtrl 55554)ctrlSetStructuredText parseText
			format["
			<t color='%10'><img size='1.0' image='icons\Civil.paa' color='%19'/> %2</t>
			<t color='%10'><img size='1.0' image='icons\Police.paa' color='%19'/> %7</t>
			<t color='%10'><img size='1.0' image='icons\Sapeur.paa' color='%19'/> %8</t>
			<t color='%10'><img size='1.0' image='icons\Vie.paa' color='%19'/> %3%1</t>
			<t color='%10'><img size='1.0' image='icons\Banque.paa' color='%19'/> %5</t>
			<t color='%10'><img size='1.0' image='icons\Poche.paa' color='%19'/> %6</t>
			<t color='%10'><img size='1.0' image='icons\Faim.paa' color='%11'/> %11</t>
			<t color='%10'><img size='1.0' image='icons\Soif.paa' color='%12'/> %13</t>",


			//Ne pas changer la position ou sinon changer les %X plus haut en fonction de la position ci dessous.
					"%",
					civilian countSide playableUnits,
					_Vie,
					_colourDefault,
					_Banque,
					_Poche,
					west countSide playableUnits,
					independent countSide playableUnits,
					format["%1/%2",_xx,_yy],
					_colourExtra,
					_Faim,
					_colourFaim,
					_Soif,
					_colourSoif
					
				];

		};
};
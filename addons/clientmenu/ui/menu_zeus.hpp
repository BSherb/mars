#include "\z\mars\addons\common\define.hpp"

class GVAR(clientMenu) {
    idd = 600001;
    movingEnable = true;
    onLoad = QUOTE([_this select 0] call FUNC(onMenuOpen));
    
    class controls {
        class HeaderBackground: MARS_gui_accentBase
        {
            idc = -1;
            text = "Mars";
            x = 0.396849 * safezoneW + safezoneX;
            y = 0.3328 * safezoneH + safezoneY;
            w = 0.195987 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class CenterBackground: MARS_gui_backgroundBase
        {
            idc = -1;
            x = 0.396849 * safezoneW + safezoneX;
            y = 0.357 * safezoneH + safezoneY;
            w = 0.195987 * safezoneW;
            h = 0.11 * safezoneH;
        };
        class FooterBackground: MARS_gui_backgroundBase
        {
            idc = -1;
            x = 0.396849 * safezoneW + safezoneX;
            y = 0.4692 * safezoneH + safezoneY;
            w = 0.143379 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class Option1_Label: MARS_gui_staticBase
        {
            idc = 100;
            text = "Terrain Detail";
            x = 0.402007 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.0928357 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class Option1_Combo: MARS_gui_comboBoxBase
        {
            idc = 101;
            x = 0.494842 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.0928357 * safezoneW;
            h = 0.022 * safezoneH;
            onLBSelChanged = QUOTE([(parseNumber ((_this select 0) lbData (_this select 1)))] call FUNC(setTerrainDetail));
        };
        class Option2_Label: MARS_gui_staticBase
        {
            idc = 102;
            text = "View Distance (meters)";
            x = 0.402007 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.0928357 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class Option2_Combo: MARS_gui_comboBoxBase
        {
            idc = 103;
            x = 0.494842 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.0928357 * safezoneW;
            h = 0.022 * safezoneH;
            onLBSelChanged = QUOTE([(parseNumber ((_this select 0) lbData (_this select 1)))] call FUNC(setViewDistance));
        };
        class BtnClose: MARS_gui_buttonBase
        {
            idc = 104;
            action = "closeDialog 0";
            text = "Close";
            x = 0.54126 * safezoneW + safezoneX;
            y = 0.4692 * safezoneH + safezoneY;
            w = 0.0515754 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class BtnZeus: MARS_gui_buttonBase
        {
            idc = 105;
            text = "Open Zeus";
            x = 0.530945 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.056733 * safezoneW;
            h = 0.022 * safezoneH;
            action = QUOTE([] call EFUNC(zeus,openZeus));
        };
        class ZeusLabel: MARS_gui_staticBase
        {
            idc = 106;
            text = "Current: Available";
            x = 0.402007 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.123781 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
};
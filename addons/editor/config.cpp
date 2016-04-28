#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mars_common"};
        author[] = {"ACE3 Project","Kingsley"};
        authorUrl = "https://github.com/jameslkingsley/mars";
        VERSION_CONFIG;
    };
};

class Intercept {
    class GVARMAIN(intercept) {
        class ADDON {
            pluginName = "mars_drawing";
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "ui\interface.hpp"
#include "CfgContext.hpp"
#include "CfgToolbar.hpp"
#include "CfgAssetBrowser.hpp"

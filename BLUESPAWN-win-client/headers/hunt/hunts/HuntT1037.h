#pragma once
#include "util/configurations/Registry.h"
#include "util/filesystem/FileSystem.h"

#include "../Hunt.h"

namespace Hunts {

    /**
	 * HuntT1037 examines the registry and filesystem for logon scripts
	 */
    class HuntT1037 : public Hunt {
        private:
        std::wstring t1037_001 = L"001: Logon Script (Windows)";

        public:
        HuntT1037();

        virtual std::vector<std::shared_ptr<Detection>> RunHunt(const Scope& scope) override;
        virtual std::vector<std::unique_ptr<Event>> GetMonitoringEvents() override;
    };
}   // namespace Hunts

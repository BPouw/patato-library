#include <string>
#include "PatatoClass.h"

std::string potatoClassToString(PotatoClass potatoClass) {
    switch (potatoClass) {
        case PotatoClass::Blauw: return "Blauw";
        case PotatoClass::Dierlijk: return "Dierlijk";
        case PotatoClass::Gezond: return "Gezond";
        case PotatoClass::Groen: return "Groen";
        case PotatoClass::Hol: return "Hol";
        case PotatoClass::InwendigBruin: return "Inwendig bruin";
        case PotatoClass::Rooibeschadiging: return "Rooibeschadiging";
        case PotatoClass::Rot: return "Rot";
        default: return "Unknown";
    }
}


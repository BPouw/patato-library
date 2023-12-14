#pragma once

enum class PotatoClass {
    Blauw,
    Dierlijk,
    Gezond,
    Groen,
    Hol,
    InwendigBruin,
    Rooibeschadiging,
    Rot
};

std::string potatoClassToString(PotatoClass potatoClass);
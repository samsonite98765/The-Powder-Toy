#include "simulation/ElementCommon.h"

void Element::Element_EXPL()
{
	Identifier = "DEFAULT_PT_EXPL";
	Name = "EXPL";
	Colour = PIXPACK(0xD080E0);
	MenuVisible = 1;
	MenuSection = SC_EXPLOSIVE;
	Enabled = 1;

	Advection = 0.10f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.90f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 1000000000000;
	Explosive = 1;
	Meltable = 50;
	Hardness = 1;
	PhotonReflectWavelengths = 0x1F00003E;

	Weight = 100;

	HeatConduct = 88;
	Description = "(NOT A)Solid bomb";

	Properties = TYPE_PART | PROP_NEUTPENETRATE;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = 673.0f;
	HighTemperatureTransition = PT_FIRE;
}

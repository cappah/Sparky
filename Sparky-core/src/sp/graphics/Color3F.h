#pragma once

#include "sp/maths/vec3f.h"


namespace sp { namespace graphics {
		
	struct Color3F
		{
		public:

			/*
			These are materials that produce light when they are heated. The sun is a black body
			illuminant, as is a candle flame. The color of light of these types of sources can be
			characterized by their Kelvin temperature. Note that this temperature has nothing to
			do with how "hot" a light source is - just with the color of its light. A light source
			with a low Kelvin temperature is very red. One with a high Kelvin temperature is very
			blue. More accurately, when we see two light sources side by side in a scene, the
			higher Kelvin light appears more blue, and the lower Kelvin light appears more red.
			Its all relative.
			*/
			const static vec3 IluumCandle;
			const static vec3 Illum40WTungsten;
			const static vec3 Illum100WTungsten;
			const static vec3 IllumHalogen;
			const static vec3 IllumCarbonArc;
			const static vec3 DayNoon;
			const static vec3 DaySunlight;
			const static vec3 DayOvercast;
			const static vec3 DayClearBlue;


			/*
			light sources produce light by creating a large amount of UV light via high voltage
			electrical discharge through a tube filled with rare gasses. The UV light excites
			materials coating the tube to produce light through fluorescence. These lights have
			broad but sometimes disjointed spectra.
			*/
			const static vec3 FlourescentBlue;
			const static vec3 Flourescent;
			const static vec3 FlourescentWarm;

			/*
			light source usually involves a metallic gas under pressure being excited by a
			high voltage coil. They do not produce a continuous spectrum at all, but instead
			produce a series of monochromatic lines of light energy. This confounds our
			ability to accurately reproduce the full effect of how these lights look and
			interact with colors in a scene.
			*/
			const static vec3 GasMercury;
			const static vec3 GasSodium;
			const static vec3 GasHalide;
			const static vec3 GasSodiumHP;
			
			
			/*
			General Colors
			*/
			const static vec3 White;
			const static vec3 Black;
			const static vec3 Red;
			const static vec3 Green;
			const static vec3 Blue;
			const static vec3 Yellow;
			const static vec3 Magenta;
			const static vec3 Cyan;
			const static vec3 AquaMarine;
			const static vec3 BakerChocolate;
			const static vec3 BlueViolet;
			const static vec3 Brass;
			const static vec3 BrightGold;
			const static vec3 Brown;
			const static vec3 Bronze;
			const static vec3 Bronze2;
			const static vec3 CadetBlue;
			const static vec3 CoolCopper;
			const static vec3 Copper;
			const static vec3 Coral;
			const static vec3 CornFlower;
			const static vec3 Crimson;
			const static vec3 DarkBrown;
			const static vec3 DarkGreen;
			const static vec3 DarkGreenCopper;
			const static vec3 DarkOliveGreen;
			const static vec3 DarkOrchid;
			const static vec3 DarkPurple;
			const static vec3 DarkRed;
			const static vec3 DarkSlateBlue;
			const static vec3 DarkSlateGray;
			const static vec3 DarkTan;
			const static vec3 DarkTurquoise;
			const static vec3 DarkWood;
			const static vec3 DimGray;
			const static vec3 DustyRose;
			const static vec3 Feldspar;
			const static vec3 FireBrick;
			const static vec3 ForestGreen;
			const static vec3 Gold;
			const static vec3 GoldenRod;
			const static vec3 Gray;
			const static vec3 GreenCopper;
			const static vec3 GreenYellow;
			const static vec3 HunterGreen;
			const static vec3 IndianRed;
			const static vec3 Khaki;
			const static vec3 LightBlue;
			const static vec3 LightGray;
			const static vec3 LightSteelBlue;
			const static vec3 LightWood;
			const static vec3 LimeGreen;
			const static vec3 Magenta;
			const static vec3 MandarinOrange;
			const static vec3 Maroon;
			const static vec3 MidAquaMarine;
			const static vec3 MidBlue;
			const static vec3 MidForestGreen;
			const static vec3 MidGoldenRod;
			const static vec3 MidOrchid;
			const static vec3 MidSeaGreen;
			const static vec3 MidSlateBlue;
			const static vec3 MidSpringGreen;
			const static vec3 MidTurquoise;
			const static vec3 MidVioletRed;
			const static vec3 MidWood;
			const static vec3 MidnightBlue;
			const static vec3 NavyBlue;
			const static vec3 NeonBlue;
			const static vec3 NeonPink;
			const static vec3 NewMidnightBlue;
			const static vec3 NewTan;
			const static vec3 OldGold;
			const static vec3 Orange;
			const static vec3 OrangeRed;
			const static vec3 Orchid;
			const static vec3 PaleGreen;
			const static vec3 Pink;
			const static vec3 Plum;
			const static vec3 Quartz;
			const static vec3 RichBlue;
			const static vec3 Salmon;
			const static vec3 Scarlet;
			const static vec3 SeaGreen;
			const static vec3 SemiSweetChocolate;
			const static vec3 Sienna;
			const static vec3 Silver;
			const static vec3 Sky;
			const static vec3 SkyBlue;
			const static vec3 SlateBlue;
			const static vec3 SpicyPink;
			const static vec3 SpringGreen;
			const static vec3 SteelBlue;
			const static vec3 SummerSky;
			const static vec3 Tan;
			const static vec3 Teal;
			const static vec3 Thistle;
			const static vec3 Tomato;
			const static vec3 Turquoise;
			const static vec3 VeryDarkBrown;
			const static vec3 VeryLightGrey;
			const static vec3 Violet;
			const static vec3 VioletRed;
			const static vec3 Wheat;
			const static vec3 YellowGreen;
		};


		const vec3 ColorF::IllumCandle = vec3(0.831f, 0.921f, 1.0f);
		const vec3 ColorF::Illum40WTungsten = vec3(0.956f, 1.0f, 0.980f);
		const vec3 ColorF::Illum100WTungsten = vec3(1.0f, 0.956f, 0.898f);
		const vec3 ColorF::IllumHalogen = vec3(0.831f, 0.921f, 1.0f);
		const vec3 ColorF::IllumCarbonArc = vec3(0.956f, 1.0f, 0.980f);
		const vec3 ColorF::DayNoon = vec3(1.0f, 0.956f, 0.898f);
		const vec3 ColorF::DaySunlight = vec3(0.831f, 0.921f, 1.0f);
		const vec3 ColorF::DayOvercast = vec3(0.956f, 1.0f, 0.980f);
		const vec3 ColorF::DayClearBlue = vec3(1.0f, 0.956f, 0.898f);

		const vec3 ColorF::FlourescentBlue = vec3(0.831f, 0.921f, 1.0f);
		const vec3 ColorF::Flourescent = vec3(0.956f, 1.0f, 0.980f);
		const vec3 ColorF::FlourescentWarm = vec3(1.0f, 0.956f, 0.898f);

		const vec3 ColorF::GasMercury = vec3(1.0f, 0.956f, 0.898f);
		const vec3 ColorF::GasSodium = vec3(1.0f, 0.956f, 0.898f);
		const vec3 ColorF::GasHalide = vec3(1.0f, 0.956f, 0.898f);
		const vec3 ColorF::GasSodiumHP = vec3(1.0f, 0.956f, 0.898f);

		const vec3 ColorF::AquaMarine = vec3(0.4392157f, 0.85882354f, 0.5764706f);
		const vec3 ColorF::BakerChocolate = vec3(0.36078432f, 0.2f, 0.09019608f);
		const vec3 ColorF::Black = vec3(0.0f, 0.0f, 0.0f);
		const vec3 ColorF::Blue = vec3(0.0f, 0.0f, 1.0f);
		const vec3 ColorF::BlueViolet = vec3(0.62352943f, 0.37254903f, 0.62352943f);
		const vec3 ColorF::Brass = vec3(0.70980394f, 0.6509804f, 0.25882354f);
		const vec3 ColorF::BrightGold = vec3(0.8509804f, 0.8509804f, 0.09803922f);
		const vec3 ColorF::Brown = vec3(0.6509804f, 0.16470589f, 0.16470589f);
		const vec3 ColorF::Bronze = vec3(0.54901963f, 0.47058824f, 0.3254902f);
		const vec3 ColorF::Bronze2 = vec3(0.6509804f, 0.49019608f, 0.23921569f);
		const vec3 ColorF::CadetBlue = vec3(0.37254903f, 0.62352943f, 0.62352943f);
		const vec3 ColorF::CoolCopper = vec3(0.8509804f, 0.5294118f, 0.09803922f);
		const vec3 ColorF::Copper = vec3(0.72156864f, 0.4509804f, 0.2f);
		const vec3 ColorF::Coral = vec3(1.0f, 0.49803922f, 0.0f);
		const vec3 ColorF::Crimson = vec3(0.863f, 0.078f, 0.235f);
		const vec3 ColorF::CornFlower = vec3(0.25882354f, 0.25882354f, 0.43529412f);
		const vec3 ColorF::Cyan = vec3(0.0f, 1.0f, 1.0f);
		const vec3 ColorF::DarkBrown = vec3(0.36078432f, 0.2509804f, 0.2f);
		const vec3 ColorF::DarkGreen = vec3(0.18431373f, 0.30980393f, 0.18431373f);
		const vec3 ColorF::DarkGreenCopper = vec3(0.2901961f, 0.4627451f, 0.43137255f);
		const vec3 ColorF::DarkOliveGreen = vec3(0.30980393f, 0.30980393f, 0.18431373f);
		const vec3 ColorF::DarkOrchid = vec3(0.6f, 0.19607843f, 0.8039216f);
		const vec3 ColorF::DarkPurple = vec3(0.5294118f, 0.12156863f, 0.47058824f);
		const vec3 ColorF::DarkRed = vec3(0.545f, 0.0f, 0.0f);
		const vec3 ColorF::DarkSlateBlue = vec3(0.41960785f, 0.13725491f, 0.5568628f);
		const vec3 ColorF::DarkSlateGray = vec3(0.18431373f, 0.30980393f, 0.30980393f);
		const vec3 ColorF::DarkTan = vec3(0.5921569f, 0.4117647f, 0.30980393f);
		const vec3 ColorF::DarkTurquoise = vec3(0.4392157f, 0.5764706f, 0.85882354f);
		const vec3 ColorF::DarkWood = vec3(0.52156866f, 0.36862746f, 0.25882354f);
		const vec3 ColorF::DimGray = vec3(0.32941177f, 0.32941177f, 0.32941177f);
		const vec3 ColorF::DustyRose = vec3(0.52156866f, 0.3882353f, 0.3882353f);
		const vec3 ColorF::Feldspar = vec3(0.81960785f, 0.57254905f, 0.45882353f);
		const vec3 ColorF::FireBrick = vec3(0.5568628f, 0.13725491f, 0.13725491f);
		const vec3 ColorF::ForestGreen = vec3(0.13725491f, 0.5568628f, 0.13725491f);
		const vec3 ColorF::Gold = vec3(0.8039216f, 0.49803922f, 0.19607843f);
		const vec3 ColorF::GoldenRod = vec3(0.85882354f, 0.85882354f, 0.4392157f);
		const vec3 ColorF::Gray = vec3(0.7529412f, 0.7529412f, 0.7529412f);
		const vec3 ColorF::Green = vec3(0.0f, 1.0f, 0.0f);
		const vec3 ColorF::GreenCopper = vec3(0.32156864f, 0.49803922f, 0.4627451f);
		const vec3 ColorF::GreenYellow = vec3(0.5764706f, 0.85882354f, 0.4392157f);
		const vec3 ColorF::HunterGreen = vec3(0.12941177f, 0.36862746f, 0.12941177f);
		const vec3 ColorF::IndianRed = vec3(0.30588236f, 0.18431373f, 0.18431373f);
		const vec3 ColorF::Khaki = vec3(0.62352943f, 0.62352943f, 0.37254903f);
		const vec3 ColorF::LightBlue = vec3(0.7529412f, 0.8509804f, 0.8509804f);
		const vec3 ColorF::LightGray = vec3(0.65882355f, 0.65882355f, 0.65882355f);
		const vec3 ColorF::LightSteelBlue = vec3(0.56078434f, 0.56078434f, 0.7411765f);
		const vec3 ColorF::LightWood = vec3(0.9137255f, 0.7607843f, 0.6509804f);
		const vec3 ColorF::LimeGreen = vec3(0.19607843f, 0.8039216f, 0.19607843f);
		const vec3 ColorF::Magenta = vec3(1.0f, 0.0f, 1.0f);
		const vec3 ColorF::MandarinOrange = vec3(0.89411765f, 0.47058824f, 0.2f);
		const vec3 ColorF::Maroon = vec3(0.5568628f, 0.13725491f, 0.41960785f);
		const vec3 ColorF::MidAquaMarine = vec3(0.19607843f, 0.8039216f, 0.6f);
		const vec3 ColorF::MidBlue = vec3(0.19607843f, 0.19607843f, 0.8039216f);
		const vec3 ColorF::MidForestGreen = vec3(0.41960785f, 0.5568628f, 0.13725491f);
		const vec3 ColorF::MidGoldenRod = vec3(0.91764706f, 0.91764706f, 0.68235296f);
		const vec3 ColorF::MidOrchid = vec3(0.5764706f, 0.4392157f, 0.85882354f);
		const vec3 ColorF::MidSeaGreen = vec3(0.25882354f, 0.43529412f, 0.25882354f);
		const vec3 ColorF::MidSlateBlue = vec3(0.49803922f, 0.0f, 1.0f);
		const vec3 ColorF::MidSpringGreen = vec3(0.49803922f, 1.0f, 0.0f);
		const vec3 ColorF::MidTurquoise = vec3(0.4392157f, 0.85882354f, 0.85882354f);
		const vec3 ColorF::MidVioletRed = vec3(0.85882354f, 0.4392157f, 0.5764706f);
		const vec3 ColorF::MidWood = vec3(0.6509804f, 0.5019608f, 0.39215687f);
		const vec3 ColorF::MidnightBlue = vec3(0.18431373f, 0.18431373f, 0.30980393f);
		const vec3 ColorF::NavyBlue = vec3(0.13725491f, 0.13725491f, 0.5568628f);
		const vec3 ColorF::NeonBlue = vec3(0.3019608f, 0.3019608f, 1.0f);
		const vec3 ColorF::NeonPink = vec3(1.0f, 0.43137255f, 0.78039217f);
		const vec3 ColorF::NewMidnightBlue = vec3(0.0f, 0.0f, 0.6117647f);
		const vec3 ColorF::NewTan = vec3(0.92156863f, 0.78039217f, 0.61960787f);
		const vec3 ColorF::OldGold = vec3(0.8117647f, 0.70980394f, 0.23137255f);
		const vec3 ColorF::Orange = vec3(1.0f, 0.49803922f, 0.0f);
		const vec3 ColorF::OrangeRed = vec3(1.0f, 0.14117648f, 0.0f);
		const vec3 ColorF::Orchid = vec3(0.85882354f, 0.4392157f, 0.85882354f);
		const vec3 ColorF::PaleGreen = vec3(0.56078434f, 0.7372549f, 0.56078434f);
		const vec3 ColorF::Pink = vec3(0.7372549f, 0.56078434f, 0.56078434f);
		const vec3 ColorF::Plum = vec3(0.91764706f, 0.6784314f, 0.91764706f);
		const vec3 ColorF::Quartz = vec3(0.8509804f, 0.8509804f, 0.9529412f);
		const vec3 ColorF::Red = vec3(1.0f, 0.0f, 0.0f);
		const vec3 ColorF::RichBlue = vec3(0.34901962f, 0.34901962f, 0.67058825f);
		const vec3 ColorF::Salmon = vec3(0.43529412f, 0.25882354f, 0.25882354f);
		const vec3 ColorF::Scarlet = vec3(0.54901963f, 0.09019608f, 0.09019608f);
		const vec3 ColorF::SeaGreen = vec3(0.13725491f, 0.5568628f, 0.40784314f);
		const vec3 ColorF::SemiSweetChocolate = vec3(0.41960785f, 0.25882354f, 0.14901961f);
		const vec3 ColorF::Sienna = vec3(0.5568628f, 0.41960785f, 0.13725491f);
		const vec3 ColorF::Silver = vec3(0.9019608f, 0.9098039f, 0.98039216f);
		const vec3 ColorF::Sky = vec3(0.529f, 0.807f, 0.921f);
		const vec3 ColorF::SkyBlue = vec3(0.19607843f, 0.6f, 0.8f);
		const vec3 ColorF::SlateBlue = vec3(0.0f, 0.49803922f, 1.0f);
		const vec3 ColorF::SpicyPink = vec3(1.0f, 0.10980392f, 0.68235296f);
		const vec3 ColorF::SpringGreen = vec3(0.0f, 1.0f, 0.49803922f);
		const vec3 ColorF::SteelBlue = vec3(0.13725491f, 0.41960785f, 0.5568628f);
		const vec3 ColorF::SummerSky = vec3(0.21960784f, 0.6901961f, 0.87058824f);
		const vec3 ColorF::Tan = vec3(0.85882354f, 0.5764706f, 0.4392157f);
		const vec3 ColorF::Teal = vec3(0.0f, 0.502f, 0.502f);
		const vec3 ColorF::Thistle = vec3(0.84705883f, 0.7490196f, 0.84705883f);
		const vec3 ColorF::Tomato = vec3(1.0f, 0.388f, 0.278f);
		const vec3 ColorF::Turquoise = vec3(0.6784314f, 0.91764706f, 0.91764706f);
		const vec3 ColorF::VeryDarkBrown = vec3(0.36078432f, 0.2509804f, 0.2f);
		const vec3 ColorF::VeryLightGrey = vec3(0.8039216f, 0.8039216f, 0.8039216f);
		const vec3 ColorF::Violet = vec3(0.30980393f, 0.18431373f, 0.30980393f);
		const vec3 ColorF::VioletRed = vec3(0.8f, 0.19607843f, 0.6f);
		const vec3 ColorF::Wheat = vec3(0.84705883f, 0.84705883f, 0.7490196f);
		const vec3 ColorF::White = vec3(1.0f, 1.0f, 1.0f);
		const vec3 ColorF::Yellow = vec3(1.0f, 1.0f, 0.0f);
		const vec3 ColorF::YellowGreen = vec3(0.6f, 0.8f, 0.19607843f);
	}
}

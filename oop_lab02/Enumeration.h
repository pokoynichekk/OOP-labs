#pragma once

enum color
{
	red = 1,
	orange,
	yellow,
	green,
	blue,
	darkblue,
	purple
};

enum day
{
	monday = 1,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
};

enum genre
{
	comedy = 1,
	drama,
	thriller,
	action,
	horro,
	blockbaster
};

enum phones
{
	samsung = 1,
	apple,
	huawei,
	xiaomi
};

enum year
{
	summer = 1,
	fall,
	wainter,
	spring
};

color ReadColor(color color);

void WriteColor(color color);

genre ReadGenre();

void WriteGenre(genre genre);
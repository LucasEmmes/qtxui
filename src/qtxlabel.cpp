#include "qtxlabel.h"

using namespace ftxui;

QtxLabel::QtxLabel(QObject *parent)
    : QtxLabel("", Color::Palette1::Default, parent)
{}

QtxLabel::QtxLabel(const std::string &text, QObject *parent)
    : QtxLabel(text, Color::Palette1::Default, parent)
{}

QtxLabel::QtxLabel(const std::string &text, ftxui::Color textColor, QObject *parent)
    : QtxComponentBase{parent}
{
    m_text = std::make_shared<std::string>(text);
    m_foregroundColor = textColor;

    m_component = Renderer([this]{
        return ftxui::text(*m_text) | ftxui::color(m_foregroundColor) | ftxui::bgcolor(m_backgroundColor);
    });
}

std::string QtxLabel::text()
{
    return *m_text;
}

void QtxLabel::setText(const std::string &text)
{
    *m_text = text;
}

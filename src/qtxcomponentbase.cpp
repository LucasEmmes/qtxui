#include "qtxcomponentbase.h"

QtxComponentBase::QtxComponentBase(QObject *parent)
    : QObject{parent}
{}

const ftxui::Color QtxComponentBase::color() const
{
    return m_foregroundColor;
}

const ftxui::Color QtxComponentBase::bgcolor() const
{
    return m_backgroundColor;
}

void QtxComponentBase::setColor(const ftxui::Color foregroundColor)
{
    m_foregroundColor = foregroundColor;
}

void QtxComponentBase::setBGColor(const ftxui::Color backgroundColor)
{
    m_backgroundColor = backgroundColor;
}

bool QtxComponentBase::isActive() const
{
    return m_active;
}

void QtxComponentBase::setActive(const bool active)
{
    m_active = active;
}

void QtxComponentBase::enable()
{
    m_active = true;
}

void QtxComponentBase::disable()
{
    m_active = false;
}

bool QtxComponentBase::isVisible() const
{
    return m_visible;
}

void QtxComponentBase::setVisible(const bool visible)
{
    m_visible = visible;
}

void QtxComponentBase::show()
{
    m_visible = true;
}

void QtxComponentBase::hide()
{
    m_visible = false;
}

const ftxui::Component QtxComponentBase::component() const
{
    return m_component;
}

void QtxComponentBase::setComponent(const ftxui::Component component)
{
    m_component = component;
}

void QtxComponentBase::operator=(const ftxui::Component &component)
{
    m_component = component;
}

QtxComponentBase::operator ftxui::Component()
{
    return m_component;
}

#ifndef QTXCOMPONENTBASE_H
#define QTXCOMPONENTBASE_H

#include <QObject>
#include <ftxui/component/component.hpp>

/**
 * @class QtxComponentBase
 * @brief The base of all Qtx components.
 *        It contains the most basic shared attributes / methods.
 */
class QtxComponentBase : public QObject
{
public:
    explicit QtxComponentBase(QObject* parent = nullptr);

    const ftxui::Color color() const;
    const ftxui::Color bgcolor() const;
    void setColor(const ftxui::Color foregroundColor);
    void setBGColor(const ftxui::Color backgroundColor);

    bool isActive() const;
    void setActive(const bool active);
    void enable();
    void disable();

    bool isVisible() const;
    void setVisible(const bool visible);
    void show();
    void hide();

    const ftxui::Component component() const;
    void setComponent(const ftxui::Component component);

    void operator=(const ftxui::Component& component);
    operator ftxui::Component();

private:

    ftxui::Component m_component;

    ftxui::Color m_foregroundColor = ftxui::Color::Palette1::Default;
    ftxui::Color m_backgroundColor = ftxui::Color::Palette1::Default;
    bool m_visible = true;
    bool m_active = true;

};

#endif // QTXCOMPONENTBASE_H

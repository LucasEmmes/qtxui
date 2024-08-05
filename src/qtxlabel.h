#ifndef QTXLABEL_H
#define QTXLABEL_H

#include "qtxcomponentbase.h"

/**
 * @class QtxLabel
 * @brief A simple class displaying a string of text.
 */

class QtxLabel : public QtxComponentBase
{
public:
    explicit QtxLabel(QObject *parent = nullptr);
    explicit QtxLabel(const std::string& text, QObject *parent = nullptr);
    explicit QtxLabel(const std::string& text, ftxui::Color textColor, QObject *parent = nullptr);

    std::string text();
    void setText(const std::string& text);

protected:
    std::shared_ptr<std::string> m_text;
};

#endif // QTXLABEL_H

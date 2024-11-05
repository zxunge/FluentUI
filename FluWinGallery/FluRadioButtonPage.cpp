#include "FluRadioButtonPage.h"

FluRadioButtonPage::FluRadioButtonPage(QWidget* parent /*= nullptr*/) : FluAEmptyPage(parent)
{
    m_mainLayout->setAlignment(Qt::AlignTop);
    m_titleLabel->setText("RadioButton");
    // m_subTitleLabel->setText("CppQtFluentUi888::FluRadioButton");

    m_infoLabel->setText("Use RadioButton to let a user choose between mutually exclusive, related options. Generally contained within a RadioButtons group control.");
    FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButtonPage.qss", this);

    auto displayBox = new FluDisplayBox;
    displayBox->setTitle("A group of RadioButton controls in RadioButtons group.");
    displayBox->getCodeExpander()->setCodeByPath("../code/RadioButtonPageCode1.md");
    displayBox->setBodyWidgetFixedHeight(160);

    FluVRadioGroupBox* groupBox = new FluVRadioGroupBox("Options");
    groupBox->move(50, 50);

    auto btn1 = new FluRadioButton("Option 1", groupBox);
    auto btn2 = new FluRadioButton("Option 2", groupBox);
    auto btn3 = new FluRadioButton("Option 3", groupBox);

    groupBox->addRadioButton(btn1);
    groupBox->addRadioButton(btn2);
    groupBox->addRadioButton(btn3);

    displayBox->getBodyLayout()->addWidget(groupBox);
    m_vScrollView->getMainLayout()->addWidget(displayBox, 0, Qt::AlignTop);

    FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButtonPage.qss", this);
}

void FluRadioButtonPage::onThemeChanged()
{
    if (FluThemeUtils::isLightTheme())
    {
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluRadioButtonPage.qss", this);
    }
    else
    {
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/dark/FluRadioButtonPage.qss", this);
    }
}

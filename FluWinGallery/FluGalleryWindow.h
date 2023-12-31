#pragma once

#include "../FluControls/FluFrameLessWidget.h"
#include "../FluControls/FluNavigationView.h"
#include "../FluControls/FluNavigationIconTextItem.h"
#include "FluHomePage.h"
#include <QStackedLayout>

class FluGalleryWindow : public FluFrameLessWidget
{
    Q_OBJECT
  public:
    FluGalleryWindow(QWidget *parent = nullptr);

    void makeHomeNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Home), "Home", this);
        m_navView->addItemToLayout2(item);
    }

    void makeDesignGuidanceNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Design), "Design guidance", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::FontSize), "Typography", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::EmojiTabSymbols), "Icons", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Color), "Colors", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        m_navView->addItemToLayout2(item);
    }

    void makeSamplesNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::AllApps), "All samples", this);
        m_navView->addItemToLayout2(item);
    }

    void makeBasicInputNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::CheckboxComposite), "Basic input", this);

        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("InputValidation", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("Button", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("DropDownButton", item);

        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("HyperLinkButton", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("RepeatButton", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("ToggleButton", item);

        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("SplitButton", item);
        FluNavigationIconTextItem *item8 = new FluNavigationIconTextItem("ToggleSplitButton", item);
        FluNavigationIconTextItem *item9 = new FluNavigationIconTextItem("CheckBox", item);

        FluNavigationIconTextItem *item10 = new FluNavigationIconTextItem("CheckBox", item);
        FluNavigationIconTextItem *item11 = new FluNavigationIconTextItem("ComboBox", item);
        FluNavigationIconTextItem *item12 = new FluNavigationIconTextItem("RadioButton", item);

        FluNavigationIconTextItem *item13 = new FluNavigationIconTextItem("RatingControl", item);
        FluNavigationIconTextItem *item14 = new FluNavigationIconTextItem("Slider", item);
        FluNavigationIconTextItem *item15 = new FluNavigationIconTextItem("ToggleSwith", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        item->addItem(item8);
        item->addItem(item9);
        item->addItem(item10);
        item->addItem(item11);
        item->addItem(item12);
        item->addItem(item13);
        item->addItem(item14);
        item->addItem(item15);
        m_navView->addItemToLayout2(item);
    }

    void makeCollectionsNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::TiltDown), "Connections", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("FlipView", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("GridView", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("ItemsView", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("ListBox", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("ListView", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("PullToRefresh", item);
        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("TreeView", item);
        FluNavigationIconTextItem *item8 = new FluNavigationIconTextItem("DataGrid", item);
        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        item->addItem(item8);
        m_navView->addItemToLayout2(item);
    }

    void makDateTimeNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Calendar), "Date & time", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("CalendarDatePicker", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("CalendarView", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("DatePicker", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("TimePicker", item);
        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        m_navView->addItemToLayout2(item);
    }

    void makeDialogsFlyouts()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Comment), "Dialogs & flyouts", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("ContentDialog", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("Flyout", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("TeachingTip", item);
        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        m_navView->addItemToLayout2(item);
    }

    void makeLayoutNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::PreviewLink), "Layout", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("Border", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("Canvas", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("Expander", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("ItemsRepeater", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("Grid", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("RadioButtons", item);
        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("RelativePanel", item);
        FluNavigationIconTextItem *item8 = new FluNavigationIconTextItem("SplitView", item);
        FluNavigationIconTextItem *item9 = new FluNavigationIconTextItem("StackPanel", item);
        FluNavigationIconTextItem *item10 = new FluNavigationIconTextItem("VariableSizedWrapGrid", item);
        FluNavigationIconTextItem *item11 = new FluNavigationIconTextItem("ViewBox", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        item->addItem(item8);
        item->addItem(item9);
        item->addItem(item10);
        item->addItem(item11);
        m_navView->addItemToLayout2(item);
    }

    void makeMediaNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Calendar), "Media", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("AnimatedVisualPlayer", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("Capture Element / Camera Preview", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("Image", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("mediaPalyerElement", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("PersonPicture", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("Sound", item);
        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("WebView2", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        m_navView->addItemToLayout2(item);
    }

    void makeSettingsNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Settings), "Setting", this);
        m_navView->addItemToLayout3(item);
    }

    void makeMenuToolBarsNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Save), "Menus & toolbars", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("XamlUICommand", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("StandardUICommand", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("AppBarButton", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("AppBarSeparator", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("AppBarToggleButton", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("CommandBar", item);
        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("MenuBar", item);
        FluNavigationIconTextItem *item8 = new FluNavigationIconTextItem("CommandBarFlyout", item);
        FluNavigationIconTextItem *item9 = new FluNavigationIconTextItem("MenuFlyout", item);
        FluNavigationIconTextItem *item10 = new FluNavigationIconTextItem("SwipeControl", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        item->addItem(item8);
        item->addItem(item9);
        item->addItem(item10);
        m_navView->addItemToLayout2(item);
    }

    void makeNavigationNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::BookmarksMirrored), "Navigation", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("BreadcrumbBar", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("NavigationView", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("Pivot", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("TabView", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        m_navView->addItemToLayout2(item);
    }

    void makeScrollingNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Sort), "Scrolling", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("AnnotatedScrollBar", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("PipsPager", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("ScrollView", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("ScrollViewer", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("SemanticZoom", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        m_navView->addItemToLayout2(item);
    }

    void makeStatusInfoNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Reminder), "Status & info", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("InfoBadge", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("InfoBar", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("progressBar", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("progressRing", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("ToolTip", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        m_navView->addItemToLayout2(item);
    }

    void makeTextNavItem()
    {
        FluNavigationIconTextItem *item = new FluNavigationIconTextItem(FluIconUtils::getFluentIcon(FluAwesomeType::Font), "Text", this);
        FluNavigationIconTextItem *item1 = new FluNavigationIconTextItem("AutoSuggestBox", item);
        FluNavigationIconTextItem *item2 = new FluNavigationIconTextItem("NumberBox", item);
        FluNavigationIconTextItem *item3 = new FluNavigationIconTextItem("PassWordBox", item);
        FluNavigationIconTextItem *item4 = new FluNavigationIconTextItem("RichEditBox", item);
        FluNavigationIconTextItem *item5 = new FluNavigationIconTextItem("RichTextBlock", item);
        FluNavigationIconTextItem *item6 = new FluNavigationIconTextItem("TextBlock", item);
        FluNavigationIconTextItem *item7 = new FluNavigationIconTextItem("TextBox", item);

        item->addItem(item1);
        item->addItem(item2);
        item->addItem(item3);
        item->addItem(item4);
        item->addItem(item5);
        item->addItem(item6);
        item->addItem(item7);
        m_navView->addItemToLayout2(item);
    }

  protected:
    FluNavigationView *m_navView;
    QStackedLayout *m_sLayout;
};

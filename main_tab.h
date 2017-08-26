#ifndef MAIN_TAB_H
#define MAIN_TAB_H
#include <auscultation_widget.h>
#include <case_widget.h>
#include <courseware_widget.h>
#include <QTableWidget>
class main_tab : public QTabWidget
{
    Q_OBJECT
public:
    main_tab(QWidget *parent=Q_NULLPTR);
    ~main_tab();
    void insertTabwidget();
signals:
    void onClickedevent(int id);
private:
    auscultation_widget *au_widget;
    case_widget *ca_widget;
    courseware_widget *co_widget;
};

#endif // MAIN_TAB_H

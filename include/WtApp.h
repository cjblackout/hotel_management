#ifndef WTAPP_H
#define WTAPP_H

#include <Wt/WApplication.h>
#include <Wt/WContainerWidget.h>

class WtApp : public Wt::WApplication {
public:
    WtApp(const Wt::WEnvironment& env);

private:
    void setupUI();
    void createGuestSection(Wt::WContainerWidget* parent);
    void createInventorySection(Wt::WContainerWidget* parent);
    void createEmployeeSection(Wt::WContainerWidget* parent);
};

#endif // WTAPP_H

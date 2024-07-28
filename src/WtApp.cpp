#include "WtApp.h"
#include <Wt/WVBoxLayout.h>
#include <Wt/WText.h>

WtApp::WtApp(const Wt::WEnvironment& env)
    : Wt::WApplication(env)
{
    setTitle("Hotel Management System");
    setupUI();
}

void WtApp::setupUI() {
    auto container = root();
    container->setLayout(std::make_unique<Wt::WVBoxLayout>());

    createGuestSection(container);
    createInventorySection(container);
    createEmployeeSection(container);
}

void WtApp::createGuestSection(Wt::WContainerWidget* parent) {
    parent->addWidget(std::make_unique<Wt::WText>("<h3>Guest Management</h3>"));
}

void WtApp::createInventorySection(Wt::WContainerWidget* parent) {
    parent->addWidget(std::make_unique<Wt::WText>("<h3>Inventory Management</h3>"));
}

void WtApp::createEmployeeSection(Wt::WContainerWidget* parent) {
    parent->addWidget(std::make_unique<Wt::WText>("<h3>Employee Management</h3>"));
}

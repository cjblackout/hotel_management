#include <Wt/WApplication.h>
#include <Wt/WServer.h>
#include "WtApp.h"
#include <csignal> // For SIGHUP
#include <cstdlib> // For environ

std::unique_ptr<Wt::WApplication> createApplication(const Wt::WEnvironment& env) {
    return std::make_unique<WtApp>(env);
}

int main(int argc, char** argv) {
    try {
        Wt::WServer server(argc, argv, WTHTTP_CONFIGURATION);

        server.addEntryPoint(Wt::EntryPointType::Application, createApplication);

        if (server.start()) {
            int sig = Wt::WServer::waitForShutdown();
            server.stop();
            if (sig == SIGHUP)
                Wt::WServer::restart(argc, argv, environ);
        }
    } catch (Wt::WServer::Exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    } catch (std::exception& e) {
        std::cerr << "exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

#include <iostream>
#include "httplib.h"     // cpp-httplib
#include "json.hpp"      // nlohmann::json

using json = nlohmann::json;

int main() {
    httplib::Server server;

    // Simple health check: GET /health
    server.Get("/health", [](const httplib::Request& req, httplib::Response& res) {
        json body;
        body["status"] = "ok";

        res.set_content(body.dump(), "application/json");
        res.status = 200;
    });

    // Example: GET /hello?name=Jatin
    server.Get("/hello", [](const httplib::Request& req, httplib::Response& res) {
        std::string name = "world";
        if (req.has_param("name")) {
            name = req.get_param_value("name");
        }

        json body;
        body["message"] = "Hello, " + name + "!";

        res.set_content(body.dump(), "application/json");
        res.status = 200;
    });

    std::cout << "Server starting on http://localhost:8080\n";
    server.listen("0.0.0.0", 8080);  // block here, serve forever

    return 0;
}

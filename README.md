This Repository is create to learn about C++ Build systems.

HelloCMake
- First program using cmake.
- used g++ compiler and ninja as a build system.
- Can you VS Code UI to trigger build and run.
- Or can use commands ->
    - cd into build dir inside project i.e, go to "C++ Build Env\build"
    - Run command for cmake configuration step - "cmake .. -G Ninja"
    - Run build command - "cmake --build ."
    - Run HelloCMake.exe to see output.

RestApiDemo
- Learn to integrate single header third party code into main file.
- Learn about basic Rest Api.
- Build using msvc, since httplib requires windows specific functions.
- Build using "cmake --build ."
- Run the server and use curl commands to test response -> 
        - curl http://localhost:8080/health
        - curl "http://localhost:8080/hello?name=Jatin"
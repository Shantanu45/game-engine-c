#include <core/logger.h>
#include <core/asserts.h>

// TODO: test
#include <core/application.h>

int main(void){
    application_config config;
    config.start_pos_x = 100;
    config.start_pos_y = 100;
    config.start_width = 1280;
    config.start_height = 720;
    config.name = "Engine Testbed";

    application_create(&config);

    application_run();
    //KASSERT(1 == 0);
    return 0;
}
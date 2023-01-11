from conans import ConanFile, CMake


class login_matchmaking_game_shared_type(ConanFile):
    name = "login_matchmaking_game_shared_type"
    license = "<Put the package license here>"
    url = "<Package recipe repository url here, for issues about the package>"
    description = "<Description of hello here>"
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = {"shared": False}
    generators = "cmake"
    exports_sources = "*"

    def requirements(self):
        self.requires("boost/1.81.0")

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        self.copy(pattern="*", dst="include/login_matchmaking_game_shared_type",
                  src="login_matchmaking_game_shared_type")

    def package_id(self):
        self.info.header_only()

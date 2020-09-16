#pragma once

extern bbly::Appl* bbly::CreateApplication();

int main(int argc, char** argv) {
	printf("Welcome To Bubbly\n");
	bbly::Log::Init();
	BBLY_CORE_WARN("first log");
	int a = 5;
	BBLY_INFO("var={0}", a);
	auto app = bbly::CreateApplication();
	app->run();
	delete app;
}
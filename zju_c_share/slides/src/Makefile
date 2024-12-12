.PHONY: live build all clean live-home build-home

live:
	@echo "Previewing  slides..."
	-@reveal-md slides.md -w --scripts https://cdn.tonycrane.cc/heti/heti.js,heti_worker.js || true

build:
	@echo "Building lec$(LECNO) slides..."
	@reveal-md slides.md --scripts https://cdn.tonycrane.cc/heti/heti.js,heti_worker.js --static ../../site/slides --assets-dir assets
	@rm ../../site/slides/slides.html
	@cp ./favicon.ico ../../site/slides/favicon.ico


clean:
	@echo "Cleaning up..."
	rm -rf ../../site/

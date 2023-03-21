NO = 1

.PHONY: live build all clean

live:
	@echo "Previewing group meeting$(NO) slides..."
	-@reveal-md gm$(NO).md -w --scripts https://cdn.tonycrane.cc/heti/heti.js,heti_worker.js || true

build:
	@echo "Building gm$(NO) slides..."
	@reveal-md gm$(NO).md --scripts https://cdn.tonycrane.cc/heti/heti.js,heti_worker.js --static ../../site/gm$(NO) --assets-dir assets
	@rm ../../site/gm$(NO)/gm$(NO).html


all:
	@echo "Building all slides..."
	@for i in `seq 1 6`; do \
		make NO=$$i build; \
	done

clean:
	@echo "Cleaning up..."
	rm -rf ../../site/

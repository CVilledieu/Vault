CC = gcc

INC = -I./src
CFLAGS = $(INC) -Wall

SRC_D = src
OUT_D = build
TARGET = $(OUT_D)/vault

# Find all .c files recursively in src/
SRCS = $(shell find $(SRC_D) -name '*.c')
# Generate corresponding .o files in build/
OBJS = $(patsubst $(SRC_D)/%.c,$(OUT_D)/%.o,$(SRCS))

all: $(TARGET) clean_up

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files to .o files, creating directories as needed
$(OUT_D)/%.o: $(SRC_D)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Removes all artifacts/objects files of build process after everything is built
clean_up:
	@find $(OUT_D) -name '*.o' -delete 2>/dev/null || true

# Removes everything in build/
clean:
	@rm -rf $(OUT_D)/*

# Runs the built app
run: $(TARGET)
	@./$(TARGET)

.PHONY: all clean_up clean run
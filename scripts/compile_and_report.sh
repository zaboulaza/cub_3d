#!/bin/sh
# Usage: compile_and_report.sh <CC> "<CFLAGS>" <SRC> <OBJ> <TOTAL> <BUILD_DIR>
# Compiles SRC -> OBJ with given CC and CFLAGS. On success increments counter in BUILD_DIR/done
# and prints a one-line progress bar with percentage.

CC="$1"
CFLAGS="$2"
SRC="$3"
OBJ="$4"
TOTAL="$5"
BUILD_DIR="$6"

LOGFILE="$BUILD_DIR/compile_$(basename "$SRC" | tr '/ ' '__').log"

mkdir -p "$(dirname "$OBJ")"

# Compile quietly, capture output
"$CC" $CFLAGS -c "$SRC" -o "$OBJ" > "$LOGFILE" 2>&1
rc=$?
if [ $rc -ne 0 ]; then
    printf "\n\033[31m[ERROR] Compilation failed for %s\033[0m\n" "$SRC"
    cat "$LOGFILE"
    exit $rc
fi

# Record success (append is atomic on POSIX filesystems for small writes)
printf "1\n" >> "$BUILD_DIR/done"
# compute progress
done=$(wc -l < "$BUILD_DIR/done" 2>/dev/null || echo 0)
percent=$((done * 100 / (TOTAL + 0)))
# print progress line (magenta)
printf "\033[35m[BUILD] %d/%d (%d%%) - compiling...\033[0m\r" "$done" "$TOTAL" "$percent"

exit 0

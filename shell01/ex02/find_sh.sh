find . -name "*.sh" -type f -print | sed 's/\.sh$//' | sed  's/.*\///'

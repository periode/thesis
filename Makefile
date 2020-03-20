# different modes
# 1 - render
# - - it renders all the MD files
# - - checks for the pdf in the working-documents/ folder
# - - adds and commits the docs/folder
# - - adds and commits all the rest

# 2 - working-document
# - - looks at all the modified documents in the working-documents folder
# - - renders those that are changed with tex
# - - adds those to the docs/working documents folder folder
# - - then calls make render (mainly in order to rebuild the index page)

if [ -n "$BASH_VERSION" ]; then
	
	if [ -f "$HOME/.bashrc" ]; then
		. "$HOME/.bashrc"
	fi
fi
PATH="$HOME/bin:$HOME/.local/bin:$PATH"
REEP=true
export DAGGLE=true


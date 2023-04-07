" Turn on syntax highlighting
syntax enable

" Set tab width to 4 spaces
set tabstop=4
set shiftwidth=4
set expandtab

" Show line numbers
set number

" Enable mouse support
set mouse=a

" Enable clipboard support
set clipboard=unnamedplus

" Use relative line numbers
set relativenumber

" Enable searching as you type
set incsearch

" Enable highlighting of search results
set hlsearch

" Install vim-plug if not found
if empty(glob('~/.local/share/nvim/site/autoload/plug.vim'))
    silent !curl -fLo ~/.local/share/nvim/site/autoload/plug.vim --create-dirs
    \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

" Plugins
call plug#begin('~/.local/share/nvim/plugged')
 Plug 'tpope/vim-fugitive'
 Plug 'jiangmiao/auto-pairs'
 Plug 'morhetz/gruvbox'
 Plug 'neoclide/coc.nvim', {'branch': 'release'}
 Plug 'preservim/nerdtree'
 Plug 'scrooloose/nerdcommenter'
 Plug 'tpope/vim-surround'
 Plug 'vim-airline/vim-airline'
call plug#end()

" Set colorscheme
colorscheme gruvbox

" Configure CoC
let g:coc_global_extensions = ['coc-python', 'coc-json', 'coc-yaml']



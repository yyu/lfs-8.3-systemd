let save_columns = &columns
let save_lines = &lines
let save_term = &term
set t_WS=
set aleph=-1
set al=-1
set aleph=0
set al=0
set aleph=100
set al=100
if exists('+aleph')
call assert_fails('set aleph=')
call assert_fails('set al=')
endif
set aleph&
set al&
set antialias
set anti
set noantialias
set noanti
set antialias&
set anti&
set arabic
set arab
set noarabic
set noarab
set arabic&
set arab&
set arabicshape
set arshape
set noarabicshape
set noarshape
set arabicshape&
set arshape&
set allowrevins
set ari
set noallowrevins
set noari
set allowrevins&
set ari&
set altkeymap
set akm
set noaltkeymap
set noakm
set altkeymap&
set akm&
set ambiwidth=
set ambw=
set ambiwidth=single
set ambw=single
if exists('+ambiwidth')
call assert_fails('set ambiwidth=xxx')
call assert_fails('set ambw=xxx')
endif
set ambiwidth&
set ambw&
set autochdir
set acd
set noautochdir
set noacd
set autochdir&
set acd&
set autoindent
set ai
set noautoindent
set noai
set autoindent&
set ai&
set autoprint
set ap
set noautoprint
set noap
set autoprint&
set ap&
set autoread
set ar
set noautoread
set noar
set autoread&
set ar&
set autowrite
set aw
set noautowrite
set noaw
set autowrite&
set aw&
set autowriteall
set awa
set noautowriteall
set noawa
set autowriteall&
set awa&
set background=
set bg=
set background=light
set bg=light
set background=dark
set bg=dark
if exists('+background')
call assert_fails('set background=xxx')
call assert_fails('set bg=xxx')
endif
set background&
set bg&
set backspace=0
set bs=0
set backspace=2
set bs=2
set backspace=
set bs=
set backspace=eol
set bs=eol
set backspace=eol,start
set bs=eol,start
if exists('+backspace')
call assert_fails('set backspace=xxx')
call assert_fails('set bs=xxx')
endif
set backspace&
set bs&
set backup
set bk
set nobackup
set nobk
set backup&
set bk&
set backupcopy=yes
set bkc=yes
set backupcopy=auto
set bkc=auto
if exists('+backupcopy')
call assert_fails('set backupcopy=')
call assert_fails('set bkc=')
call assert_fails('set backupcopy=xxx')
call assert_fails('set bkc=xxx')
call assert_fails('set backupcopy=yes,no')
call assert_fails('set bkc=yes,no')
endif
set backupcopy&
set bkc&
set backupdir=
set bdir=
set backupdir=xxx
set bdir=xxx
if exists('+backupdir')
endif
set backupdir&
set bdir&
set backupext=xxx
set bex=xxx
if exists('+backupext')
call assert_fails('set backupext=')
call assert_fails('set bex=')
endif
set backupext&
set bex&
set backupskip=
set bsk=
set backupskip=xxx
set bsk=xxx
if exists('+backupskip')
endif
set backupskip&
set bsk&
set balloondelay=-1
set bdlay=-1
set balloondelay=0
set bdlay=0
set balloondelay=100
set bdlay=100
if exists('+balloondelay')
call assert_fails('set balloondelay=')
call assert_fails('set bdlay=')
endif
set balloondelay&
set bdlay&
set ballooneval
set beval
set noballooneval
set nobeval
set ballooneval&
set beval&
set balloonevalterm
set bevalterm
set noballoonevalterm
set nobevalterm
set balloonevalterm&
set bevalterm&
set balloonexpr=
set bexpr=
set balloonexpr=xxx
set bexpr=xxx
if exists('+balloonexpr')
endif
set balloonexpr&
set bexpr&
set beautify
set bf
set nobeautify
set nobf
set beautify&
set bf&
set belloff=
set bo=
set belloff=all
set bo=all
set belloff=copy,error
set bo=copy,error
if exists('+belloff')
call assert_fails('set belloff=xxx')
call assert_fails('set bo=xxx')
endif
set belloff&
set bo&
set binary
set bin
set nobinary
set nobin
set binary&
set bin&
set bioskey
set biosk
set nobioskey
set nobiosk
set bioskey&
set biosk&
set bomb
set bomb
set nobomb
set nobomb
set bomb&
set bomb&
set breakat=
set brk=
set breakat=xxx
set brk=xxx
if exists('+breakat')
endif
set breakat&
set brk&
set breakindent
set bri
set nobreakindent
set nobri
set breakindent&
set bri&
set breakindentopt=
set briopt=
set breakindentopt=min:3
set briopt=min:3
set breakindentopt=sbr
set briopt=sbr
if exists('+breakindentopt')
call assert_fails('set breakindentopt=xxx')
call assert_fails('set briopt=xxx')
call assert_fails('set breakindentopt=min')
call assert_fails('set briopt=min')
call assert_fails('set breakindentopt=min:x')
call assert_fails('set briopt=min:x')
endif
set breakindentopt&
set briopt&
set browsedir=
set bsdir=
set browsedir=last
set bsdir=last
set browsedir=/
set bsdir=/
if exists('+browsedir')
call assert_fails('set browsedir=xxx')
call assert_fails('set bsdir=xxx')
endif
set browsedir&
set bsdir&
set bufhidden=
set bh=
set bufhidden=hide
set bh=hide
set bufhidden=wipe
set bh=wipe
if exists('+bufhidden')
call assert_fails('set bufhidden=xxx')
call assert_fails('set bh=xxx')
call assert_fails('set bufhidden=hide,wipe')
call assert_fails('set bh=hide,wipe')
endif
set bufhidden&
set bh&
set buflisted
set bl
set nobuflisted
set nobl
set buflisted&
set bl&
set buftype=
set bt=
set buftype=help
set bt=help
set buftype=nofile
set bt=nofile
if exists('+buftype')
call assert_fails('set buftype=xxx')
call assert_fails('set bt=xxx')
call assert_fails('set buftype=help,nofile')
call assert_fails('set bt=help,nofile')
endif
set buftype&
set bt&
set casemap=
set cmp=
set casemap=internal
set cmp=internal
if exists('+casemap')
call assert_fails('set casemap=xxx')
call assert_fails('set cmp=xxx')
endif
set casemap&
set cmp&
set cdpath=
set cd=
set cdpath=xxx
set cd=xxx
if exists('+cdpath')
endif
set cdpath&
set cd&
set cedit=
set cedit=
set cedit=\<Esc>
set cedit=\<Esc>
if exists('+cedit')
call assert_fails('set cedit=xxx')
call assert_fails('set cedit=xxx')
call assert_fails('set cedit=f')
call assert_fails('set cedit=f')
endif
set cedit&
set cedit&
set charconvert=
set ccv=
set charconvert=xxx
set ccv=xxx
if exists('+charconvert')
endif
set charconvert&
set ccv&
set cindent
set cin
set nocindent
set nocin
set cindent&
set cin&
set cinkeys=
set cink=
set cinkeys=xxx
set cink=xxx
if exists('+cinkeys')
endif
set cinkeys&
set cink&
set cinoptions=
set cino=
set cinoptions=xxx
set cino=xxx
if exists('+cinoptions')
endif
set cinoptions&
set cino&
set cinwords=
set cinw=
set cinwords=xxx
set cinw=xxx
if exists('+cinwords')
endif
set cinwords&
set cinw&
set clipboard=
set cb=
set clipboard=unnamed
set cb=unnamed
set clipboard=autoselect,unnamed
set cb=autoselect,unnamed
if exists('+clipboard')
call assert_fails('set clipboard=xxx')
call assert_fails('set cb=xxx')
endif
set clipboard&
set cb&
set cmdheight=1
set ch=1
set cmdheight=2
set ch=2
set cmdheight=10
set ch=10
if exists('+cmdheight')
call assert_fails('set cmdheight=-1')
call assert_fails('set ch=-1')
call assert_fails('set cmdheight=0')
call assert_fails('set ch=0')
endif
set cmdheight&
set ch&
set cmdwinheight=1
set cwh=1
set cmdwinheight=2
set cwh=2
set cmdwinheight=10
set cwh=10
if exists('+cmdwinheight')
call assert_fails('set cmdwinheight=-1')
call assert_fails('set cwh=-1')
call assert_fails('set cmdwinheight=0')
call assert_fails('set cwh=0')
endif
set cmdwinheight&
set cwh&
set colorcolumn=
set cc=
set colorcolumn=8
set cc=8
set colorcolumn=+2
set cc=+2
if exists('+colorcolumn')
call assert_fails('set colorcolumn=xxx')
call assert_fails('set cc=xxx')
endif
set colorcolumn&
set cc&
set columns=12
set co=12
set columns=80
set co=80
if exists('+columns')
call assert_fails('set columns=-1')
call assert_fails('set co=-1')
call assert_fails('set columns=0')
call assert_fails('set co=0')
call assert_fails('set columns=10')
call assert_fails('set co=10')
endif
set columns&
set co&
set comments=
set com=
set comments=b:#
set com=b:#
if exists('+comments')
call assert_fails('set comments=xxx')
call assert_fails('set com=xxx')
endif
set comments&
set com&
set commentstring=
set cms=
set commentstring=/*%s*/
set cms=/*%s*/
if exists('+commentstring')
call assert_fails('set commentstring=xxx')
call assert_fails('set cms=xxx')
endif
set commentstring&
set cms&
set compatible
set cp
set nocompatible
set nocp
set compatible&
set cp&
set complete=
set cpt=
set complete=w,b
set cpt=w,b
if exists('+complete')
call assert_fails('set complete=xxx')
call assert_fails('set cpt=xxx')
endif
set complete&
set cpt&
set concealcursor=
set cocu=
set concealcursor=n
set cocu=n
set concealcursor=nvic
set cocu=nvic
if exists('+concealcursor')
call assert_fails('set concealcursor=xxx')
call assert_fails('set cocu=xxx')
endif
set concealcursor&
set cocu&
set conceallevel=0
set cole=0
set conceallevel=1
set cole=1
set conceallevel=2
set cole=2
set conceallevel=3
set cole=3
if exists('+conceallevel')
call assert_fails('set conceallevel=-1')
call assert_fails('set cole=-1')
call assert_fails('set conceallevel=4')
call assert_fails('set cole=4')
call assert_fails('set conceallevel=99')
call assert_fails('set cole=99')
endif
set conceallevel&
set cole&
set completefunc=
set cfu=
set completefunc=xxx
set cfu=xxx
if exists('+completefunc')
endif
set completefunc&
set cfu&
set completeopt=
set cot=
set completeopt=menu
set cot=menu
set completeopt=menu,longest
set cot=menu,longest
if exists('+completeopt')
call assert_fails('set completeopt=xxx')
call assert_fails('set cot=xxx')
call assert_fails('set completeopt=menu,,,longest,')
call assert_fails('set cot=menu,,,longest,')
endif
set completeopt&
set cot&
set confirm
set cf
set noconfirm
set nocf
set confirm&
set cf&
set conskey
set consk
set noconskey
set noconsk
set conskey&
set consk&
set copyindent
set ci
set nocopyindent
set noci
set copyindent&
set ci&
set cpoptions=
set cpo=
set cpoptions=xxx
set cpo=xxx
if exists('+cpoptions')
endif
set cpoptions&
set cpo&
set cryptmethod=
set cm=
set cryptmethod=zip
set cm=zip
if exists('+cryptmethod')
call assert_fails('set cryptmethod=xxx')
call assert_fails('set cm=xxx')
endif
set cryptmethod&
set cm&
set cscopepathcomp=-1
set cspc=-1
set cscopepathcomp=0
set cspc=0
set cscopepathcomp=100
set cspc=100
if exists('+cscopepathcomp')
call assert_fails('set cscopepathcomp=')
call assert_fails('set cspc=')
endif
set cscopepathcomp&
set cspc&
set cscopeprg=
set csprg=
set cscopeprg=xxx
set csprg=xxx
if exists('+cscopeprg')
endif
set cscopeprg&
set csprg&
set cscopequickfix=
set csqf=
set cscopequickfix=s-
set csqf=s-
set cscopequickfix=s-,c+,e0
set csqf=s-,c+,e0
if exists('+cscopequickfix')
call assert_fails('set cscopequickfix=xxx')
call assert_fails('set csqf=xxx')
call assert_fails('set cscopequickfix=s,g,d')
call assert_fails('set csqf=s,g,d')
endif
set cscopequickfix&
set csqf&
set cscoperelative
set csre
set nocscoperelative
set nocsre
set cscoperelative&
set csre&
set cscopetag
set cst
set nocscopetag
set nocst
set cscopetag&
set cst&
set cscopetagorder=-1
set csto=-1
set cscopetagorder=0
set csto=0
set cscopetagorder=100
set csto=100
if exists('+cscopetagorder')
call assert_fails('set cscopetagorder=')
call assert_fails('set csto=')
endif
set cscopetagorder&
set csto&
set cscopeverbose
set csverb
set nocscopeverbose
set nocsverb
set cscopeverbose&
set csverb&
set cursorbind
set crb
set nocursorbind
set nocrb
set cursorbind&
set crb&
set cursorcolumn
set cuc
set nocursorcolumn
set nocuc
set cursorcolumn&
set cuc&
set cursorline
set cul
set nocursorline
set nocul
set cursorline&
set cul&
set debug=
set debug=
set debug=msg
set debug=msg
set debug=msg
set debug=msg
set debug=beep
set debug=beep
if exists('+debug')
call assert_fails('set debug=xxx')
call assert_fails('set debug=xxx')
endif
set debug&
set debug&
set define=
set def=
set define=xxx
set def=xxx
if exists('+define')
endif
set define&
set def&
set delcombine
set deco
set nodelcombine
set nodeco
set delcombine&
set deco&
set dictionary=
set dict=
set dictionary=xxx
set dict=xxx
if exists('+dictionary')
endif
set dictionary&
set dict&
set diff
set diff
set nodiff
set nodiff
set diff&
set diff&
set diffexpr=
set dex=
set diffexpr=xxx
set dex=xxx
if exists('+diffexpr')
endif
set diffexpr&
set dex&
set diffopt=
set dip=
set diffopt=filler
set dip=filler
set diffopt=icase,iwhite
set dip=icase,iwhite
if exists('+diffopt')
call assert_fails('set diffopt=xxx')
call assert_fails('set dip=xxx')
endif
set diffopt&
set dip&
set digraph
set dg
set nodigraph
set nodg
set digraph&
set dg&
set directory=
set dir=
set directory=xxx
set dir=xxx
if exists('+directory')
endif
set directory&
set dir&
set display=
set dy=
set display=lastline
set dy=lastline
set display=lastline,uhex
set dy=lastline,uhex
if exists('+display')
call assert_fails('set display=xxx')
call assert_fails('set dy=xxx')
endif
set display&
set dy&
set eadirection=
set ead=
set eadirection=both
set ead=both
set eadirection=ver
set ead=ver
if exists('+eadirection')
call assert_fails('set eadirection=xxx')
call assert_fails('set ead=xxx')
call assert_fails('set eadirection=ver,hor')
call assert_fails('set ead=ver,hor')
endif
set eadirection&
set ead&
set edcompatible
set ed
set noedcompatible
set noed
set edcompatible&
set ed&
set emoji
set emo
set noemoji
set noemo
set emoji&
set emo&
set encoding=latin1
set enc=latin1
if exists('+encoding')
call assert_fails('set encoding=xxx')
call assert_fails('set enc=xxx')
call assert_fails('set encoding=')
call assert_fails('set enc=')
endif
set encoding&
set enc&
set endofline
set eol
set noendofline
set noeol
set endofline&
set eol&
set equalalways
set ea
set noequalalways
set noea
set equalalways&
set ea&
set equalprg=
set ep=
set equalprg=xxx
set ep=xxx
if exists('+equalprg')
endif
set equalprg&
set ep&
set errorbells
set eb
set noerrorbells
set noeb
set errorbells&
set eb&
set errorfile=
set ef=
set errorfile=xxx
set ef=xxx
if exists('+errorfile')
endif
set errorfile&
set ef&
set errorformat=
set efm=
set errorformat=xxx
set efm=xxx
if exists('+errorformat')
endif
set errorformat&
set efm&
set esckeys
set ek
set noesckeys
set noek
set esckeys&
set ek&
set eventignore=
set ei=
set eventignore=WinEnter
set ei=WinEnter
set eventignore=WinLeave,winenter
set ei=WinLeave,winenter
if exists('+eventignore')
call assert_fails('set eventignore=xxx')
call assert_fails('set ei=xxx')
endif
set eventignore&
set ei&
set expandtab
set et
set noexpandtab
set noet
set expandtab&
set et&
set exrc
set ex
set noexrc
set noex
set exrc&
set ex&
set fileencoding=
set fenc=
set fileencoding=latin1
set fenc=latin1
set fileencoding=xxx
set fenc=xxx
if exists('+fileencoding')
endif
set fileencoding&
set fenc&
set fileencodings=
set fencs=
set fileencodings=xxx
set fencs=xxx
if exists('+fileencodings')
endif
set fileencodings&
set fencs&
set fileformat=
set ff=
set fileformat=dos
set ff=dos
set fileformat=unix
set ff=unix
if exists('+fileformat')
call assert_fails('set fileformat=xxx')
call assert_fails('set ff=xxx')
endif
set fileformat&
set ff&
set fileformats=
set ffs=
set fileformats=dos
set ffs=dos
set fileformats=dos,unix
set ffs=dos,unix
if exists('+fileformats')
call assert_fails('set fileformats=xxx')
call assert_fails('set ffs=xxx')
endif
set fileformats&
set ffs&
set fileignorecase
set fic
set nofileignorecase
set nofic
set fileignorecase&
set fic&
set filetype=
set ft=
set filetype=xxx
set ft=xxx
if exists('+filetype')
endif
set filetype&
set ft&
set fillchars=
set fcs=
set fillchars=vert:x
set fcs=vert:x
if exists('+fillchars')
call assert_fails('set fillchars=xxx')
call assert_fails('set fcs=xxx')
endif
set fillchars&
set fcs&
set fixendofline
set fixeol
set nofixendofline
set nofixeol
set fixendofline&
set fixeol&
set fkmap
set fk
set nofkmap
set nofk
set fkmap&
set fk&
set flash
set fl
set noflash
set nofl
set flash&
set fl&
set foldclose=
set fcl=
set foldclose=all
set fcl=all
if exists('+foldclose')
call assert_fails('set foldclose=xxx')
call assert_fails('set fcl=xxx')
endif
set foldclose&
set fcl&
set foldcolumn=0
set fdc=0
set foldcolumn=1
set fdc=1
set foldcolumn=4
set fdc=4
set foldcolumn=12
set fdc=12
if exists('+foldcolumn')
call assert_fails('set foldcolumn=-1')
call assert_fails('set fdc=-1')
call assert_fails('set foldcolumn=13')
call assert_fails('set fdc=13')
call assert_fails('set foldcolumn=999')
call assert_fails('set fdc=999')
endif
set foldcolumn&
set fdc&
set foldenable
set fen
set nofoldenable
set nofen
set foldenable&
set fen&
set foldexpr=
set fde=
set foldexpr=xxx
set fde=xxx
if exists('+foldexpr')
endif
set foldexpr&
set fde&
set foldignore=
set fdi=
set foldignore=xxx
set fdi=xxx
if exists('+foldignore')
endif
set foldignore&
set fdi&
set foldlevel=-1
set fdl=-1
set foldlevel=0
set fdl=0
set foldlevel=100
set fdl=100
if exists('+foldlevel')
call assert_fails('set foldlevel=')
call assert_fails('set fdl=')
endif
set foldlevel&
set fdl&
set foldlevelstart=-1
set fdls=-1
set foldlevelstart=0
set fdls=0
set foldlevelstart=100
set fdls=100
if exists('+foldlevelstart')
call assert_fails('set foldlevelstart=')
call assert_fails('set fdls=')
endif
set foldlevelstart&
set fdls&
set foldmarker=((,))
set fmr=((,))
if exists('+foldmarker')
call assert_fails('set foldmarker=')
call assert_fails('set fmr=')
call assert_fails('set foldmarker=xxx')
call assert_fails('set fmr=xxx')
endif
set foldmarker&
set fmr&
set foldmethod=manual
set fdm=manual
set foldmethod=indent
set fdm=indent
if exists('+foldmethod')
call assert_fails('set foldmethod=')
call assert_fails('set fdm=')
call assert_fails('set foldmethod=xxx')
call assert_fails('set fdm=xxx')
call assert_fails('set foldmethod=expr,diff')
call assert_fails('set fdm=expr,diff')
endif
set foldmethod&
set fdm&
set foldminlines=-1
set fml=-1
set foldminlines=0
set fml=0
set foldminlines=100
set fml=100
if exists('+foldminlines')
call assert_fails('set foldminlines=')
call assert_fails('set fml=')
endif
set foldminlines&
set fml&
set foldnestmax=-1
set fdn=-1
set foldnestmax=0
set fdn=0
set foldnestmax=100
set fdn=100
if exists('+foldnestmax')
call assert_fails('set foldnestmax=')
call assert_fails('set fdn=')
endif
set foldnestmax&
set fdn&
set foldopen=
set fdo=
set foldopen=all
set fdo=all
set foldopen=hor,jump
set fdo=hor,jump
if exists('+foldopen')
call assert_fails('set foldopen=xxx')
call assert_fails('set fdo=xxx')
endif
set foldopen&
set fdo&
set foldtext=
set fdt=
set foldtext=xxx
set fdt=xxx
if exists('+foldtext')
endif
set foldtext&
set fdt&
set formatexpr=
set fex=
set formatexpr=xxx
set fex=xxx
if exists('+formatexpr')
endif
set formatexpr&
set fex&
set formatoptions=
set fo=
set formatoptions=vt
set fo=vt
set formatoptions=v,t
set fo=v,t
if exists('+formatoptions')
call assert_fails('set formatoptions=xxx')
call assert_fails('set fo=xxx')
endif
set formatoptions&
set fo&
set formatlistpat=
set flp=
set formatlistpat=xxx
set flp=xxx
if exists('+formatlistpat')
endif
set formatlistpat&
set flp&
set formatprg=
set fp=
set formatprg=xxx
set fp=xxx
if exists('+formatprg')
endif
set formatprg&
set fp&
set fsync
set fs
set nofsync
set nofs
set fsync&
set fs&
set gdefault
set gd
set nogdefault
set nogd
set gdefault&
set gd&
set graphic
set gr
set nographic
set nogr
set graphic&
set gr&
set grepformat=
set gfm=
set grepformat=xxx
set gfm=xxx
if exists('+grepformat')
endif
set grepformat&
set gfm&
set grepprg=
set gp=
set grepprg=xxx
set gp=xxx
if exists('+grepprg')
endif
set grepprg&
set gp&
set guicursor=
set gcr=
set guicursor=n:block-Cursor
set gcr=n:block-Cursor
if exists('+guicursor')
call assert_fails('set guicursor=xxx')
call assert_fails('set gcr=xxx')
endif
set guicursor&
set gcr&
set guifont=
set gfn=
set guifont=fixed
set gfn=fixed
if exists('+guifont')
endif
set guifont&
set gfn&
set guifontset=
set gfs=
set guifontset=fixed
set gfs=fixed
if exists('+guifontset')
endif
set guifontset&
set gfs&
set guifontwide=
set gfw=
set guifontwide=fixed
set gfw=fixed
if exists('+guifontwide')
endif
set guifontwide&
set gfw&
set guiheadroom=-1
set ghr=-1
set guiheadroom=0
set ghr=0
set guiheadroom=100
set ghr=100
if exists('+guiheadroom')
call assert_fails('set guiheadroom=')
call assert_fails('set ghr=')
endif
set guiheadroom&
set ghr&
set guioptions=
set go=
set guioptions=xxx
set go=xxx
if exists('+guioptions')
endif
set guioptions&
set go&
set guipty
set guipty
set noguipty
set noguipty
set guipty&
set guipty&
set guitablabel=
set gtl=
set guitablabel=xxx
set gtl=xxx
if exists('+guitablabel')
endif
set guitablabel&
set gtl&
set guitabtooltip=
set gtt=
set guitabtooltip=xxx
set gtt=xxx
if exists('+guitabtooltip')
endif
set guitabtooltip&
set gtt&
set hardtabs=-1
set ht=-1
set hardtabs=0
set ht=0
set hardtabs=100
set ht=100
if exists('+hardtabs')
call assert_fails('set hardtabs=')
call assert_fails('set ht=')
endif
set hardtabs&
set ht&
set helpfile=
set hf=
set helpfile=xxx
set hf=xxx
if exists('+helpfile')
endif
set helpfile&
set hf&
set helpheight=0
set hh=0
set helpheight=10
set hh=10
set helpheight=100
set hh=100
if exists('+helpheight')
call assert_fails('set helpheight=-1')
call assert_fails('set hh=-1')
endif
set helpheight&
set hh&
set helplang=
set hlg=
set helplang=de
set hlg=de
set helplang=de,it
set hlg=de,it
if exists('+helplang')
call assert_fails('set helplang=xxx')
call assert_fails('set hlg=xxx')
endif
set helplang&
set hlg&
set hidden
set hid
set nohidden
set nohid
set hidden&
set hid&
set highlight=
set hl=
set highlight=e:Error
set hl=e:Error
if exists('+highlight')
call assert_fails('set highlight=xxx')
call assert_fails('set hl=xxx')
endif
set highlight&
set hl&
set history=0
set hi=0
set history=1
set hi=1
set history=100
set hi=100
if exists('+history')
call assert_fails('set history=-1')
call assert_fails('set hi=-1')
call assert_fails('set history=10001')
call assert_fails('set hi=10001')
endif
set history&
set hi&
set hkmap
set hk
set nohkmap
set nohk
set hkmap&
set hk&
set hkmapp
set hkp
set nohkmapp
set nohkp
set hkmapp&
set hkp&
set hlsearch
set hls
set nohlsearch
set nohls
set hlsearch&
set hls&
set icon
set icon
set noicon
set noicon
set icon&
set icon&
set iconstring=
set iconstring=
set iconstring=xxx
set iconstring=xxx
if exists('+iconstring')
endif
set iconstring&
set iconstring&
set ignorecase
set ic
set noignorecase
set noic
set ignorecase&
set ic&
set imactivatefunc=
set imaf=
set imactivatefunc=xxx
set imaf=xxx
if exists('+imactivatefunc')
endif
set imactivatefunc&
set imaf&
set imactivatekey=
set imak=
set imactivatekey=S-space
set imak=S-space
if exists('+imactivatekey')
call assert_fails('set imactivatekey=xxx')
call assert_fails('set imak=xxx')
endif
set imactivatekey&
set imak&
set imcmdline
set imc
set noimcmdline
set noimc
set imcmdline&
set imc&
set imdisable
set imd
set noimdisable
set noimd
set imdisable&
set imd&
set iminsert=0
set imi=0
set iminsert=1
set imi=1
if exists('+iminsert')
call assert_fails('set iminsert=-1')
call assert_fails('set imi=-1')
call assert_fails('set iminsert=3')
call assert_fails('set imi=3')
call assert_fails('set iminsert=999')
call assert_fails('set imi=999')
endif
set iminsert&
set imi&
set imsearch=-1
set ims=-1
set imsearch=0
set ims=0
set imsearch=1
set ims=1
if exists('+imsearch')
call assert_fails('set imsearch=-2')
call assert_fails('set ims=-2')
call assert_fails('set imsearch=3')
call assert_fails('set ims=3')
call assert_fails('set imsearch=999')
call assert_fails('set ims=999')
endif
set imsearch&
set ims&
set imstatusfunc=
set imsf=
set imstatusfunc=xxx
set imsf=xxx
if exists('+imstatusfunc')
endif
set imstatusfunc&
set imsf&
set imstyle=0
set imst=0
set imstyle=1
set imst=1
if exists('+imstyle')
call assert_fails('set imstyle=-1')
call assert_fails('set imst=-1')
call assert_fails('set imstyle=2')
call assert_fails('set imst=2')
call assert_fails('set imstyle=999')
call assert_fails('set imst=999')
endif
set imstyle&
set imst&
set include=
set inc=
set include=xxx
set inc=xxx
if exists('+include')
endif
set include&
set inc&
set includeexpr=
set inex=
set includeexpr=xxx
set inex=xxx
if exists('+includeexpr')
endif
set includeexpr&
set inex&
set incsearch
set is
set noincsearch
set nois
set incsearch&
set is&
set indentexpr=
set inde=
set indentexpr=xxx
set inde=xxx
if exists('+indentexpr')
endif
set indentexpr&
set inde&
set indentkeys=
set indk=
set indentkeys=xxx
set indk=xxx
if exists('+indentkeys')
endif
set indentkeys&
set indk&
set infercase
set inf
set noinfercase
set noinf
set infercase&
set inf&
set insertmode
set im
set noinsertmode
set noim
set insertmode&
set im&
set isfname=
set isf=
set isfname=@
set isf=@
set isfname=@,48-52
set isf=@,48-52
if exists('+isfname')
call assert_fails('set isfname=xxx')
call assert_fails('set isf=xxx')
call assert_fails('set isfname=@48')
call assert_fails('set isf=@48')
endif
set isfname&
set isf&
set isident=
set isi=
set isident=@
set isi=@
set isident=@,48-52
set isi=@,48-52
if exists('+isident')
call assert_fails('set isident=xxx')
call assert_fails('set isi=xxx')
call assert_fails('set isident=@48')
call assert_fails('set isi=@48')
endif
set isident&
set isi&
set iskeyword=
set isk=
set iskeyword=@
set isk=@
set iskeyword=@,48-52
set isk=@,48-52
if exists('+iskeyword')
call assert_fails('set iskeyword=xxx')
call assert_fails('set isk=xxx')
call assert_fails('set iskeyword=@48')
call assert_fails('set isk=@48')
endif
set iskeyword&
set isk&
set isprint=
set isp=
set isprint=@
set isp=@
set isprint=@,48-52
set isp=@,48-52
if exists('+isprint')
call assert_fails('set isprint=xxx')
call assert_fails('set isp=xxx')
call assert_fails('set isprint=@48')
call assert_fails('set isp=@48')
endif
set isprint&
set isp&
set joinspaces
set js
set nojoinspaces
set nojs
set joinspaces&
set js&
set key=
set key=
set key=xxx
set key=xxx
if exists('+key')
endif
set key&
set key&
set keymap=
set kmp=
set keymap=accents
set kmp=accents
if exists('+keymap')
call assert_fails('set keymap=xxx')
call assert_fails('set kmp=xxx')
endif
set keymap&
set kmp&
set keymodel=
set km=
set keymodel=startsel
set km=startsel
set keymodel=startsel,stopsel
set km=startsel,stopsel
if exists('+keymodel')
call assert_fails('set keymodel=xxx')
call assert_fails('set km=xxx')
endif
set keymodel&
set km&
set keywordprg=
set kp=
set keywordprg=xxx
set kp=xxx
if exists('+keywordprg')
endif
set keywordprg&
set kp&
set langmap=
set lmap=
set langmap=xX
set lmap=xX
set langmap=aA,bB
set lmap=aA,bB
if exists('+langmap')
call assert_fails('set langmap=xxx')
call assert_fails('set lmap=xxx')
endif
set langmap&
set lmap&
set langmenu=
set lm=
set langmenu=xxx
set lm=xxx
if exists('+langmenu')
endif
set langmenu&
set lm&
set langnoremap
set lnr
set nolangnoremap
set nolnr
set langnoremap&
set lnr&
set langremap
set lrm
set nolangremap
set nolrm
set langremap&
set lrm&
set laststatus=-1
set ls=-1
set laststatus=0
set ls=0
set laststatus=100
set ls=100
if exists('+laststatus')
call assert_fails('set laststatus=')
call assert_fails('set ls=')
endif
set laststatus&
set ls&
set lazyredraw
set lz
set nolazyredraw
set nolz
set lazyredraw&
set lz&
set linebreak
set lbr
set nolinebreak
set nolbr
set linebreak&
set lbr&
set lines=2
set lines=2
set lines=24
set lines=24
if exists('+lines')
call assert_fails('set lines=-1')
call assert_fails('set lines=-1')
call assert_fails('set lines=0')
call assert_fails('set lines=0')
call assert_fails('set lines=1')
call assert_fails('set lines=1')
endif
set lines&
set lines&
let &lines = save_lines
set linespace=0
set lsp=0
set linespace=2
set lsp=2
set linespace=4
set lsp=4
if exists('+linespace')
call assert_fails('set linespace=')
call assert_fails('set lsp=')
endif
set linespace&
set lsp&
set lisp
set lisp
set nolisp
set nolisp
set lisp&
set lisp&
set lispwords=
set lw=
set lispwords=xxx
set lw=xxx
if exists('+lispwords')
endif
set lispwords&
set lw&
set list
set list
set nolist
set nolist
set list&
set list&
set listchars=
set lcs=
set listchars=eol:x
set lcs=eol:x
set listchars=eol:x,space:y
set lcs=eol:x,space:y
if exists('+listchars')
call assert_fails('set listchars=xxx')
call assert_fails('set lcs=xxx')
endif
set listchars&
set lcs&
set loadplugins
set lpl
set noloadplugins
set nolpl
set loadplugins&
set lpl&
set macatsui
set macatsui
set nomacatsui
set nomacatsui
set macatsui&
set macatsui&
set magic
set magic
set nomagic
set nomagic
set magic&
set magic&
set makeef=
set mef=
set makeef=xxx
set mef=xxx
if exists('+makeef')
endif
set makeef&
set mef&
set makeencoding=
set menc=
set makeencoding=xxx
set menc=xxx
if exists('+makeencoding')
endif
set makeencoding&
set menc&
set makeprg=
set mp=
set makeprg=xxx
set mp=xxx
if exists('+makeprg')
endif
set makeprg&
set mp&
set matchpairs=
set mps=
set matchpairs=(:)
set mps=(:)
set matchpairs=(:),<:>
set mps=(:),<:>
if exists('+matchpairs')
call assert_fails('set matchpairs=xxx')
call assert_fails('set mps=xxx')
endif
set matchpairs&
set mps&
set matchtime=-1
set mat=-1
set matchtime=0
set mat=0
set matchtime=100
set mat=100
if exists('+matchtime')
call assert_fails('set matchtime=')
call assert_fails('set mat=')
endif
set matchtime&
set mat&
set maxcombine=-1
set mco=-1
set maxcombine=0
set mco=0
set maxcombine=100
set mco=100
if exists('+maxcombine')
call assert_fails('set maxcombine=')
call assert_fails('set mco=')
endif
set maxcombine&
set mco&
set maxfuncdepth=-1
set mfd=-1
set maxfuncdepth=0
set mfd=0
set maxfuncdepth=100
set mfd=100
if exists('+maxfuncdepth')
call assert_fails('set maxfuncdepth=')
call assert_fails('set mfd=')
endif
set maxfuncdepth&
set mfd&
set maxmapdepth=-1
set mmd=-1
set maxmapdepth=0
set mmd=0
set maxmapdepth=100
set mmd=100
if exists('+maxmapdepth')
call assert_fails('set maxmapdepth=')
call assert_fails('set mmd=')
endif
set maxmapdepth&
set mmd&
set maxmem=-1
set mm=-1
set maxmem=0
set mm=0
set maxmem=100
set mm=100
if exists('+maxmem')
call assert_fails('set maxmem=')
call assert_fails('set mm=')
endif
set maxmem&
set mm&
set maxmempattern=-1
set mmp=-1
set maxmempattern=0
set mmp=0
set maxmempattern=100
set mmp=100
if exists('+maxmempattern')
call assert_fails('set maxmempattern=')
call assert_fails('set mmp=')
endif
set maxmempattern&
set mmp&
set maxmemtot=-1
set mmt=-1
set maxmemtot=0
set mmt=0
set maxmemtot=100
set mmt=100
if exists('+maxmemtot')
call assert_fails('set maxmemtot=')
call assert_fails('set mmt=')
endif
set maxmemtot&
set mmt&
set menuitems=-1
set mis=-1
set menuitems=0
set mis=0
set menuitems=100
set mis=100
if exists('+menuitems')
call assert_fails('set menuitems=')
call assert_fails('set mis=')
endif
set menuitems&
set mis&
set mesg
set mesg
set nomesg
set nomesg
set mesg&
set mesg&
set mkspellmem=10000,100,12
set msm=10000,100,12
if exists('+mkspellmem')
call assert_fails('set mkspellmem=')
call assert_fails('set msm=')
call assert_fails('set mkspellmem=xxx')
call assert_fails('set msm=xxx')
endif
set mkspellmem&
set msm&
set modeline
set ml
set nomodeline
set noml
set modeline&
set ml&
set modelines=-1
set mls=-1
set modelines=0
set mls=0
set modelines=100
set mls=100
if exists('+modelines')
call assert_fails('set modelines=')
call assert_fails('set mls=')
endif
set modelines&
set mls&
set modifiable
set ma
set nomodifiable
set noma
set modifiable&
set ma&
set modified
set mod
set nomodified
set nomod
set modified&
set mod&
set more
set more
set nomore
set nomore
set more&
set more&
set nomore
set mouse=
set mouse=
set mouse=a
set mouse=a
set mouse=nvi
set mouse=nvi
if exists('+mouse')
call assert_fails('set mouse=xxx')
call assert_fails('set mouse=xxx')
call assert_fails('set mouse=n,v,i')
call assert_fails('set mouse=n,v,i')
endif
set mouse&
set mouse&
set mousefocus
set mousef
set nomousefocus
set nomousef
set mousefocus&
set mousef&
set mousehide
set mh
set nomousehide
set nomh
set mousehide&
set mh&
set mousemodel=
set mousem=
set mousemodel=popup
set mousem=popup
if exists('+mousemodel')
call assert_fails('set mousemodel=xxx')
call assert_fails('set mousem=xxx')
endif
set mousemodel&
set mousem&
set mouseshape=
set mouses=
set mouseshape=n:arrow
set mouses=n:arrow
if exists('+mouseshape')
call assert_fails('set mouseshape=xxx')
call assert_fails('set mouses=xxx')
endif
set mouseshape&
set mouses&
set mousetime=-1
set mouset=-1
set mousetime=0
set mouset=0
set mousetime=100
set mouset=100
if exists('+mousetime')
call assert_fails('set mousetime=')
call assert_fails('set mouset=')
endif
set mousetime&
set mouset&
set mzschemedll=
set mzschemedll=
set mzschemedll=xxx
set mzschemedll=xxx
if exists('+mzschemedll')
endif
set mzschemedll&
set mzschemedll&
set mzschemegcdll=
set mzschemegcdll=
set mzschemegcdll=xxx
set mzschemegcdll=xxx
if exists('+mzschemegcdll')
endif
set mzschemegcdll&
set mzschemegcdll&
set mzquantum=-1
set mzq=-1
set mzquantum=0
set mzq=0
set mzquantum=100
set mzq=100
if exists('+mzquantum')
call assert_fails('set mzquantum=')
call assert_fails('set mzq=')
endif
set mzquantum&
set mzq&
set novice
set novice
set nonovice
set nonovice
set novice&
set novice&
set nrformats=
set nf=
set nrformats=alpha
set nf=alpha
set nrformats=alpha,hex,bin
set nf=alpha,hex,bin
if exists('+nrformats')
call assert_fails('set nrformats=xxx')
call assert_fails('set nf=xxx')
endif
set nrformats&
set nf&
set number
set nu
set nonumber
set nonu
set number&
set nu&
set numberwidth=1
set nuw=1
set numberwidth=4
set nuw=4
set numberwidth=8
set nuw=8
set numberwidth=10
set nuw=10
if exists('+numberwidth')
call assert_fails('set numberwidth=-1')
call assert_fails('set nuw=-1')
call assert_fails('set numberwidth=0')
call assert_fails('set nuw=0')
call assert_fails('set numberwidth=11')
call assert_fails('set nuw=11')
endif
set numberwidth&
set nuw&
set omnifunc=
set ofu=
set omnifunc=xxx
set ofu=xxx
if exists('+omnifunc')
endif
set omnifunc&
set ofu&
set open
set open
set noopen
set noopen
set open&
set open&
set opendevice
set odev
set noopendevice
set noodev
set opendevice&
set odev&
set operatorfunc=
set opfunc=
set operatorfunc=xxx
set opfunc=xxx
if exists('+operatorfunc')
endif
set operatorfunc&
set opfunc&
set optimize
set opt
set nooptimize
set noopt
set optimize&
set opt&
set osfiletype=
set oft=
set osfiletype=xxx
set oft=xxx
if exists('+osfiletype')
endif
set osfiletype&
set oft&
set packpath=
set pp=
set packpath=xxx
set pp=xxx
if exists('+packpath')
endif
set packpath&
set pp&
set paragraphs=
set para=
set paragraphs=xxx
set para=xxx
if exists('+paragraphs')
endif
set paragraphs&
set para&
set paste
set paste
set nopaste
set nopaste
set paste&
set paste&
set pastetoggle=
set pt=
set pastetoggle=xxx
set pt=xxx
if exists('+pastetoggle')
endif
set pastetoggle&
set pt&
set patchexpr=
set pex=
set patchexpr=xxx
set pex=xxx
if exists('+patchexpr')
endif
set patchexpr&
set pex&
set patchmode=
set pm=
set patchmode=xxx
set pm=xxx
if exists('+patchmode')
endif
set patchmode&
set pm&
set path=
set pa=
set path=xxx
set pa=xxx
if exists('+path')
endif
set path&
set pa&
set preserveindent
set pi
set nopreserveindent
set nopi
set preserveindent&
set pi&
set previewheight=-1
set pvh=-1
set previewheight=0
set pvh=0
set previewheight=100
set pvh=100
if exists('+previewheight')
call assert_fails('set previewheight=')
call assert_fails('set pvh=')
endif
set previewheight&
set pvh&
set previewwindow
set pvw
set nopreviewwindow
set nopvw
set previewwindow&
set pvw&
set printdevice=
set pdev=
set printdevice=xxx
set pdev=xxx
if exists('+printdevice')
endif
set printdevice&
set pdev&
set printencoding=
set penc=
set printencoding=xxx
set penc=xxx
if exists('+printencoding')
endif
set printencoding&
set penc&
set printexpr=
set pexpr=
set printexpr=xxx
set pexpr=xxx
if exists('+printexpr')
endif
set printexpr&
set pexpr&
set printfont=
set pfn=
set printfont=xxx
set pfn=xxx
if exists('+printfont')
endif
set printfont&
set pfn&
set printheader=
set pheader=
set printheader=xxx
set pheader=xxx
if exists('+printheader')
endif
set printheader&
set pheader&
set printmbcharset=
set pmbcs=
set printmbcharset=xxx
set pmbcs=xxx
if exists('+printmbcharset')
endif
set printmbcharset&
set pmbcs&
set printmbfont=
set pmbfn=
set printmbfont=r:some
set pmbfn=r:some
set printmbfont=b:Bold,c:yes
set pmbfn=b:Bold,c:yes
if exists('+printmbfont')
call assert_fails('set printmbfont=xxx')
call assert_fails('set pmbfn=xxx')
endif
set printmbfont&
set pmbfn&
set printoptions=
set popt=
set printoptions=header:0
set popt=header:0
set printoptions=left:10pc,top:5pc
set popt=left:10pc,top:5pc
if exists('+printoptions')
call assert_fails('set printoptions=xxx')
call assert_fails('set popt=xxx')
endif
set printoptions&
set popt&
set prompt
set prompt
set noprompt
set noprompt
set prompt&
set prompt&
set pumheight=-1
set ph=-1
set pumheight=0
set ph=0
set pumheight=100
set ph=100
if exists('+pumheight')
call assert_fails('set pumheight=')
call assert_fails('set ph=')
endif
set pumheight&
set ph&
set pumwidth=-1
set pw=-1
set pumwidth=0
set pw=0
set pumwidth=100
set pw=100
if exists('+pumwidth')
call assert_fails('set pumwidth=')
call assert_fails('set pw=')
endif
set pumwidth&
set pw&
set pythonthreehome=
set pythonthreehome=
set pythonthreehome=xxx
set pythonthreehome=xxx
if exists('+pythonthreehome')
endif
set pythonthreehome&
set pythonthreehome&
set pythonhome=
set pythonhome=
set pythonhome=xxx
set pythonhome=xxx
if exists('+pythonhome')
endif
set pythonhome&
set pythonhome&
set quoteescape=
set qe=
set quoteescape=xxx
set qe=xxx
if exists('+quoteescape')
endif
set quoteescape&
set qe&
set readonly
set ro
set noreadonly
set noro
set readonly&
set ro&
set redraw
set redraw
set noredraw
set noredraw
set redraw&
set redraw&
set redrawtime=-1
set rdt=-1
set redrawtime=0
set rdt=0
set redrawtime=100
set rdt=100
if exists('+redrawtime')
call assert_fails('set redrawtime=')
call assert_fails('set rdt=')
endif
set redrawtime&
set rdt&
set regexpengine=0
set re=0
set regexpengine=1
set re=1
set regexpengine=2
set re=2
if exists('+regexpengine')
call assert_fails('set regexpengine=-1')
call assert_fails('set re=-1')
call assert_fails('set regexpengine=3')
call assert_fails('set re=3')
call assert_fails('set regexpengine=999')
call assert_fails('set re=999')
endif
set regexpengine&
set re&
set relativenumber
set rnu
set norelativenumber
set nornu
set relativenumber&
set rnu&
set remap
set remap
set noremap
set noremap
set remap&
set remap&
set renderoptions=
set rop=
set renderoptions=type:directx
set rop=type:directx
if exists('+renderoptions')
call assert_fails('set renderoptions=xxx')
call assert_fails('set rop=xxx')
endif
set renderoptions&
set rop&
set report=0
set report=0
set report=1
set report=1
set report=2
set report=2
set report=9999
set report=9999
if exists('+report')
call assert_fails('set report=-1')
call assert_fails('set report=-1')
endif
set report&
set report&
set restorescreen
set rs
set norestorescreen
set nors
set restorescreen&
set rs&
set revins
set ri
set norevins
set nori
set revins&
set ri&
set rightleft
set rl
set norightleft
set norl
set rightleft&
set rl&
set rightleftcmd=
set rlc=
set rightleftcmd=xxx
set rlc=xxx
if exists('+rightleftcmd')
endif
set rightleftcmd&
set rlc&
set ruler
set ru
set noruler
set noru
set ruler&
set ru&
set rulerformat=
set ruf=
set rulerformat=xxx
set ruf=xxx
if exists('+rulerformat')
endif
set rulerformat&
set ruf&
set runtimepath=
set rtp=
set runtimepath=xxx
set rtp=xxx
if exists('+runtimepath')
endif
set runtimepath&
set rtp&
set scroll=0
set scr=0
set scroll=1
set scr=1
set scroll=2
set scr=2
set scroll=20
set scr=20
if exists('+scroll')
call assert_fails('set scroll=-1')
call assert_fails('set scr=-1')
endif
set scroll&
set scr&
set scrollbind
set scb
set noscrollbind
set noscb
set scrollbind&
set scb&
set scrolljump=-50
set sj=-50
set scrolljump=-1
set sj=-1
set scrolljump=0
set sj=0
set scrolljump=1
set sj=1
set scrolljump=2
set sj=2
set scrolljump=20
set sj=20
if exists('+scrolljump')
call assert_fails('set scrolljump=999')
call assert_fails('set sj=999')
endif
set scrolljump&
set sj&
set scrolloff=0
set so=0
set scrolloff=1
set so=1
set scrolloff=2
set so=2
set scrolloff=20
set so=20
if exists('+scrolloff')
call assert_fails('set scrolloff=-1')
call assert_fails('set so=-1')
endif
set scrolloff&
set so&
set scrollopt=
set sbo=
set scrollopt=ver
set sbo=ver
set scrollopt=ver,hor
set sbo=ver,hor
if exists('+scrollopt')
call assert_fails('set scrollopt=xxx')
call assert_fails('set sbo=xxx')
endif
set scrollopt&
set sbo&
set sections=
set sect=
set sections=xxx
set sect=xxx
if exists('+sections')
endif
set sections&
set sect&
set secure
set secure
set nosecure
set nosecure
set secure&
set secure&
set selection=old
set sel=old
set selection=inclusive
set sel=inclusive
if exists('+selection')
call assert_fails('set selection=')
call assert_fails('set sel=')
call assert_fails('set selection=xxx')
call assert_fails('set sel=xxx')
endif
set selection&
set sel&
set selectmode=
set slm=
set selectmode=mouse
set slm=mouse
set selectmode=key,cmd
set slm=key,cmd
if exists('+selectmode')
call assert_fails('set selectmode=xxx')
call assert_fails('set slm=xxx')
endif
set selectmode&
set slm&
set sessionoptions=
set ssop=
set sessionoptions=blank
set ssop=blank
set sessionoptions=help,options,slash
set ssop=help,options,slash
if exists('+sessionoptions')
call assert_fails('set sessionoptions=xxx')
call assert_fails('set ssop=xxx')
endif
set sessionoptions&
set ssop&
set shell=
set sh=
set shell=xxx
set sh=xxx
if exists('+shell')
endif
set shell&
set sh&
set shellcmdflag=
set shcf=
set shellcmdflag=xxx
set shcf=xxx
if exists('+shellcmdflag')
endif
set shellcmdflag&
set shcf&
set shellpipe=
set sp=
set shellpipe=xxx
set sp=xxx
if exists('+shellpipe')
endif
set shellpipe&
set sp&
set shellquote=
set shq=
set shellquote=xxx
set shq=xxx
if exists('+shellquote')
endif
set shellquote&
set shq&
set shellredir=
set srr=
set shellredir=xxx
set srr=xxx
if exists('+shellredir')
endif
set shellredir&
set srr&
set shellslash
set ssl
set noshellslash
set nossl
set shellslash&
set ssl&
set shelltemp
set stmp
set noshelltemp
set nostmp
set shelltemp&
set stmp&
set shelltype=-1
set st=-1
set shelltype=0
set st=0
set shelltype=100
set st=100
if exists('+shelltype')
call assert_fails('set shelltype=')
call assert_fails('set st=')
endif
set shelltype&
set st&
set shellxquote=
set sxq=
set shellxquote=xxx
set sxq=xxx
if exists('+shellxquote')
endif
set shellxquote&
set sxq&
set shellxescape=
set sxe=
set shellxescape=xxx
set sxe=xxx
if exists('+shellxescape')
endif
set shellxescape&
set sxe&
set shiftround
set sr
set noshiftround
set nosr
set shiftround&
set sr&
set shiftwidth=0
set sw=0
set shiftwidth=1
set sw=1
set shiftwidth=8
set sw=8
set shiftwidth=999
set sw=999
if exists('+shiftwidth')
call assert_fails('set shiftwidth=-1')
call assert_fails('set sw=-1')
endif
set shiftwidth&
set sw&
set shortmess=
set shm=
set shortmess=xxx
set shm=xxx
if exists('+shortmess')
endif
set shortmess&
set shm&
set shortname
set sn
set noshortname
set nosn
set shortname&
set sn&
set showbreak=
set sbr=
set showbreak=xxx
set sbr=xxx
if exists('+showbreak')
endif
set showbreak&
set sbr&
set showcmd
set sc
set noshowcmd
set nosc
set showcmd&
set sc&
set showfulltag
set sft
set noshowfulltag
set nosft
set showfulltag&
set sft&
set showmatch
set sm
set noshowmatch
set nosm
set showmatch&
set sm&
set showmode
set smd
set noshowmode
set nosmd
set showmode&
set smd&
set showtabline=-1
set stal=-1
set showtabline=0
set stal=0
set showtabline=100
set stal=100
if exists('+showtabline')
call assert_fails('set showtabline=')
call assert_fails('set stal=')
endif
set showtabline&
set stal&
set sidescroll=0
set ss=0
set sidescroll=1
set ss=1
set sidescroll=8
set ss=8
set sidescroll=999
set ss=999
if exists('+sidescroll')
call assert_fails('set sidescroll=-1')
call assert_fails('set ss=-1')
endif
set sidescroll&
set ss&
set sidescrolloff=0
set siso=0
set sidescrolloff=1
set siso=1
set sidescrolloff=8
set siso=8
set sidescrolloff=999
set siso=999
if exists('+sidescrolloff')
call assert_fails('set sidescrolloff=-1')
call assert_fails('set siso=-1')
endif
set sidescrolloff&
set siso&
set signcolumn=
set scl=
set signcolumn=auto
set scl=auto
set signcolumn=no
set scl=no
if exists('+signcolumn')
call assert_fails('set signcolumn=xxx')
call assert_fails('set scl=xxx')
call assert_fails('set signcolumn=no,yes')
call assert_fails('set scl=no,yes')
endif
set signcolumn&
set scl&
set slowopen
set slow
set noslowopen
set noslow
set slowopen&
set slow&
set smartcase
set scs
set nosmartcase
set noscs
set smartcase&
set scs&
set smartindent
set si
set nosmartindent
set nosi
set smartindent&
set si&
set smarttab
set sta
set nosmarttab
set nosta
set smarttab&
set sta&
set softtabstop=-1
set sts=-1
set softtabstop=0
set sts=0
set softtabstop=100
set sts=100
if exists('+softtabstop')
call assert_fails('set softtabstop=')
call assert_fails('set sts=')
endif
set softtabstop&
set sts&
set sourceany
set sourceany
set nosourceany
set nosourceany
set sourceany&
set sourceany&
set spell
set spell
set nospell
set nospell
set spell&
set spell&
set spellcapcheck=
set spc=
set spellcapcheck=xxx
set spc=xxx
if exists('+spellcapcheck')
endif
set spellcapcheck&
set spc&
set spellfile=
set spf=
set spellfile=file.en.add
set spf=file.en.add
if exists('+spellfile')
call assert_fails('set spellfile=xxx')
call assert_fails('set spf=xxx')
call assert_fails('set spellfile=/tmp/file')
call assert_fails('set spf=/tmp/file')
endif
set spellfile&
set spf&
set spelllang=
set spl=
set spelllang=xxx
set spl=xxx
if exists('+spelllang')
endif
set spelllang&
set spl&
set spellsuggest=
set sps=
set spellsuggest=best
set sps=best
set spellsuggest=double,33
set sps=double,33
if exists('+spellsuggest')
call assert_fails('set spellsuggest=xxx')
call assert_fails('set sps=xxx')
endif
set spellsuggest&
set sps&
set splitbelow
set sb
set nosplitbelow
set nosb
set splitbelow&
set sb&
set splitright
set spr
set nosplitright
set nospr
set splitright&
set spr&
set startofline
set sol
set nostartofline
set nosol
set startofline&
set sol&
set statusline=
set stl=
set statusline=xxx
set stl=xxx
if exists('+statusline')
endif
set statusline&
set stl&
set suffixes=
set su=
set suffixes=xxx
set su=xxx
if exists('+suffixes')
endif
set suffixes&
set su&
set suffixesadd=
set sua=
set suffixesadd=xxx
set sua=xxx
if exists('+suffixesadd')
endif
set suffixesadd&
set sua&
set swapfile
set swf
set noswapfile
set noswf
set swapfile&
set swf&
set swapsync=
set sws=
set swapsync=xxx
set sws=xxx
if exists('+swapsync')
endif
set swapsync&
set sws&
set switchbuf=
set swb=
set switchbuf=useopen
set swb=useopen
set switchbuf=split,newtab
set swb=split,newtab
if exists('+switchbuf')
call assert_fails('set switchbuf=xxx')
call assert_fails('set swb=xxx')
endif
set switchbuf&
set swb&
set synmaxcol=-1
set smc=-1
set synmaxcol=0
set smc=0
set synmaxcol=100
set smc=100
if exists('+synmaxcol')
call assert_fails('set synmaxcol=')
call assert_fails('set smc=')
endif
set synmaxcol&
set smc&
set syntax=
set syn=
set syntax=xxx
set syn=xxx
if exists('+syntax')
endif
set syntax&
set syn&
set tabline=
set tal=
set tabline=xxx
set tal=xxx
if exists('+tabline')
endif
set tabline&
set tal&
set tabpagemax=-1
set tpm=-1
set tabpagemax=0
set tpm=0
set tabpagemax=100
set tpm=100
if exists('+tabpagemax')
call assert_fails('set tabpagemax=')
call assert_fails('set tpm=')
endif
set tabpagemax&
set tpm&
set tabstop=1
set ts=1
set tabstop=4
set ts=4
set tabstop=8
set ts=8
set tabstop=12
set ts=12
if exists('+tabstop')
call assert_fails('set tabstop=-1')
call assert_fails('set ts=-1')
call assert_fails('set tabstop=0')
call assert_fails('set ts=0')
endif
set tabstop&
set ts&
set tagbsearch
set tbs
set notagbsearch
set notbs
set tagbsearch&
set tbs&
set tagcase=smart
set tc=smart
set tagcase=match
set tc=match
if exists('+tagcase')
call assert_fails('set tagcase=')
call assert_fails('set tc=')
call assert_fails('set tagcase=xxx')
call assert_fails('set tc=xxx')
call assert_fails('set tagcase=smart,match')
call assert_fails('set tc=smart,match')
endif
set tagcase&
set tc&
set taglength=-1
set tl=-1
set taglength=0
set tl=0
set taglength=100
set tl=100
if exists('+taglength')
call assert_fails('set taglength=')
call assert_fails('set tl=')
endif
set taglength&
set tl&
set tagrelative
set tr
set notagrelative
set notr
set tagrelative&
set tr&
set tags=
set tag=
set tags=xxx
set tag=xxx
if exists('+tags')
endif
set tags&
set tag&
set tagstack
set tgst
set notagstack
set notgst
set tagstack&
set tgst&
set termbidi
set tbidi
set notermbidi
set notbidi
set termbidi&
set tbidi&
set termencoding=
set tenc=
set termencoding=utf-8
set tenc=utf-8
if exists('+termencoding')
call assert_fails('set termencoding=xxx')
call assert_fails('set tenc=xxx')
endif
set termencoding&
set tenc&
set termwinkey=
set twk=
set termwinkey=xxx
set twk=xxx
if exists('+termwinkey')
endif
set termwinkey&
set twk&
set termwinscroll=-1
set twsl=-1
set termwinscroll=0
set twsl=0
set termwinscroll=100
set twsl=100
if exists('+termwinscroll')
call assert_fails('set termwinscroll=')
call assert_fails('set twsl=')
endif
set termwinscroll&
set twsl&
set termwinsize=
set tws=
set termwinsize=24x80
set tws=24x80
set termwinsize=0x80
set tws=0x80
set termwinsize=32x0
set tws=32x0
set termwinsize=0x0
set tws=0x0
if exists('+termwinsize')
call assert_fails('set termwinsize=xxx')
call assert_fails('set tws=xxx')
call assert_fails('set termwinsize=80')
call assert_fails('set tws=80')
call assert_fails('set termwinsize=8ax9')
call assert_fails('set tws=8ax9')
call assert_fails('set termwinsize=24x80b')
call assert_fails('set tws=24x80b')
endif
set termwinsize&
set tws&
set terse
set terse
set noterse
set noterse
set terse&
set terse&
set textauto
set ta
set notextauto
set nota
set textauto&
set ta&
set textmode
set tx
set notextmode
set notx
set textmode&
set tx&
set textwidth=0
set tw=0
set textwidth=1
set tw=1
set textwidth=8
set tw=8
set textwidth=99
set tw=99
if exists('+textwidth')
call assert_fails('set textwidth=-1')
call assert_fails('set tw=-1')
endif
set textwidth&
set tw&
set thesaurus=
set tsr=
set thesaurus=xxx
set tsr=xxx
if exists('+thesaurus')
endif
set thesaurus&
set tsr&
set tildeop
set top
set notildeop
set notop
set tildeop&
set top&
set timeout
set to
set notimeout
set noto
set timeout&
set to&
set timeoutlen=0
set tm=0
set timeoutlen=8
set tm=8
set timeoutlen=99999
set tm=99999
if exists('+timeoutlen')
call assert_fails('set timeoutlen=-1')
call assert_fails('set tm=-1')
endif
set timeoutlen&
set tm&
set title
set title
set notitle
set notitle
set title&
set title&
set titlelen=0
set titlelen=0
set titlelen=1
set titlelen=1
set titlelen=8
set titlelen=8
set titlelen=9999
set titlelen=9999
if exists('+titlelen')
call assert_fails('set titlelen=-1')
call assert_fails('set titlelen=-1')
endif
set titlelen&
set titlelen&
set titleold=
set titleold=
set titleold=xxx
set titleold=xxx
if exists('+titleold')
endif
set titleold&
set titleold&
set titlestring=
set titlestring=
set titlestring=xxx
set titlestring=xxx
if exists('+titlestring')
endif
set titlestring&
set titlestring&
set toolbar=
set tb=
set toolbar=icons
set tb=icons
set toolbar=text
set tb=text
if exists('+toolbar')
call assert_fails('set toolbar=xxx')
call assert_fails('set tb=xxx')
endif
set toolbar&
set tb&
set toolbariconsize=
set tbis=
set toolbariconsize=tiny
set tbis=tiny
set toolbariconsize=huge
set tbis=huge
if exists('+toolbariconsize')
call assert_fails('set toolbariconsize=xxx')
call assert_fails('set tbis=xxx')
endif
set toolbariconsize&
set tbis&
set ttimeout
set ttimeout
set nottimeout
set nottimeout
set ttimeout&
set ttimeout&
set ttimeoutlen=-1
set ttm=-1
set ttimeoutlen=0
set ttm=0
set ttimeoutlen=100
set ttm=100
if exists('+ttimeoutlen')
call assert_fails('set ttimeoutlen=')
call assert_fails('set ttm=')
endif
set ttimeoutlen&
set ttm&
set ttybuiltin
set tbi
set nottybuiltin
set notbi
set ttybuiltin&
set tbi&
set ttyfast
set tf
set nottyfast
set notf
set ttyfast&
set tf&
set ttymouse=
set ttym=
set ttymouse=xterm
set ttym=xterm
if exists('+ttymouse')
call assert_fails('set ttymouse=xxx')
call assert_fails('set ttym=xxx')
endif
set ttymouse&
set ttym&
set ttyscroll=-1
set tsl=-1
set ttyscroll=0
set tsl=0
set ttyscroll=100
set tsl=100
if exists('+ttyscroll')
call assert_fails('set ttyscroll=')
call assert_fails('set tsl=')
endif
set ttyscroll&
set tsl&
set undodir=
set udir=
set undodir=xxx
set udir=xxx
if exists('+undodir')
endif
set undodir&
set udir&
set undofile
set udf
set noundofile
set noudf
set undofile&
set udf&
set undolevels=-1
set ul=-1
set undolevels=0
set ul=0
set undolevels=100
set ul=100
if exists('+undolevels')
call assert_fails('set undolevels=')
call assert_fails('set ul=')
endif
set undolevels&
set ul&
set undoreload=-1
set ur=-1
set undoreload=0
set ur=0
set undoreload=100
set ur=100
if exists('+undoreload')
call assert_fails('set undoreload=')
call assert_fails('set ur=')
endif
set undoreload&
set ur&
set updatecount=0
set uc=0
set updatecount=1
set uc=1
set updatecount=8
set uc=8
set updatecount=9999
set uc=9999
if exists('+updatecount')
call assert_fails('set updatecount=-1')
call assert_fails('set uc=-1')
endif
set updatecount&
set uc&
set updatetime=0
set ut=0
set updatetime=1
set ut=1
set updatetime=8
set ut=8
set updatetime=9999
set ut=9999
if exists('+updatetime')
call assert_fails('set updatetime=-1')
call assert_fails('set ut=-1')
endif
set updatetime&
set ut&
set verbose=-1
set vbs=-1
set verbose=0
set vbs=0
set verbose=1
set vbs=1
set verbose=8
set vbs=8
set verbose=9999
set vbs=9999
if exists('+verbose')
endif
set verbose&
set vbs&
set verbosefile=
set vfile=
set verbosefile=xxx
set vfile=xxx
if exists('+verbosefile')
endif
set verbosefile&
set vfile&
call delete("xxx")
set viewdir=
set vdir=
set viewdir=xxx
set vdir=xxx
if exists('+viewdir')
endif
set viewdir&
set vdir&
set viewoptions=
set vop=
set viewoptions=cursor
set vop=cursor
set viewoptions=unix,slash
set vop=unix,slash
if exists('+viewoptions')
call assert_fails('set viewoptions=xxx')
call assert_fails('set vop=xxx')
endif
set viewoptions&
set vop&
set viminfo=
set vi=
set viminfo='50
set vi='50
set viminfo="30
set vi="30
if exists('+viminfo')
call assert_fails('set viminfo=xxx')
call assert_fails('set vi=xxx')
endif
set viminfo&
set vi&
set viminfofile=
set vif=
set viminfofile=xxx
set vif=xxx
if exists('+viminfofile')
endif
set viminfofile&
set vif&
set virtualedit=
set ve=
set virtualedit=all
set ve=all
set virtualedit=all,block
set ve=all,block
if exists('+virtualedit')
call assert_fails('set virtualedit=xxx')
call assert_fails('set ve=xxx')
endif
set virtualedit&
set ve&
set visualbell
set vb
set novisualbell
set novb
set visualbell&
set vb&
set w300=-1
set w300=-1
set w300=0
set w300=0
set w300=100
set w300=100
if exists('+w300')
call assert_fails('set w300=')
call assert_fails('set w300=')
endif
set w300&
set w300&
set w1200=-1
set w1200=-1
set w1200=0
set w1200=0
set w1200=100
set w1200=100
if exists('+w1200')
call assert_fails('set w1200=')
call assert_fails('set w1200=')
endif
set w1200&
set w1200&
set w9600=-1
set w9600=-1
set w9600=0
set w9600=0
set w9600=100
set w9600=100
if exists('+w9600')
call assert_fails('set w9600=')
call assert_fails('set w9600=')
endif
set w9600&
set w9600&
set warn
set warn
set nowarn
set nowarn
set warn&
set warn&
set weirdinvert
set wiv
set noweirdinvert
set nowiv
set weirdinvert&
set wiv&
set whichwrap=
set ww=
set whichwrap=b,s
set ww=b,s
set whichwrap=bs
set ww=bs
if exists('+whichwrap')
call assert_fails('set whichwrap=xxx')
call assert_fails('set ww=xxx')
endif
set whichwrap&
set ww&
set wildchar=-1
set wc=-1
set wildchar=0
set wc=0
set wildchar=100
set wc=100
if exists('+wildchar')
call assert_fails('set wildchar=')
call assert_fails('set wc=')
endif
set wildchar&
set wc&
set wildcharm=-1
set wcm=-1
set wildcharm=0
set wcm=0
set wildcharm=100
set wcm=100
if exists('+wildcharm')
endif
set wildcharm&
set wcm&
set wildignore=
set wig=
set wildignore=xxx
set wig=xxx
if exists('+wildignore')
endif
set wildignore&
set wig&
set wildignorecase
set wic
set nowildignorecase
set nowic
set wildignorecase&
set wic&
set wildmenu
set wmnu
set nowildmenu
set nowmnu
set wildmenu&
set wmnu&
set wildmode=
set wim=
set wildmode=full
set wim=full
set wildmode=list:full
set wim=list:full
set wildmode=full,longest
set wim=full,longest
if exists('+wildmode')
call assert_fails('set wildmode=xxx')
call assert_fails('set wim=xxx')
endif
set wildmode&
set wim&
set wildoptions=
set wop=
set wildoptions=tagfile
set wop=tagfile
if exists('+wildoptions')
call assert_fails('set wildoptions=xxx')
call assert_fails('set wop=xxx')
endif
set wildoptions&
set wop&
set winaltkeys=menu
set wak=menu
set winaltkeys=no
set wak=no
if exists('+winaltkeys')
call assert_fails('set winaltkeys=')
call assert_fails('set wak=')
call assert_fails('set winaltkeys=xxx')
call assert_fails('set wak=xxx')
endif
set winaltkeys&
set wak&
set window=-1
set wi=-1
set window=0
set wi=0
set window=100
set wi=100
if exists('+window')
call assert_fails('set window=')
call assert_fails('set wi=')
endif
set window&
set wi&
set winheight=1
set wh=1
set winheight=10
set wh=10
set winheight=999
set wh=999
if exists('+winheight')
call assert_fails('set winheight=-1')
call assert_fails('set wh=-1')
call assert_fails('set winheight=0')
call assert_fails('set wh=0')
endif
set winheight&
set wh&
set winfixheight
set wfh
set nowinfixheight
set nowfh
set winfixheight&
set wfh&
set winfixwidth
set wfw
set nowinfixwidth
set nowfw
set winfixwidth&
set wfw&
set winminheight=0
set wmh=0
set winminheight=1
set wmh=1
if exists('+winminheight')
call assert_fails('set winminheight=-1')
call assert_fails('set wmh=-1')
endif
set winminheight&
set wmh&
set winminwidth=0
set wmw=0
set winminwidth=1
set wmw=1
set winminwidth=10
set wmw=10
if exists('+winminwidth')
call assert_fails('set winminwidth=-1')
call assert_fails('set wmw=-1')
endif
set winminwidth&
set wmw&
set winptydll=
set winptydll=
set winptydll=xxx
set winptydll=xxx
if exists('+winptydll')
endif
set winptydll&
set winptydll&
set winwidth=1
set wiw=1
set winwidth=10
set wiw=10
set winwidth=999
set wiw=999
if exists('+winwidth')
call assert_fails('set winwidth=-1')
call assert_fails('set wiw=-1')
call assert_fails('set winwidth=0')
call assert_fails('set wiw=0')
endif
set winwidth&
set wiw&
set wrap
set wrap
set nowrap
set nowrap
set wrap&
set wrap&
set wrapmargin=-1
set wm=-1
set wrapmargin=0
set wm=0
set wrapmargin=100
set wm=100
if exists('+wrapmargin')
call assert_fails('set wrapmargin=')
call assert_fails('set wm=')
endif
set wrapmargin&
set wm&
set wrapscan
set ws
set nowrapscan
set nows
set wrapscan&
set ws&
set write
set write
set nowrite
set nowrite
set write&
set write&
set writeany
set wa
set nowriteany
set nowa
set writeany&
set wa&
set writebackup
set wb
set nowritebackup
set nowb
set writebackup&
set wb&
set writedelay=-1
set wd=-1
set writedelay=0
set wd=0
set writedelay=100
set wd=100
if exists('+writedelay')
call assert_fails('set writedelay=')
call assert_fails('set wd=')
endif
set writedelay&
set wd&
let &term = save_term
let &columns = save_columns
let &lines = save_lines

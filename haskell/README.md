~~~
aur
    ghc
    cabal-install
    stack-static
cabal update
compile
    ghc -dynamic xxx.hs
repl
    ghci
    :command
    :{
        block
    :}
    :load source
    :i print
        print :: Show a => a -> IO ()
    :t print
        print :: Show a => a -> IO () 	-- Defined in ‘System.IO’
resources
    https://replit.com/languages/haskell
~~~

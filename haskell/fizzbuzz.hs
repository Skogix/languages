-- fizzbuzz :: Integer -> String
-- fizzbuzz n
--     | mod n 3 == 0 && mod n 5 == 0 = "FizzBuzz"
--     | mod n 3 == 0 = "Fizz"
--     | mod n 5 == 0 = "Buzz"
--     | otherwise = show n
-- main = do putStrLn $ unlines (map fizzbuzz [1..100])


module Main where
data Rule = Rule Int String
myrules :: [Rule]
myrules = 
    [ Rule 3 "Fizz"
    , Rule 5 "Buzz"
    , Rule 7 "Bazz"
    ]
fizzbuzz :: [Rule] -> Int -> String
fizzbuzz rules n
  = case [s | Rule d s <- rules, d `divides` n] of
      [] -> show n
      strings -> concat strings
  where d `divides` m = m `rem` d == 0

main :: IO ()
main = putStr . unlines $ map (fizzbuzz myrules) [1..100]

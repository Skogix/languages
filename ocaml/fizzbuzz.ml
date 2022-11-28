(* let fizzbuzz i = *)
(*   match i mod 3, i mod 5 with *)
(*     0, 0 -> "FizzBuzz" *)
(*   | 0, _ -> "Fizz" *)
(*   | _, 0 -> "Buzz" *)
(*   | _    -> string_of_int i *)
let (=>) condition f x = if condition then f x else x
let append str a = a^str
let fizzbuzz i = 
    "" |> (i mod 3 = 0 => append "Fizz")
       |> (i mod 5 = 0 => append "Buzz")
       |> (function "" -> string_of_int i | s -> s)
let _ =
  for i = 1 to 100 do print_endline (fizzbuzz i) done


open System

printfn "Write down the array of integers separated with new line and end the array with Enter key:" 

let reverse list =
    let rec loop acc = function
        | []           -> acc
        | head :: tail -> loop (head :: acc) tail
    loop [] list

let read _ = Console.ReadLine()
let isValid = function "" -> false | _ -> true
let inputList = Seq.initInfinite read |> Seq.takeWhile isValid |> Seq.toList |> List.map int
printfn "Array : %A" inputList
printfn "Printing the reversed array: %A"  (reverse inputList)

Console.Write("[any key to exit]");
Console.ReadKey();
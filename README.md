<div align="center">

# 42 - Push Swap

<img alt="mac" src="https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=apple&logoColor=white"/>
<img alt="Linux" src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black"/>
<img alt="Ubuntu" src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/>
<br>
<img alt="c" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/>
<br>
<img alt="size" src="https://img.shields.io/github/languages/code-size/affmde/42-push_swap"/>
<img alt="total files" src="https://img.shields.io/github/directory-file-count/affmde/42-push_swap"/>
<img alt="repo size" src="https://img.shields.io/github/repo-size/affmde/42-push_swap"/>
<img alt="commits per month" src="https://img.shields.io/github/commit-activity/m/affmde/42-push_swap"/>
</div>


## ![description icon](https://cdn-icons-png.flaticon.com/32/2644/2644332.png) Description
This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an
optimized data sorting.

## ![rules icon](https://cdn-icons-png.flaticon.com/32/3251/3251383.png) Rules

* You have 2 stacks named a and b.
* At the beginning:
    * The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
    * The stack b is empty.
* The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:
    * sa (swap a): Swap the first 2 elements at the top of stack a.
        Do nothing if there is only one or no elements.
    * sb (swap b): Swap the first 2 elements at the top of stack b.
        Do nothing if there is only one or no elements.
    * ss : sa and sb at the same time.
    * pa (push a): Take the first element at the top of b and put it at the top of a.
        Do nothing if b is empty.
    * pb (push b): Take the first element at the top of a and put it at the top of b.
        Do nothing if a is empty.
    * ra (rotate a): Shift up all elements of stack a by 1.
        The first element becomes the last one.
    * rb (rotate b): Shift up all elements of stack b by 1.
        The first element becomes the last one.
    * rr : ra and rb at the same time.
    * rra (reverse rotate a): Shift down all elements of stack a by 1.
        The last element becomes the first one.
    * rrb (reverse rotate b): Shift down all elements of stack b by 1.
        The last element becomes the first one.
    * rrr : rra and rrb at the same time

## ![install icon](https://cdn-icons-png.flaticon.com/32/427/427132.png) Install and run


```bash
  $git clone https://github.com/affmde/42-push_swap.git
  $cd 42-push_swap
  $make
  $./push_swap (amout of numbers you want)
```
Replace the amount of number by the actual values you wish to insert. (parenthesis not required).
## ![relate icon](https://cdn-icons-png.flaticon.com/32/2875/2875800.png) Related projects

 - [42-Philosophers](https://github.com/affmde/42-philosophers)
 - [42-Net practice](https://github.com/affmde/42-net_practice)



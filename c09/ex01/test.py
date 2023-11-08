import subprocess
from colorama import Fore, Back, init

init(autoreset=True)

USAGE_ERR = 'Error : Usage exemple : ./RPN " n n * n + n - n +"'
INV_INPUT = 'Error : invalid input'

def get_result(output):
	if output.returncode == 0:
		return output.stdout.strip()
	else:
		return output.stderr.strip()

def run_test(command_line, answer):
	print('\n' + Fore.YELLOW + command_line, end=" ")
	output = subprocess.run(command_line, shell=True, capture_output=True, text=True)
	result = get_result(output)

	if result == answer:
		print(" : " + result + Fore.GREEN + ' : OK')
	else:
		print(" : " + result + Fore.RED + ' : KO -> ' + answer)

subprocess.run("make")

run_test('./RPN', USAGE_ERR)
run_test('./RPN 1 2 3 arguments', USAGE_ERR)
run_test('./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"', '42')
run_test('./RPN "7 7 * 7 -"', '42')
run_test('./RPN "1 2 * 2 / 2 * 2 4 - +"', '0')
run_test('./RPN "(1 + 1)"', INV_INPUT)
run_test('./RPN "77 * 7 -"', INV_INPUT)
run_test('./RPN "2 a +"', INV_INPUT)

run_test('./RPN "1 2 +"', '3')
run_test('./RPN "4 3 -"', '1')
run_test('./RPN "2 3 *"', '6')
run_test('./RPN "6 3 /"', '2')

run_test('./RPN "2 3 + 4 *"', '20')
run_test('./RPN "2 3 + 4 * 5 -"', '15')
run_test('./RPN "9 5 3 + 2 4 * + -"', '-7')
run_test('./RPN "1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /"', '15')
run_test('./RPN "2 2 2 +"', INV_INPUT)
run_test('./RPN "2 +"', INV_INPUT)
run_test('./RPN "1 2 + -"', INV_INPUT)
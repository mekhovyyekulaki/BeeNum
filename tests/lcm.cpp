#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#define USE_IOSTREAM
#include <BeeNum/Bint.h>
#include <BeeNum/Math.h>

using namespace BeeNum;


int main() {
	Bint a;
	Bint b;
	Bint c;

	std::vector<std::vector<std::string>> data = {
		{"54", "24", "216"},
		{"54", "1", "54"},
		//{"54", "0", "54"},
		//{"0", "0", "0"},
		{"5634563456345624562456435634563456345636574567456763434536745247235423452345234523451234355634563456345664", "245635675674678567856785678545674568", "173006225216413715740126566995238155829519723604703958043497563993382627864804795006579693654556009408777877641656298930034989063774882734144"},
		{"8345383455657547867846978956789567854653456345563456345634562456245634563456345634566163675675674674567456", "245345345345345345345345674678678567856785678567856730584300921369395234456456456454456", "255937623245954076878040201197905480781418879882004205574133926397656696777744624333525375217089291910726114803492949229473178060518037013031244557537874739849369070493450582447838575145472992"},
		{"6443534534546425624523462453567245728436724562456234563567456746734563456", "34245698729348249569258298624572785723745823845728452457824356", "55165835605557023181848233454674621745745707233848930994611262356527852260513761154129799643140381351540577562858660542564182296083584"}, 
		{"4213518165211821182155201879854514971797088", "9307999046194775203602390818721305202949035", "318857098072487730162070861687937008783824504874318711282673670233575906334237604960"},
	};

	///////////////////////////////////////////////////////////

	std::cout << "Least Common Multiple:" << std::endl;

	std::cout << "positives:" << std::endl;
	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a.bin() << std::endl;
		b = s[1];
		std::cout << "b = " << b << std::endl;
		std::cout << "b = " << b.bin() << std::endl;
		c = Math::lcm(a, b);
		std::cout << "c = " << c << std::endl;
		std::cout << "c = " << c.bin() << std::endl;
		std::cout << "s = " << s[2] << std::endl;
		assert(c.toString()==s[2]);
		std::cout << std::endl;
	}

	std::cout << "negatives:" << std::endl;
	for (auto& s : data) {
		a = "-"+s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a.bin() << std::endl;
		b = s[1];
		std::cout << "b = " << b << std::endl;
		std::cout << "b = " << b.bin() << std::endl;
		c = Math::lcm(a, b);
		std::cout << "c = " << c << std::endl;
		std::cout << "c = " << c.bin() << std::endl;
		std::cout << "s = " << s[2] << std::endl;
		assert(c.toString()==s[2]);
		std::cout << std::endl;
	}

	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a.bin() << std::endl;
		b = "-"+s[1];
		std::cout << "b = " << b << std::endl;
		std::cout << "b = " << b.bin() << std::endl;
		c = Math::lcm(a, b);
		std::cout << "c = " << c << std::endl;
		std::cout << "c = " << c.bin() << std::endl;
		std::cout << "s = " << s[2] << std::endl;
		assert(c.toString()==s[2]);
		std::cout << std::endl;
	}

}

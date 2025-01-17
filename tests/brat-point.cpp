#include <iostream>
#include <string>
#include <cassert>
#include <map>
#define USE_IOSTREAM
#include <BeeNum/Brat.h>

using namespace BeeNum;


int main() {
	Brat a;
	Brat c;

	std::vector<std::vector<std::string>> data = {
		{"453453/434538", "1.04352898940944175192963561299587147729312511218811", "1.1kevzj90iucwsuh3jpribijw1mmg61qt71c5kztpvp2duatfet_b36", "1.4:35:28:98:94:9:44:17:51:92:96:35:61:29:95:87:14:77:29:31:25:11:21:88:11:70:34:64:36:90:54:2:97:97:16:38:84:40:13:64:20:75:3:14:12:67:27:69:70:2_b100"},
		{"1/434538", "0.00000230129470840294749826252249515577463881179551", "0.0003v5f1av76ta9ao42vpvdgxl6wtt9gb1hb47vgdangvz7nk9_b36", "0.0:0:2:30:12:94:70:84:2:94:74:98:26:25:22:49:51:55:77:46:38:81:17:95:51:61:57:39:1:47:69:70:94:38:53:1:17:4:38:48:86:93:73:90:97:61:63:18:94:10_b100"},
		{"-1/434538", "-0.00000230129470840294749826252249515577463881179551", "-0.0003v5f1av76ta9ao42vpvdgxl6wtt9gb1hb47vgdangvz7nk9_b36", "-0.0:0:2:30:12:94:70:84:2:94:74:98:26:25:22:49:51:55:77:46:38:81:17:95:51:61:57:39:1:47:69:70:94:38:53:1:17:4:38:48:86:93:73:90:97:61:63:18:94:10_b100"},
		{"171770057/8920503206", "0.01925564657433967632610253892890086810647574134171", "0.0oye3bbxc9ql9aq5wf6pcs85eirfkx3mojty0nze25udix3o6q_b36", "0.1:92:55:64:65:74:33:96:76:32:61:2:53:89:28:90:8:68:10:64:75:74:13:41:71:55:15:77:37:85:82:24:58:67:98:4:66:3:38:12:66:69:57:74:78:54:20:77:66:31_b100"},
		{"3648111/3648112", "0.99999972588560877516918340226396558000412268044402", "0.zzzzjfb96azavcnmk4nog2c7q7zyq5wghfp6i9805vzpdrcw1e_b36", "0.99:99:99:72:58:85:60:87:75:16:91:83:40:22:63:96:55:80:0:41:22:68:4:44:2:14:55:48:16:29:94:99:57:67:67:37:99:48:86:12:19:17:30:95:56:28:55:52:63:65_b100"},
		{"364811100000/3648112", "99999.97258856087751691834022639655800041226804440214554", "255r.z0h3b3ihxp0vodkay768y1nrfhr9lcttlmjblmude4q62lh9mu_b36", "9:99:99.97:25:88:56:8:77:51:69:18:34:2:26:39:65:58:0:4:12:26:80:44:40:21:45:54:81:62:99:49:95:76:76:73:79:94:88:61:21:91:73:9:55:62:85:55:26:36:54:18:60_b100"},
	};
	
	///////////////////////////////////////////////////////////

	std::cout << "Point:" << std::endl;
	std::cout << "Decimal:" << std::endl;
	int p = 50;

	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a.point = " << a.point(p) << std::endl;
		std::cout << "s = " << s[1] << std::endl;
		assert(a.point(p) == s[1]);
		std::cout << std::endl;
	}

	std::cout << "Base36:" << std::endl;
	int b = 36;
	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a.point = " << a.point(p) << std::endl;
		std::cout << "a.point = " << a.point(p, b) << std::endl;
		std::cout << "s = " << s[1] << std::endl;
		std::cout << "s = " << s[2] << std::endl;
		assert(a.point(p, b) == s[2]);
		std::cout << std::endl;
	}

	std::cout << "Base100:" << std::endl;
	b = 100;
	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a.point = " << a.point(p) << std::endl;
		std::cout << "a.point = " << a.point(p, b) << std::endl;
		std::cout << "s = " << s[1] << std::endl;
		std::cout << "s = " << s[3] << std::endl;
		assert(a.point(p, b) == s[3]);
		std::cout << std::endl;
	}

}

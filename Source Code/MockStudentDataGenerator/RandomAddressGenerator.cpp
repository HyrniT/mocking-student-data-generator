#include "RandomAddressGenerator.h"

Address RandomAddressGenerator::next()
{
	string listOfDistrict[24] = { "1","2","3","4","5","6","7","8","9","10","11","12",
		"Thu Duc","Binh Tan","Binh Thanh","Go Vap","Phu Nhuan","Tan Binh","Tan Phu","Binh Chanh","Can Gio","Cu Chi","Hoc Mon","Nha Be" };

	string listWardOfDis_1[5] = { "Ben Nghe","Nguyen Thai Binh","Ben Thanh","Pham Ngu Lao","Da Kao" };
	string listWardOfDis_2[5] = { "Thao Dien","Cat Lai","Thu Thiem","Binh Trung Dong","Binh Trung Tay" };
	string listWardOfDis_3[5] = { "1","2","3","4","5" };
	string listWardOfDis_4[5] = { "1","2","3","4","5" };
	string listWardOfDis_5[5] = { "1","2","3","4","5" };
	string listWardOfDis_6[5] = { "1","2","3","4","5" };
	string listWardOfDis_7[5] = { "Tan Thuan Dong","Tan Thuan Tay","Tan Hung","Phu My","Tan Phong" };
	string listWardOfDis_8[5] = { "1","2","3","4","5" };
	string listWardOfDis_9[5] = { "Hiep Phu","Long Binh","Long Phuoc","Long Thanh My","Phuoc Binh" };
	string listWardOfDis_10[5] = { "1","2","3","4","5" };
	string listWardOfDis_11[5] = { "1","2","3","4","5" };
	string listWardOfDis_12[5] = { "Dong Hung Thuan","Tan Thoi Nhat","Thanh Loc","Hiep Thanh","An Phu Dong" };
	string listWardOfDis_ThuDuc[5] = { "Linh Chieu","Linh Dong","Linh Tay","Linh Trung","Linh Xuan" };
	string listWardOfDis_BinhTan[5] = { "Binh Hung Hoa","Binh Tri Dong","Tan Tao","An Lac","An Lac A" };
	string listWardOfDis_BinhThanh[5] = { "1","2","3","5","6" };
	string listWardOfDis_GoVap[5] = { "1","3","4","5","6" };
	string listWardOfDis_PhuNhuan[5] = { "1","2","3","5","6" };
	string listWardOfDis_TanBinh[5] = { "1","2","3","4","5" };
	string listWardOfDis_TanPhu[5] = { "Tan Son Nhi","Son Ky","Tan Quy","Tan Thanh","Phu Tho Hoa" };
	string listWardOfDis_BinhChanh[5] = { "An Phu Tay","Binh Hung","Binh Loi","Da Phuoc","Hung Long" };
	string listWardOfDis_CanGio[5] = { "Can Thanh","Long Hoa","Long Thanh","Thanh An","Tan Thanh" };
	string listWardOfDis_CuChi[5] = { "An Nhon Tay","Binh My","Hoa Phu","Trung An","Tan Thong Hoi" };
	string listWardOfDis_HocMon[5] = { "Ba Diem","Dong Thanh","Nhi Binh","Tan Hiep","Tan Xuan" };
	string listWardOfDis_NhaBe[5] = { "Hiep Phuoc","Long Thoi","Nhon Duc","Phu Xuan","Phuoc Kien" };

	string listRoadOfDis_1[5] = { "Nguyen Hue","Ham Nghi","Ly Tu Trong","Pham Ngu Lao","Dien Bien Phu" };
	string listRoadOfDis_2[5] = { "Thao Dien","Dong Van Cong","Mai Chi Tho","Nguyen Duy Trinh","Nguyen Duy Trinh" };
	string listRoadOfDis_3[5] = { "Ly Thai To","Nguyen Dinh Chieu","Ban Co","Nguyen Thuong Hien","Vo Van Tan" };
	string listRoadOfDis_4[5] = { "Ben Van Don","Nguyen Khoai","Ton That Thuyet","Nguyen Huu Tho","Ben Van Don" };
	string listRoadOfDis_5[5] = { "Vo Van Kiet","Le Hong Phong","An Duong Vuong","Nguyen Van Cu","Tran Tuan Khai" };
	string listRoadOfDis_6[5] = { "Cao Van Lau","Pham Dinh Ho","Pham Van Chi","Phan Van Khoe","Hau Giang" };
	string listRoadOfDis_7[5] = { "Ben Nghe","Nguyen Van Linh","Nguyen Huu Tho","Huynh Tan Phat","Nguyen Van Linh" };
	string listRoadOfDis_8[5] = { "Nguyen Van Cu","Pham The Hien","Ta Quang Buu","Cao Lo","Pham Hung" };
	string listRoadOfDis_9[5] = { "Xa Lo Ha Noi","Nguyen Xien","Long Phuoc","Nguyen Van Tang","Dai Lo 3" };
	string listRoadOfDis_10[5] = { "Ho Thi Ky","Tran Phu","Ngo Gia Tu","Nguyen Tri Phuong","Hoa Hao" };
	string listRoadOfDis_11[5] = { "Hong Bang","3/2","Lac Long Quan","Tran Quy","Lac Long Quan" };
	string listRoadOfDis_12[5] = { "Nguyen Van Qua","Phan Van Hon","Ha Huy Giap","Nguyen Anh Thu","QL1A" };
	string listRoadOfDis_ThuDuc[5] = { "Vo Van Ngan","Pham Van Dong","Kha Van Can","Xa Lo Ha Noi","Quoc Lo 1K" };
	string listRoadOfDis_BinhTan[5] = { "Xa Lo Dai Hanh","Tan Hoa Dong","Tinh Lo 10","Vo Van Kiet","Kinh Duong Vuong" };
	string listRoadOfDis_BinhThanh[5] = { "Le Van Duyet","Bui Huu Nghia","Le Van Duyet","Le Quang Dinh","Hoang Hoa Tham" };
	string listRoadOfDis_GoVap[5] = { "Pham Van Dong","Nguyen Kiem","Nguyen Thai Son","Phan Van Tri","Nguyen Oanh" };
	string listRoadOfDis_PhuNhuan[5] = { "Le Van Duyet","Bui Huu Nghia","Le Van Duyet","Tran Binh Trong","Hoang Hoa Tham" };
	string listRoadOfDis_TanBinh[5] = { "Le Van Sy","Truong Son","Truong Sa","Hoang Van Thu","Cach Mang Thang 8" };
	string listRoadOfDis_TanPhu[5] = { "Au Co","Le Trong Tan","Tan Ky Tan Quy","Luy Ban Bich","Nguyen Son" };
	string listRoadOfDis_BinhChanh[5] = { "Nguyen Van Linh","Nguyen Van Linh","Vuon Thom","QL50","HL11" };
	string listRoadOfDis_CanGio[5] = { "Luong Van Nho","Rung Sac","","","" };
	string listRoadOfDis_CuChi[5] = { "TL17","Ha Duy Phien","TL8","Trung An","QL22" };
	string listRoadOfDis_HocMon[5] = { "Phan Van Hon","Dang Thuc Vinh","Bui Cong Trung","Do Van Day","To Ky" };
	string listRoadOfDis_NhaBe[5] = { "Nguyen Van Tao","Ngo Quang Tham","Le Van Luong","Nguyen Binh","Nguyen Huu Tho" };

	int temp = _rng.next(0, 23);
	int resp = _rng.next(0, 4);
	int num = _rng.next(1, 500);
	string dis = listOfDistrict[temp];
	string ward = "";
	string road = "";
	switch (temp)
	{
	case 0: ward = listWardOfDis_1[resp]; road = listRoadOfDis_1[resp]; break;
	case 1: ward = listWardOfDis_2[resp]; road = listRoadOfDis_2[resp]; break;
	case 2: ward = listWardOfDis_3[resp]; road = listRoadOfDis_3[resp]; break;
	case 3: ward = listWardOfDis_4[resp]; road = listRoadOfDis_4[resp]; break;
	case 4: ward = listWardOfDis_5[resp]; road = listRoadOfDis_5[resp]; break;
	case 5: ward = listWardOfDis_6[resp]; road = listRoadOfDis_6[resp]; break;
	case 6: ward = listWardOfDis_7[resp]; road = listRoadOfDis_7[resp]; break;
	case 7: ward = listWardOfDis_8[resp]; road = listRoadOfDis_8[resp]; break;
	case 8: ward = listWardOfDis_9[resp]; road = listRoadOfDis_9[resp]; break;
	case 9: ward = listWardOfDis_10[resp]; road = listRoadOfDis_10[resp]; break;
	case 10: ward = listWardOfDis_11[resp]; road = listRoadOfDis_11[resp]; break;
	case 11: ward = listWardOfDis_12[resp]; road = listRoadOfDis_12[resp]; break;
	case 12: ward = listWardOfDis_ThuDuc[resp]; road = listRoadOfDis_ThuDuc[resp]; break;
	case 13: ward = listWardOfDis_BinhTan[resp]; road = listRoadOfDis_BinhTan[resp]; break;
	case 14: ward = listWardOfDis_BinhThanh[resp]; road = listRoadOfDis_BinhThanh[resp]; break;
	case 15: ward = listWardOfDis_GoVap[resp]; road = listRoadOfDis_GoVap[resp]; break;
	case 16: ward = listWardOfDis_PhuNhuan[resp]; road = listRoadOfDis_PhuNhuan[resp]; break;
	case 17: ward = listWardOfDis_TanBinh[resp]; road = listRoadOfDis_TanBinh[resp]; break;
	case 18: ward = listWardOfDis_TanPhu[resp]; road = listRoadOfDis_TanPhu[resp]; break;
	case 19: ward = listWardOfDis_BinhChanh[resp]; road = listRoadOfDis_BinhChanh[resp]; break;
	case 20: ward = listWardOfDis_CanGio[resp]; road = listRoadOfDis_CanGio[resp]; break;
	case 21: ward = listWardOfDis_CuChi[resp]; road = listRoadOfDis_CuChi[resp]; break;
	case 22: ward = listWardOfDis_HocMon[resp]; road = listRoadOfDis_HocMon[resp]; break;
	case 23: ward = listWardOfDis_NhaBe[resp]; road = listRoadOfDis_NhaBe[resp]; break;
	}

	Address address(num, road, ward, dis);
	return address;
}
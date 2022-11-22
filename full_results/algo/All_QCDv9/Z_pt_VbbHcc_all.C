void Z_pt_VbbHcc_all()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_all/Z_pt_VbbHcc_all
//=========  (Tue Nov 22 09:15:59 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_all = new TCanvas("Z_pt_VbbHcc_all", "Z_pt_VbbHcc_all",0,0,600,600);
   Z_pt_VbbHcc_all->SetHighLightColor(2);
   Z_pt_VbbHcc_all->Range(0,0,1,1);
   Z_pt_VbbHcc_all->SetFillColor(0);
   Z_pt_VbbHcc_all->SetFillStyle(4000);
   Z_pt_VbbHcc_all->SetBorderMode(0);
   Z_pt_VbbHcc_all->SetBorderSize(2);
   Z_pt_VbbHcc_all->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-10697.18,1562.903,1.068678e+07);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(9159079);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0.3);
   st_stack_12->SetMaximum(9617033);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetLabelSize(0.035);
   st_stack_12->GetXaxis()->SetTitleSize(0.035);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetLabelSize(0.035);
   st_stack_12->GetZaxis()->SetTitleSize(0.035);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,1080127);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,3955531);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,1755142);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,36236.38);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,37985.18);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,72878.63);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,48669.32);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,7005.2);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(5252);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,6223.509);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,16511.49);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,9750.499);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,3790.481);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,1745.006);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,889.4353);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,497.6494);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,279.514);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,185.2017);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,118.0518);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,77.11814);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,55.39006);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(13,34.75793);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(14,32.00744);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(15,13.93555);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(16,14.39999);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(17,8.089707);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(18,6.600399);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(19,7.234682);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(20,6.05748);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(21,1.576175);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(22,1.192189);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(23,0.5845194);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(24,1.472577);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(25,1.217566);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(26,0.6202205);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(27,0.6719227);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(28,0.5908905);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(33,0.3337765);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(34,0.4242718);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(38,0.09221279);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,28.41764);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,46.05811);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,36.99183);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,23.95611);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,16.9052);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,12.37009);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,9.627718);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,7.369192);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,6.225862);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,5.088109);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,4.206841);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,3.684537);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(13,2.812996);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(14,2.853698);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(15,2.027808);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(16,1.951907);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(17,1.357445);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(18,1.276339);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(19,1.361564);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(20,1.2669);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(21,0.6270955);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(22,0.7342392);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(23,0.3596338);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(24,0.6343275);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(25,0.5847265);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(26,0.3945571);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(27,0.4121968);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(28,0.4590597);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(33,0.3337765);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(34,0.3370858);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(38,0.06520429);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(660055);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_3 = new TH1D("VbbHcc_algo_Z_pt_all_stack_3","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(1,50558.34);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(2,139991.9);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(3,99122.02);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(4,27941.64);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(5,12065.39);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(6,6003.294);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(7,3217.891);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(8,1854.951);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(9,1111.544);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(10,708.5665);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(11,473.0191);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(12,321.0564);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(13,223.2095);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(14,139.3973);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(15,106.7915);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(16,68.06276);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(17,55.26441);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(18,34.8399);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(19,28.74818);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(20,19.83586);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(21,17.65681);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(22,9.326998);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(23,9.338125);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(24,6.764846);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(25,3.844924);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(26,3.755454);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(27,2.630843);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(28,2.445028);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(29,1.342082);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(30,1.381337);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(31,0.807769);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(32,0.6758395);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(33,0.1773331);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(34,0.2354609);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(35,0.1566841);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(36,0.3778723);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(37,0.1934008);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(38,0.1294785);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinContent(41,0.20971);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(1,56.50715);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(2,95.30586);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(3,81.0151);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(4,42.75123);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(5,28.15782);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(6,19.95357);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(7,14.6792);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(8,11.21501);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(9,8.712211);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(10,7.031845);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(11,5.745855);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(12,4.781094);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(13,3.987019);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(14,3.157841);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(15,2.772772);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(16,2.214267);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(17,1.970825);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(18,1.568934);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(19,1.432725);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(20,1.195268);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(21,1.136561);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(22,0.7983664);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(23,0.808207);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(24,0.6830212);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(25,0.5313906);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(26,0.5287692);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(27,0.4361218);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(28,0.4194093);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(29,0.313);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(30,0.3165036);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(31,0.2665637);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(32,0.2191988);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(33,0.1253982);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(34,0.1305189);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(35,0.1118983);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(36,0.1588561);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(37,0.117206);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(38,0.09226604);
   VbbHcc_algo_Z_pt_all_stack_3->SetBinError(41,0.1211289);
   VbbHcc_algo_Z_pt_all_stack_3->SetEntries(5745826);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_4 = new TH1D("VbbHcc_algo_Z_pt_all_stack_4","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(1,447.8193);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(2,1482.916);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(3,3746.148);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(4,4553.76);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(5,2226.167);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(6,465.436);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(7,22.01764);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinContent(8,0.480603);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(1,12.05633);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(2,22.1587);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(3,35.49476);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(4,39.26217);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(5,27.50541);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(6,12.57381);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(7,2.743074);
   VbbHcc_algo_Z_pt_all_stack_4->SetBinError(8,0.480603);
   VbbHcc_algo_Z_pt_all_stack_4->SetEntries(40350);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_5 = new TH1D("VbbHcc_algo_Z_pt_all_stack_5","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(1,247.8658);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(2,793.8604);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(3,1610.94);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(4,1961.595);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(5,908.4451);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(6,176.8348);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(7,16.09213);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinContent(8,1.731565);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(1,16.99923);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(2,30.56979);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(3,43.76422);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(4,48.46458);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(5,33.22371);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(6,14.55914);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(7,4.4035);
   VbbHcc_algo_Z_pt_all_stack_5->SetBinError(8,1.731565);
   VbbHcc_algo_Z_pt_all_stack_5->SetEntries(4995);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_6 = new TH1D("VbbHcc_algo_Z_pt_all_stack_6","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(1,36.06228);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(2,77.54731);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(3,32.07444);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(4,13.8779);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(5,8.92119);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(6,6.526617);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(7,2.607352);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(8,2.403126);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(9,0.6244462);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(10,1.22825);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(11,0.2525183);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(12,0.8157132);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(13,0.2791803);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(14,0.6489151);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinContent(19,0.1791638);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(1,2.435208);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(2,3.560736);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(3,2.104218);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(4,1.45711);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(5,1.138084);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(6,0.9413259);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(7,0.5436008);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(8,0.5736777);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(9,0.3140336);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(10,0.4329178);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(11,0.2525183);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(12,0.3591576);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(13,0.1440023);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(14,0.3569019);
   VbbHcc_algo_Z_pt_all_stack_6->SetBinError(19,0.1266879);
   VbbHcc_algo_Z_pt_all_stack_6->SetEntries(1494);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_7 = new TH1D("VbbHcc_algo_Z_pt_all_stack_7","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(1,103.5209);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(2,232.5801);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(3,152.4732);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(4,74.2348);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(5,43.29878);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(6,24.93495);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(7,14.01807);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(8,9.026089);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(9,4.352343);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(10,2.201652);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(11,1.136288);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(12,0.6853202);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(13,0.2714855);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(14,0.1828711);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(15,0.1256916);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(19,0.3013243);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinContent(28,0.05125148);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(1,3.485772);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(2,5.069475);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(3,4.092562);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(4,2.864518);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(5,2.193393);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(6,1.704783);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(7,1.219526);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(8,1.033824);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(9,0.7181166);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(10,0.4488447);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(11,0.3365997);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(12,0.2485351);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(13,0.1357549);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(14,0.1828711);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(15,0.08887738);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(19,0.1924564);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(25,0.1336818);
   VbbHcc_algo_Z_pt_all_stack_7->SetBinError(28,0.03624027);
   VbbHcc_algo_Z_pt_all_stack_7->SetEntries(7384);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_8 = new TH1D("VbbHcc_algo_Z_pt_all_stack_8","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(1,121.6611);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(2,237.8987);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(3,136.6735);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(4,75.10877);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(5,36.64539);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(6,21.44521);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(7,9.872658);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(8,5.299601);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(9,1.860837);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(10,2.134475);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(11,0.2056985);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(12,0.2373516);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(14,0.2274369);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinContent(16,0.3763938);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(1,4.944761);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(2,6.961155);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(3,5.271932);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(4,3.926679);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(5,2.746475);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(6,2.08199);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(7,1.413082);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(8,1.025014);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(9,0.6247883);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(10,0.6647073);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(11,0.2056985);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(12,0.2373516);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(14,0.2274369);
   VbbHcc_algo_Z_pt_all_stack_8->SetBinError(16,0.2661506);
   VbbHcc_algo_Z_pt_all_stack_8->SetEntries(3300);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_9 = new TH1D("VbbHcc_algo_Z_pt_all_stack_9","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(1,18.81183);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(2,56.34897);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(3,42.52724);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(4,24.98719);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(5,14.36394);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(6,8.5973);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(7,5.153976);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(8,2.971482);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(9,1.790976);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(10,0.9380454);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(11,0.5267962);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(12,0.2761308);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(13,0.14332);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(14,0.05816373);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(15,0.04489428);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(16,0.0240169);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(17,0.021138);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(18,0.009505728);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(19,0.008185604);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(20,0.0139151);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(21,0.002947162);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(22,0.003318872);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(23,0.001971755);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(25,0.001858148);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinContent(35,0.002922937);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(1,0.1780838);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(2,0.3103884);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(3,0.2692625);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(4,0.2065957);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(5,0.1569583);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(6,0.1209754);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(7,0.09445364);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(8,0.07118337);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(9,0.05550362);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(10,0.04030292);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(11,0.02967884);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(12,0.02131144);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(13,0.01525585);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(14,0.009627903);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(15,0.008936012);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(16,0.006045607);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(17,0.00621638);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(18,0.003920097);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(19,0.003662068);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(20,0.004662811);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(21,0.002083959);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(22,0.002346797);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(23,0.001394241);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(25,0.001858148);
   VbbHcc_algo_Z_pt_all_stack_9->SetBinError(35,0.002066828);
   VbbHcc_algo_Z_pt_all_stack_9->SetEntries(116514);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_10 = new TH1D("VbbHcc_algo_Z_pt_all_stack_10","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(1,2.451155);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(2,10.06032);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(3,13.48951);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(4,8.573878);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(5,4.711208);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(6,2.725426);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(7,1.635864);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(8,0.9948096);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(9,0.6503787);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(10,0.4588764);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(11,0.2759329);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(12,0.2006005);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(13,0.1061356);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(14,0.0779689);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(15,0.05204959);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(16,0.05340459);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(17,0.0260991);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(18,0.02755254);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(19,0.02111206);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(20,0.0133945);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(21,0.01196689);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(22,0.01052955);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(23,0.006759971);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(24,0.007004637);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(25,0.009159229);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(26,0.001351039);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(27,0.002455502);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(28,0.001187214);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(29,0.004835647);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(30,0.00252848);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(33,0.00122692);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(34,0.003649483);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinContent(41,0.001188087);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(1,0.03146934);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(2,0.06387572);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(3,0.07406708);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(4,0.05899241);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(5,0.04371944);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(6,0.03321413);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(7,0.02567914);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(8,0.02003018);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(9,0.01619661);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(10,0.01363317);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(11,0.01059423);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(12,0.008993493);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(13,0.006578092);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(14,0.005571393);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(15,0.004606776);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(16,0.004649194);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(17,0.003300249);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(18,0.003319519);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(19,0.002971865);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(20,0.00235242);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(21,0.002194704);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(22,0.002042922);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(23,0.001604318);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(24,0.00166769);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(25,0.002005765);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(26,0.000683729);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(27,0.001005005);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(28,0.0006871526);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(29,0.001399745);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(30,0.00103669);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(33,0.0007101341);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(34,0.001219759);
   VbbHcc_algo_Z_pt_all_stack_10->SetBinError(41,0.0006876577);
   VbbHcc_algo_Z_pt_all_stack_10->SetEntries(117744);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_11 = new TH1D("VbbHcc_algo_Z_pt_all_stack_11","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(1,0.4783831);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(2,1.965762);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(3,1.620242);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(4,0.722589);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(5,0.253946);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(6,0.1529391);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(7,0.0866435);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(8,0.07062244);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(9,0.02860867);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(10,0.008864761);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(11,0.001469136);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(12,0.004824463);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinContent(13,0.001739168);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(1,0.02809017);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(2,0.05809337);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(3,0.05250958);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(4,0.03521503);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(5,0.02027784);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(6,0.01595636);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(7,0.01184039);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(8,0.01067486);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(9,0.006774179);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(10,0.003617369);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(11,0.001469136);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(12,0.002787579);
   VbbHcc_algo_Z_pt_all_stack_11->SetBinError(13,0.001739168);
   VbbHcc_algo_Z_pt_all_stack_11->SetEntries(3789);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_12 = new TH1D("VbbHcc_algo_Z_pt_all_stack_12","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(1,1272.901);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(2,6658.231);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(3,11699.15);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(4,6338.049);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(5,2156.253);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(6,1004.012);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(7,468.6551);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(8,259.0362);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(9,152.1664);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(10,116.4905);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(11,40.16852);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(12,34.5211);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(13,11.40265);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(14,17.06615);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(15,17.415);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(17,8.1554);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(19,21.80953);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(22,8.569034);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(23,15.71922);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinContent(25,8.763785);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(1,76.5431);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(2,174.407);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(3,231.2797);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(4,170.0767);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(5,98.31634);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(6,67.64038);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(7,45.07922);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(8,32.9632);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(9,25.95946);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(10,21.9177);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(11,13.60764);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(12,11.94725);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(13,6.306276);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(14,8.450873);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(15,8.713142);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(17,5.766739);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(19,9.196022);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(22,6.059222);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(23,7.873045);
   VbbHcc_algo_Z_pt_all_stack_12->SetBinError(25,6.196932);
   VbbHcc_algo_Z_pt_all_stack_12->SetEntries(7489);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_pt_all__23 = new TH1D("VbbHcc_algo_Z_pt_all__23","",40,0,2000);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(1,31080);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(2,77625);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(3,133104);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(4,124600);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(5,90720);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(6,85943);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(7,78106);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(8,56431);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(9,36878);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(10,22202);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(11,13254);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(12,8463);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(13,5503);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(14,3743);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(15,2259);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(16,1599);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(17,1048);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(18,752);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(19,550);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(20,407);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(21,274);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(22,189);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(23,190);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(24,118);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(25,101);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(26,50);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(27,63);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(28,48);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(29,21);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(30,23);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(31,17);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(32,8);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(33,11);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(34,7);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(35,13);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(36,4);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(37,4);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(38,3);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(39,2);
   VbbHcc_algo_Z_pt_all__23->SetBinContent(41,2);
   VbbHcc_algo_Z_pt_all__23->SetEntries(775415);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all__23->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all__23->SetLineWidth(2);
   VbbHcc_algo_Z_pt_all__23->SetMarkerStyle(20);
   VbbHcc_algo_Z_pt_all__23->SetMarkerSize(1.2);
   VbbHcc_algo_Z_pt_all__23->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all__23->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all__23->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all__23->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all__23->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_all__23->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all__23->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all__23->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_all__23->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all__23->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_pt_all_fx1023[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_Z_pt_all_fy1023[40] = {
   1139161,
   4121586,
   1881450,
   81019.4,
   19209.46,
   8603.395,
   4255.679,
   2416.479,
   1458.22,
   950.0791,
   592.7045,
   413.1875,
   270.172,
   189.6662,
   138.3646,
   82.91656,
   71.55676,
   41.47736,
   58.30218,
   25.92065,
   19.2479,
   19.22569,
   25.6506,
   8.244428,
   13.97097,
   4.377025,
   3.305221,
   3.088357,
   1.346918,
   1.383866,
   0.807769,
   0.6758395,
   0.5123365,
   0.6633821,
   0.1596071,
   0.3778723,
   0.1934008,
   0.2216913,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Z_pt_all_fex1023[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_Z_pt_all_fey1023[40] = {
   37985.32,
   72878.93,
   48669.99,
   7007.715,
   112.3334,
   74.19298,
   48.69304,
   35.66983,
   28.09921,
   23.59139,
   15.36556,
   13.39474,
   7.976078,
   9.47341,
   9.366275,
   2.96375,
   6.243567,
   2.022528,
   9.408852,
   1.74176,
   1.298087,
   6.156782,
   7.922587,
   0.9321438,
   6.24853,
   0.659752,
   0.6000912,
   0.6228594,
   0.3130031,
   0.3165053,
   0.2665637,
   0.2191988,
   0.3565557,
   0.3614741,
   0.1119174,
   0.1588561,
   0.117206,
   0.1129806,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_pt_all_fx1023,Graph_from_VbbHcc_algo_Z_pt_all_fy1023,Graph_from_VbbHcc_algo_Z_pt_all_fex1023,Graph_from_VbbHcc_algo_Z_pt_all_fey1023);
   gre->SetName("Graph_from_VbbHcc_algo_Z_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_pt_all1023 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_pt_all1023","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->SetMaximum(4613911);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt_all1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_pt_all1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_pt_all","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",40,0,2000);
   data_mc_ratio__24->SetBinContent(1,0.02728324);
   data_mc_ratio__24->SetBinContent(2,0.01883377);
   data_mc_ratio__24->SetBinContent(3,0.07074543);
   data_mc_ratio__24->SetBinContent(4,1.537903);
   data_mc_ratio__24->SetBinContent(5,4.722674);
   data_mc_ratio__24->SetBinContent(6,9.989429);
   data_mc_ratio__24->SetBinContent(7,18.35336);
   data_mc_ratio__24->SetBinContent(8,23.35257);
   data_mc_ratio__24->SetBinContent(9,25.28974);
   data_mc_ratio__24->SetBinContent(10,23.36858);
   data_mc_ratio__24->SetBinContent(11,22.3619);
   data_mc_ratio__24->SetBinContent(12,20.48223);
   data_mc_ratio__24->SetBinContent(13,20.36851);
   data_mc_ratio__24->SetBinContent(14,19.73467);
   data_mc_ratio__24->SetBinContent(15,16.32643);
   data_mc_ratio__24->SetBinContent(16,19.28445);
   data_mc_ratio__24->SetBinContent(17,14.64572);
   data_mc_ratio__24->SetBinContent(18,18.13037);
   data_mc_ratio__24->SetBinContent(19,9.43361);
   data_mc_ratio__24->SetBinContent(20,15.70177);
   data_mc_ratio__24->SetBinContent(21,14.23532);
   data_mc_ratio__24->SetBinContent(22,9.830594);
   data_mc_ratio__24->SetBinContent(23,7.407235);
   data_mc_ratio__24->SetBinContent(24,14.3127);
   data_mc_ratio__24->SetBinContent(25,7.229274);
   data_mc_ratio__24->SetBinContent(26,11.42328);
   data_mc_ratio__24->SetBinContent(27,19.06075);
   data_mc_ratio__24->SetBinContent(28,15.54224);
   data_mc_ratio__24->SetBinContent(29,15.59115);
   data_mc_ratio__24->SetBinContent(30,16.62011);
   data_mc_ratio__24->SetBinContent(31,21.04562);
   data_mc_ratio__24->SetBinContent(32,11.83713);
   data_mc_ratio__24->SetBinContent(33,21.47026);
   data_mc_ratio__24->SetBinContent(34,10.55199);
   data_mc_ratio__24->SetBinContent(35,81.45003);
   data_mc_ratio__24->SetBinContent(36,10.58559);
   data_mc_ratio__24->SetBinContent(37,20.68244);
   data_mc_ratio__24->SetBinContent(38,13.53233);
   data_mc_ratio__24->SetBinContent(41,9.483251);
   data_mc_ratio__24->SetBinError(1,0.0001547588);
   data_mc_ratio__24->SetBinError(2,6.759841e-05);
   data_mc_ratio__24->SetBinError(3,0.0001939112);
   data_mc_ratio__24->SetBinError(4,0.004356824);
   data_mc_ratio__24->SetBinError(5,0.01567965);
   data_mc_ratio__24->SetBinError(6,0.03407496);
   data_mc_ratio__24->SetBinError(7,0.06567095);
   data_mc_ratio__24->SetBinError(8,0.09830506);
   data_mc_ratio__24->SetBinError(9,0.1316924);
   data_mc_ratio__24->SetBinError(10,0.1568326);
   data_mc_ratio__24->SetBinError(11,0.1942385);
   data_mc_ratio__24->SetBinError(12,0.2226461);
   data_mc_ratio__24->SetBinError(13,0.274574);
   data_mc_ratio__24->SetBinError(14,0.322567);
   data_mc_ratio__24->SetBinError(15,0.3435049);
   data_mc_ratio__24->SetBinError(16,0.4822619);
   data_mc_ratio__24->SetBinError(17,0.4524077);
   data_mc_ratio__24->SetBinError(18,0.6611467);
   data_mc_ratio__24->SetBinError(19,0.4022505);
   data_mc_ratio__24->SetBinError(20,0.7783078);
   data_mc_ratio__24->SetBinError(21,0.8599871);
   data_mc_ratio__24->SetBinError(22,0.7150705);
   data_mc_ratio__24->SetBinError(23,0.5373773);
   data_mc_ratio__24->SetBinError(24,1.317591);
   data_mc_ratio__24->SetBinError(25,0.7193397);
   data_mc_ratio__24->SetBinError(26,1.615496);
   data_mc_ratio__24->SetBinError(27,2.401429);
   data_mc_ratio__24->SetBinError(28,2.243329);
   data_mc_ratio__24->SetBinError(29,3.402268);
   data_mc_ratio__24->SetBinError(30,3.465532);
   data_mc_ratio__24->SetBinError(31,5.104313);
   data_mc_ratio__24->SetBinError(32,4.185057);
   data_mc_ratio__24->SetBinError(33,6.473528);
   data_mc_ratio__24->SetBinError(34,3.988276);
   data_mc_ratio__24->SetBinError(35,22.59017);
   data_mc_ratio__24->SetBinError(36,5.292793);
   data_mc_ratio__24->SetBinError(37,10.34122);
   data_mc_ratio__24->SetBinError(38,7.812895);
   data_mc_ratio__24->SetBinError(41,8.639061);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(77.24315);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(7,30);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1024[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1024[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1024[40] = {
   0.033345,
   0.01768225,
   0.02586834,
   0.08649428,
   0.005847817,
   0.008623686,
   0.0114419,
   0.01476108,
   0.01926953,
   0.02483098,
   0.02592449,
   0.03241806,
   0.02952223,
   0.0499478,
   0.06769269,
   0.03574377,
   0.08725336,
   0.04876223,
   0.1613808,
   0.06719586,
   0.06744043,
   0.3202372,
   0.3088656,
   0.1130635,
   0.4472508,
   0.1507307,
   0.1815586,
   0.2016798,
   0.2323847,
   0.228711,
   0.3299999,
   0.3243355,
   0.6959404,
   0.5448957,
   0.7012058,
   0.4203962,
   0.6060262,
   0.5096304,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.158553);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.841447);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_all->cd();
   Z_pt_VbbHcc_all->Modified();
   Z_pt_VbbHcc_all->cd();
   Z_pt_VbbHcc_all->SetSelected(Z_pt_VbbHcc_all);
}

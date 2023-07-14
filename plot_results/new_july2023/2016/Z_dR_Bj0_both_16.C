void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Fri Jul 14 13:38:53 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(0,0,1,1);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1364.653,6.314516,1363299);
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
   st->SetMinimum(0.01);
   st->SetMaximum(1168412);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(0.01);
   st_stack_241->SetMaximum(1226832);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,96937.16);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,483198.8);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,449622);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,300354.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,222838.4);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,179089.6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,133490.7);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,115255.3);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,91588);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,81975.76);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,83966.65);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,65847.3);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,82549.13);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,55333.19);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,77101.16);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,36157.05);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,33581.07);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,32061.18);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,24981.21);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,22058.19);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,24157.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,14911.32);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,13173.15);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,11458.13);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,7642.764);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,5557.245);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,2793.13);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,1882.439);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,2565.98);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,1218.626);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,1233.494);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,2969.421);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,9874.497);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,23217.17);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,9514.857);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,8245.094);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,7846.668);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,6273.194);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,5902.004);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,5035.181);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,4868.261);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,5762.879);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,4030.227);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,20806.19);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,3995.654);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,20868.9);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,2641.011);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,2659.776);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,3227.39);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,2049.476);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,1952.101);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,2760.672);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,1573.743);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,1520.495);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,1877.816);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,1648.463);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,835.1985);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,493.3076);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,404.4612);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,1471.161);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,472.1357);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,395.7405);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,492.3372);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,2649.262);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,3692.586);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,3552.99);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,3037.082);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,2470.34);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,2101.837);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,1730.185);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,1484.267);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,1323.345);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,1187.576);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,1077.276);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,963.3914);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,856.8603);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,743.6166);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,649.2513);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,522.6387);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,439.3371);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,356.4932);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,293.2644);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,239.7854);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,177.4326);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,135.7889);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,101.7165);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,73.37298);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,54.83048);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,36.49499);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,27.52399);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,20.82196);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,10.88967);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,18.82393);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,9.195153);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,20.10854);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,23.55482);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,23.05011);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,21.31036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,19.18889);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,17.83524);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,16.06108);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,14.85648);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,14.08928);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,13.23698);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,12.62175);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,11.90585);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,11.33003);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,10.61326);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,9.937337);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,8.919634);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,8.234524);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,7.415116);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,6.776261);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,6.268701);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,5.293284);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,4.768095);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,4.024561);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,3.486192);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,3.046434);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,2.482695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,2.257709);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,1.987779);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,1.382838);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,1.79299);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,4550.316);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,33954.83);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,56480.48);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,59556.28);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,51622.46);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,41211.16);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,33327.97);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,27950.63);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,24374.01);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,22146.35);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,20366.83);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,18634.68);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,16723.37);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,14499.14);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,12258.41);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,10296.42);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,8279.369);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,6654.661);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,5263.357);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,4085.816);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,3122.392);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,2325.209);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,1700.689);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,1210.691);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,841.2533);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,583.313);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,388.8784);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,266.1311);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,166.6942);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,101.5555);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,184.2604);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,16.81341);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,45.92642);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,59.3089);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,60.96916);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,56.77135);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,50.71507);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,45.59282);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,41.75214);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,39.00004);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,37.18184);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,35.678);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,34.13261);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,32.34443);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,30.10905);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,27.67145);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,25.3621);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,22.73334);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,20.38053);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,18.11524);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,15.96015);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,13.94279);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,12.02556);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,10.27446);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,8.668078);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,7.219521);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,6.012196);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,4.90807);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,4.054603);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,3.213577);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,2.50747);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,3.378704);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,1049.255);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,3665.456);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,3921.155);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,2837.239);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,1739.625);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,1194.543);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,911.1273);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,700.9694);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,607.5349);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,525.5467);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,489.1062);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,450.6889);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,406.4552);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,371.921);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,340.7501);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,299.2824);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,248.9406);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,227.4607);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,175.8152);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,156.129);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,145.9375);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,117.9132);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,88.99792);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,72.69505);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,58.68784);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,55.50531);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,38.83865);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,21.84793);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,9.835801);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,4.991975);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,11.7126);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,12.06115);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,35.76634);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,45.24555);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,47.00446);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,37.14703);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,29.53351);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,25.00117);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,20.96243);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,20.02018);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,17.15897);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,16.36489);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,14.64745);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,14.88969);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,14.87489);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,14.26862);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,13.51607);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,11.3342);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,11.16448);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,8.663427);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,7.260904);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,9.878928);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,7.695747);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,5.815268);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,4.133461);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,4.640762);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,5.304723);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,3.45625);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,3.076397);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,1.179725);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.9031978);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,3.896493);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,669.0812);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,2216.189);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,1793.55);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,1290.877);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,943.0641);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,721.3244);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,561.692);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,487.0288);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,453.529);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,376.5102);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,370.2495);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,312.865);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,336.1438);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,253.2954);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,225.0313);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,217.0455);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,155.4629);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,148.0675);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,109.1821);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,98.45546);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,81.2764);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,60.35904);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,73.54087);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,46.64945);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,36.25316);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,22.23551);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,23.79184);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,11.36461);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,8.834409);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,4.950162);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,9.763698);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,18.38517);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,51.37407);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,48.84549);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,42.88733);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,37.07025);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,30.38137);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,26.99161);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,26.77386);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,27.94143);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,21.63119);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,23.16456);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,21.25847);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,24.07465);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,18.24285);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,15.52059);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,16.55616);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,11.92291);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,14.37334);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,10.71157);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,10.69402);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,10.21814);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,5.111668);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,11.76234);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,7.378731);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,3.800444);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,2.671101);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,6.510446);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,1.438865);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,1.717653);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,1.247582);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,2.611261);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,3.350856);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,8.506018);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,9.021534);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(4,7.131308);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,5.327001);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(6,4.811485);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,4.12413);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,3.694533);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(9,2.319823);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(10,2.921259);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,2.319823);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,2.491662);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(13,1.288791);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(14,0.9451131);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(15,1.890226);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(16,1.288791);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(17,0.687355);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(18,0.7732744);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.687355);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(20,0.4295969);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(21,0.5155163);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(22,0.7732744);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(23,0.3436775);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(24,0.3436775);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(26,0.1718388);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(27,0.2577581);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.5365663);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.854887);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.8804116);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(4,0.7827628);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.6765298);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(6,0.6429617);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.5952669);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.563411);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(9,0.4464502);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(10,0.5009917);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.4464502);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.46269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(13,0.3327643);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(14,0.2849623);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(15,0.4029976);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(16,0.3327643);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(17,0.2430167);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(18,0.2577581);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.2430167);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(20,0.1921216);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(21,0.2104586);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(22,0.2577581);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(23,0.1718388);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(24,0.1718388);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(25,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(26,0.1215083);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(27,0.1488167);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(28,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(30,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(31,0.08591938);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,9.365972);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,37.20903);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,36.44446);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,21.59908);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,11.91454);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,6.68998);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,4.969699);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,4.523701);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,2.867134);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,3.121991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,3.440561);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,2.166279);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,3.058277);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,1.847709);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,2.038851);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,1.911423);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,1.783995);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(18,1.720281);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.7645692);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,1.146854);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(21,0.637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.9557114);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(23,0.8282832);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(25,0.3185705);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(26,0.1911423);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(27,0.3185705);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(30,0.1911423);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.7724924);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,1.539721);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.52382);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,1.173101);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.8712772);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.6528752);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.5627077);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.5368645);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.4274071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.4459987);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.4682011);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.3715138);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.4414242);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.3431109);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.3604214);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.3489765);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.3371433);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(18,0.3310682);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.2207121);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.270316);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(21,0.2014817);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.2467636);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(23,0.2297244);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.2014817);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(25,0.142469);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(26,0.1103561);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(27,0.142469);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(28,0.09010534);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(29,0.0637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(30,0.1103561);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(31,0.0637141);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,8.072266);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,31.9303);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,31.21276);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,22.60235);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,12.55686);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,7.354732);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,4.305209);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,5.560895);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,3.228907);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,4.484592);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,4.305209);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,3.228907);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,2.511372);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,1.793837);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,2.511372);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,1.614453);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,1.973221);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,1.255686);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.7175348);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,1.43507);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,1.43507);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(22,0.3587674);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.5381511);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(27,0.1793837);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.203342);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,2.393277);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,2.366234);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,2.013577);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,1.500832);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,1.148616);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.8787971);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.9987662);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.7610606);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.8969185);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.8787971);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.7610606);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.6711923);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.5672611);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.6711923);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.5381511);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.5949484);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.4746047);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.3587674);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.5073737);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.5073737);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(22,0.2536869);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2536869);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.3107017);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(27,0.1793837);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(28,0.1793837);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,2.99465);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,14.5415);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,18.28792);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,15.3512);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,10.48059);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,6.89004);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,4.823718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,3.6471);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,3.096725);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,2.892575);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,2.682908);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,2.459448);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,2.200123);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.858035);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,1.517326);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,1.262139);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,1.034541);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.9062575);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.655209);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.5531343);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.508994);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.3972636);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.391746);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.281395);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.2344959);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.1503532);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.08138386);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.04551978);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.01931142);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(30,0.01517326);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.01379387);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.06427116);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1416276);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1588273);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1455172);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1202364);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.09748864);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.08157068);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.07092788);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.06535735);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.0631663);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.06083396);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.05824544);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.05508922);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.05062558);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.0457491);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.04172504);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.03777608);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.03535647);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.03006305);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.02762221);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.02649717);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.02340898);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.02324585);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01970159);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01798501);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.01440123);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.01059528);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.007923977);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.005161195);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(30,0.00457491);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.004362006);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,1.853605);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,7.789295);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,9.365057);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,7.505365);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,5.044871);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,3.263949);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,2.15687);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,1.660618);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,1.401393);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,1.195516);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,1.11782);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.9889236);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.8596689);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.8095425);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.6631016);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.5764544);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.5023388);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.433952);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.379887);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.3208094);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.2935979);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.2338042);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.2201984);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.1604047);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.1263903);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.08736327);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.0519167);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.02649542);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.01360576);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.00751897);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.004654601);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.02576192);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.0528103);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.05790616);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.05183886);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.04250055);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.03418544);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02778955);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.02438397);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.02240008);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.02068937);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.02000578);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01881702);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01754426);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01702509);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01540847);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01436653);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01341121);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.01246495);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.01166264);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.01071749);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.01025288);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.009149464);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.008879257);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.00757841);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.006727078);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.005592861);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.004311447);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.00308003);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.002207145);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.001640774);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.001290954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.1613654);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.5114464);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.5333265);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.350081);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.1996555);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.09572526);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.09025525);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.07658021);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.05470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.04649513);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.0382901);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.06017016);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.05470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.03008508);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.03008508);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.04102511);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(19,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(20,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(22,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(24,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(25,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.02100799);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.03740066);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.0381923);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.03094308);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.02336791);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.01618052);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.01571142);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.0144723);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.01223133);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.01127672);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.01023346);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.01282832);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.01223133);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.009070994);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.009070994);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.01059264);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(19,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(20,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(22,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(24,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(25,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(27,0.003867885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.04573003);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.2561596);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.2672349);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.153267);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.0743113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.05537621);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.04108557);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.03358299);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.03072486);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.02072142);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.02036415);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.01964962);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.01536243);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.01643423);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.01500517);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.006788051);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.00857438);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.007859849);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.005001722);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.005358988);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.002500861);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.003929924);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.002858127);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(29,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.004042002);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.009566456);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.009771074);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.007399803);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.005152561);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.004447924);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.003831249);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.003463821);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.003313147);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.002720856);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.002697298);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.002649554);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.002342749);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.002423095);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.002315347);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.001557286);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.001750238);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.001597741);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.001675725);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.001336766);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.001383685);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0009452366);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.001184917);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0010105);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(29,0.0006188026);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__481 = new TH1D("VbbHcc_both_Z_dR_Bj0__481","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(1,72927);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(2,255538);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(3,231491);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(4,171844);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(5,133048);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(6,105180);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(7,84855);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(8,70678);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(9,60797);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(10,53662);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(11,48970);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(12,44872);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(13,40665);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(14,36194);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(15,32465);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(16,28304);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(17,23534);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(18,19674);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(19,16758);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(20,13814);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(21,11879);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(22,9717);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(23,8002);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(24,6422);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(25,4983);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(26,3898);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(27,2552);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(28,1687);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(29,1054);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(30,590);
   VbbHcc_both_Z_dR_Bj0__481->SetBinContent(31,948);
   VbbHcc_both_Z_dR_Bj0__481->SetEntries(1597002);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__481->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__481->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__481->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__481->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__481->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__481->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__481->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__481->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__481->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__481->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__481->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__481->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__481->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__481->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481[30] = {
   103724,
   525785.2,
   515614.9,
   367666.2,
   280226.2,
   224716.2,
   170413.8,
   146143.3,
   118520.3,
   106362.2,
   106394.3,
   86334.22,
   100988.5,
   71321.71,
   90677.62,
   47625.75,
   42793.51,
   39535.82,
   30889.28,
   26695.77,
   27749.89,
   17594.97,
   15174.32,
   12891.85,
   8653.11,
   6273.735,
   3282.029,
   2209.771,
   2772.264,
   1341.313};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481[30] = {
   2969.565,
   9874.823,
   23217.36,
   9515.293,
   8245.484,
   7846.97,
   6273.493,
   5902.272,
   5035.471,
   4868.502,
   5763.074,
   4030.474,
   20806.24,
   3995.852,
   20868.93,
   2641.238,
   2659.939,
   3227.517,
   2049.616,
   1952.22,
   2760.751,
   1573.825,
   1520.593,
   1877.859,
   1648.493,
   835.2468,
   493.3934,
   404.5021,
   1471.168,
   472.1469};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMinimum(782.2493);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMaximum(592628.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__482 = new TH1D("data_mc_ratio__482","",30,0,6);
   data_mc_ratio__482->SetBinContent(1,0.7030871);
   data_mc_ratio__482->SetBinContent(2,0.4860121);
   data_mc_ratio__482->SetBinContent(3,0.448961);
   data_mc_ratio__482->SetBinContent(4,0.4673913);
   data_mc_ratio__482->SetBinContent(5,0.4747879);
   data_mc_ratio__482->SetBinContent(6,0.4680571);
   data_mc_ratio__482->SetBinContent(7,0.497935);
   data_mc_ratio__482->SetBinContent(8,0.4836213);
   data_mc_ratio__482->SetBinContent(9,0.5129668);
   data_mc_ratio__482->SetBinContent(10,0.5045214);
   data_mc_ratio__482->SetBinContent(11,0.4602689);
   data_mc_ratio__482->SetBinContent(12,0.5197475);
   data_mc_ratio__482->SetBinContent(13,0.4026697);
   data_mc_ratio__482->SetBinContent(14,0.5074752);
   data_mc_ratio__482->SetBinContent(15,0.3580266);
   data_mc_ratio__482->SetBinContent(16,0.5943004);
   data_mc_ratio__482->SetBinContent(17,0.5499432);
   data_mc_ratio__482->SetBinContent(18,0.4976247);
   data_mc_ratio__482->SetBinContent(19,0.5425183);
   data_mc_ratio__482->SetBinContent(20,0.5174603);
   data_mc_ratio__482->SetBinContent(21,0.4280737);
   data_mc_ratio__482->SetBinContent(22,0.5522602);
   data_mc_ratio__482->SetBinContent(23,0.5273384);
   data_mc_ratio__482->SetBinContent(24,0.4981441);
   data_mc_ratio__482->SetBinContent(25,0.5758623);
   data_mc_ratio__482->SetBinContent(26,0.6213205);
   data_mc_ratio__482->SetBinContent(27,0.7775677);
   data_mc_ratio__482->SetBinContent(28,0.7634275);
   data_mc_ratio__482->SetBinContent(29,0.3801947);
   data_mc_ratio__482->SetBinContent(30,0.4398676);
   data_mc_ratio__482->SetBinContent(31,0.6501066);
   data_mc_ratio__482->SetBinError(1,0.002603544);
   data_mc_ratio__482->SetBinError(2,0.0009614337);
   data_mc_ratio__482->SetBinError(3,0.0009331287);
   data_mc_ratio__482->SetBinError(4,0.001127492);
   data_mc_ratio__482->SetBinError(5,0.001301654);
   data_mc_ratio__482->SetBinError(6,0.001443219);
   data_mc_ratio__482->SetBinError(7,0.001709361);
   data_mc_ratio__482->SetBinError(8,0.001819128);
   data_mc_ratio__482->SetBinError(9,0.002080406);
   data_mc_ratio__482->SetBinError(10,0.002177941);
   data_mc_ratio__482->SetBinError(11,0.00207992);
   data_mc_ratio__482->SetBinError(12,0.002453605);
   data_mc_ratio__482->SetBinError(13,0.001996819);
   data_mc_ratio__482->SetBinError(14,0.002667451);
   data_mc_ratio__482->SetBinError(15,0.001987044);
   data_mc_ratio__482->SetBinError(16,0.003532499);
   data_mc_ratio__482->SetBinError(17,0.003584841);
   data_mc_ratio__482->SetBinError(18,0.003547771);
   data_mc_ratio__482->SetBinError(19,0.004190861);
   data_mc_ratio__482->SetBinError(20,0.004402682);
   data_mc_ratio__482->SetBinError(21,0.003927613);
   data_mc_ratio__482->SetBinError(22,0.005602446);
   data_mc_ratio__482->SetBinError(23,0.005895086);
   data_mc_ratio__482->SetBinError(24,0.006216127);
   data_mc_ratio__482->SetBinError(25,0.008157803);
   data_mc_ratio__482->SetBinError(26,0.009951642);
   data_mc_ratio__482->SetBinError(27,0.0153921);
   data_mc_ratio__482->SetBinError(28,0.01858704);
   data_mc_ratio__482->SetBinError(29,0.01171078);
   data_mc_ratio__482->SetBinError(30,0.01810906);
   data_mc_ratio__482->SetBinError(31,0.177709);
   data_mc_ratio__482->SetMinimum(0.4);
   data_mc_ratio__482->SetMaximum(1.6);
   data_mc_ratio__482->SetEntries(1551.494);
   data_mc_ratio__482->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__482->SetLineColor(ci);
   data_mc_ratio__482->SetLineWidth(2);
   data_mc_ratio__482->SetMarkerStyle(20);
   data_mc_ratio__482->SetMarkerSize(1.2);
   data_mc_ratio__482->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__482->GetXaxis()->SetRange(1,30);
   data_mc_ratio__482->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__482->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__482->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__482->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__482->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__482->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1482[30] = {
   0.02862949,
   0.0187811,
   0.04502848,
   0.02588025,
   0.02942439,
   0.03491947,
   0.03681329,
   0.04038688,
   0.04248613,
   0.04577286,
   0.05416712,
   0.04668455,
   0.2060259,
   0.05602575,
   0.2301443,
   0.05545819,
   0.06215753,
   0.08163525,
   0.06635362,
   0.07312846,
   0.09948689,
   0.08944746,
   0.1002084,
   0.1456625,
   0.1905087,
   0.1331339,
   0.1503318,
   0.1830516,
   0.5306737,
   0.3520036};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0.3631916);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(1.636808);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}

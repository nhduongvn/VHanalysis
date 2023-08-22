void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Tue Aug 22 09:16:21 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(0,0,1,1);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.857803,6.314516,11.9424);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(8.563e+09);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(0.00143548);
   st_stack_49->SetMaximum(2.899882e+10);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetLabelSize(0.035);
   st_stack_49->GetXaxis()->SetTitleSize(0.035);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetLabelSize(0.05);
   st_stack_49->GetYaxis()->SetTitleSize(0.057);
   st_stack_49->GetYaxis()->SetTitleOffset(1.2);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetLabelSize(0.035);
   st_stack_49->GetZaxis()->SetTitleSize(0.035);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,4392.911);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,27930.44);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,20065.34);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,16588.28);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,18455.11);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,13906.26);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,6741.703);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,8448.521);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,5737.444);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,7503.248);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,7519.773);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,7249.821);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,5274.747);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5202.939);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,3243.807);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3348.068);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,4162.838);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2614.143);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2642.671);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,1143.214);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1127.788);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,577.359);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,344.5423);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,1499.902);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,270.0516);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,453.5652);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,76.42225);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,35.52411);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,57.42313);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,32.32696);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,78.50156);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,780.0401);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,3036.783);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2314.141);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,2241.679);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,3372.617);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,2574.975);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,1012.22);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1876.921);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1003.333);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1871.379);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1848.042);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1847.206);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,1042.497);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,1709.456);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,713.7296);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,831.8078);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,988.1902);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,1528.142);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,822.9753);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,447.2581);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,447.6936);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,315.7718);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,78.7028);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,622.6174);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,72.02751);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,313.0099);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,30.86566);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,14.42066);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,37.06104);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,26.81719);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,45.17137);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,16.27466);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,73.34282);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,88.12758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,86.6878);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,67.85403);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,61.80316);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,47.02895);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,40.65935);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,35.99992);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,32.07832);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,28.05719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,28.08003);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,21.9563);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,19.86834);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,19.63081);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,15.94724);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,11.48185);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,10.79617);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,7.228158);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,6.278266);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,4.788608);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,3.150348);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,3.950677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,2.732313);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.175752);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.485704);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.9390959);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.856339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.2846072);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.3455344);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.134208);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.638381);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.385537);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,3.634648);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,3.684196);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.213169);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.145165);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,2.776944);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.550485);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.466799);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.296694);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.068756);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.197065);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,1.812291);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,1.813797);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,1.726951);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.632906);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.345002);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.293052);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.032587);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.011652);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.8769265);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.5250287);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.8174784);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.6529245);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.677301);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.4953213);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.4024119);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.4019144);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.1171267);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.1320257);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.07748505);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,200.7141);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1193.836);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,1718.127);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,1671.262);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1394.137);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1131.2);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,918.072);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,775.5078);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,663.8632);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,599.7898);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,549.1632);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,483.7126);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,433.2921);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,385.5356);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,323.5953);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,272.4366);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,223.5111);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,190.1567);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,153.7523);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,121.2366);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,97.77582);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,71.03286);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,57.86526);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,39.6802);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,29.59644);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,21.74013);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,14.36592);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,10.2901);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,5.989383);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,3.519636);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,6.562374);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,3.624688);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,8.814561);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,10.60575);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,10.47022);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,9.570587);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,8.618178);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,7.770973);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,7.13147);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,6.596336);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,6.278401);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,6.017092);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,5.636855);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,5.334948);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,5.041375);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,4.610203);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.231847);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,3.832944);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,3.536055);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.17555);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,2.810946);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.521088);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.145859);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,1.938807);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.612108);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.385054);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.181577);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,0.9617837);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.8116727);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.6216569);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.4730069);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.6402897);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,55.29633);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,240.5748);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,306.7044);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,264.0421);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,179.574);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,145.6687);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,98.8304);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,99.72009);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,80.50269);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,62.57891);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,60.86806);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,72.94582);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,56.84203);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,54.938);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,38.5037);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,35.58019);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,31.63053);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,28.53087);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,24.02658);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,16.27761);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,13.28617);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,7.996181);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,6.239674);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,6.523865);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,4.199536);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,2.278089);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.391085);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,0.7167526);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,0.6385727);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.1563598);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,0.5427054);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,2.494834);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,8.8363);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,12.75691);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,13.98738);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,10.96074);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,9.972854);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,6.549464);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.415087);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,6.947665);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,5.032768);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,5.505836);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,7.189244);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,5.51105);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,6.596954);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,4.574387);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,4.551421);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,4.962595);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.858285);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.71477);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,2.816347);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,2.699493);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.229334);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.101374);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.149107);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.7990413);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.5001625);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.50604);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.2272785);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.213409);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1105631);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.352109);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,10.66399);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,39.19144);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,27.56554);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,19.05191);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,11.06863);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.25979);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,7.170504);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,10.37782);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,12.76072);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,6.822236);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,4.257167);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.576099);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,4.368297);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,3.106991);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,2.229664);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,3.676486);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.528951);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,2.895573);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.426906);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,1.53488);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,0.533956);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,0.7466232);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,2.939781);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.7888522);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.6319339);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.3446903);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.3170605);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.1639445);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.009114967);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0002367642);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,0.9581552);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,7.874139);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,3.409581);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.971958);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,1.769426);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,1.526523);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,1.337475);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,1.994865);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,7.270721);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.931803);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.226411);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.714048);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,1.167445);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.6828815);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,0.5169901);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.239635);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.334564);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,1.207032);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.3542091);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.4714701);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,0.2255744);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.2526704);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,1.485528);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2855602);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2866827);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.1498111);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.1880532);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.1095075);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.008881359);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0002367642);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,0.3022236);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.2137044);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(21,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,1.346701);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,0.8978009);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.3887592);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.3174206);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,0.532125);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,4.789125);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.3855);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,4.257);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.724875);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,2.660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.330312);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,2.1285);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.1285);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.926687);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.596375);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,2.1285);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,2.1285);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.330312);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.330312);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,1.06425);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(28,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.3762692);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.128808);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.303435);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.06425);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.9955147);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8413635);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.5949338);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.7525384);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.7525384);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8824295);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.6517174);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.7525384);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.7525384);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5949338);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.5949338);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.532125);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(28,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,0.921921);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,4.652197);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,6.097594);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.31032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,3.860802);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,2.6847);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.12138);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,1.72156);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.556686);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.589661);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.525085);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.464632);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.364333);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.064812);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,0.7927696);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6512527);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.5275971);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.3132608);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2679204);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1566304);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.167622);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.11129);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.06869754);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.05495803);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.05221013);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03847062);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.01786136);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01099161);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.005495803);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.03559036);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.0799493);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.09153029);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.08541732);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.07283235);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.06073422);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.0539877);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.04863475);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.04624727);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.04673453);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.04577545);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.04485902);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.0432958);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.03824917);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.03300343);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.02991303);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.02692383);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.0207462);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.01918618);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.01466978);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01517578);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.01236556);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.009715299);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.008689628);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008469601);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.007270264);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.00495385);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.00388612);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.002747902);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.3838636);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.124838);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,2.810612);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.349466);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,1.750316);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.23779);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,0.9452216);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.7936295);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.6751583);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.6912941);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.6110395);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.5639058);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.4989377);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.4097659);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.3405515);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.2747342);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.2174095);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.1766452);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1239913);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1031846);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.07855615);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.06539269);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.05817402);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.036518);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02420379);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.01698511);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.01486197);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.004670906);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.003821651);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0004246279);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.001698511);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01276711);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.03003773);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.03454655);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.03158558);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.0272623);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02292597);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.02003416);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.01835748);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01693195);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.01713309);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.0161079);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.01547418);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01455551);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01319083);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01202529);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01080092);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.009608232);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.008660743);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.007256044);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.006619293);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.005775563);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.005269493);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.004970142);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.003937837);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.00320587);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.002685582);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002512132);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001408331);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001273884);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0004246279);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0008492557);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.02461507);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005001722);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002500861);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.002143595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001821706);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001336766);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0009452366);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.000875119);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__133 = new TH1D("VbbHcc_tags_Z_dR_Bj0__133","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(1,3358);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(2,13132);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(3,12826);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(4,10309);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(5,8231);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(6,6652);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(7,5304);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(8,4661);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(9,3931);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(10,3450);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(11,3200);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(12,2797);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(13,2560);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(14,2347);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(15,2111);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(16,1816);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(17,1471);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(18,1219);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(19,1008);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(20,833);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(21,711);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(22,585);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(23,434);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(24,335);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(25,301);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(26,225);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(27,132);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(28,86);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(29,66);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(30,37);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(31,46);
   VbbHcc_tags_Z_dR_Bj0__133->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__133->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__133->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097[30] = {
   4678.077,
   29490.47,
   22222.09,
   18641.48,
   20117.32,
   15262.26,
   7817.622,
   9379.925,
   6535.272,
   8209.84,
   8166.34,
   7846.408,
   5795.313,
   5669.355,
   3630.234,
   3676.902,
   4432.23,
   2848.078,
   2829.647,
   1289.18,
   1244.57,
   660.4617,
   415.6646,
   1549.718,
   306.732,
   479.4693,
   94.46813,
   47.83297,
   64.35413,
   36.34915};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097[30] = {
   780.0549,
   3036.821,
   2314.207,
   2241.753,
   3372.65,
   2575.011,
   1012.276,
   1876.956,
   1003.408,
   1871.399,
   1848.061,
   1847.231,
   1042.528,
   1709.477,
   713.7617,
   831.8336,
   988.2111,
   1528.152,
   822.9905,
   447.2772,
   447.7098,
   315.782,
   78.75264,
   622.621,
   72.04901,
   313.013,
   30.88799,
   14.45372,
   37.06705,
   26.82191};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMinimum(8.574519);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMaximum(35779.07);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__134 = new TH1D("data_mc_ratio__134","",30,0,6);
   data_mc_ratio__134->SetBinContent(1,0.7178163);
   data_mc_ratio__134->SetBinContent(2,0.4452964);
   data_mc_ratio__134->SetBinContent(3,0.5771734);
   data_mc_ratio__134->SetBinContent(4,0.5530139);
   data_mc_ratio__134->SetBinContent(5,0.40915);
   data_mc_ratio__134->SetBinContent(6,0.4358463);
   data_mc_ratio__134->SetBinContent(7,0.6784672);
   data_mc_ratio__134->SetBinContent(8,0.4969123);
   data_mc_ratio__134->SetBinContent(9,0.6015052);
   data_mc_ratio__134->SetBinContent(10,0.4202274);
   data_mc_ratio__134->SetBinContent(11,0.3918524);
   data_mc_ratio__134->SetBinContent(12,0.3564688);
   data_mc_ratio__134->SetBinContent(13,0.4417363);
   data_mc_ratio__134->SetBinContent(14,0.4139801);
   data_mc_ratio__134->SetBinContent(15,0.5815052);
   data_mc_ratio__134->SetBinContent(16,0.4938941);
   data_mc_ratio__134->SetBinContent(17,0.3318871);
   data_mc_ratio__134->SetBinContent(18,0.428008);
   data_mc_ratio__134->SetBinContent(19,0.3562281);
   data_mc_ratio__134->SetBinContent(20,0.6461473);
   data_mc_ratio__134->SetBinContent(21,0.5712815);
   data_mc_ratio__134->SetBinContent(22,0.885744);
   data_mc_ratio__134->SetBinContent(23,1.044111);
   data_mc_ratio__134->SetBinContent(24,0.2161683);
   data_mc_ratio__134->SetBinContent(25,0.9813127);
   data_mc_ratio__134->SetBinContent(26,0.4692688);
   data_mc_ratio__134->SetBinContent(27,1.397297);
   data_mc_ratio__134->SetBinContent(28,1.797923);
   data_mc_ratio__134->SetBinContent(29,1.025575);
   data_mc_ratio__134->SetBinContent(30,1.017905);
   data_mc_ratio__134->SetBinContent(31,0.5364812);
   data_mc_ratio__134->SetBinError(1,0.01238719);
   data_mc_ratio__134->SetBinError(2,0.00388583);
   data_mc_ratio__134->SetBinError(3,0.005096367);
   data_mc_ratio__134->SetBinError(4,0.005446629);
   data_mc_ratio__134->SetBinError(5,0.004509789);
   data_mc_ratio__134->SetBinError(6,0.005343886);
   data_mc_ratio__134->SetBinError(7,0.009315949);
   data_mc_ratio__134->SetBinError(8,0.007278471);
   data_mc_ratio__134->SetBinError(9,0.009593738);
   data_mc_ratio__134->SetBinError(10,0.007154427);
   data_mc_ratio__134->SetBinError(11,0.006927038);
   data_mc_ratio__134->SetBinError(12,0.006740239);
   data_mc_ratio__134->SetBinError(13,0.00873058);
   data_mc_ratio__134->SetBinError(14,0.008545213);
   data_mc_ratio__134->SetBinError(15,0.01265638);
   data_mc_ratio__134->SetBinError(16,0.0115898);
   data_mc_ratio__134->SetBinError(17,0.008653346);
   data_mc_ratio__134->SetBinError(18,0.01225886);
   data_mc_ratio__134->SetBinError(19,0.01122013);
   data_mc_ratio__134->SetBinError(20,0.02238768);
   data_mc_ratio__134->SetBinError(21,0.02142473);
   data_mc_ratio__134->SetBinError(22,0.03662101);
   data_mc_ratio__134->SetBinError(23,0.05011894);
   data_mc_ratio__134->SetBinError(24,0.01181054);
   data_mc_ratio__134->SetBinError(25,0.05656192);
   data_mc_ratio__134->SetBinError(26,0.03128459);
   data_mc_ratio__134->SetBinError(27,0.1216191);
   data_mc_ratio__134->SetBinError(28,0.193875);
   data_mc_ratio__134->SetBinError(29,0.1262396);
   data_mc_ratio__134->SetBinError(30,0.1673426);
   data_mc_ratio__134->SetBinError(31,0.2935238);
   data_mc_ratio__134->SetMinimum(0.4);
   data_mc_ratio__134->SetMaximum(1.6);
   data_mc_ratio__134->SetEntries(167.9986);
   data_mc_ratio__134->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__134->SetLineColor(ci);
   data_mc_ratio__134->SetLineWidth(2);
   data_mc_ratio__134->SetMarkerStyle(20);
   data_mc_ratio__134->SetMarkerSize(1.2);
   data_mc_ratio__134->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__134->GetXaxis()->SetRange(1,30);
   data_mc_ratio__134->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__134->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__134->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__134->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__134->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__134->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1098[30] = {
   0.1667469,
   0.1029763,
   0.1041399,
   0.1202561,
   0.1676491,
   0.1687175,
   0.1294864,
   0.2001035,
   0.1535373,
   0.2279458,
   0.2263023,
   0.2354238,
   0.1798916,
   0.3015294,
   0.1966159,
   0.2262322,
   0.2229603,
   0.5365557,
   0.2908456,
   0.3469472,
   0.3597304,
   0.4781231,
   0.189462,
   0.401764,
   0.2348924,
   0.6528321,
   0.3269673,
   0.3021707,
   0.5759857,
   0.7378964};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1098,Graph_from_mc_statistical_error_fy1098,Graph_from_mc_statistical_error_fex1098,Graph_from_mc_statistical_error_fey1098);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1098 = new TH1F("Graph_Graph_from_mc_statistical_error1098","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1098->SetMinimum(0.1145243);
   Graph_Graph_from_mc_statistical_error1098->SetMaximum(1.885476);
   Graph_Graph_from_mc_statistical_error1098->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1098->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1098);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}

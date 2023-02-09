void Z_pt_VbbHcc_all()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_all/Z_pt_VbbHcc_all
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
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
   topPad->Range(116.1295,-73841.56,1562.903,7.376801e+07);
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
   st->SetMaximum(6.322269e+07);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0.3);
   st_stack_12->SetMaximum(6.638383e+07);
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
   
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_1 = new TH1D("VbbHcc_duong_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(1,1.323069e+07);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(2,2.501967e+07);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(3,9781979);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(4,642674.4);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(5,34132.99);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(6,4565.324);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(7,2797.812);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(8,3265.391);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(15,1023.624);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinContent(16,153.2016);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(1,133177.5);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(2,183394.2);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(3,114807.3);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(4,29399.28);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(5,6523.567);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(6,2324.286);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(7,1792.823);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(8,1908.41);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(15,1023.624);
   VbbHcc_duong_Z_pt_all_stack_1->SetBinError(16,153.2016);
   VbbHcc_duong_Z_pt_all_stack_1->SetEntries(37535);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_2 = new TH1D("VbbHcc_duong_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(1,104405.8);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(2,200603.7);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(3,125204.8);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(4,53524.02);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(5,24351.82);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(6,12193.32);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(7,6496.977);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(8,3669.449);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(9,2222.189);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(10,1384.672);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(11,875.5032);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(12,605.304);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(13,409.6279);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(14,293.4793);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(15,188.5632);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(16,137.3783);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(17,96.55002);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(18,68.45362);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(19,60.335);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(20,40.65057);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(21,25.98772);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(22,20.75221);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(23,14.72525);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(24,16.82197);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(25,12.72196);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(26,6.413994);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(27,4.554147);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(28,5.427787);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(29,2.628278);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(30,1.829021);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(31,0.3783847);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(32,1.578816);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(33,2.147308);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(34,1.434849);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(35,0.3840046);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(36,0.8944078);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(37,0.08081447);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(39,0.05330684);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(40,0.2403569);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinContent(41,1.189187);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(1,127.2739);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(2,177.3391);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(3,144.326);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(4,97.72457);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(5,67.90526);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(6,49.38312);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(7,36.80523);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(8,28.28394);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(9,22.43168);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(10,17.93212);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(11,14.34899);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(12,12.11768);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(13,10.08378);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(14,8.597043);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(15,6.968665);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(16,5.943375);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(17,4.944572);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(18,4.204743);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(19,3.988867);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(20,3.316405);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(21,2.685391);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(22,2.458545);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(23,1.999603);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(24,2.107963);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(25,1.958613);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(26,1.270901);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(27,1.140726);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(28,1.230292);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(29,0.8376609);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(30,0.710554);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(31,0.3865862);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(32,0.6470741);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(33,0.7635582);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(34,0.6092316);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(35,0.2989884);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(36,0.4901331);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(37,0.05714446);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(39,0.05330684);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(40,0.2403569);
   VbbHcc_duong_Z_pt_all_stack_2->SetBinError(41,0.5742967);
   VbbHcc_duong_Z_pt_all_stack_2->SetEntries(7739056);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_3 = new TH1D("VbbHcc_duong_Z_pt_all_stack_3","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(1,1650386);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(2,3120317);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(3,2046614);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(4,645880.3);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(5,226347.8);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(6,95820.48);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(7,46351.6);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(8,24496.3);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(9,14100.96);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(10,8674.194);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(11,5518.737);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(12,3610.425);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(13,2452.532);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(14,1665.148);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(15,1164.027);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(16,803.098);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(17,580.9762);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(18,405.6289);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(19,303.9991);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(20,219.6979);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(21,161.1323);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(22,114.3491);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(23,85.53923);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(24,64.47769);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(25,48.96484);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(26,36.11013);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(27,25.88632);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(28,19.19281);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(29,14.0658);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(30,10.57318);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(31,6.764066);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(32,5.557286);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(33,4.282866);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(34,3.906036);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(35,2.065335);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(36,1.520322);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(37,1.601685);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(38,1.004388);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(39,0.6211308);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(40,0.5027622);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinContent(41,2.36646);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(1,337.488);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(2,463.6985);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(3,375.0252);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(4,209.7547);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(5,124.0203);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(6,80.76973);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(7,56.30788);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(8,41.03501);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(9,31.23344);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(10,24.59755);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(11,19.66453);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(12,15.95049);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(13,13.17058);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(14,10.89705);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(15,9.097999);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(16,7.578675);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(17,6.433054);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(18,5.36775);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(19,4.665185);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(20,3.982704);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(21,3.424767);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(22,2.845325);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(23,2.471467);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(24,2.143717);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(25,1.863745);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(26,1.626648);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(27,1.367584);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(28,1.163619);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(29,1.005091);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(30,0.8517089);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(31,0.7023281);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(32,0.6268138);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(33,0.5919159);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(34,0.5352078);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(35,0.3894216);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(36,0.3186194);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(37,0.3322197);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(38,0.2728612);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(39,0.2119337);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(40,0.1955703);
   VbbHcc_duong_Z_pt_all_stack_3->SetBinError(41,0.4117749);
   VbbHcc_duong_Z_pt_all_stack_3->SetEntries(1.244387e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_4 = new TH1D("VbbHcc_duong_Z_pt_all_stack_4","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(1,16074.3);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(2,36750.1);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(3,38834.14);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(4,26935.35);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(5,11219.51);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(6,2366.209);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(7,176.3367);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(8,13.21841);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(9,2.432694);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(10,0.5721427);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinContent(15,0.4299679);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(1,73.49452);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(2,111.1814);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(3,114.2646);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(4,95.26941);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(5,61.62175);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(6,28.26294);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(7,7.758047);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(8,2.128047);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(9,0.9530687);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(10,0.404566);
   VbbHcc_duong_Z_pt_all_stack_4->SetBinError(15,0.4299679);
   VbbHcc_duong_Z_pt_all_stack_4->SetEntries(412356);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_5 = new TH1D("VbbHcc_duong_Z_pt_all_stack_5","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(1,8598.496);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(2,21234.9);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(3,21708.99);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(4,15692.94);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(5,7056.786);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(6,1677.761);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(7,184.3516);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(8,29.03033);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(9,4.795815);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(10,2.315103);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinContent(13,2.141156);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(1,101.4212);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(2,159.0562);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(3,161.1049);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(4,136.9985);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(5,91.9864);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(6,44.89534);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(7,14.7425);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(8,6.023876);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(9,2.148579);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(10,1.637025);
   VbbHcc_duong_Z_pt_all_stack_5->SetBinError(13,1.514026);
   VbbHcc_duong_Z_pt_all_stack_5->SetEntries(66594);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_6 = new TH1D("VbbHcc_duong_Z_pt_all_stack_6","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(1,583.544);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(2,869.5736);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(3,416.3204);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(4,196.6769);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(5,115.0209);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(6,59.48614);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(7,39.69939);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(8,24.45985);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(9,16.11461);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(10,11.729);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(11,7.567485);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(12,5.628992);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(13,4.036924);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(14,3.27694);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(15,1.691232);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(16,0.4729901);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(17,1.361654);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(18,0.3609628);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(19,0.5499883);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(20,0.8744319);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(21,0.1883238);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(23,0.3571118);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(24,0.3802229);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(25,0.2562129);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(27,0.139483);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinContent(29,0.1800211);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(1,9.720793);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(2,11.73023);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(3,8.089807);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(4,5.381571);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(5,4.109973);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(6,2.991684);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(7,2.372826);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(8,1.92112);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(9,1.575894);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(10,1.366792);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(11,1.040025);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(12,0.8665552);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(13,0.762659);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(14,0.7410433);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(15,0.4733955);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(16,0.2817539);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(17,0.4080784);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(18,0.1804814);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(19,0.2623614);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(20,0.2784782);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(21,0.133165);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(23,0.1785579);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(24,0.190549);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(25,0.2562129);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(27,0.0986294);
   VbbHcc_duong_Z_pt_all_stack_6->SetBinError(29,0.1272941);
   VbbHcc_duong_Z_pt_all_stack_6->SetEntries(19122);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_7 = new TH1D("VbbHcc_duong_Z_pt_all_stack_7","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(1,1070.698);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(2,1480.502);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(3,897.689);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(4,450.7555);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(5,246.4085);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(6,141.5057);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(7,82.3568);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(8,49.19078);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(9,25.9212);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(10,10.62115);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(11,7.838388);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(12,5.244048);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(13,1.941505);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(14,2.108805);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(15,0.4638131);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(16,0.6721521);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(17,0.595384);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(18,0.7360927);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(19,0.5790619);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(20,0.4115147);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(21,0.1837929);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(23,0.1336814);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(25,0.2690416);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(28,0.1673518);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinContent(29,0.272318);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(1,11.14181);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(2,12.94039);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(3,9.983745);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(4,7.008999);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(5,5.245709);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(6,3.875729);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(7,2.952658);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(8,2.380544);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(9,1.694134);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(10,1.054519);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(11,0.8870615);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(12,0.7592968);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(13,0.4289106);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(14,0.4638816);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(15,0.2507683);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(16,0.212761);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(17,0.2496413);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(18,0.3223001);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(19,0.2376141);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(20,0.1681667);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(21,0.1837929);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(23,0.09452704);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(25,0.164414);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(28,0.08973849);
   VbbHcc_duong_Z_pt_all_stack_7->SetBinError(29,0.1362035);
   VbbHcc_duong_Z_pt_all_stack_7->SetEntries(49668);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_8 = new TH1D("VbbHcc_duong_Z_pt_all_stack_8","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(1,1249.728);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(2,1514.991);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(3,766.0169);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(4,386.7757);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(5,184.4558);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(6,102.1782);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(7,65.27806);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(8,22.46304);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(9,13.678);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(10,11.9792);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(11,4.426538);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(12,2.719214);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(13,1.167939);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(14,0.8477266);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(15,0.951257);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(16,0.6054294);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(17,0.271006);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(19,0.3653552);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinContent(20,0.7795803);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(1,16.02673);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(2,17.52968);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(3,12.45997);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(4,8.853642);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(5,6.117579);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(6,4.534468);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(7,3.59702);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(8,2.118544);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(9,1.659477);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(10,1.52692);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(11,0.9740466);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(12,0.758612);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(13,0.5243852);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(14,0.4252813);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(15,0.4265272);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(16,0.3520952);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(17,0.271006);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(19,0.2583451);
   VbbHcc_duong_Z_pt_all_stack_8->SetBinError(20,0.3922125);
   VbbHcc_duong_Z_pt_all_stack_8->SetEntries(22006);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_9 = new TH1D("VbbHcc_duong_Z_pt_all_stack_9","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(1,340.5336);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(2,534.599);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(3,328.168);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(4,168.1372);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(5,87.73116);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(6,48.04068);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(7,27.54329);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(8,15.74177);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(9,9.000777);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(10,4.939051);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(11,2.709544);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(12,1.653598);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(13,0.8998268);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(14,0.5677375);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(15,0.3030705);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(16,0.2282274);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(17,0.1684508);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(18,0.1067903);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(19,0.06625594);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(20,0.07196052);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(21,0.0359361);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(22,0.01983844);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(23,0.01511778);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(24,0.008348556);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(25,0.01573793);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(26,0.01178741);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(27,0.005345617);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(28,0.003291556);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(31,0.00202901);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(32,0.001911414);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(38,0.00197611);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinContent(39,0.001772933);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(1,0.7584986);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(2,0.9488903);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(3,0.7419539);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(4,0.5299709);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(5,0.3825421);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(6,0.2832069);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(7,0.2145986);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(8,0.1620162);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(9,0.1222648);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(10,0.09069134);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(11,0.06665044);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(12,0.05179255);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(13,0.03825871);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(14,0.03022814);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(15,0.02274093);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(16,0.01940446);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(17,0.0167769);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(18,0.01316197);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(19,0.01042885);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(20,0.01110654);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(21,0.007611813);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(22,0.005791406);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(23,0.004915021);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(24,0.003778558);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(25,0.005309565);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(26,0.004218378);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(27,0.003315153);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(28,0.002327481);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(31,0.00202901);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(32,0.001911414);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(38,0.00197611);
   VbbHcc_duong_Z_pt_all_stack_9->SetBinError(39,0.001772933);
   VbbHcc_duong_Z_pt_all_stack_9->SetEntries(1020933);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_10 = new TH1D("VbbHcc_duong_Z_pt_all_stack_10","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(1,52.09721);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(2,115.8274);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(3,119.0395);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(4,80.27915);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(5,45.78693);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(6,25.80794);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(7,15.40011);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(8,9.201601);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(9,5.64268);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(10,3.583066);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(11,2.326073);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(12,1.522462);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(13,0.9624082);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(14,0.6453541);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(15,0.4496753);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(16,0.3476047);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(17,0.2237341);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(18,0.1744503);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(19,0.1386249);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(20,0.1272683);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(21,0.0918003);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(22,0.05217891);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(23,0.05052452);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(24,0.04975922);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(25,0.03541505);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(26,0.02308953);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(27,0.0224303);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(28,0.00869832);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(29,0.01388417);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(30,0.008545512);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(31,0.003116613);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(32,0.006187049);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(33,0.005918559);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(34,0.007917002);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(36,0.002381654);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(37,0.0005699509);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(38,0.001161995);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(39,0.002415029);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinContent(41,0.005093784);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(1,0.1454173);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(2,0.2167525);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(3,0.2197129);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(4,0.1802744);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(5,0.1359296);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(6,0.1020479);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(7,0.07878302);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(8,0.06086231);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(9,0.04763728);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(10,0.03801863);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(11,0.03059552);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(12,0.02477087);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(13,0.01974155);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(14,0.01613084);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(15,0.01345332);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(16,0.01186072);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(17,0.009515285);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(18,0.008432702);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(19,0.007486494);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(20,0.007185043);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(21,0.006032726);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(22,0.004595773);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(23,0.004511504);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(24,0.004474225);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(25,0.003790941);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(26,0.003055285);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(27,0.003065357);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(28,0.001904913);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(29,0.002329778);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(30,0.001873202);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(31,0.001073384);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(32,0.001559385);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(33,0.001534087);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(34,0.001753982);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(36,0.0009751793);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(37,0.0003298842);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(38,0.000672556);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(39,0.000988521);
   VbbHcc_duong_Z_pt_all_stack_10->SetBinError(41,0.001477027);
   VbbHcc_duong_Z_pt_all_stack_10->SetEntries(1213185);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_11 = new TH1D("VbbHcc_duong_Z_pt_all_stack_11","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(1,5.229059);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(2,9.455774);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(3,5.765866);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(4,2.638207);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(5,1.281858);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(6,0.653857);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(7,0.375174);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(8,0.2426981);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(9,0.1244724);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(10,0.04313696);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(11,0.03251986);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(12,0.01801077);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(13,0.009543538);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(14,0.005683643);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(16,0.003028333);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(17,0.003092332);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(18,0.004341433);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinContent(19,0.00305224);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(1,0.09368113);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(2,0.1261025);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(3,0.0978885);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(4,0.06627875);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(5,0.04582199);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(6,0.03241969);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(7,0.0251094);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(8,0.01990837);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(9,0.01415137);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(10,0.00837595);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(11,0.007166589);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(12,0.005405655);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(13,0.003518308);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(14,0.002908445);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(16,0.002141355);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(17,0.002185225);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(18,0.002518006);
   VbbHcc_duong_Z_pt_all_stack_11->SetBinError(19,0.00215826);
   VbbHcc_duong_Z_pt_all_stack_11->SetEntries(18245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_pt_all_stack_12 = new TH1D("VbbHcc_duong_Z_pt_all_stack_12","",40,0,2000);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(1,18623.96);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(2,47109.39);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(3,50981.48);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(4,33231.65);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(5,16289.82);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(6,8851.256);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(7,4883.348);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(8,2838.884);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(9,1452.002);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(10,853.2576);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(11,537.6032);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(12,338.2354);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(13,298.0262);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(14,202.5528);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(15,151.7655);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(16,46.82076);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(17,98.73632);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(18,84.56129);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(19,71.25656);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(20,22.88873);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(21,15.47776);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(22,8.569034);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(23,32.7127);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(24,8.812637);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(25,31.80712);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(26,9.357595);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(27,5.431438);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(33,8.223389);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinContent(35,8.058298);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(1,288.5775);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(2,459.2653);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(3,478.0398);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(4,384.3211);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(5,266.8949);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(6,196.0788);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(7,145.2698);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(8,109.8097);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(9,78.50672);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(10,59.67545);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(11,47.725);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(12,36.45031);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(13,34.35925);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(14,28.615);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(15,25.38597);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(16,13.53103);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(17,19.85569);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(18,18.92317);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(19,16.99848);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(20,9.352528);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(21,7.745135);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(22,6.059222);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(23,11.59189);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(24,5.657224);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(25,10.6695);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(26,4.952943);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(27,3.840606);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(33,5.814814);
   VbbHcc_duong_Z_pt_all_stack_12->SetBinError(35,5.698077);
   VbbHcc_duong_Z_pt_all_stack_12->SetEntries(47321);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_pt_all__23 = new TH1D("VbbHcc_duong_Z_pt_all__23","",40,0,2000);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(1,2032614);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(2,4860543);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(3,4875426);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(4,3218117);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(5,1896122);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(6,1205980);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(7,821847);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(8,552159);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(9,351555);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(10,217688);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(11,134024);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(12,84588);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(13,54969);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(14,35912);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(15,24152);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(16,16223);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(17,11298);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(18,7851);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(19,5623);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(20,4022);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(21,2751);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(22,2042);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(23,1589);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(24,1126);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(25,824);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(26,644);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(27,466);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(28,345);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(29,248);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(30,171);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(31,119);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(32,90);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(33,75);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(34,62);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(35,58);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(36,37);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(37,26);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(38,18);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(39,8);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(40,8);
   VbbHcc_duong_Z_pt_all__23->SetBinContent(41,39);
   VbbHcc_duong_Z_pt_all__23->SetEntries(2.042146e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_all__23->SetLineColor(ci);
   VbbHcc_duong_Z_pt_all__23->SetLineWidth(2);
   VbbHcc_duong_Z_pt_all__23->SetMarkerStyle(20);
   VbbHcc_duong_Z_pt_all__23->SetMarkerSize(1.2);
   VbbHcc_duong_Z_pt_all__23->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_all__23->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all__23->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all__23->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all__23->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_all__23->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all__23->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_all__23->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_all__23->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_all__23->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_pt_all_fx1023[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_all_fy1023[40] = {
   1.503208e+07,
   2.845021e+07,
   1.206786e+07,
   1419224,
   320079.4,
   125852,
   61121.07,
   34433.57,
   17852.86,
   10957.91,
   6956.744,
   4570.751,
   3171.345,
   2168.633,
   2532.268,
   1142.828,
   778.8858,
   560.0264,
   437.293,
   285.502,
   203.0977,
   143.866,
   133.5336,
   90.55063,
   94.07033,
   51.9166,
   36.03916,
   24.79994,
   17.1603,
   12.41074,
   7.147596,
   7.1442,
   14.65948,
   5.348803,
   10.50764,
   2.417112,
   1.68307,
   1.007526,
   0.6786256,
   0.7431191};
   Double_t Graph_from_VbbHcc_duong_Z_pt_all_fex1023[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_all_fey1023[40] = {
   133178.4,
   183395.5,
   114809.1,
   29403.18,
   6531.5,
   2335.075,
   1800.041,
   1912.23,
   87.49665,
   67.05166,
   53.60117,
   41.61475,
   38.19738,
   31.81854,
   1024.003,
   154.1,
   21.45656,
   20.11754,
   18.07804,
   10.70468,
   8.887017,
   7.132308,
   12.02162,
   6.409334,
   11.01094,
   5.365896,
   4.234566,
   1.695786,
   1.321607,
   1.109188,
   0.8016975,
   0.900892,
   5.894527,
   0.8109338,
   5.719189,
   0.5845937,
   0.3370987,
   0.2728692,
   0.2185444,
   0.3098696};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_Z_pt_all_fx1023,Graph_from_VbbHcc_duong_Z_pt_all_fy1023,Graph_from_VbbHcc_duong_Z_pt_all_fex1023,Graph_from_VbbHcc_duong_Z_pt_all_fey1023);
   gre->SetName("Graph_from_VbbHcc_duong_Z_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_pt_all1023 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_pt_all1023","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->SetMinimum(0.3899246);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->SetMaximum(3.149697e+07);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt_all1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_pt_all1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_pt_all","MC unc. (stat.)","fl");

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
   data_mc_ratio__24->SetBinContent(1,0.1352184);
   data_mc_ratio__24->SetBinContent(2,0.1708438);
   data_mc_ratio__24->SetBinContent(3,0.404001);
   data_mc_ratio__24->SetBinContent(4,2.267519);
   data_mc_ratio__24->SetBinContent(5,5.923911);
   data_mc_ratio__24->SetBinContent(6,9.582524);
   data_mc_ratio__24->SetBinContent(7,13.44621);
   data_mc_ratio__24->SetBinContent(8,16.03548);
   data_mc_ratio__24->SetBinContent(9,19.69181);
   data_mc_ratio__24->SetBinContent(10,19.86584);
   data_mc_ratio__24->SetBinContent(11,19.26533);
   data_mc_ratio__24->SetBinContent(12,18.50637);
   data_mc_ratio__24->SetBinContent(13,17.33302);
   data_mc_ratio__24->SetBinContent(14,16.55974);
   data_mc_ratio__24->SetBinContent(15,9.537695);
   data_mc_ratio__24->SetBinContent(16,14.19549);
   data_mc_ratio__24->SetBinContent(17,14.50534);
   data_mc_ratio__24->SetBinContent(18,14.01898);
   data_mc_ratio__24->SetBinContent(19,12.85865);
   data_mc_ratio__24->SetBinContent(20,14.08747);
   data_mc_ratio__24->SetBinContent(21,13.54521);
   data_mc_ratio__24->SetBinContent(22,14.19376);
   data_mc_ratio__24->SetBinContent(23,11.89963);
   data_mc_ratio__24->SetBinContent(24,12.43503);
   data_mc_ratio__24->SetBinContent(25,8.759404);
   data_mc_ratio__24->SetBinContent(26,12.40451);
   data_mc_ratio__24->SetBinContent(27,12.93038);
   data_mc_ratio__24->SetBinContent(28,13.91133);
   data_mc_ratio__24->SetBinContent(29,14.45196);
   data_mc_ratio__24->SetBinContent(30,13.77839);
   data_mc_ratio__24->SetBinContent(31,16.64895);
   data_mc_ratio__24->SetBinContent(32,12.59763);
   data_mc_ratio__24->SetBinContent(33,5.116143);
   data_mc_ratio__24->SetBinContent(34,11.59138);
   data_mc_ratio__24->SetBinContent(35,5.519795);
   data_mc_ratio__24->SetBinContent(36,15.30752);
   data_mc_ratio__24->SetBinContent(37,15.44796);
   data_mc_ratio__24->SetBinContent(38,17.86554);
   data_mc_ratio__24->SetBinContent(39,11.78853);
   data_mc_ratio__24->SetBinContent(40,10.76543);
   data_mc_ratio__24->SetBinContent(41,10.95278);
   data_mc_ratio__24->SetBinError(1,9.484365e-05);
   data_mc_ratio__24->SetBinError(2,7.7492e-05);
   data_mc_ratio__24->SetBinError(3,0.0001829684);
   data_mc_ratio__24->SetBinError(4,0.001264009);
   data_mc_ratio__24->SetBinError(5,0.004302049);
   data_mc_ratio__24->SetBinError(6,0.008725892);
   data_mc_ratio__24->SetBinError(7,0.01483216);
   data_mc_ratio__24->SetBinError(8,0.02157993);
   data_mc_ratio__24->SetBinError(9,0.03321153);
   data_mc_ratio__24->SetBinError(10,0.04257843);
   data_mc_ratio__24->SetBinError(11,0.05262417);
   data_mc_ratio__24->SetBinError(12,0.06363072);
   data_mc_ratio__24->SetBinError(13,0.0739291);
   data_mc_ratio__24->SetBinError(14,0.08738438);
   data_mc_ratio__24->SetBinError(15,0.06137152);
   data_mc_ratio__24->SetBinError(16,0.1114512);
   data_mc_ratio__24->SetBinError(17,0.1364668);
   data_mc_ratio__24->SetBinError(18,0.1582173);
   data_mc_ratio__24->SetBinError(19,0.1714792);
   data_mc_ratio__24->SetBinError(20,0.2221324);
   data_mc_ratio__24->SetBinError(21,0.25825);
   data_mc_ratio__24->SetBinError(22,0.3141013);
   data_mc_ratio__24->SetBinError(23,0.2985186);
   data_mc_ratio__24->SetBinError(24,0.3705764);
   data_mc_ratio__24->SetBinError(25,0.3051483);
   data_mc_ratio__24->SetBinError(26,0.4888062);
   data_mc_ratio__24->SetBinError(27,0.5989882);
   data_mc_ratio__24->SetBinError(28,0.7489606);
   data_mc_ratio__24->SetBinError(29,0.9177003);
   data_mc_ratio__24->SetBinError(30,1.05366);
   data_mc_ratio__24->SetBinError(31,1.526207);
   data_mc_ratio__24->SetBinError(32,1.327907);
   data_mc_ratio__24->SetBinError(33,0.5907613);
   data_mc_ratio__24->SetBinError(34,1.472107);
   data_mc_ratio__24->SetBinError(35,0.7247845);
   data_mc_ratio__24->SetBinError(36,2.516541);
   data_mc_ratio__24->SetBinError(37,3.029595);
   data_mc_ratio__24->SetBinError(38,4.210947);
   data_mc_ratio__24->SetBinError(39,4.167876);
   data_mc_ratio__24->SetBinError(40,3.806156);
   data_mc_ratio__24->SetBinError(41,2.793014);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(1130.998);
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
   0.008859609,
   0.006446193,
   0.009513633,
   0.02071779,
   0.02040587,
   0.01855413,
   0.02945041,
   0.05553389,
   0.004900988,
   0.006119021,
   0.007704922,
   0.009104577,
   0.01204453,
   0.01467217,
   0.4043817,
   0.134841,
   0.02754776,
   0.03592249,
   0.0413408,
   0.03749423,
   0.04375736,
   0.04957605,
   0.0900269,
   0.07078177,
   0.1170501,
   0.1033561,
   0.117499,
   0.06837863,
   0.07701534,
   0.08937324,
   0.1121632,
   0.1261012,
   0.4020966,
   0.1516103,
   0.5442888,
   0.2418563,
   0.200288,
   0.2708308,
   0.3220396,
   0.4169851};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.3468535);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.653147);
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

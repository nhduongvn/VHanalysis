void H_pt_VbbHcc_18()
{
//=========Macro generated from canvas: H_pt_VbbHcc_18/H_pt_VbbHcc_18
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_18 = new TCanvas("H_pt_VbbHcc_18", "H_pt_VbbHcc_18",0,0,600,600);
   H_pt_VbbHcc_18->SetHighLightColor(2);
   H_pt_VbbHcc_18->Range(0,0,1,1);
   H_pt_VbbHcc_18->SetFillColor(0);
   H_pt_VbbHcc_18->SetFillStyle(4000);
   H_pt_VbbHcc_18->SetBorderMode(0);
   H_pt_VbbHcc_18->SetBorderSize(2);
   H_pt_VbbHcc_18->SetFrameFillStyle(1000);
   H_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-40433.99,1562.903,4.039356e+07);
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
   st->SetMaximum(3.46192e+07);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0.01);
   st_stack_15->SetMaximum(3.635016e+07);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetLabelSize(0.035);
   st_stack_15->GetXaxis()->SetTitleSize(0.035);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetLabelSize(0.05);
   st_stack_15->GetYaxis()->SetTitleSize(0.057);
   st_stack_15->GetYaxis()->SetTitleOffset(1.2);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetLabelSize(0.035);
   st_stack_15->GetZaxis()->SetTitleSize(0.035);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_duong_H_pt_stack_1 = new TH1D("VbbHcc_duong_H_pt_stack_1","",40,0,2000);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(1,8654558);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(2,1.357441e+07);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(3,4926227);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(4,349942.9);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(5,12118.08);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(8,1248.5);
   VbbHcc_duong_H_pt_stack_1->SetBinError(1,125748.9);
   VbbHcc_duong_H_pt_stack_1->SetBinError(2,197200);
   VbbHcc_duong_H_pt_stack_1->SetBinError(3,100395.9);
   VbbHcc_duong_H_pt_stack_1->SetBinError(4,24395.67);
   VbbHcc_duong_H_pt_stack_1->SetBinError(5,4429.709);
   VbbHcc_duong_H_pt_stack_1->SetBinError(8,1248.5);
   VbbHcc_duong_H_pt_stack_1->SetEntries(16494);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_1,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_2 = new TH1D("VbbHcc_duong_H_pt_stack_2","",40,0,2000);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(1,66481.01);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(2,118810);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(3,66905.29);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(4,27608.82);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(5,12652.08);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(6,6510.36);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(7,3671.441);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(8,2112.067);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(9,1312.036);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(10,816.4334);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(11,525.3061);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(12,370.6022);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(13,218.0983);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(14,164.9009);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(15,113.0372);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(16,85.36628);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(17,55.26872);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(18,48.72497);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(19,26.9149);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(20,22.31921);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(21,12.59739);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(22,13.82051);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(23,9.621216);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(24,5.061059);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(25,2.940899);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(26,4.271206);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(27,3.189002);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(28,0.6832855);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(29,2.008177);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(30,0.4497);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(31,1.964688);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(32,0.9523251);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(33,1.057281);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(34,0.5905913);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(35,0.2287554);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(36,0.3007676);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(37,-0.05673641);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(38,0.6981947);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(39,0.2522055);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(41,0.7459009);
   VbbHcc_duong_H_pt_stack_2->SetBinError(1,116.8399);
   VbbHcc_duong_H_pt_stack_2->SetBinError(2,154.3392);
   VbbHcc_duong_H_pt_stack_2->SetBinError(3,120.1716);
   VbbHcc_duong_H_pt_stack_2->SetBinError(4,77.87325);
   VbbHcc_duong_H_pt_stack_2->SetBinError(5,55.99978);
   VbbHcc_duong_H_pt_stack_2->SetBinError(6,39.10043);
   VbbHcc_duong_H_pt_stack_2->SetBinError(7,30.18583);
   VbbHcc_duong_H_pt_stack_2->SetBinError(8,23.83247);
   VbbHcc_duong_H_pt_stack_2->SetBinError(9,18.65684);
   VbbHcc_duong_H_pt_stack_2->SetBinError(10,14.78774);
   VbbHcc_duong_H_pt_stack_2->SetBinError(11,11.82557);
   VbbHcc_duong_H_pt_stack_2->SetBinError(12,11.39988);
   VbbHcc_duong_H_pt_stack_2->SetBinError(13,7.493257);
   VbbHcc_duong_H_pt_stack_2->SetBinError(14,6.635705);
   VbbHcc_duong_H_pt_stack_2->SetBinError(15,5.940145);
   VbbHcc_duong_H_pt_stack_2->SetBinError(16,5.79907);
   VbbHcc_duong_H_pt_stack_2->SetBinError(17,3.84195);
   VbbHcc_duong_H_pt_stack_2->SetBinError(18,3.717183);
   VbbHcc_duong_H_pt_stack_2->SetBinError(19,2.812152);
   VbbHcc_duong_H_pt_stack_2->SetBinError(20,2.511256);
   VbbHcc_duong_H_pt_stack_2->SetBinError(21,1.745225);
   VbbHcc_duong_H_pt_stack_2->SetBinError(22,2.01047);
   VbbHcc_duong_H_pt_stack_2->SetBinError(23,1.638902);
   VbbHcc_duong_H_pt_stack_2->SetBinError(24,1.176745);
   VbbHcc_duong_H_pt_stack_2->SetBinError(25,0.9600642);
   VbbHcc_duong_H_pt_stack_2->SetBinError(26,1.12363);
   VbbHcc_duong_H_pt_stack_2->SetBinError(27,0.9781338);
   VbbHcc_duong_H_pt_stack_2->SetBinError(28,0.4529345);
   VbbHcc_duong_H_pt_stack_2->SetBinError(29,0.6831678);
   VbbHcc_duong_H_pt_stack_2->SetBinError(30,0.2723608);
   VbbHcc_duong_H_pt_stack_2->SetBinError(31,0.8770744);
   VbbHcc_duong_H_pt_stack_2->SetBinError(32,0.5218729);
   VbbHcc_duong_H_pt_stack_2->SetBinError(33,0.5351165);
   VbbHcc_duong_H_pt_stack_2->SetBinError(34,0.4176164);
   VbbHcc_duong_H_pt_stack_2->SetBinError(35,0.2287554);
   VbbHcc_duong_H_pt_stack_2->SetBinError(36,0.3007676);
   VbbHcc_duong_H_pt_stack_2->SetBinError(37,0.05673641);
   VbbHcc_duong_H_pt_stack_2->SetBinError(38,0.497558);
   VbbHcc_duong_H_pt_stack_2->SetBinError(39,0.2522055);
   VbbHcc_duong_H_pt_stack_2->SetBinError(41,0.4868932);
   VbbHcc_duong_H_pt_stack_2->SetEntries(3869618);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_2,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_3 = new TH1D("VbbHcc_duong_H_pt_stack_3","",40,0,2000);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(1,1028321);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(2,1824374);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(3,1020924);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(4,375848.5);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(5,155898.8);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(6,74554.51);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(7,39428.62);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(8,22093.82);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(9,12783.84);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(10,7682.764);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(11,4826.787);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(12,3094.095);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(13,2048.225);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(14,1352.666);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(15,890.8287);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(16,619.2483);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(17,429.4248);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(18,304.883);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(19,223.7137);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(20,152.752);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(21,109.5772);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(22,81.28454);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(23,56.98473);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(24,41.27561);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(25,30.57172);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(26,22.24734);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(27,17.71283);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(28,12.50143);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(29,12.48671);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(30,5.176757);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(31,5.181523);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(32,3.378624);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(33,3.004755);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(34,2.11563);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(35,1.19842);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(36,1.668953);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(37,1.06142);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(38,0.5744211);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(39,0.4117296);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(40,0.2604904);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(41,1.705044);
   VbbHcc_duong_H_pt_stack_3->SetBinError(1,293.7405);
   VbbHcc_duong_H_pt_stack_3->SetBinError(2,391.4185);
   VbbHcc_duong_H_pt_stack_3->SetBinError(3,293.3856);
   VbbHcc_duong_H_pt_stack_3->SetBinError(4,177.1848);
   VbbHcc_duong_H_pt_stack_3->SetBinError(5,114.084);
   VbbHcc_duong_H_pt_stack_3->SetBinError(6,78.96495);
   VbbHcc_duong_H_pt_stack_3->SetBinError(7,57.5773);
   VbbHcc_duong_H_pt_stack_3->SetBinError(8,43.2817);
   VbbHcc_duong_H_pt_stack_3->SetBinError(9,32.81757);
   VbbHcc_duong_H_pt_stack_3->SetBinError(10,24.81246);
   VbbHcc_duong_H_pt_stack_3->SetBinError(11,20.08743);
   VbbHcc_duong_H_pt_stack_3->SetBinError(12,15.79794);
   VbbHcc_duong_H_pt_stack_3->SetBinError(13,13.37345);
   VbbHcc_duong_H_pt_stack_3->SetBinError(14,10.45969);
   VbbHcc_duong_H_pt_stack_3->SetBinError(15,9.104554);
   VbbHcc_duong_H_pt_stack_3->SetBinError(16,7.127675);
   VbbHcc_duong_H_pt_stack_3->SetBinError(17,6.038596);
   VbbHcc_duong_H_pt_stack_3->SetBinError(18,5.377893);
   VbbHcc_duong_H_pt_stack_3->SetBinError(19,4.28551);
   VbbHcc_duong_H_pt_stack_3->SetBinError(20,3.807676);
   VbbHcc_duong_H_pt_stack_3->SetBinError(21,3.022225);
   VbbHcc_duong_H_pt_stack_3->SetBinError(22,2.499106);
   VbbHcc_duong_H_pt_stack_3->SetBinError(23,2.233386);
   VbbHcc_duong_H_pt_stack_3->SetBinError(24,2.000709);
   VbbHcc_duong_H_pt_stack_3->SetBinError(25,1.555836);
   VbbHcc_duong_H_pt_stack_3->SetBinError(26,1.312278);
   VbbHcc_duong_H_pt_stack_3->SetBinError(27,1.171198);
   VbbHcc_duong_H_pt_stack_3->SetBinError(28,0.9968042);
   VbbHcc_duong_H_pt_stack_3->SetBinError(29,1.517715);
   VbbHcc_duong_H_pt_stack_3->SetBinError(30,0.6378994);
   VbbHcc_duong_H_pt_stack_3->SetBinError(31,0.6372352);
   VbbHcc_duong_H_pt_stack_3->SetBinError(32,0.4902626);
   VbbHcc_duong_H_pt_stack_3->SetBinError(33,0.4856877);
   VbbHcc_duong_H_pt_stack_3->SetBinError(34,0.4426906);
   VbbHcc_duong_H_pt_stack_3->SetBinError(35,0.3312706);
   VbbHcc_duong_H_pt_stack_3->SetBinError(36,0.3493302);
   VbbHcc_duong_H_pt_stack_3->SetBinError(37,0.2846473);
   VbbHcc_duong_H_pt_stack_3->SetBinError(38,0.2072428);
   VbbHcc_duong_H_pt_stack_3->SetBinError(39,0.2022363);
   VbbHcc_duong_H_pt_stack_3->SetBinError(40,0.1335006);
   VbbHcc_duong_H_pt_stack_3->SetBinError(41,0.3552567);
   VbbHcc_duong_H_pt_stack_3->SetEntries(6.805031e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_3,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_4 = new TH1D("VbbHcc_duong_H_pt_stack_4","",40,0,2000);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(1,9862.987);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(2,21468.67);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(3,20794.5);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(4,14323.53);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(5,6224.474);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(6,1419.004);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(7,127.3466);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(8,8.998885);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(9,0.979414);
   VbbHcc_duong_H_pt_stack_4->SetBinError(1,81.51849);
   VbbHcc_duong_H_pt_stack_4->SetBinError(2,119.8389);
   VbbHcc_duong_H_pt_stack_4->SetBinError(3,115.9084);
   VbbHcc_duong_H_pt_stack_4->SetBinError(4,94.70317);
   VbbHcc_duong_H_pt_stack_4->SetBinError(5,61.9649);
   VbbHcc_duong_H_pt_stack_4->SetBinError(6,28.82919);
   VbbHcc_duong_H_pt_stack_4->SetBinError(7,8.412886);
   VbbHcc_duong_H_pt_stack_4->SetBinError(8,2.23741);
   VbbHcc_duong_H_pt_stack_4->SetBinError(9,0.6939267);
   VbbHcc_duong_H_pt_stack_4->SetEntries(135370);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_4,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_5 = new TH1D("VbbHcc_duong_H_pt_stack_5","",40,0,2000);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(1,4897.508);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(2,11409.5);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(3,11480.21);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(4,8851.859);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(5,4237.137);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(6,1193.6);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(7,139.7164);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(8,21.6873);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(9,11.93934);
   VbbHcc_duong_H_pt_stack_5->SetBinError(1,114.5961);
   VbbHcc_duong_H_pt_stack_5->SetBinError(2,172.4148);
   VbbHcc_duong_H_pt_stack_5->SetBinError(3,174.1625);
   VbbHcc_duong_H_pt_stack_5->SetBinError(4,156.4986);
   VbbHcc_duong_H_pt_stack_5->SetBinError(5,104.4223);
   VbbHcc_duong_H_pt_stack_5->SetBinError(6,66.58552);
   VbbHcc_duong_H_pt_stack_5->SetBinError(7,18.86521);
   VbbHcc_duong_H_pt_stack_5->SetBinError(8,7.75126);
   VbbHcc_duong_H_pt_stack_5->SetBinError(9,5.364446);
   VbbHcc_duong_H_pt_stack_5->SetEntries(17571);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_5,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_6 = new TH1D("VbbHcc_duong_H_pt_stack_6","",40,0,2000);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(1,342.6153);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(2,501.8898);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(3,242.1019);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(4,108.8465);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(5,52.18979);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(6,31.4769);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(7,20.3927);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(8,11.1031);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(9,10.92748);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(10,3.033597);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(11,3.586589);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(12,2.935953);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(13,1.055613);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(15,1.207856);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(16,1.187017);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(18,0.3562396);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(19,0.4808949);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(23,0.3562396);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(30,0.3336772);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(32,0.3617082);
   VbbHcc_duong_H_pt_stack_6->SetBinError(1,11.43807);
   VbbHcc_duong_H_pt_stack_6->SetBinError(2,14.38937);
   VbbHcc_duong_H_pt_stack_6->SetBinError(3,9.586277);
   VbbHcc_duong_H_pt_stack_6->SetBinError(4,6.49577);
   VbbHcc_duong_H_pt_stack_6->SetBinError(5,4.489239);
   VbbHcc_duong_H_pt_stack_6->SetBinError(6,3.417191);
   VbbHcc_duong_H_pt_stack_6->SetBinError(7,2.812776);
   VbbHcc_duong_H_pt_stack_6->SetBinError(8,2.034027);
   VbbHcc_duong_H_pt_stack_6->SetBinError(9,2.053788);
   VbbHcc_duong_H_pt_stack_6->SetBinError(10,1.021849);
   VbbHcc_duong_H_pt_stack_6->SetBinError(11,1.144047);
   VbbHcc_duong_H_pt_stack_6->SetBinError(12,1.058104);
   VbbHcc_duong_H_pt_stack_6->SetBinError(13,0.6095777);
   VbbHcc_duong_H_pt_stack_6->SetBinError(15,0.6981144);
   VbbHcc_duong_H_pt_stack_6->SetBinError(16,0.6931611);
   VbbHcc_duong_H_pt_stack_6->SetBinError(18,0.3562396);
   VbbHcc_duong_H_pt_stack_6->SetBinError(19,0.4808949);
   VbbHcc_duong_H_pt_stack_6->SetBinError(23,0.3562396);
   VbbHcc_duong_H_pt_stack_6->SetBinError(30,0.3336772);
   VbbHcc_duong_H_pt_stack_6->SetBinError(32,0.3617082);
   VbbHcc_duong_H_pt_stack_6->SetEntries(3697);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_6,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_7 = new TH1D("VbbHcc_duong_H_pt_stack_7","",40,0,2000);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(1,617.8639);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(2,909.8261);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(3,493.7527);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(4,229.9199);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(5,122.3791);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(6,69.84555);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(7,46.70908);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(8,27.62226);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(9,13.75414);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(10,9.479219);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(11,2.450999);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(12,2.331085);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(13,1.574479);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(14,0.6390767);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(15,1.877794);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(16,0.4845288);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(17,0.4583707);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(18,0.5002551);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(20,0.4290119);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(21,0.4772037);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(24,0.2352945);
   VbbHcc_duong_H_pt_stack_7->SetBinError(1,12.38386);
   VbbHcc_duong_H_pt_stack_7->SetBinError(2,15.61108);
   VbbHcc_duong_H_pt_stack_7->SetBinError(3,11.15901);
   VbbHcc_duong_H_pt_stack_7->SetBinError(4,7.478485);
   VbbHcc_duong_H_pt_stack_7->SetBinError(5,5.618272);
   VbbHcc_duong_H_pt_stack_7->SetBinError(6,4.191354);
   VbbHcc_duong_H_pt_stack_7->SetBinError(7,3.376562);
   VbbHcc_duong_H_pt_stack_7->SetBinError(8,2.575819);
   VbbHcc_duong_H_pt_stack_7->SetBinError(9,1.834362);
   VbbHcc_duong_H_pt_stack_7->SetBinError(10,1.586202);
   VbbHcc_duong_H_pt_stack_7->SetBinError(11,0.7466524);
   VbbHcc_duong_H_pt_stack_7->SetBinError(12,0.7425972);
   VbbHcc_duong_H_pt_stack_7->SetBinError(13,0.5901414);
   VbbHcc_duong_H_pt_stack_7->SetBinError(14,0.3696898);
   VbbHcc_duong_H_pt_stack_7->SetBinError(15,0.6886938);
   VbbHcc_duong_H_pt_stack_7->SetBinError(16,0.356858);
   VbbHcc_duong_H_pt_stack_7->SetBinError(17,0.324124);
   VbbHcc_duong_H_pt_stack_7->SetBinError(18,0.353947);
   VbbHcc_duong_H_pt_stack_7->SetBinError(20,0.3037721);
   VbbHcc_duong_H_pt_stack_7->SetBinError(21,0.3386425);
   VbbHcc_duong_H_pt_stack_7->SetBinError(24,0.2352945);
   VbbHcc_duong_H_pt_stack_7->SetEntries(11097);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_7,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_8 = new TH1D("VbbHcc_duong_H_pt_stack_8","",40,0,2000);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(1,733.3932);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(2,925.5039);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(3,431.2722);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(4,194.2209);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(5,96.41896);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(6,49.71468);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(7,30.47708);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(8,21.63289);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(9,9.497919);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(10,4.129735);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(11,2.024428);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(12,1.11322);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(13,1.801082);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(14,0.6115908);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(15,0.2020662);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(16,0.7853196);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(17,0.2993306);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(21,0.2220633);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(22,0.2263142);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(30,0.1706549);
   VbbHcc_duong_H_pt_stack_8->SetBinError(1,13.7595);
   VbbHcc_duong_H_pt_stack_8->SetBinError(2,18.60648);
   VbbHcc_duong_H_pt_stack_8->SetBinError(3,10.25826);
   VbbHcc_duong_H_pt_stack_8->SetBinError(4,7.04496);
   VbbHcc_duong_H_pt_stack_8->SetBinError(5,5.435755);
   VbbHcc_duong_H_pt_stack_8->SetBinError(6,3.476098);
   VbbHcc_duong_H_pt_stack_8->SetBinError(7,2.828973);
   VbbHcc_duong_H_pt_stack_8->SetBinError(8,2.302436);
   VbbHcc_duong_H_pt_stack_8->SetBinError(9,1.490975);
   VbbHcc_duong_H_pt_stack_8->SetBinError(10,1.019766);
   VbbHcc_duong_H_pt_stack_8->SetBinError(11,0.685709);
   VbbHcc_duong_H_pt_stack_8->SetBinError(12,0.5724773);
   VbbHcc_duong_H_pt_stack_8->SetBinError(13,0.6922172);
   VbbHcc_duong_H_pt_stack_8->SetBinError(14,0.432522);
   VbbHcc_duong_H_pt_stack_8->SetBinError(15,0.2020662);
   VbbHcc_duong_H_pt_stack_8->SetBinError(16,0.4582727);
   VbbHcc_duong_H_pt_stack_8->SetBinError(17,0.2993306);
   VbbHcc_duong_H_pt_stack_8->SetBinError(21,0.2220633);
   VbbHcc_duong_H_pt_stack_8->SetBinError(22,0.2263142);
   VbbHcc_duong_H_pt_stack_8->SetBinError(30,0.1706549);
   VbbHcc_duong_H_pt_stack_8->SetEntries(10770);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_8,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_9 = new TH1D("VbbHcc_duong_H_pt_stack_9","",40,0,2000);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(1,192.6403);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(2,314.9601);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(3,181.0449);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(4,89.12136);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(5,47.55353);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(6,26.68346);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(7,15.9131);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(8,9.49018);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(9,5.702709);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(10,2.927244);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(11,1.845764);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(12,1.034569);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(13,0.6604277);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(14,0.4006265);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(15,0.282824);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(16,0.1806214);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(17,0.1307666);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(18,0.07739376);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(19,0.04986715);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(20,0.05837917);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(21,0.04437044);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(22,0.02620307);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(23,0.01289501);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(24,0.005891404);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(25,0.01221007);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(26,0.01704877);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(27,0.006194624);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(28,0.00571829);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(29,0.00244522);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(31,0.005806363);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(32,0.002455652);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(33,0.002368554);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(34,0.002315574);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(35,0.004804363);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(36,0.001892769);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(37,0.001892769);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(39,0.002142527);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(41,0.002971343);
   VbbHcc_duong_H_pt_stack_9->SetBinError(1,0.7625312);
   VbbHcc_duong_H_pt_stack_9->SetBinError(2,1.008434);
   VbbHcc_duong_H_pt_stack_9->SetBinError(3,0.7559348);
   VbbHcc_duong_H_pt_stack_9->SetBinError(4,0.5143902);
   VbbHcc_duong_H_pt_stack_9->SetBinError(5,0.3903031);
   VbbHcc_duong_H_pt_stack_9->SetBinError(6,0.3232494);
   VbbHcc_duong_H_pt_stack_9->SetBinError(7,0.2271311);
   VbbHcc_duong_H_pt_stack_9->SetBinError(8,0.1633082);
   VbbHcc_duong_H_pt_stack_9->SetBinError(9,0.1669753);
   VbbHcc_duong_H_pt_stack_9->SetBinError(10,0.09585472);
   VbbHcc_duong_H_pt_stack_9->SetBinError(11,0.08020953);
   VbbHcc_duong_H_pt_stack_9->SetBinError(12,0.05394627);
   VbbHcc_duong_H_pt_stack_9->SetBinError(13,0.04333645);
   VbbHcc_duong_H_pt_stack_9->SetBinError(14,0.03288572);
   VbbHcc_duong_H_pt_stack_9->SetBinError(15,0.02736223);
   VbbHcc_duong_H_pt_stack_9->SetBinError(16,0.02198102);
   VbbHcc_duong_H_pt_stack_9->SetBinError(17,0.01860572);
   VbbHcc_duong_H_pt_stack_9->SetBinError(18,0.01443701);
   VbbHcc_duong_H_pt_stack_9->SetBinError(19,0.0113606);
   VbbHcc_duong_H_pt_stack_9->SetBinError(20,0.01261988);
   VbbHcc_duong_H_pt_stack_9->SetBinError(21,0.01088439);
   VbbHcc_duong_H_pt_stack_9->SetBinError(22,0.008045904);
   VbbHcc_duong_H_pt_stack_9->SetBinError(23,0.005783964);
   VbbHcc_duong_H_pt_stack_9->SetBinError(24,0.004204533);
   VbbHcc_duong_H_pt_stack_9->SetBinError(25,0.005626317);
   VbbHcc_duong_H_pt_stack_9->SetBinError(26,0.007075424);
   VbbHcc_duong_H_pt_stack_9->SetBinError(27,0.004517622);
   VbbHcc_duong_H_pt_stack_9->SetBinError(28,0.00408852);
   VbbHcc_duong_H_pt_stack_9->SetBinError(29,0.00244522);
   VbbHcc_duong_H_pt_stack_9->SetBinError(31,0.004150724);
   VbbHcc_duong_H_pt_stack_9->SetBinError(32,0.002455652);
   VbbHcc_duong_H_pt_stack_9->SetBinError(33,0.002368554);
   VbbHcc_duong_H_pt_stack_9->SetBinError(34,0.002315574);
   VbbHcc_duong_H_pt_stack_9->SetBinError(35,0.003416986);
   VbbHcc_duong_H_pt_stack_9->SetBinError(36,0.001892769);
   VbbHcc_duong_H_pt_stack_9->SetBinError(37,0.001892769);
   VbbHcc_duong_H_pt_stack_9->SetBinError(39,0.002142527);
   VbbHcc_duong_H_pt_stack_9->SetBinError(41,0.002971343);
   VbbHcc_duong_H_pt_stack_9->SetEntries(353785);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_9,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_10 = new TH1D("VbbHcc_duong_H_pt_stack_10","",40,0,2000);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(1,32.48512);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(2,68.53453);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(3,60.38453);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(4,37.68371);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(5,21.17486);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(6,12.15214);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(7,7.152159);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(8,4.57069);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(9,2.828623);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(10,1.824961);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(11,1.218603);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(12,0.8460962);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(13,0.5816294);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(14,0.4287675);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(15,0.3094436);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(16,0.2100986);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(17,0.1616916);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(18,0.126291);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(19,0.09080203);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(20,0.06262425);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(21,0.04291019);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(22,0.04188389);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(23,0.02765727);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(24,0.02696622);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(25,0.0181285);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(26,0.01780172);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(27,0.009721744);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(28,0.00999928);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(29,0.008009957);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(30,0.006840057);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(31,0.003256027);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(32,0.002606344);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(33,0.003876775);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(34,0.001903798);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(35,0.001273433);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(37,0.001259376);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(38,0.0006089301);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(41,0.003187252);
   VbbHcc_duong_H_pt_stack_10->SetBinError(1,0.1439953);
   VbbHcc_duong_H_pt_stack_10->SetBinError(2,0.2091066);
   VbbHcc_duong_H_pt_stack_10->SetBinError(3,0.1962716);
   VbbHcc_duong_H_pt_stack_10->SetBinError(4,0.1549324);
   VbbHcc_duong_H_pt_stack_10->SetBinError(5,0.1160387);
   VbbHcc_duong_H_pt_stack_10->SetBinError(6,0.08784037);
   VbbHcc_duong_H_pt_stack_10->SetBinError(7,0.0673802);
   VbbHcc_duong_H_pt_stack_10->SetBinError(8,0.05384726);
   VbbHcc_duong_H_pt_stack_10->SetBinError(9,0.0423547);
   VbbHcc_duong_H_pt_stack_10->SetBinError(10,0.03402068);
   VbbHcc_duong_H_pt_stack_10->SetBinError(11,0.02780633);
   VbbHcc_duong_H_pt_stack_10->SetBinError(12,0.02322344);
   VbbHcc_duong_H_pt_stack_10->SetBinError(13,0.01927097);
   VbbHcc_duong_H_pt_stack_10->SetBinError(14,0.01655752);
   VbbHcc_duong_H_pt_stack_10->SetBinError(15,0.0140249);
   VbbHcc_duong_H_pt_stack_10->SetBinError(16,0.01159444);
   VbbHcc_duong_H_pt_stack_10->SetBinError(17,0.01013298);
   VbbHcc_duong_H_pt_stack_10->SetBinError(18,0.008948834);
   VbbHcc_duong_H_pt_stack_10->SetBinError(19,0.007605398);
   VbbHcc_duong_H_pt_stack_10->SetBinError(20,0.006363401);
   VbbHcc_duong_H_pt_stack_10->SetBinError(21,0.005232673);
   VbbHcc_duong_H_pt_stack_10->SetBinError(22,0.005153425);
   VbbHcc_duong_H_pt_stack_10->SetBinError(23,0.004188181);
   VbbHcc_duong_H_pt_stack_10->SetBinError(24,0.004153882);
   VbbHcc_duong_H_pt_stack_10->SetBinError(25,0.003372377);
   VbbHcc_duong_H_pt_stack_10->SetBinError(26,0.003334576);
   VbbHcc_duong_H_pt_stack_10->SetBinError(27,0.002461956);
   VbbHcc_duong_H_pt_stack_10->SetBinError(28,0.002588599);
   VbbHcc_duong_H_pt_stack_10->SetBinError(29,0.002244995);
   VbbHcc_duong_H_pt_stack_10->SetBinError(30,0.002068039);
   VbbHcc_duong_H_pt_stack_10->SetBinError(31,0.001456465);
   VbbHcc_duong_H_pt_stack_10->SetBinError(32,0.001303785);
   VbbHcc_duong_H_pt_stack_10->SetBinError(33,0.001584849);
   VbbHcc_duong_H_pt_stack_10->SetBinError(34,0.001099387);
   VbbHcc_duong_H_pt_stack_10->SetBinError(35,0.0009005672);
   VbbHcc_duong_H_pt_stack_10->SetBinError(37,0.0008908399);
   VbbHcc_duong_H_pt_stack_10->SetBinError(38,0.0006089301);
   VbbHcc_duong_H_pt_stack_10->SetBinError(41,0.001427895);
   VbbHcc_duong_H_pt_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_10,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_11 = new TH1D("VbbHcc_duong_H_pt_stack_11","",40,0,2000);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(1,3.058628);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(2,5.411875);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(3,3.348126);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(4,1.605813);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(5,0.7258623);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(6,0.3839412);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(7,0.2566028);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(8,0.1241924);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(9,0.06186145);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(10,0.04063708);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(11,0.02618055);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(12,0.01323707);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(13,0.004707417);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(14,0.01112049);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(17,0.002900369);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(18,0.002496094);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(19,0.005373985);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(25,0.002551435);
   VbbHcc_duong_H_pt_stack_11->SetBinError(1,0.08988858);
   VbbHcc_duong_H_pt_stack_11->SetBinError(2,0.1205077);
   VbbHcc_duong_H_pt_stack_11->SetBinError(3,0.09427875);
   VbbHcc_duong_H_pt_stack_11->SetBinError(4,0.0656227);
   VbbHcc_duong_H_pt_stack_11->SetBinError(5,0.04354389);
   VbbHcc_duong_H_pt_stack_11->SetBinError(6,0.03144365);
   VbbHcc_duong_H_pt_stack_11->SetBinError(7,0.02592329);
   VbbHcc_duong_H_pt_stack_11->SetBinError(8,0.01735704);
   VbbHcc_duong_H_pt_stack_11->SetBinError(9,0.01256888);
   VbbHcc_duong_H_pt_stack_11->SetBinError(10,0.009901065);
   VbbHcc_duong_H_pt_stack_11->SetBinError(11,0.008340304);
   VbbHcc_duong_H_pt_stack_11->SetBinError(12,0.005480989);
   VbbHcc_duong_H_pt_stack_11->SetBinError(13,0.003328646);
   VbbHcc_duong_H_pt_stack_11->SetBinError(14,0.005606798);
   VbbHcc_duong_H_pt_stack_11->SetBinError(17,0.002900369);
   VbbHcc_duong_H_pt_stack_11->SetBinError(18,0.002496094);
   VbbHcc_duong_H_pt_stack_11->SetBinError(19,0.003829101);
   VbbHcc_duong_H_pt_stack_11->SetBinError(25,0.002551435);
   VbbHcc_duong_H_pt_stack_11->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_11,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_12 = new TH1D("VbbHcc_duong_H_pt_stack_12","",40,0,2000);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(1,10830.35);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(2,25443.08);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(3,27256.37);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(4,17754.17);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(5,8698.739);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(6,4794.122);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(7,2792.68);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(8,1709.626);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(9,1055.034);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(10,574.6203);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(11,464.0441);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(12,351.4846);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(13,152.6434);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(14,143.3853);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(15,123.846);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(16,77.81337);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(17,24.76609);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(18,24.56101);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(19,21.92834);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(20,9.264666);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(21,15.8889);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(22,8.548381);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(23,20.58124);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(24,6.945887);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(25,11.14182);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(27,9.09646);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(28,6.554211);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(35,6.766361);
   VbbHcc_duong_H_pt_stack_12->SetBinError(1,274.7089);
   VbbHcc_duong_H_pt_stack_12->SetBinError(2,422.5087);
   VbbHcc_duong_H_pt_stack_12->SetBinError(3,439.2469);
   VbbHcc_duong_H_pt_stack_12->SetBinError(4,353.2876);
   VbbHcc_duong_H_pt_stack_12->SetBinError(5,244.63);
   VbbHcc_duong_H_pt_stack_12->SetBinError(6,183.6587);
   VbbHcc_duong_H_pt_stack_12->SetBinError(7,139.5524);
   VbbHcc_duong_H_pt_stack_12->SetBinError(8,110.4177);
   VbbHcc_duong_H_pt_stack_12->SetBinError(9,86.97759);
   VbbHcc_duong_H_pt_stack_12->SetBinError(10,62.59352);
   VbbHcc_duong_H_pt_stack_12->SetBinError(11,56.88768);
   VbbHcc_duong_H_pt_stack_12->SetBinError(12,56.39636);
   VbbHcc_duong_H_pt_stack_12->SetBinError(13,32.16074);
   VbbHcc_duong_H_pt_stack_12->SetBinError(14,31.17131);
   VbbHcc_duong_H_pt_stack_12->SetBinError(15,30.62288);
   VbbHcc_duong_H_pt_stack_12->SetBinError(16,24.28935);
   VbbHcc_duong_H_pt_stack_12->SetBinError(17,12.55823);
   VbbHcc_duong_H_pt_stack_12->SetBinError(18,12.54255);
   VbbHcc_duong_H_pt_stack_12->SetBinError(19,12.76962);
   VbbHcc_duong_H_pt_stack_12->SetBinError(20,9.264666);
   VbbHcc_duong_H_pt_stack_12->SetBinError(21,11.38048);
   VbbHcc_duong_H_pt_stack_12->SetBinError(22,8.548381);
   VbbHcc_duong_H_pt_stack_12->SetBinError(23,12.11126);
   VbbHcc_duong_H_pt_stack_12->SetBinError(24,6.945887);
   VbbHcc_duong_H_pt_stack_12->SetBinError(25,9.38391);
   VbbHcc_duong_H_pt_stack_12->SetBinError(27,9.09646);
   VbbHcc_duong_H_pt_stack_12->SetBinError(28,6.554211);
   VbbHcc_duong_H_pt_stack_12->SetBinError(35,6.766361);
   VbbHcc_duong_H_pt_stack_12->SetEntries(16335);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_pt__29 = new TH1D("VbbHcc_duong_H_pt__29","",40,0,2000);
   VbbHcc_duong_H_pt__29->SetBinContent(1,1519724);
   VbbHcc_duong_H_pt__29->SetBinContent(2,3177502);
   VbbHcc_duong_H_pt__29->SetBinContent(3,2980064);
   VbbHcc_duong_H_pt__29->SetBinContent(4,2141251);
   VbbHcc_duong_H_pt__29->SetBinContent(5,1343503);
   VbbHcc_duong_H_pt__29->SetBinContent(6,804373);
   VbbHcc_duong_H_pt__29->SetBinContent(7,507858);
   VbbHcc_duong_H_pt__29->SetBinContent(8,338099);
   VbbHcc_duong_H_pt__29->SetBinContent(9,214187);
   VbbHcc_duong_H_pt__29->SetBinContent(10,130365);
   VbbHcc_duong_H_pt__29->SetBinContent(11,81194);
   VbbHcc_duong_H_pt__29->SetBinContent(12,50614);
   VbbHcc_duong_H_pt__29->SetBinContent(13,32128);
   VbbHcc_duong_H_pt__29->SetBinContent(14,20528);
   VbbHcc_duong_H_pt__29->SetBinContent(15,13670);
   VbbHcc_duong_H_pt__29->SetBinContent(16,9387);
   VbbHcc_duong_H_pt__29->SetBinContent(17,6277);
   VbbHcc_duong_H_pt__29->SetBinContent(18,4343);
   VbbHcc_duong_H_pt__29->SetBinContent(19,3057);
   VbbHcc_duong_H_pt__29->SetBinContent(20,2119);
   VbbHcc_duong_H_pt__29->SetBinContent(21,1455);
   VbbHcc_duong_H_pt__29->SetBinContent(22,1057);
   VbbHcc_duong_H_pt__29->SetBinContent(23,770);
   VbbHcc_duong_H_pt__29->SetBinContent(24,565);
   VbbHcc_duong_H_pt__29->SetBinContent(25,428);
   VbbHcc_duong_H_pt__29->SetBinContent(26,325);
   VbbHcc_duong_H_pt__29->SetBinContent(27,241);
   VbbHcc_duong_H_pt__29->SetBinContent(28,173);
   VbbHcc_duong_H_pt__29->SetBinContent(29,124);
   VbbHcc_duong_H_pt__29->SetBinContent(30,94);
   VbbHcc_duong_H_pt__29->SetBinContent(31,78);
   VbbHcc_duong_H_pt__29->SetBinContent(32,62);
   VbbHcc_duong_H_pt__29->SetBinContent(33,59);
   VbbHcc_duong_H_pt__29->SetBinContent(34,38);
   VbbHcc_duong_H_pt__29->SetBinContent(35,29);
   VbbHcc_duong_H_pt__29->SetBinContent(36,27);
   VbbHcc_duong_H_pt__29->SetBinContent(37,21);
   VbbHcc_duong_H_pt__29->SetBinContent(38,11);
   VbbHcc_duong_H_pt__29->SetBinContent(39,13);
   VbbHcc_duong_H_pt__29->SetBinContent(40,8);
   VbbHcc_duong_H_pt__29->SetBinContent(41,33);
   VbbHcc_duong_H_pt__29->SetEntries(1.338585e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt__29->SetLineColor(ci);
   VbbHcc_duong_H_pt__29->SetLineWidth(2);
   VbbHcc_duong_H_pt__29->SetMarkerStyle(20);
   VbbHcc_duong_H_pt__29->SetMarkerSize(1.2);
   VbbHcc_duong_H_pt__29->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__29->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__29->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__29->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__29->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__29->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__29->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__29->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__29->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_pt_fx1029[40] = {
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
   Double_t Graph_from_VbbHcc_duong_H_pt_fy1029[40] = {
   9776873,
   1.557864e+07,
   6074999,
   794991.2,
   200169.8,
   88661.85,
   46280.71,
   27269.25,
   15206.6,
   9095.253,
   5827.29,
   3824.456,
   2424.645,
   1663.043,
   1131.592,
   785.2756,
   510.5127,
   379.2316,
   273.1838,
   184.8859,
   138.85,
   103.9478,
   87.58398,
   53.55071,
   44.68732,
   26.5534,
   30.01421,
   19.75464,
   14.50534,
   6.137629,
   7.155273,
   4.697719,
   4.068281,
   2.71044,
   8.199614,
   1.971614,
   1.007835,
   1.273225,
   0.6660776,
   0.2604904};
   Double_t Graph_from_VbbHcc_duong_H_pt_fex1029[40] = {
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
   Double_t Graph_from_VbbHcc_duong_H_pt_fey1029[40] = {
   125749.7,
   197201.1,
   100397.6,
   24399.68,
   4439.948,
   216.3354,
   155.4195,
   1254.379,
   95.02245,
   68.97024,
   61.49716,
   59.6832,
   35.64425,
   33.54718,
   32.51065,
   25.98507,
   14.46131,
   14.15299,
   13.76839,
   10.33109,
   11.91046,
   9.133107,
   12.42915,
   7.327231,
   9.560344,
   1.727622,
   9.22356,
   6.645034,
   1.664388,
   0.7883933,
   1.084134,
   0.8022152,
   0.7226689,
   0.6085927,
   6.778328,
   0.4609733,
   0.2902542,
   0.5389934,
   0.3232827,
   0.1335006};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_H_pt_fx1029,Graph_from_VbbHcc_duong_H_pt_fy1029,Graph_from_VbbHcc_duong_H_pt_fex1029,Graph_from_VbbHcc_duong_H_pt_fey1029);
   gre->SetName("Graph_from_VbbHcc_duong_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_pt1029 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_pt1029","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->SetMinimum(0.1142909);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->SetMaximum(1.735343e+07);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_pt1029->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_pt1029);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_pt","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_pt_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__30 = new TH1D("data_mc_ratio__30","",40,0,2000);
   data_mc_ratio__30->SetBinContent(1,0.1554407);
   data_mc_ratio__30->SetBinContent(2,0.2039653);
   data_mc_ratio__30->SetBinContent(3,0.4905456);
   data_mc_ratio__30->SetBinContent(4,2.693427);
   data_mc_ratio__30->SetBinContent(5,6.711817);
   data_mc_ratio__30->SetBinContent(6,9.072368);
   data_mc_ratio__30->SetBinContent(7,10.97343);
   data_mc_ratio__30->SetBinContent(8,12.39855);
   data_mc_ratio__30->SetBinContent(9,14.08514);
   data_mc_ratio__30->SetBinContent(10,14.3333);
   data_mc_ratio__30->SetBinContent(11,13.93341);
   data_mc_ratio__30->SetBinContent(12,13.2343);
   data_mc_ratio__30->SetBinContent(13,13.2506);
   data_mc_ratio__30->SetBinContent(14,12.34364);
   data_mc_ratio__30->SetBinContent(15,12.08033);
   data_mc_ratio__30->SetBinContent(16,11.95377);
   data_mc_ratio__30->SetBinContent(17,12.29548);
   data_mc_ratio__30->SetBinContent(18,11.4521);
   data_mc_ratio__30->SetBinContent(19,11.19027);
   data_mc_ratio__30->SetBinContent(20,11.46112);
   data_mc_ratio__30->SetBinContent(21,10.47893);
   data_mc_ratio__30->SetBinContent(22,10.16856);
   data_mc_ratio__30->SetBinContent(23,8.791562);
   data_mc_ratio__30->SetBinContent(24,10.55075);
   data_mc_ratio__30->SetBinContent(25,9.57766);
   data_mc_ratio__30->SetBinContent(26,12.23949);
   data_mc_ratio__30->SetBinContent(27,8.029529);
   data_mc_ratio__30->SetBinContent(28,8.757436);
   data_mc_ratio__30->SetBinContent(29,8.548575);
   data_mc_ratio__30->SetBinContent(30,15.31536);
   data_mc_ratio__30->SetBinContent(31,10.90105);
   data_mc_ratio__30->SetBinContent(32,13.19789);
   data_mc_ratio__30->SetBinContent(33,14.50244);
   data_mc_ratio__30->SetBinContent(34,14.01986);
   data_mc_ratio__30->SetBinContent(35,3.536752);
   data_mc_ratio__30->SetBinContent(36,13.69437);
   data_mc_ratio__30->SetBinContent(37,20.83674);
   data_mc_ratio__30->SetBinContent(38,8.639481);
   data_mc_ratio__30->SetBinContent(39,19.51724);
   data_mc_ratio__30->SetBinContent(40,30.7113);
   data_mc_ratio__30->SetBinContent(41,13.43045);
   data_mc_ratio__30->SetBinError(1,0.0001260905);
   data_mc_ratio__30->SetBinError(2,0.000114423);
   data_mc_ratio__30->SetBinError(3,0.0002841624);
   data_mc_ratio__30->SetBinError(4,0.001840651);
   data_mc_ratio__30->SetBinError(5,0.005790563);
   data_mc_ratio__30->SetBinError(6,0.01011561);
   data_mc_ratio__30->SetBinError(7,0.01539824);
   data_mc_ratio__30->SetBinError(8,0.02132302);
   data_mc_ratio__30->SetBinError(9,0.03043438);
   data_mc_ratio__30->SetBinError(10,0.03969774);
   data_mc_ratio__30->SetBinError(11,0.04889848);
   data_mc_ratio__30->SetBinError(12,0.05882551);
   data_mc_ratio__30->SetBinError(13,0.07392541);
   data_mc_ratio__30->SetBinError(14,0.08615288);
   data_mc_ratio__30->SetBinError(15,0.1033224);
   data_mc_ratio__30->SetBinError(16,0.123379);
   data_mc_ratio__30->SetBinError(17,0.1551921);
   data_mc_ratio__30->SetBinError(18,0.1737762);
   data_mc_ratio__30->SetBinError(19,0.2023917);
   data_mc_ratio__30->SetBinError(20,0.2489784);
   data_mc_ratio__30->SetBinError(21,0.274717);
   data_mc_ratio__30->SetBinError(22,0.3127678);
   data_mc_ratio__30->SetBinError(23,0.3168259);
   data_mc_ratio__30->SetBinError(24,0.4438733);
   data_mc_ratio__30->SetBinError(25,0.4629537);
   data_mc_ratio__30->SetBinError(26,0.6789246);
   data_mc_ratio__30->SetBinError(27,0.5172274);
   data_mc_ratio__30->SetBinError(28,0.6658155);
   data_mc_ratio__30->SetBinError(29,0.7676847);
   data_mc_ratio__30->SetBinError(30,1.579659);
   data_mc_ratio__30->SetBinError(31,1.234301);
   data_mc_ratio__30->SetBinError(32,1.676134);
   data_mc_ratio__30->SetBinError(33,1.888057);
   data_mc_ratio__30->SetBinError(34,2.274322);
   data_mc_ratio__30->SetBinError(35,0.6567583);
   data_mc_ratio__30->SetBinError(36,2.635482);
   data_mc_ratio__30->SetBinError(37,4.546949);
   data_mc_ratio__30->SetBinError(38,2.604901);
   data_mc_ratio__30->SetBinError(39,5.41311);
   data_mc_ratio__30->SetBinError(40,10.85808);
   data_mc_ratio__30->SetBinError(41,4.039764);
   data_mc_ratio__30->SetMinimum(0.4);
   data_mc_ratio__30->SetMaximum(1.6);
   data_mc_ratio__30->SetEntries(301.017);
   data_mc_ratio__30->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__30->SetLineColor(ci);
   data_mc_ratio__30->SetLineWidth(2);
   data_mc_ratio__30->SetMarkerStyle(20);
   data_mc_ratio__30->SetMarkerSize(1.2);
   data_mc_ratio__30->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__30->GetXaxis()->SetRange(7,30);
   data_mc_ratio__30->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__30->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__30->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__30->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__30->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__30->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1030[40] = {
   0.01286196,
   0.01265842,
   0.01652636,
   0.03069176,
   0.02218091,
   0.002440006,
   0.003358193,
   0.04599976,
   0.006248765,
   0.007583104,
   0.0105533,
   0.01560567,
   0.01470081,
   0.02017217,
   0.02873002,
   0.03309038,
   0.02832704,
   0.03732018,
   0.05039972,
   0.05587817,
   0.0857793,
   0.08786241,
   0.1419112,
   0.1368279,
   0.2139386,
   0.06506218,
   0.3073064,
   0.3363784,
   0.1147431,
   0.1284524,
   0.1515155,
   0.1707669,
   0.177635,
   0.2245365,
   0.8266642,
   0.233805,
   0.2879976,
   0.4233294,
   0.4853529,
   0.5124969};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1030,Graph_from_mc_statistical_error_fy1030,Graph_from_mc_statistical_error_fex1030,Graph_from_mc_statistical_error_fey1030);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1030 = new TH1F("Graph_Graph_from_mc_statistical_error1030","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1030->SetMinimum(0.008002974);
   Graph_Graph_from_mc_statistical_error1030->SetMaximum(1.991997);
   Graph_Graph_from_mc_statistical_error1030->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1030->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1030);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->SetSelected(H_pt_VbbHcc_18);
}

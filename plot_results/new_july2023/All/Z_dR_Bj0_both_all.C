void Z_dR_Bj0_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Fri Jul 14 13:38:54 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(0,0,1,1);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3092.1,6.314516,3089308);
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
   st->SetMaximum(2647684);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",30,0,6);
   st_stack_244->SetMinimum(0.3);
   st_stack_244->SetMaximum(2780068);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,30);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.2");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,259119.3);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,1085622);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,962790.2);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,674205.8);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,481814.5);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,374669.4);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,304639.2);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,244958.5);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,199320.2);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,177546);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,169178.2);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,145109.7);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,154386.3);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,120052.4);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,133004.5);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,90189.57);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,73766.23);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,65447.6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,51803.52);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,46254.76);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,48058.39);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,35727.63);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,27661.59);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,26011.98);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,17519.87);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,13383.12);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,7327.481);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(28,7797.704);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,4504.111);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(30,2170.366);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,2962.859);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,4204.647);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,13195.89);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,28757.73);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,23632.14);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,10463.71);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,10006.51);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,16645.59);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,7670.061);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,6310.56);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,6240.22);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,7038.401);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,5209.95);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,21107.84);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,5009.428);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,21026.22);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,4095.334);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,3896.605);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,3744.411);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,2649.041);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,2522.026);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,3249.149);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,2511.604);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,1948.373);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,2312.638);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,1912.76);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,1956.574);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,647.3319);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(28,1898.562);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,1536.978);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(30,489.4499);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,642.7988);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,1204.147);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,6392.287);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,8581.531);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,8077.48);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,6857.181);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,5604.411);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,4729.675);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,3963.394);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,3411.307);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,3006.788);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,2701.101);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,2451.732);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,2200.803);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,1939.504);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,1681.436);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,1456.486);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,1193.996);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,1001.526);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,807.1083);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,659.5433);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,552.5119);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,412.9523);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,320.3149);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,238.7329);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,176.5201);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,128.8703);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,89.45864);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,62.84919);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,44.14004);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,28.49237);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,45.0011);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,14.45928);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,31.82714);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,36.6417);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,35.57456);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,32.76333);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,29.58193);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,27.2923);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,24.8628);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,23.0662);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,21.61117);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,20.4208);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,19.52247);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,18.4695);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,17.39509);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,16.25845);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,15.2126);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,13.79173);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,12.6629);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,11.36669);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,10.32028);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,9.65351);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,8.256069);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,7.353932);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,6.290283);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,5.435214);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,4.745677);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,3.95667);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,3.43102);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,2.780987);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,2.3109);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,2.862462);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(1,12012.08);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(2,85715.82);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(3,137532);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(4,141615.9);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(5,122069);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(6,97945.43);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(7,79504.36);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(8,66659.07);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(9,58311.34);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(10,52809.07);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(11,48525.98);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(12,44534.1);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(13,39844.33);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(14,34550.85);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(15,29256.66);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(16,24589.24);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(17,19865.46);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(18,15949.79);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(19,12664.05);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(20,9883.047);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(21,7565.594);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(22,5665.818);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(23,4163.267);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(24,3007.04);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(25,2125.756);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(26,1464.795);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(27,984.3662);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(28,637.8995);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(29,416.1147);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(30,258.241);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(31,450.0424);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(1,27.536);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(2,73.55224);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(3,93.31912);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(4,94.79744);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(5,88.03289);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(6,78.83745);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(7,71.01908);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(8,65.02809);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(9,60.84396);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(10,57.91107);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(11,55.54856);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(12,53.23552);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(13,50.35982);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(14,46.88132);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(15,43.12518);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(16,39.53421);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(17,35.52374);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(18,31.81476);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(19,28.3408);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(20,25.0269);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(21,21.87728);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(22,18.9347);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(23,16.21195);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(24,13.76433);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(25,11.56975);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(26,9.604322);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(27,7.867582);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(28,6.328517);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(29,5.107785);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(30,4.025196);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(31,5.309584);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(1,2491.324);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(2,8620.466);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(3,8821.779);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(4,6138.886);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(5,3797.398);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(6,2719.463);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(7,2057.984);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(8,1630.25);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(9,1422.878);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(10,1258.368);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(11,1132.126);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(12,1038.935);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(13,945.0967);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(14,833.7797);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(15,768.5439);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(16,680.8556);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(17,586.1465);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(18,516.3494);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(19,430.6106);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(20,384.7912);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(21,315.0874);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(22,273.319);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(23,216.4971);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(24,176.8952);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(25,143.3111);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(26,111.4697);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(27,80.9285);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(28,50.52894);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(29,22.41649);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(30,12.8939);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(31,23.01396);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(1,18.57923);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(2,54.44502);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(3,63.20316);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(4,61.51014);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(5,49.94709);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(6,41.98257);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(7,33.81483);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(8,28.25098);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(9,27.95113);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(10,24.52076);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(11,22.25734);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(12,22.66952);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(13,21.00093);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(14,20.64549);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(15,19.3347);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(16,18.25809);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(17,16.68402);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(18,16.26986);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(19,14.21911);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(20,13.35476);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(21,12.17096);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(22,11.0191);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(23,8.672298);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(24,7.851299);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(25,6.278582);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(26,6.171669);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(27,4.354808);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(28,4.64836);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(29,1.846764);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(30,1.490236);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(31,4.172525);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(1,1574.03);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(2,4890.267);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(3,4040.262);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(4,2722.264);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(5,2036.667);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(6,1584.587);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(7,1202.636);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(8,1047.6);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(9,928.2208);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(10,772.3767);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(11,755.4549);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(12,679.7016);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(13,612.2492);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(14,519.855);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(15,492.0383);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(16,464.7227);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(17,349.2353);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(18,299.6689);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(19,249.5383);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(20,228.9946);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(21,225.7425);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(22,138.0412);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(23,145.5011);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(24,104.431);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(25,85.19796);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(26,55.32384);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(27,52.3979);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(28,29.63044);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(29,14.97547);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(30,9.465295);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(31,15.18146);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(1,33.90151);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(2,73.24154);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(3,72.22987);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(4,61.5737);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(5,54.29123);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(6,46.0499);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(7,40.04182);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(8,39.40623);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(9,38.65173);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(10,28.5405);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(11,31.34179);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(12,32.04223);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(13,27.78547);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(14,24.3673);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(15,23.99885);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(16,27.73533);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(17,20.61505);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(18,19.30335);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(19,17.79411);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(20,17.52998);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(21,19.23308);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(22,9.111832);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(23,13.35481);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(24,9.430927);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(25,7.032146);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(26,4.888051);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(27,7.822764);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(28,4.119201);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(29,1.93413);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(30,1.844548);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(31,2.979266);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(1,6.610634);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(2,22.33203);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(3,19.75545);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(4,14.94799);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(5,10.86523);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(6,11.01524);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(7,8.943332);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(8,8.171189);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(9,6.184447);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(10,5.86524);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(11,5.149622);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(12,4.857546);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(13,4.057905);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(14,3.512612);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(15,4.948389);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(16,2.585915);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(17,1.178018);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(18,3.139159);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(19,1.379634);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(20,1.034442);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.5155163);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(22,1.552986);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(23,1.123389);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.3436775);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(25,0.2875345);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(26,0.3734539);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(27,0.2577581);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(1,1.035126);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(2,2.06186);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(3,1.849167);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(4,1.570565);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(5,1.33284);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(6,1.393617);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(7,1.246362);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(8,1.234205);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(9,1.051117);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(10,0.9980874);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(11,0.9730134);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(12,0.8900392);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(13,0.8775632);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(14,0.8366241);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(15,0.9514941);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(16,0.6304953);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(17,0.4280826);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(18,0.8028244);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(19,0.4731843);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(20,0.3985683);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(21,0.2104586);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(22,0.5236275);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(23,0.4871089);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(24,0.1718388);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(25,0.2191593);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(26,0.2353995);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(27,0.1488167);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(28,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(30,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(31,0.08591938);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(1,12.62575);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(2,51.03504);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(3,47.17838);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(4,29.41576);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(5,17.45276);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(6,12.89374);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(7,9.788901);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(8,9.000357);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(9,6.731758);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(10,6.065972);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(11,6.27036);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(12,4.532163);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(13,5.827391);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(14,4.415208);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(15,5.097014);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(16,3.208547);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(17,2.274658);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(18,4.086165);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(19,1.456848);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(20,1.751699);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(21,0.637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(22,1.735423);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(23,1.607995);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(25,0.5201856);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(26,0.3927574);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(27,0.3185705);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(30,0.1911423);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(1,1.174873);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(2,2.427174);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(3,2.228524);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(4,1.797254);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(5,1.44149);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(6,1.398218);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(7,1.231144);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(8,1.222315);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(9,1.043171);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(10,0.9716483);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(11,0.9831834);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(12,0.846233);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(13,0.9242513);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(14,0.8581734);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(15,0.9342578);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(16,0.6392002);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(17,0.4877122);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(18,0.8292731);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(19,0.4621256);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(20,0.441607);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(21,0.2014817);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(22,0.5183038);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(23,0.5104115);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(24,0.2014817);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(25,0.2468726);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(26,0.2298415);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(27,0.142469);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(28,0.09010534);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(29,0.0637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(30,0.1103561);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(31,0.0637141);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(1,20.68249);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(2,72.94251);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(3,69.82917);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(4,50.92707);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(5,26.03007);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(6,18.18742);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(7,11.47331);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(8,12.98665);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(9,9.53402);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(10,9.276205);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(11,10.57169);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(12,6.951441);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(13,5.673587);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(14,5.084876);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(15,4.64314);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(16,3.784854);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(17,3.808708);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(18,2.865768);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(19,2.3083);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(20,2.575024);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(21,2.613657);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(22,2.155622);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.957719);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(24,1.491333);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(25,0.3928623);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(27,0.3661568);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(1,1.984599);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(2,3.719356);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(3,3.636698);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(4,3.104734);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(5,2.219947);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(6,1.859575);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(7,1.484134);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(8,1.565931);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(9,1.350745);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(10,1.327818);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(11,1.415064);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(12,1.144688);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(13,1.037759);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(14,0.9799734);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(15,0.9298277);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(16,0.8478586);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(17,0.8535983);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(18,0.7415218);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(19,0.6676305);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(20,0.6887102);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(21,0.699642);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(22,0.6510347);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(23,0.4291699);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(24,0.5277737);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(25,0.2781312);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(26,0.1867731);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(27,0.2589647);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(28,0.1793837);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(1,7.91643);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(2,38.31069);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(3,46.18593);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(4,37.39669);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(5,25.14839);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(6,16.32179);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(7,11.56668);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(8,8.782801);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(9,7.695853);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(10,7.023747);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(11,6.589991);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(12,6.073101);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(13,5.41531);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(14,4.504635);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(15,3.705304);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(16,3.204512);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(17,2.533333);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(18,2.225403);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(19,1.752154);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(20,1.338857);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(21,1.270914);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(22,1.116397);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.9825194);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.7577012);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.5888067);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.3963834);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.227729);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.09757275);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.04957413);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.01907416);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.02616722);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1185905);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(2,0.260254);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2842389);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(4,0.2550614);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(5,0.2088461);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1685403);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1419525);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1235878);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1162992);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(10,0.1108756);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(11,0.107458);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(12,0.1029389);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(13,0.09727955);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(14,0.08858756);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(15,0.08062643);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(16,0.07513075);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(17,0.06639902);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(18,0.06259978);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(19,0.0558162);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(20,0.04818459);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(21,0.04699604);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(22,0.04445452);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(23,0.04163752);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(24,0.03672963);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(25,0.03215094);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(26,0.02642489);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(27,0.02024707);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01303287);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(29,0.009450535);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(30,0.005363133);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(31,0.006718887);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(1,7.086362);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(2,29.7786);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(3,35.80276);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(4,28.69313);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(5,19.28662);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(6,12.47813);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(7,8.24575);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(8,6.34857);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(9,5.357547);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(10,4.570478);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(11,4.273445);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(12,3.780671);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(13,3.286528);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(14,3.094894);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(15,2.535048);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(16,2.203794);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(17,1.920449);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(18,1.659005);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(19,1.452314);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(20,1.226459);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(21,1.122429);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.8938371);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.8418221);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.6132297);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.4831922);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.3339912);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.1984784);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.1012924);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.05201502);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.02874514);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.01779461);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(1,0.05825395);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(2,0.1194169);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(3,0.1309399);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(4,0.1172203);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(5,0.09610407);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(6,0.0773016);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(7,0.06283893);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(8,0.05513808);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(9,0.05065201);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(10,0.04678369);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(11,0.04523793);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(12,0.04254986);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03967184);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(14,0.03849786);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(15,0.0348423);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(16,0.03248622);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(17,0.030326);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(18,0.02818627);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(19,0.02637206);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(20,0.02423485);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(21,0.02318426);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(22,0.02068916);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(23,0.02007816);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(24,0.01713663);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(25,0.01521156);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(26,0.01264682);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(27,0.00974923);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(28,0.006964696);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(29,0.004990891);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(30,0.003710188);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(31,0.002919161);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.4058745);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(2,1.578422);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(3,1.324121);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.7987645);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.4660989);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.2422538);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.1965155);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.1770258);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.1426929);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.1434017);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.1248919);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.1377967);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.1065978);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.08881002);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.08558201);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.08071953);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.05505814);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.03453535);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.02320358);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.04563086);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.03222584);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(22,0.02887611);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.0206578);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(24,0.01591705);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(25,0.02566857);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(26,0.009751523);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(1,0.03045388);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(2,0.05918414);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(3,0.05478254);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(4,0.04258766);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(5,0.0327107);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(6,0.02352675);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(7,0.02116615);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(8,0.02015352);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(9,0.01798549);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(10,0.01801722);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(11,0.01652975);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(12,0.01799);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(13,0.01578061);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(14,0.01404431);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(15,0.0135157);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(16,0.01369756);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(17,0.01172797);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(18,0.008847596);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(19,0.007458674);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(20,0.01002733);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(21,0.008265217);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(22,0.008135479);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(23,0.006729409);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(24,0.006147631);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(25,0.007612116);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(26,0.00448898);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(27,0.003867885);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.1519144);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.7342633);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.7293001);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.4064498);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.1890035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.1292328);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.09642419);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.08315761);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.06833279);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.05526227);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.05246271);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.04639744);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.04243144);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.03827002);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.03428282);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.03379738);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.02232908);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.02524549);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.01664621);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.01701408);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.01477877);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.01506552);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.01303782);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.01188552);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.01067467);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.006052035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.003043238);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(28,0.001613838);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(29,0.001878717);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(1,0.006596425);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(2,0.01468518);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(3,0.01463602);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(4,0.01093086);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(5,0.007482428);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(6,0.006216736);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(7,0.005391046);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(8,0.004982743);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(9,0.004545356);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(10,0.004042189);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(11,0.003917401);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(12,0.003724187);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(13,0.003553204);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(14,0.003396403);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(15,0.003164554);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(16,0.003198067);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(17,0.002539975);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(18,0.002711432);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(19,0.002209933);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(20,0.002269331);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(21,0.002063505);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(22,0.00212992);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(23,0.001920377);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(24,0.001840288);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(25,0.001748607);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(26,0.001320776);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0009362955);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(28,0.0006673657);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(29,0.0007782064);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all__487 = new TH1D("VbbHcc_both_Z_dR_Bj0_all__487","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(1,222743);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(2,863566);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(3,781432);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(4,579807);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(5,447072);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(6,351610);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(7,284218);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(8,236739);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(9,202284);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(10,178598);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(11,161251);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(12,146425);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(13,132414);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(14,118563);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(15,105122);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(16,92346);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(17,76906);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(18,64135);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(19,54464);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(20,46397);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(21,38953);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(22,32231);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(23,26659);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(24,21409);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(25,16431);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(26,12260);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(27,8208);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(28,5376);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(29,3353);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(30,1987);
   VbbHcc_both_Z_dR_Bj0_all__487->SetBinContent(31,3233);
   VbbHcc_both_Z_dR_Bj0_all__487->SetEntries(5316192);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all__487->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all__487->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0_all__487->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0_all__487->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0_all__487->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all__487->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all__487->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__487->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__487->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487[30] = {
   276456.4,
   1191458,
   1121987,
   832922.9,
   616674.2,
   482594.5,
   392184.1,
   318304.4,
   263429.6,
   235425.6,
   222325.9,
   193840.6,
   198013.2,
   157917.1,
   165224.2,
   117396,
   95772.86,
   83228.97,
   65963.22,
   57419.12,
   56723.53,
   42225.26,
   32512.72,
   29542.95,
   20052.97,
   15145.27,
   8536.009,
   8579.208,
   5001.925,
   2479.783};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487[30] = {
   4204.94,
   13196.45,
   28758.07,
   23632.52,
   10464.39,
   10007.06,
   16645.85,
   7670.531,
   6311.076,
   6240.64,
   7038.755,
   5210.407,
   21107.94,
   5009.779,
   21026.29,
   4095.688,
   3896.881,
   3744.653,
   2649.315,
   2522.268,
   3249.317,
   2511.73,
   1948.52,
   2312.72,
   1912.826,
   1956.62,
   647.4538,
   1898.586,
   1536.991,
   489.4777};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMinimum(1791.275);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMaximum(1324921);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__488 = new TH1D("data_mc_ratio__488","",30,0,6);
   data_mc_ratio__488->SetBinContent(1,0.8057076);
   data_mc_ratio__488->SetBinContent(2,0.7247979);
   data_mc_ratio__488->SetBinContent(3,0.6964718);
   data_mc_ratio__488->SetBinContent(4,0.6961112);
   data_mc_ratio__488->SetBinContent(5,0.7249728);
   data_mc_ratio__488->SetBinContent(6,0.7285827);
   data_mc_ratio__488->SetBinContent(7,0.7247055);
   data_mc_ratio__488->SetBinContent(8,0.7437504);
   data_mc_ratio__488->SetBinContent(9,0.7678863);
   data_mc_ratio__488->SetBinContent(10,0.7586176);
   data_mc_ratio__488->SetBinContent(11,0.7252913);
   data_mc_ratio__488->SetBinContent(12,0.7553889);
   data_mc_ratio__488->SetBinContent(13,0.668713);
   data_mc_ratio__488->SetBinContent(14,0.7507925);
   data_mc_ratio__488->SetBinContent(15,0.6362383);
   data_mc_ratio__488->SetBinContent(16,0.7866198);
   data_mc_ratio__488->SetBinContent(17,0.8030041);
   data_mc_ratio__488->SetBinContent(18,0.7705851);
   data_mc_ratio__488->SetBinContent(19,0.8256723);
   data_mc_ratio__488->SetBinContent(20,0.8080409);
   data_mc_ratio__488->SetBinContent(21,0.6867168);
   data_mc_ratio__488->SetBinContent(22,0.7633109);
   data_mc_ratio__488->SetBinContent(23,0.8199561);
   data_mc_ratio__488->SetBinContent(24,0.7246737);
   data_mc_ratio__488->SetBinContent(25,0.8193799);
   data_mc_ratio__488->SetBinContent(26,0.8094935);
   data_mc_ratio__488->SetBinContent(27,0.9615735);
   data_mc_ratio__488->SetBinContent(28,0.6266313);
   data_mc_ratio__488->SetBinContent(29,0.6703419);
   data_mc_ratio__488->SetBinContent(30,0.8012797);
   data_mc_ratio__488->SetBinContent(31,0.9246935);
   data_mc_ratio__488->SetBinError(1,0.001707165);
   data_mc_ratio__488->SetBinError(2,0.0007799543);
   data_mc_ratio__488->SetBinError(3,0.0007878761);
   data_mc_ratio__488->SetBinError(4,0.000914191);
   data_mc_ratio__488->SetBinError(5,0.001084259);
   data_mc_ratio__488->SetBinError(6,0.001228707);
   data_mc_ratio__488->SetBinError(7,0.001359364);
   data_mc_ratio__488->SetBinError(8,0.001528594);
   data_mc_ratio__488->SetBinError(9,0.001707325);
   data_mc_ratio__488->SetBinError(10,0.001795083);
   data_mc_ratio__488->SetBinError(11,0.001806181);
   data_mc_ratio__488->SetBinError(12,0.001974072);
   data_mc_ratio__488->SetBinError(13,0.001837692);
   data_mc_ratio__488->SetBinError(14,0.002180446);
   data_mc_ratio__488->SetBinError(15,0.001962334);
   data_mc_ratio__488->SetBinError(16,0.002588546);
   data_mc_ratio__488->SetBinError(17,0.002895594);
   data_mc_ratio__488->SetBinError(18,0.003042797);
   data_mc_ratio__488->SetBinError(19,0.00353796);
   data_mc_ratio__488->SetBinError(20,0.003751357);
   data_mc_ratio__488->SetBinError(21,0.003479423);
   data_mc_ratio__488->SetBinError(22,0.004251719);
   data_mc_ratio__488->SetBinError(23,0.005021907);
   data_mc_ratio__488->SetBinError(24,0.004952726);
   data_mc_ratio__488->SetBinError(25,0.006392244);
   data_mc_ratio__488->SetBinError(26,0.007310854);
   data_mc_ratio__488->SetBinError(27,0.01061363);
   data_mc_ratio__488->SetBinError(28,0.008546385);
   data_mc_ratio__488->SetBinError(29,0.01157656);
   data_mc_ratio__488->SetBinError(30,0.01797567);
   data_mc_ratio__488->SetBinError(31,0.1707952);
   data_mc_ratio__488->SetMinimum(0.4);
   data_mc_ratio__488->SetMaximum(1.6);
   data_mc_ratio__488->SetEntries(3617.023);
   data_mc_ratio__488->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__488->SetLineColor(ci);
   data_mc_ratio__488->SetLineWidth(2);
   data_mc_ratio__488->SetMarkerStyle(20);
   data_mc_ratio__488->SetMarkerSize(1.2);
   data_mc_ratio__488->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__488->GetXaxis()->SetRange(1,30);
   data_mc_ratio__488->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__488->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__488->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__488->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__488->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__488->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1488[30] = {
   0.01521014,
   0.01107588,
   0.02563138,
   0.028373,
   0.01696908,
   0.02073595,
   0.04244397,
   0.0240981,
   0.02395735,
   0.0265079,
   0.03165963,
   0.02687986,
   0.1065986,
   0.0317241,
   0.1272591,
   0.0348878,
   0.04068879,
   0.04499218,
   0.04016353,
   0.04392731,
   0.05728341,
   0.05948406,
   0.059931,
   0.07828331,
   0.09538867,
   0.1291901,
   0.0758497,
   0.2213008,
   0.3072799,
   0.1973873};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(0.6312641);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(1.368736);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}

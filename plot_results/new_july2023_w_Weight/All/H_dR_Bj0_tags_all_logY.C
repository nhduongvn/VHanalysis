void H_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Thu Aug 10 12:20:12 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_all = new TCanvas("H_dR_Bj0_tags_all", "H_dR_Bj0_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_all->SetHighLightColor(2);
   H_dR_Bj0_tags_all->Range(0,0,1,1);
   H_dR_Bj0_tags_all->SetFillColor(0);
   H_dR_Bj0_tags_all->SetFillStyle(4000);
   H_dR_Bj0_tags_all->SetBorderMode(0);
   H_dR_Bj0_tags_all->SetBorderSize(2);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.363799,6.314516,12.83326);
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
   st->SetMinimum(0.3);
   st->SetMaximum(7.891299e+10);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(0.0447093);
   st_stack_44->SetMaximum(2.591507e+11);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetRange(1,30);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetLabelSize(0.035);
   st_stack_44->GetXaxis()->SetTitleSize(0.035);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/0.2");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetLabelSize(0.05);
   st_stack_44->GetYaxis()->SetTitleSize(0.057);
   st_stack_44->GetYaxis()->SetTitleOffset(1.2);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetLabelSize(0.035);
   st_stack_44->GetZaxis()->SetTitleSize(0.035);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,13488.55);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,65862.97);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,71391.94);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,59505.63);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,43794.8);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,55149.5);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,37938.17);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,32412.56);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,27129.69);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,22793.93);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,19614.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,21759.8);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,20808.96);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,16183.18);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,14074.74);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,13349.58);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,9243.673);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,7494.17);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,21865.59);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,3090.649);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,4026.643);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,2327.724);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,4599.429);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,1945.809);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,2156.256);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,878.3559);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,807.7588);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(28,657.4412);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(29,92.73551);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(30,188.5117);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(31,311.8714);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,1103.127);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,3661.105);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,3754.902);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,4216.201);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,2746.605);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,15204.29);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,3235.017);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,3370.134);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,2185.708);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,2475.224);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,2268.042);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,2322.952);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,2370.192);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,1684.529);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,1943.918);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,1974.197);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,1199.285);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,1066.648);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,14848.85);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,504.0971);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,819.8927);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,490.1722);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,1785.593);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,486.5611);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,556.2761);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,126.7289);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,384.2676);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(28,278.9758);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(29,38.92718);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(30,67.13965);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(31,88.43764);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,77.04436);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,317.0817);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,360.4665);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,309.8228);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,258.4984);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,224.7442);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,184.7822);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,154.9029);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,138.4442);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,122.0137);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,108.0409);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,108.4869);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,96.50351);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,87.46675);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,83.67686);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,66.76116);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,58.1972);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,44.41298);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,38.28679);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,30.27296);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,26.66674);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,20.47125);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,18.79071);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,11.87368);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,13.63672);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,8.398808);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,4.918935);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(28,4.414335);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(29,3.282229);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,1.211251);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,3.798162);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,3.629999);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,7.212885);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,7.618706);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,7.112573);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,6.394098);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,5.96571);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,5.474495);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,4.973025);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,4.665573);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,4.43686);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,4.003615);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,4.213682);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,3.944466);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,3.674056);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,3.626064);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,3.182867);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,2.918639);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,2.511659);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,2.389424);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,2.072306);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,1.968506);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,1.757505);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,1.701948);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,1.176981);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,1.546875);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,1.090184);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,0.8212095);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(28,0.7651442);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(29,0.7609756);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,0.3537615);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,0.7804497);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(1,1169.761);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(2,5605.56);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(3,7225.441);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(4,6610.55);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(5,5499.149);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(6,4425.382);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(7,3598.945);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(8,3060.263);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(9,2666.175);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(10,2409.175);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(11,2169.319);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(12,2003.195);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(13,1834.099);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(14,1631.176);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(15,1452.998);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(16,1274.044);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(17,1047.285);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(18,841.5624);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(19,707.8655);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(20,581.4612);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(21,466.5122);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(22,368.429);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(23,296.8593);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(24,225.8457);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(25,168.0244);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(26,126.5016);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(27,89.65193);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(28,60.80587);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(29,40.28263);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(30,24.7425);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(31,43.05609);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(1,8.868021);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(2,19.43135);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(3,22.10961);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(4,21.16951);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(5,19.304);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(6,17.31419);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(7,15.59931);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(8,14.38673);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(9,13.42787);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(10,12.77363);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(11,12.11267);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(12,11.64726);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(13,11.14407);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(14,10.513);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(15,9.915008);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(16,9.267738);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(17,8.410095);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(18,7.526226);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(19,6.903325);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(20,6.257);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(21,5.602787);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(22,4.963331);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(23,4.457017);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(24,3.882389);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(25,3.354922);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(26,2.919302);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(27,2.450173);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(28,2.010576);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(29,1.635684);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(30,1.276141);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(31,1.677577);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(1,216.211);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(2,888.8291);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(3,994.7749);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(4,828.5502);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(5,648.3689);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(6,551.5561);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(7,439.9294);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(8,406.5456);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(9,327.8163);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(10,302.0982);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(11,288.9582);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(12,269.8981);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(13,257.9575);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(14,232.1302);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(15,193.0531);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(16,175.7568);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(17,136.1162);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(18,108.6531);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(19,93.19341);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(20,76.24807);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(21,59.01082);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(22,42.79214);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(23,43.46069);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(24,33.80232);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(25,27.67436);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(26,14.31971);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(27,12.79347);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(28,7.376347);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(29,3.301687);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(30,3.159137);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(31,3.548303);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(1,7.214318);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(2,19.55214);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(3,22.61511);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(4,21.88354);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(5,19.05552);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(6,17.16152);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(7,15.88217);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(8,15.19528);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(9,11.4369);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(10,10.91876);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(11,11.04391);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(12,12.41424);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(13,12.67088);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(14,10.59763);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(15,9.704132);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(16,9.954113);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(17,8.975613);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(18,7.256436);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(19,5.861835);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(20,6.251986);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(21,5.741031);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(22,3.79108);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(23,5.504259);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(24,4.787817);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(25,4.19629);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(26,1.698315);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(27,1.690906);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(28,1.072733);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(29,0.6565215);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(30,0.8036733);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(31,0.9807622);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(1,29.70331);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(2,81.65177);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(3,88.56704);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(4,75.89183);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(5,69.49472);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(6,52.31468);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(7,41.00333);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(8,39.25422);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(9,34.1495);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(10,27.24477);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(11,23.74964);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(12,27.36675);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(13,25.0357);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(14,20.40542);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(15,20.87564);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(16,14.29643);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(17,14.50003);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(18,15.605);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(19,11.85115);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(20,8.938481);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(21,5.797664);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(22,15.2942);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(23,6.190498);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(24,2.692289);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(25,2.692807);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(26,2.447953);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(27,2.752297);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(28,0.9563178);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(29,0.8052579);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(30,0.7298243);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(31,0.5476584);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(1,6.293545);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(2,6.1034);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(3,6.7903);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(4,12.18485);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(5,11.08919);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(6,5.357283);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(7,4.851238);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(8,4.713208);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(9,4.090836);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(10,4.081167);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(11,2.984033);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(12,3.910172);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(13,4.56435);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(14,2.704169);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(15,3.609198);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(16,2.03456);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(17,2.246541);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(18,3.081961);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(19,2.787288);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(20,2.531074);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(21,0.9804149);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(22,6.531893);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(23,1.663446);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(24,0.5651452);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(25,0.6310409);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(26,0.644844);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(27,1.264022);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(28,0.2935041);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(29,0.2904065);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(30,0.4168747);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(31,0.2649429);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(2,1.847636);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(3,0.586412);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(7,0.4031079);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(2,0.7874445);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(3,0.4715906);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(7,0.2327345);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(1,0.7789864);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(2,2.803079);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(3,0.9969489);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(4,0.2179625);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(5,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(6,0.3269437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(8,0.3269437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(9,0.3269437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(10,0.3269437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(11,0.2179625);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(12,0.3269437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(14,0.4359249);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(15,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(16,0.5610239);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(21,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(25,0.4242871);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(1,0.4898707);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(2,0.8489893);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(3,0.5135437);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(4,0.1541227);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(5,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(6,0.188761);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(8,0.188761);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(9,0.188761);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(10,0.188761);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(11,0.1541227);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(12,0.188761);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(14,0.2179625);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(15,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(16,0.4649941);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(17,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(19,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(21,0.1089812);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(25,0.3336086);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(1,2.880218);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(2,19.6995);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(3,21.0688);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(4,20.87797);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(5,10.7496);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(6,9.020733);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(7,5.059064);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(8,5.145364);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(9,5.555722);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(10,8.819884);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(11,7.413019);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(12,7.02885);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(13,4.806063);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(14,5.808947);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(15,4.241083);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(16,3.097237);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(17,2.606956);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(18,2.094353);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(19,1.324657);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(23,0.7758471);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(24,0.8120543);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(26,0.7858656);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(1,0.8695852);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(2,2.263321);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(3,2.345441);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(4,2.33877);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(5,1.682091);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(6,1.527448);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(7,1.13294);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(8,1.152104);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(9,1.214562);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(10,1.515544);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(11,1.403522);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(12,1.354992);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(13,1.134797);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(14,1.240679);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(15,1.061893);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(16,0.8951978);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(17,0.8258985);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(18,0.7415252);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(19,0.5937311);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(20,0.3439469);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(23,0.4487152);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(24,0.4693271);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(26,0.4542233);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(1,3.776258);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(2,18.08749);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(3,21.65222);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(4,18.16418);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(5,13.52893);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(6,9.907145);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(7,7.844561);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(8,6.698364);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(9,6.26809);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(10,6.379428);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(11,6.21973);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(12,5.935975);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(13,5.582555);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(14,4.553793);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(15,3.591327);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(16,2.661967);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(17,1.877433);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(18,1.325744);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(19,0.9314613);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(20,0.6683701);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(21,0.5665206);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(22,0.4807836);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(23,0.3675196);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(24,0.3279945);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(25,0.236885);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(26,0.1804752);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(27,0.1183386);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(28,0.04141618);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(29,0.01955657);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(30,0.02010165);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01601676);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(1,0.08388186);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(2,0.1841853);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(3,0.200443);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(4,0.1831967);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(5,0.157925);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(6,0.1354189);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(7,0.1205393);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(8,0.1113896);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(9,0.1076083);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(10,0.1087183);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(11,0.1074226);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(12,0.1048799);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(13,0.1017684);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(14,0.09187868);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(15,0.08135996);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(16,0.06972978);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(17,0.0587096);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(18,0.04938239);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(19,0.04077453);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(20,0.03485836);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(21,0.03239338);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(22,0.02990165);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(23,0.02602092);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(24,0.02480681);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(25,0.02132289);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(26,0.01836078);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(27,0.01480845);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(28,0.008589276);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(29,0.005752715);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(30,0.006450285);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(31,0.005456652);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(1,1.544995);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(2,7.637161);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(3,9.976608);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(4,8.771896);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(5,6.617684);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(6,4.798267);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(7,3.700579);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(8,3.202503);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(9,2.825173);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(10,2.548007);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(11,2.578194);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(12,2.301028);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(13,2.08149);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(14,1.809812);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(15,1.525786);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(16,1.223922);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(17,1.00164);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(18,0.7203575);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(19,0.5653091);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(20,0.4253539);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(21,0.3402831);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(22,0.2785382);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(23,0.2360028);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(24,0.1715137);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(25,0.112513);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(26,0.06860547);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(27,0.05625649);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(28,0.02744219);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(29,0.02332586);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(30,0.005488438);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(31,0.01372109);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(1,0.02723322);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(2,0.06054823);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(3,0.06920332);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(4,0.06489066);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(5,0.05636227);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(6,0.04799298);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(7,0.04214736);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(8,0.03920851);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(9,0.0368263);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(10,0.03497324);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(11,0.03517979);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(12,0.03323505);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(13,0.03160987);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(14,0.02947489);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(15,0.02706339);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(16,0.02423887);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(17,0.02192761);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(18,0.01859557);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(19,0.01647322);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(20,0.01428929);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(21,0.01278073);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(22,0.0115632);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(23,0.01064374);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(24,0.009073709);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(25,0.007349144);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(26,0.005738718);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(27,0.00519663);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(28,0.003629484);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(29,0.003346219);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(30,0.001623154);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(31,0.002566433);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(1,0.01747209);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(2,0.05955588);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(3,0.04376787);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(4,0.07481116);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(5,0.0402891);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(6,0.02977794);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(7,0.02219496);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(8,0.01157658);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(9,0.009678055);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(10,0.008523299);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(11,0.005255579);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(14,0.01115109);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(15,0.009570837);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(16,0.01399331);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(17,0.00683583);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(19,0.005788292);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(20,0.00683583);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(21,0.004208041);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(22,0.009463619);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(1,0.006022789);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(2,0.01162259);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(3,0.009853775);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(4,0.01322812);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(5,0.009755171);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(6,0.00821841);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(7,0.007210785);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(8,0.004878456);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(9,0.004935889);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(10,0.004402264);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(11,0.003716255);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(14,0.00512691);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(15,0.004877296);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(16,0.005860074);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(17,0.004038285);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(19,0.003449589);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(20,0.004038285);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(21,0.003066345);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(22,0.00481799);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(1,0.004622298);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(2,0.02465684);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(3,0.03587254);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(4,0.02698583);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(5,0.01921635);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01986199);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(7,0.007989033);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(8,0.009579705);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(9,0.005395112);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(10,0.005787156);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(11,0.005936816);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(12,0.004369985);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(13,0.002409819);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(14,0.003066742);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(15,0.002535976);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(16,0.001821444);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(17,0.002235983);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001729393);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(19,0.001878717);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(20,0.001371791);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0009800828);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(24,0.0007148681);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(25,0.0008069192);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(26,0.0007148681);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(27,0.001014188);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(1,0.001180025);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(2,0.002661361);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(3,0.003231219);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(4,0.002802282);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(5,0.002342614);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(6,0.002392785);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(7,0.001493095);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(8,0.001626565);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(9,0.001235725);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(10,0.001258658);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(11,0.001291805);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(12,0.001059626);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(13,0.0007803384);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(14,0.0009090441);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(15,0.0008624122);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(16,0.0006989114);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(17,0.0008562967);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(18,0.0006646676);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(19,0.0007782064);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(20,0.000627238);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(21,0.0005068917);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(24,0.0004195169);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(25,0.0004718988);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(26,0.0004195169);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(27,0.0005874283);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all__120 = new TH1D("VbbHcc_tags_H_dR_Bj0_all__120","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(1,14501);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(2,56752);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(3,57716);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(4,47750);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(5,40351);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(6,33197);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(7,27966);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(8,24284);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(9,21381);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(10,19436);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(11,17728);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(12,16428);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(13,14993);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(14,13579);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(15,12477);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(16,10823);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(17,8802);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(18,7334);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(19,5968);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(20,5090);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(21,4126);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(22,3358);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(23,2768);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(24,2175);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(25,1652);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(26,1287);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(27,916);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(28,654);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(29,390);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(30,262);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(31,429);
   VbbHcc_tags_H_dR_Bj0_all__120->SetEntries(474602);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all__120->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all__120->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0_all__120->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0_all__120->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087[30] = {
   14990.72,
   72806.25,
   80115.55,
   67378.71,
   50301.37,
   60427.73,
   42219.87,
   36089.06,
   30311.26,
   25672.68,
   22221.41,
   24184.47,
   23035.03,
   18166.98,
   15834.96,
   14888.45,
   10505.38,
   8508.55,
   22719.73,
   3789.158,
   4586.158,
   2775.733,
   4966.114,
   2221.335,
   2369.618,
   1031.06,
   918.0511,
   731.3164,
   140.4502,
   218.38};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087[30] = {
   1103.211,
   3661.222,
   3755.05,
   4216.335,
   2746.77,
   15204.31,
   3235.102,
   3370.206,
   2185.789,
   2475.289,
   2268.107,
   2323.022,
   2370.26,
   1684.602,
   1943.974,
   1974.248,
   1199.354,
   1066.707,
   14848.85,
   504.1854,
   819.935,
   490.2588,
   1785.608,
   486.6021,
   556.3048,
   126.781,
   384.282,
   278.9864,
   38.97557,
   67.15882};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMinimum(91.32717);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMaximum(92247.52);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__121 = new TH1D("data_mc_ratio__121","",30,0,6);
   data_mc_ratio__121->SetBinContent(1,0.9673316);
   data_mc_ratio__121->SetBinContent(2,0.7794935);
   data_mc_ratio__121->SetBinContent(3,0.7204094);
   data_mc_ratio__121->SetBinContent(4,0.7086808);
   data_mc_ratio__121->SetBinContent(5,0.8021849);
   data_mc_ratio__121->SetBinContent(6,0.549367);
   data_mc_ratio__121->SetBinContent(7,0.6623895);
   data_mc_ratio__121->SetBinContent(8,0.6728909);
   data_mc_ratio__121->SetBinContent(9,0.7053814);
   data_mc_ratio__121->SetBinContent(10,0.7570693);
   data_mc_ratio__121->SetBinContent(11,0.7977891);
   data_mc_ratio__121->SetBinContent(12,0.6792788);
   data_mc_ratio__121->SetBinContent(13,0.6508782);
   data_mc_ratio__121->SetBinContent(14,0.7474548);
   data_mc_ratio__121->SetBinContent(15,0.7879401);
   data_mc_ratio__121->SetBinContent(16,0.7269391);
   data_mc_ratio__121->SetBinContent(17,0.8378567);
   data_mc_ratio__121->SetBinContent(18,0.8619565);
   data_mc_ratio__121->SetBinContent(19,0.2626792);
   data_mc_ratio__121->SetBinContent(20,1.343306);
   data_mc_ratio__121->SetBinContent(21,0.8996637);
   data_mc_ratio__121->SetBinContent(22,1.20977);
   data_mc_ratio__121->SetBinContent(23,0.5573774);
   data_mc_ratio__121->SetBinContent(24,0.9791408);
   data_mc_ratio__121->SetBinContent(25,0.6971589);
   data_mc_ratio__121->SetBinContent(26,1.24823);
   data_mc_ratio__121->SetBinContent(27,0.9977658);
   data_mc_ratio__121->SetBinContent(28,0.8942778);
   data_mc_ratio__121->SetBinContent(29,2.776785);
   data_mc_ratio__121->SetBinContent(30,1.199744);
   data_mc_ratio__121->SetBinContent(31,1.182302);
   data_mc_ratio__121->SetBinError(1,0.008032975);
   data_mc_ratio__121->SetBinError(2,0.003272065);
   data_mc_ratio__121->SetBinError(3,0.002998688);
   data_mc_ratio__121->SetBinError(4,0.003243127);
   data_mc_ratio__121->SetBinError(5,0.003993441);
   data_mc_ratio__121->SetBinError(6,0.003015179);
   data_mc_ratio__121->SetBinError(7,0.00396094);
   data_mc_ratio__121->SetBinError(8,0.004318019);
   data_mc_ratio__121->SetBinError(9,0.00482403);
   data_mc_ratio__121->SetBinError(10,0.005430405);
   data_mc_ratio__121->SetBinError(11,0.005991812);
   data_mc_ratio__121->SetBinError(12,0.005299754);
   data_mc_ratio__121->SetBinError(13,0.005315639);
   data_mc_ratio__121->SetBinError(14,0.006414326);
   data_mc_ratio__121->SetBinError(15,0.007054044);
   data_mc_ratio__121->SetBinError(16,0.006987538);
   data_mc_ratio__121->SetBinError(17,0.008930568);
   data_mc_ratio__121->SetBinError(18,0.01006503);
   data_mc_ratio__121->SetBinError(19,0.003400253);
   data_mc_ratio__121->SetBinError(20,0.01882852);
   data_mc_ratio__121->SetBinError(21,0.01400605);
   data_mc_ratio__121->SetBinError(22,0.02087674);
   data_mc_ratio__121->SetBinError(23,0.01059416);
   data_mc_ratio__121->SetBinError(24,0.02099498);
   data_mc_ratio__121->SetBinError(25,0.01715247);
   data_mc_ratio__121->SetBinError(26,0.03479409);
   data_mc_ratio__121->SetBinError(27,0.03296711);
   data_mc_ratio__121->SetBinError(28,0.03496903);
   data_mc_ratio__121->SetBinError(29,0.140608);
   data_mc_ratio__121->SetBinError(30,0.0741204);
   data_mc_ratio__121->SetBinError(31,0.293842);
   data_mc_ratio__121->SetMinimum(0.4);
   data_mc_ratio__121->SetMaximum(1.6);
   data_mc_ratio__121->SetEntries(491.669);
   data_mc_ratio__121->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__121->SetLineColor(ci);
   data_mc_ratio__121->SetLineWidth(2);
   data_mc_ratio__121->SetMarkerStyle(20);
   data_mc_ratio__121->SetMarkerSize(1.2);
   data_mc_ratio__121->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__121->GetXaxis()->SetRange(1,30);
   data_mc_ratio__121->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__121->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__121->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__121->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__121->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__121->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__121->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__121->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__121->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__121->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__121->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__121->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__121->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__121->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1088[30] = {
   0.07359292,
   0.05028719,
   0.04687043,
   0.06257667,
   0.05460626,
   0.2516114,
   0.07662511,
   0.09338581,
   0.07211144,
   0.09641724,
   0.1020686,
   0.09605427,
   0.1028981,
   0.09272877,
   0.1227647,
   0.1326026,
   0.1141657,
   0.1253688,
   0.6535665,
   0.13306,
   0.1787847,
   0.1766232,
   0.3595585,
   0.2190584,
   0.2347656,
   0.1229619,
   0.4185846,
   0.3814853,
   0.2775046,
   0.3075319};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.2157202);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.78428);
   Graph_Graph_from_mc_statistical_error1088->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1088->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1088);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->SetSelected(H_dR_Bj0_tags_all);
}

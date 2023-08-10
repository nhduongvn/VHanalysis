void Z_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Thu Aug 10 12:27:49 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(0,0,1,1);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-100.9457,6.314516,100854.7);
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
   st->SetMaximum(86437.28);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(0.01);
   st_stack_50->SetMaximum(90759.14);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetLabelSize(0.035);
   st_stack_50->GetXaxis()->SetTitleSize(0.035);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetLabelSize(0.05);
   st_stack_50->GetYaxis()->SetTitleSize(0.057);
   st_stack_50->GetYaxis()->SetTitleOffset(1.2);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetLabelSize(0.035);
   st_stack_50->GetZaxis()->SetTitleSize(0.035);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,6135.338);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,22034.5);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,24826.85);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,36190.97);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,29582.46);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,14888.01);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,8812.498);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,10041.26);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8497.778);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,8360.808);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,4524.327);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6143.499);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,4520.149);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,3687.719);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,2749.296);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3003.703);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,1386.146);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,1703.767);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2144.171);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2838.495);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1114.811);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1064.631);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,1189.731);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,671.3361);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,229.7895);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,1033.881);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,99.72298);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,67.76167);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,50.25893);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,6.808747);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.2153231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,876.0786);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,1709.949);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2228.731);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,14974.92);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,14895.47);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1616.901);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,1166.13);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1337.179);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1194.231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1165.384);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,739.6802);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,991.4758);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,825.9385);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,633.2953);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,497.1204);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,623.7333);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,298.7934);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,479.7294);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,554.4871);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,721.6076);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,391.2422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,391.2853);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,471.0066);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,381.3773);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,58.7147);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,468.7941);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,36.10764);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,27.9715);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,31.49684);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,6.808747);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.2153231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(10314);

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
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,20.95728);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,95.94985);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,122.3925);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,106.0757);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,91.21521);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,75.46966);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,62.7317);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,47.12392);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,45.66622);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,40.0663);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,39.53518);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,33.76053);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,34.28389);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,29.43399);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,25.74529);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,19.61955);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,16.80503);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,9.874928);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,10.9545);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,9.321147);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,5.781473);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,7.422514);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.507762);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,2.818011);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.34508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.993117);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,1.585325);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.062205);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.4520626);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.1508867);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.2403769);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.840352);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.776807);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,4.298464);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.027809);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.746214);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.402719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.098023);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.511124);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.616343);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.393079);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.524329);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.363931);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.416884);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.245523);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.047078);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.759995);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.637323);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.022076);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.267831);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.16432);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.8888912);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,1.124942);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9117635);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.6469823);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.5325069);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.6152071);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.4346536);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.4050006);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.2799112);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.08720103);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.107584);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(11980);

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
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,284.2362);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1669.276);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,2359.006);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,2271.047);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1896.548);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1528.483);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1253.911);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1061.281);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,909.3201);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,828.1079);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,735.9898);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,673.0659);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,602.2889);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,532.5441);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,451.336);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,376.7619);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,312.2083);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,255.4131);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,208.2396);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,159.7205);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,134.2234);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,99.84713);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,76.2784);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,56.91241);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,42.0523);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,31.12628);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,21.62093);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,14.92759);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,7.978536);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,4.997782);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,8.897989);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,4.203758);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,10.1707);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,12.11959);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,11.92405);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,10.88873);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,9.769598);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,8.855718);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,8.144685);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,7.536784);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,7.203813);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,6.78605);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,6.493143);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,6.1544);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,5.784321);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,5.320779);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.84776);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,4.414327);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,3.991136);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.602436);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,3.148459);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.882654);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.484917);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.178803);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.880806);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.613072);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.398601);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.148197);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.9636838);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.7062197);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.5557291);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.7319581);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(317372);

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
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,73.8336);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,316.1071);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,358.7547);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,291.4112);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,207.8207);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,168.0304);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,120.4688);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,106.7841);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,100.6943);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,103.2857);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,81.36008);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,83.42802);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,64.27832);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,53.76554);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,57.26479);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,49.11685);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,25.87638);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,26.56824);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,24.20033);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,12.43482);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,14.33806);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,11.58696);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,9.019244);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,9.126731);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,5.202113);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,3.708642);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.375617);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,1.467399);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,0.9477646);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.3072308);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,0.859582);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,3.060399);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,8.998961);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,12.82531);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,11.55934);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,10.07677);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,9.63393);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,6.876184);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,7.55519);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,7.476135);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.047648);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,6.184417);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,6.785242);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,4.554649);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,3.322175);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,5.731285);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.616799);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,2.184933);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.469504);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.484813);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,1.445965);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,1.766682);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.601908);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.449319);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,2.956215);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.907525);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.6340063);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.6190385);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.4754587);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.5199395);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1578612);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.403755);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(17051);

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
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,16.76174);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,42.16066);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,43.61502);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,21.96765);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,17.19465);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.71144);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,18.0909);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,10.14335);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,8.567505);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,7.118399);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.409039);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.644498);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,7.377289);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,4.982861);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,4.135097);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,5.637722);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.815716);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,1.794341);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.446669);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,2.077907);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,3.277301);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,1.815587);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.8320943);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,1.09942);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.5329898);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.4277931);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.2830464);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.4764799);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.0127406);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.1774893);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.08120236);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,2.840206);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.463724);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,7.834476);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.729134);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,2.706518);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,1.974048);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,7.028541);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,1.985625);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,1.613116);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.832692);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.405085);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.537898);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,1.873245);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,1.404139);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,1.327444);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.816938);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.4378938);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.4136091);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.4075717);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.6432903);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,1.31875);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.5256519);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.2775921);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.3678296);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2349178);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.1861592);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.1948589);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.2302951);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.01166869);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.1763665);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.08120236);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2254);

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
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(5);

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
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,0.7438266);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,1.735595);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,0.9917687);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3506432);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.4294485);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.6559934);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(24);

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
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.27903);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,6.837091);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.33064);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,5.570963);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.519354);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.291933);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.315799);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.187733);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.6202735);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.9130179);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8007697);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(178);

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
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.132197);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,5.94686);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,7.313249);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.964627);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,4.326898);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,3.083258);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.35161);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.144875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.9979);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.926834);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.87192);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.918759);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.576354);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.212953);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.019139);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6799642);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.55237);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.4053943);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2858757);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1905838);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1679722);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.1356698);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1195186);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.08721631);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.04360816);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03876281);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.02584187);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.003230234);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.04276249);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.09800446);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1086819);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.09815075);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.08359693);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.07056786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.06162893);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.05885766);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.05680529);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.05578587);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.05498518);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.05566884);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.05045786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.04426128);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.04057127);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03313943);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.02986875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.02558826);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02148773);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.01754466);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01647102);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.01480279);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.01389376);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01186864);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008392393);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.007912424);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.006460468);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.005107448);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.00228412);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(28819);

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
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.4511126);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.509728);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,3.310785);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.754772);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.033738);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.452019);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.094611);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.9217126);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.7998127);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.7923494);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.7189607);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.6604985);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.5866951);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.4768194);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.3947235);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.3171885);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.2533362);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2019226);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1467774);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1160952);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.09660775);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.07753498);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.06551083);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.04146255);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02819454);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.02073128);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.01741427);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.006219383);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.004146255);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0008292511);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.001658502);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01367636);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.03225829);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.03705045);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.03379643);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.02903859);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02453658);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.02130385);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.01954906);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01821051);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.01812535);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01726556);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.0165487);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01559676);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01406064);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01279306);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01146798);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01024889);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.009149988);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.007801133);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.006938012);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.006328984);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.005669919);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.005211762);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.004146255);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.00341909);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.002931845);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002687081);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001605838);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001311161);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0005863691);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0008292511);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(49090);

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
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.03792603);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03476553);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.007741618);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.007412035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.004997193);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(87);

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
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.003736902);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.01245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01017268);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008719438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.003114085);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.001245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0008807962);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001608106);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.00145324);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001345438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001078751);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0008040532);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0005085279);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__136 = new TH1D("VbbHcc_tags_Z_dR_Bj0__136","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(1,2448);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(2,9737);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(3,9543);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(4,7577);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(5,6027);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(6,4790);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(7,3907);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(8,3295);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(9,2824);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(10,2490);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(11,2302);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(12,2077);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(13,1905);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(14,1607);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(15,1536);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(16,1273);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(17,1005);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(18,869);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(19,688);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(20,587);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(21,489);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(22,417);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(23,338);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(24,215);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(25,198);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(26,147);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(27,101);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(28,59);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(29,31);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(30,17);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(31,32);
   VbbHcc_tags_Z_dR_Bj0__136->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__136->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__136->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099[30] = {
   6535.809,
   24174.39,
   27729.35,
   38896.77,
   31805.21,
   16678.53,
   10272.68,
   11273.2,
   9568.177,
   9344.643,
   5391.306,
   6946.246,
   5230.795,
   4311.409,
   3289.701,
   3456.596,
   1744.164,
   1998.277,
   2389.952,
   3022.356,
   1272.696,
   1185.516,
   1281.808,
   741.4215,
   280.247,
   1071.444,
   125.6312,
   85.71771,
   59.65741,
   12.44458};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099[30] = {
   876.101,
   1710.014,
   2228.82,
   14974.93,
   14895.48,
   1616.964,
   1166.209,
   1337.229,
   1194.282,
   1165.438,
   739.7432,
   991.5246,
   825.9797,
   633.3363,
   497.1881,
   623.7827,
   298.839,
   479.7599,
   554.5115,
   721.6171,
   391.26,
   391.2985,
   471.0149,
   381.3942,
   58.74729,
   468.7971,
   36.13433,
   27.99601,
   31.51029,
   6.836044};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMinimum(5.047683);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMaximum(59258.31);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__137 = new TH1D("data_mc_ratio__137","",30,0,6);
   data_mc_ratio__137->SetBinContent(1,0.3745519);
   data_mc_ratio__137->SetBinContent(2,0.4027816);
   data_mc_ratio__137->SetBinContent(3,0.344148);
   data_mc_ratio__137->SetBinContent(4,0.1947976);
   data_mc_ratio__137->SetBinContent(5,0.1894973);
   data_mc_ratio__137->SetBinContent(6,0.2871956);
   data_mc_ratio__137->SetBinContent(7,0.3803294);
   data_mc_ratio__137->SetBinContent(8,0.2922862);
   data_mc_ratio__137->SetBinContent(9,0.2951451);
   data_mc_ratio__137->SetBinContent(10,0.2664628);
   data_mc_ratio__137->SetBinContent(11,0.4269838);
   data_mc_ratio__137->SetBinContent(12,0.2990104);
   data_mc_ratio__137->SetBinContent(13,0.3641893);
   data_mc_ratio__137->SetBinContent(14,0.372732);
   data_mc_ratio__137->SetBinContent(15,0.4669117);
   data_mc_ratio__137->SetBinContent(16,0.3682813);
   data_mc_ratio__137->SetBinContent(17,0.5762073);
   data_mc_ratio__137->SetBinContent(18,0.4348747);
   data_mc_ratio__137->SetBinContent(19,0.2878719);
   data_mc_ratio__137->SetBinContent(20,0.1942193);
   data_mc_ratio__137->SetBinContent(21,0.3842237);
   data_mc_ratio__137->SetBinContent(22,0.3517455);
   data_mc_ratio__137->SetBinContent(23,0.2636901);
   data_mc_ratio__137->SetBinContent(24,0.2899835);
   data_mc_ratio__137->SetBinContent(25,0.7065195);
   data_mc_ratio__137->SetBinContent(26,0.137198);
   data_mc_ratio__137->SetBinContent(27,0.8039407);
   data_mc_ratio__137->SetBinContent(28,0.6883058);
   data_mc_ratio__137->SetBinContent(29,0.5196337);
   data_mc_ratio__137->SetBinContent(30,1.366056);
   data_mc_ratio__137->SetBinContent(31,3.106025);
   data_mc_ratio__137->SetBinError(1,0.007570182);
   data_mc_ratio__137->SetBinError(2,0.00408185);
   data_mc_ratio__137->SetBinError(3,0.00352292);
   data_mc_ratio__137->SetBinError(4,0.002237871);
   data_mc_ratio__137->SetBinError(5,0.002440913);
   data_mc_ratio__137->SetBinError(6,0.004149636);
   data_mc_ratio__137->SetBinError(7,0.006084686);
   data_mc_ratio__137->SetBinError(8,0.005091909);
   data_mc_ratio__137->SetBinError(9,0.005553965);
   data_mc_ratio__137->SetBinError(10,0.005339947);
   data_mc_ratio__137->SetBinError(11,0.008899358);
   data_mc_ratio__137->SetBinError(12,0.00656097);
   data_mc_ratio__137->SetBinError(13,0.008344105);
   data_mc_ratio__137->SetBinError(14,0.009297983);
   data_mc_ratio__137->SetBinError(15,0.01191349);
   data_mc_ratio__137->SetBinError(16,0.01032204);
   data_mc_ratio__137->SetBinError(17,0.01817589);
   data_mc_ratio__137->SetBinError(18,0.01475211);
   data_mc_ratio__137->SetBinError(19,0.01097501);
   data_mc_ratio__137->SetBinError(20,0.008016289);
   data_mc_ratio__137->SetBinError(21,0.0173752);
   data_mc_ratio__137->SetBinError(22,0.01722505);
   data_mc_ratio__137->SetBinError(23,0.01434285);
   data_mc_ratio__137->SetBinError(24,0.01977671);
   data_mc_ratio__137->SetBinError(25,0.05021015);
   data_mc_ratio__137->SetBinError(26,0.0113159);
   data_mc_ratio__137->SetBinError(27,0.07999509);
   data_mc_ratio__137->SetBinError(28,0.08960978);
   data_mc_ratio__137->SetBinError(29,0.09332897);
   data_mc_ratio__137->SetBinError(30,0.3313174);
   data_mc_ratio__137->SetBinError(31,0.6089828);
   data_mc_ratio__137->SetMinimum(0.4);
   data_mc_ratio__137->SetMaximum(1.6);
   data_mc_ratio__137->SetEntries(146.5404);
   data_mc_ratio__137->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__137->SetLineColor(ci);
   data_mc_ratio__137->SetLineWidth(2);
   data_mc_ratio__137->SetMarkerStyle(20);
   data_mc_ratio__137->SetMarkerSize(1.2);
   data_mc_ratio__137->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__137->GetXaxis()->SetRange(1,30);
   data_mc_ratio__137->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__137->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__137->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__137->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__137->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__137->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1100[30] = {
   0.1340463,
   0.07073658,
   0.08037763,
   0.3849916,
   0.4683346,
   0.09694885,
   0.1135254,
   0.1186202,
   0.1248182,
   0.1247173,
   0.1372104,
   0.1427425,
   0.1579071,
   0.1468978,
   0.1511347,
   0.1804615,
   0.1713365,
   0.2400868,
   0.2320178,
   0.2387598,
   0.3074261,
   0.3300659,
   0.3674615,
   0.5144094,
   0.2096268,
   0.4375374,
   0.2876224,
   0.326607,
   0.5281874,
   0.549319};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1100,Graph_from_mc_statistical_error_fy1100,Graph_from_mc_statistical_error_fex1100,Graph_from_mc_statistical_error_fey1100);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1100 = new TH1F("Graph_Graph_from_mc_statistical_error1100","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1100->SetMinimum(0.3408172);
   Graph_Graph_from_mc_statistical_error1100->SetMaximum(1.659183);
   Graph_Graph_from_mc_statistical_error1100->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1100->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1100);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}

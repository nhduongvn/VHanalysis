void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Aug 22 09:16:03 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(0,0,1,1);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.825426,6.314516,10.83601);
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
   st->SetMaximum(9.239533e+08);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(0.001542537);
   st_stack_17->SetMaximum(2.950303e+09);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,8308.259);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,7505.667);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,5163.485);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,5139.952);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,5094.071);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,6392.027);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,3544.064);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,3407.683);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,5367.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,3830.577);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,6205.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,5719.967);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,9189.943);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,10027.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,7229.612);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,7782.87);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,4887.293);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,5639.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,4109.684);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,3043.59);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,4349.467);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,684.5798);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,1640.554);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,2483.319);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,1833.173);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1230.474);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,581.2222);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,506.6858);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,353.5196);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1092.715);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1351.004);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,814.0343);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,867.2474);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1426.663);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,1590.757);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,691.8179);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,571.135);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1290.033);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,665.8892);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1353.516);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,884.336);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,1903.043);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,1803.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1030.814);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1619.798);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,807.8818);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,946.6808);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1181.184);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,664.5577);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,1243.078);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,91.65414);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,831.1071);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,699.1701);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,546.6039);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,418.4971);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,215.1946);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,182.988);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,155.3315);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,15.359);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,18.96964);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,18.12042);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,19.68142);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,21.5039);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,21.18825);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,25.60845);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,24.10047);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,30.97707);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,29.27935);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,30.55283);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,29.67741);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,30.60048);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,33.10237);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,27.15615);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,28.82714);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,23.75924);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,20.7775);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,17.14772);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,14.88476);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,13.12303);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,9.38678);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,7.907364);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,6.729069);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,3.778095);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,3.973158);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,2.57066);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,2.677588);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,1.95718);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,1.524984);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,1.639521);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,1.628402);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,1.606131);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,1.714079);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,1.640392);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,1.934329);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,1.86374);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,2.182795);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,2.05103);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,2.081982);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,2.052132);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,2.047144);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,2.123569);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,1.933677);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,2.088506);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,1.874714);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,1.713561);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,1.572452);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,1.504122);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,1.301709);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.156518);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.087532);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,0.9203512);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.6956297);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.7114006);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.5302123);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.6297053);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.5863147);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.1320462);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,229.8996);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,342.069);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,369.6648);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,407.6275);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,434.5909);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,444.8236);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,472.9545);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,491.496);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,521.3959);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,571.6938);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,609.4195);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,634.7881);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,666.9613);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,671.8359);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,631.1904);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,585.8771);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,523.5012);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,438.7961);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,369.362);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,304.6266);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,241.412);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,194.073);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,155.4054);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,126.7583);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,98.45879);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,76.00599);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,57.55195);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,39.8534);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,32.49461);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.09439872);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,3.54036);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,4.296513);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,4.443314);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,4.666722);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,4.804434);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,4.848177);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,4.989338);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,5.085854);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,5.251467);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,5.499418);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,5.697596);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,5.809556);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,5.964965);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,6.005145);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,5.8322);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,5.609547);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,5.298386);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,4.847267);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,4.450375);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,4.020192);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,3.573398);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,3.206026);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,2.863753);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,2.590593);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,2.269639);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.013003);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,1.743191);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,1.456493);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,1.304283);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,60.82838);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,97.85853);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,102.302);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,81.2025);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,83.53089);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,64.68093);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,55.2456);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,57.40245);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,60.74671);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,69.23469);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,69.13136);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,81.25577);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,84.10709);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,85.96073);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,90.41146);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,67.88147);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,57.48499);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,52.32714);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,41.8935);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,34.27917);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,30.4833);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,23.72039);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,20.95411);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,15.08443);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,16.65598);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,14.78705);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,9.816636);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,8.999236);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,4.3131);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,2.284888);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,5.384177);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,5.028713);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,5.388671);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,6.905182);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,5.830792);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,4.117449);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,4.851774);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,5.229907);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,5.140264);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,5.044717);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,5.908494);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,5.559694);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,5.742507);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,6.723116);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,4.845929);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,4.37154);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,4.586669);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,4.254045);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,3.789842);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,4.213888);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,3.357605);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,2.734953);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,2.16107);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.29315);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,2.013688);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.152174);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,1.811909);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,0.8111345);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,19.58685);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,14.02793);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,10.28644);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,5.92658);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,4.6154);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,6.954386);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,5.084241);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,6.02223);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,3.857653);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,6.482297);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,6.621168);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,6.913846);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,6.28119);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,4.383549);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,8.549351);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,6.394397);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,4.967613);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,3.971779);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,3.366348);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,2.907964);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,1.969516);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,8.393178);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,1.354314);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,1.875617);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.426536);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,1.195428);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,1.086523);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,0.7833614);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.2756438);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,5.870224);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,1.906718);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,1.84792);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.058648);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,0.5840473);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,1.596489);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,1.020427);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.426632);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,1.020595);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,1.446025);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.310052);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,1.510425);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,1.334375);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,1.006402);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,1.593296);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,1.395062);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,1.036967);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,0.9181783);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,0.9969892);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,0.8347351);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,0.472624);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,5.307536);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.3338409);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,0.8726996);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.4308954);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,0.3420306);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.2957987);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.2196125);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.1303628);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.07803031);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,0.1195687);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,0.2467491);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,0.2295285);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,0.1234178);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,0.1335451);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,0.1243737);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,0.1297649);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.07803031);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.1195687);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.1746882);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.1623026);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.1234178);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.1335451);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.1243737);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.1297649);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.6607268);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.6328337);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.2603627);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.2596262);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.07873842);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.07985163);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.1825174);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.228064);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.08729333);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.108763);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3090167);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.3704408);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.2827811);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.09078265);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.1805163);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.07823021);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.2507009);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.2397693);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.1505751);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.1503824);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.07873842);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.07985163);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.1290644);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.1319954);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.08729333);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.108763);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.1785686);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.1854659);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.1633181);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.09132081);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.09078265);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.1276761);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.07823021);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.08656424);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,3.180991);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,1.34486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,1.626549);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,0.697182);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.6037863);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.352665);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.439766);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.370702);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,2.356247);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.51312);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,1.821479);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,2.356108);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,1.931287);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,2.939801);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,2.889732);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,1.310103);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,0.9443508);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,0.1615324);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.8459486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.2100167);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.42217);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.4139876);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2147682);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.2460305);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.216017);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.1949745);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.2268635);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,0.8272105);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,0.5100982);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.577815);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.3560891);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.3506973);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.5178838);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.3114573);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.5217387);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.7183842);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.5737277);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.6484898);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.7131731);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.6127259);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.781133);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.7823234);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.5128206);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.4318557);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.1615324);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4243035);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.2100167);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.29852);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.2928679);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2147682);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.2460305);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.216017);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.1949745);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.2268635);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.06075);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,1.946999);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,2.053692);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,1.69994);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,1.307158);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,0.9824674);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,0.752901);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,0.7409902);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,0.8170516);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.014201);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,1.3084);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,1.655974);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,1.991171);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,2.188953);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,2.171532);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,1.828192);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,1.325633);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.013195);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.6906645);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.4764151);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.3421589);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.2287816);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.2145958);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.2468677);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.2006215);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.2184766);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.1989924);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.09465085);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.05675754);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.03514855);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.04732204);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.04807184);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.0427352);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.03741929);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.03217345);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.02798457);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.02810073);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.02970708);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.0328611);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.03813446);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.04261435);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.04738281);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.04949361);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.04910833);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.04500179);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.03827941);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.03316253);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.02727115);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.02253922);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.01901838);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.01575039);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.01513887);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.01624931);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.01499836);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.01553321);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.01510572);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01030641);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.007818158);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.4135323);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,0.8688205);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.01101);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,0.9570329);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,0.767249);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.556447);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.4570624);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.4378382);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.4521789);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.5581354);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,0.6396356);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,0.716868);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,0.751846);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,0.7984074);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,0.7420727);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,0.6676241);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.5545493);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.4366072);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.3529011);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.2620945);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.1985567);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.1578604);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.1413137);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.1368358);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.1434445);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1150372);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.08549815);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.05884762);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.03091425);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.01220082);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.01737914);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.01853436);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.01788223);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.01597632);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.01360967);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.0123734);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01214197);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.01228429);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.01364585);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.01456889);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.01542051);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.01582739);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.01628776);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.0156953);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.0148947);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.0135688);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01202379);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01084001);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.009355598);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.008134391);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.007221014);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.006861896);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.006714277);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.006942896);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.006237303);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.005426734);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.004483903);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.003272335);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.00716626);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.008652945);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.006314229);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01110787);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.004240709);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.004216984);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.00193606);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.004064582);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.002251171);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.002272667);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.006306363);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.001765897);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.003861509);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002108704);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.00218387);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.002042848);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.007104478);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.004141557);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.004329205);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.00367449);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.005097711);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.002998647);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.002985267);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.00193606);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.002874957);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002251171);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.002272667);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.00364159);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.001765897);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.002744127);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002108704);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.00218387);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002042848);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.004101821);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.002638309);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.004049581);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.00462996);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.004842144);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.0005684521);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.001137609);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.00060892);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001086359);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.0002247097);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.00144165);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.0008005945);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.0008119013);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.001637439);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001459791);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.002746938);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001105153);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001145696);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.0006019822);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.0008958157);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.0002916423);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.0002834402);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.0003214624);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0005563512);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0002965616);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.0003037742);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.0002893287);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0002701943);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0002988116);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0002841322);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.0008812904);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001086272);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.001141403);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001148982);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0004019571);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0005690093);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0004307618);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0005446355);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0002247097);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0006475953);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.0004629477);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0004716336);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0006702124);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0006530389);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.0008753134);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0005555156);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0005731);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0004259716);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0005237552);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0002916423);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0002834402);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.0003214624);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0003945337);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0002965616);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0003037742);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0002893287);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0002701943);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0002988116);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0002841322);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__45 = new TH1D("VbbHcc_tags_Z_dR__45","",30,0,6);
   VbbHcc_tags_Z_dR__45->SetBinContent(2,1);
   VbbHcc_tags_Z_dR__45->SetBinContent(3,5455);
   VbbHcc_tags_Z_dR__45->SetBinContent(4,6257);
   VbbHcc_tags_Z_dR__45->SetBinContent(5,4648);
   VbbHcc_tags_Z_dR__45->SetBinContent(6,4236);
   VbbHcc_tags_Z_dR__45->SetBinContent(7,3815);
   VbbHcc_tags_Z_dR__45->SetBinContent(8,3740);
   VbbHcc_tags_Z_dR__45->SetBinContent(9,3679);
   VbbHcc_tags_Z_dR__45->SetBinContent(10,3782);
   VbbHcc_tags_Z_dR__45->SetBinContent(11,3849);
   VbbHcc_tags_Z_dR__45->SetBinContent(12,4001);
   VbbHcc_tags_Z_dR__45->SetBinContent(13,4365);
   VbbHcc_tags_Z_dR__45->SetBinContent(14,4610);
   VbbHcc_tags_Z_dR__45->SetBinContent(15,5094);
   VbbHcc_tags_Z_dR__45->SetBinContent(16,5018);
   VbbHcc_tags_Z_dR__45->SetBinContent(17,4892);
   VbbHcc_tags_Z_dR__45->SetBinContent(18,4422);
   VbbHcc_tags_Z_dR__45->SetBinContent(19,4079);
   VbbHcc_tags_Z_dR__45->SetBinContent(20,3559);
   VbbHcc_tags_Z_dR__45->SetBinContent(21,2959);
   VbbHcc_tags_Z_dR__45->SetBinContent(22,2347);
   VbbHcc_tags_Z_dR__45->SetBinContent(23,1972);
   VbbHcc_tags_Z_dR__45->SetBinContent(24,1512);
   VbbHcc_tags_Z_dR__45->SetBinContent(25,1255);
   VbbHcc_tags_Z_dR__45->SetBinContent(26,1082);
   VbbHcc_tags_Z_dR__45->SetBinContent(27,1012);
   VbbHcc_tags_Z_dR__45->SetBinContent(28,833);
   VbbHcc_tags_Z_dR__45->SetBinContent(29,797);
   VbbHcc_tags_Z_dR__45->SetBinContent(30,505);
   VbbHcc_tags_Z_dR__45->SetBinContent(31,398);
   VbbHcc_tags_Z_dR__45->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__45->SetLineColor(ci);
   VbbHcc_tags_Z_dR__45->SetLineWidth(2);
   VbbHcc_tags_Z_dR__45->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__45->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1033[30] = {
   0,
   0.1320462,
   8636.156,
   7985.234,
   5668.539,
   5658.949,
   5641.208,
   6931.897,
   4105.604,
   3988.508,
   5987.526,
   4511.429,
   6924.427,
   6477.042,
   9983.309,
   10827.86,
   7993.062,
   8477.33,
   5500.29,
   6157.318,
   4542.84,
   3401.998,
   4637.208,
   920.6183,
   1827.083,
   2634.564,
   1954.051,
   1327.015,
   652.8424,
   559.3481};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1033[30] = {
   0,
   0.09439872,
   1092.74,
   1351.024,
   814.0659,
   867.279,
   1426.689,
   1590.777,
   691.8518,
   571.1832,
   1290.056,
   665.9369,
   1353.539,
   884.3788,
   1903.062,
   1803.101,
   1030.856,
   1619.817,
   807.9141,
   946.7064,
   1181.201,
   664.5831,
   1243.091,
   91.9323,
   831.1173,
   699.1794,
   546.6141,
   418.5076,
   215.2057,
   183.0041};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1033,Graph_from_VbbHcc_tags_Z_dR_fy1033,Graph_from_VbbHcc_tags_Z_dR_fex1033,Graph_from_VbbHcc_tags_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1033","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMinimum(13.89405);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMaximum(13894.05);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",30,0,6);
   data_mc_ratio__46->SetBinContent(2,7.573104);
   data_mc_ratio__46->SetBinContent(3,0.6316468);
   data_mc_ratio__46->SetBinContent(4,0.7835713);
   data_mc_ratio__46->SetBinContent(5,0.8199643);
   data_mc_ratio__46->SetBinContent(6,0.7485488);
   data_mc_ratio__46->SetBinContent(7,0.6762736);
   data_mc_ratio__46->SetBinContent(8,0.5395349);
   data_mc_ratio__46->SetBinContent(9,0.8960923);
   data_mc_ratio__46->SetBinContent(10,0.9482242);
   data_mc_ratio__46->SetBinContent(11,0.6428364);
   data_mc_ratio__46->SetBinContent(12,0.8868588);
   data_mc_ratio__46->SetBinContent(13,0.630377);
   data_mc_ratio__46->SetBinContent(14,0.7117447);
   data_mc_ratio__46->SetBinContent(15,0.5102517);
   data_mc_ratio__46->SetBinContent(16,0.4634343);
   data_mc_ratio__46->SetBinContent(17,0.6120308);
   data_mc_ratio__46->SetBinContent(18,0.5216265);
   data_mc_ratio__46->SetBinContent(19,0.7415972);
   data_mc_ratio__46->SetBinContent(20,0.5780114);
   data_mc_ratio__46->SetBinContent(21,0.6513546);
   data_mc_ratio__46->SetBinContent(22,0.6898888);
   data_mc_ratio__46->SetBinContent(23,0.4252559);
   data_mc_ratio__46->SetBinContent(24,1.642374);
   data_mc_ratio__46->SetBinContent(25,0.6868871);
   data_mc_ratio__46->SetBinContent(26,0.4106942);
   data_mc_ratio__46->SetBinContent(27,0.5178983);
   data_mc_ratio__46->SetBinContent(28,0.6277245);
   data_mc_ratio__46->SetBinContent(29,1.220815);
   data_mc_ratio__46->SetBinContent(30,0.9028367);
   data_mc_ratio__46->SetBinContent(31,1.013045);
   data_mc_ratio__46->SetBinError(2,7.573104);
   data_mc_ratio__46->SetBinError(3,0.008552182);
   data_mc_ratio__46->SetBinError(4,0.009905934);
   data_mc_ratio__46->SetBinError(5,0.01202713);
   data_mc_ratio__46->SetBinError(6,0.01150117);
   data_mc_ratio__46->SetBinError(7,0.01094902);
   data_mc_ratio__46->SetBinError(8,0.008822338);
   data_mc_ratio__46->SetBinError(9,0.01477365);
   data_mc_ratio__46->SetBinError(10,0.01541879);
   data_mc_ratio__46->SetBinError(11,0.01036159);
   data_mc_ratio__46->SetBinError(12,0.01402072);
   data_mc_ratio__46->SetBinError(13,0.009541316);
   data_mc_ratio__46->SetBinError(14,0.01048271);
   data_mc_ratio__46->SetBinError(15,0.007149159);
   data_mc_ratio__46->SetBinError(16,0.006542185);
   data_mc_ratio__46->SetBinError(17,0.008750443);
   data_mc_ratio__46->SetBinError(18,0.007844229);
   data_mc_ratio__46->SetBinError(19,0.01161158);
   data_mc_ratio__46->SetBinError(20,0.009688855);
   data_mc_ratio__46->SetBinError(21,0.01197416);
   data_mc_ratio__46->SetBinError(22,0.01424041);
   data_mc_ratio__46->SetBinError(23,0.009576281);
   data_mc_ratio__46->SetBinError(24,0.04223731);
   data_mc_ratio__46->SetBinError(25,0.01938936);
   data_mc_ratio__46->SetBinError(26,0.01248547);
   data_mc_ratio__46->SetBinError(27,0.01627999);
   data_mc_ratio__46->SetBinError(28,0.02174936);
   data_mc_ratio__46->SetBinError(29,0.0432435);
   data_mc_ratio__46->SetBinError(30,0.0401757);
   data_mc_ratio__46->SetBinError(31,0.403758);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(8.770988);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,30);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1034[30] = {
   0,
   0.7148913,
   0.1265308,
   0.1691903,
   0.1436112,
   0.153258,
   0.2529048,
   0.2294866,
   0.168514,
   0.1432072,
   0.2154573,
   0.1476111,
   0.1954731,
   0.1365405,
   0.1906244,
   0.1665243,
   0.1289688,
   0.1910764,
   0.1468857,
   0.1537531,
   0.2600138,
   0.1953508,
   0.2680689,
   0.09985929,
   0.4548875,
   0.2653872,
   0.2797337,
   0.3153751,
   0.3296442,
   0.3271738};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.1421304);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(1.85787);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}

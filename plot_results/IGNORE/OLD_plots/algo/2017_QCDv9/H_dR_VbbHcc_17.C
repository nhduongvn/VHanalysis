void H_dR_VbbHcc_17()
{
//=========Macro generated from canvas: H_dR_VbbHcc_17/H_dR_VbbHcc_17
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_17 = new TCanvas("H_dR_VbbHcc_17", "H_dR_VbbHcc_17",0,0,600,600);
   H_dR_VbbHcc_17->SetHighLightColor(2);
   H_dR_VbbHcc_17->Range(0,0,1,1);
   H_dR_VbbHcc_17->SetFillColor(0);
   H_dR_VbbHcc_17->SetFillStyle(4000);
   H_dR_VbbHcc_17->SetBorderMode(0);
   H_dR_VbbHcc_17->SetBorderSize(2);
   H_dR_VbbHcc_17->SetFrameFillStyle(1000);
   H_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-649.8791,10.52419,649239.2);
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
   st->SetMaximum(556428.9);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",50,0,10);
   st_stack_22->SetMinimum(0.01);
   st_stack_22->SetMaximum(584250.3);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,50);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",50,0,10);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,140661.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,207831.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,169417.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,174790.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,170727);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,157447.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,207043.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,202362.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,193796.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,225649.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,237591.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,194741.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,229412.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,204023.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,118224.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,57768.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,36908.17);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,33718.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,23975.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,13149.72);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,5741.385);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,2832.83);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,2903.996);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,1361.46);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,13724.31);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,16543.88);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,14812.04);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,15192.61);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,14824.29);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,14102.93);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,16666.47);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,16322.71);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,15889.52);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,17135.01);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,17532.73);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,15796.33);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,17491.6);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,16396.14);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,12376.23);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,8522.06);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,6936.443);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,6732.468);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,5535.327);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4289.831);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2593.77);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2003.163);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2060.628);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1361.46);
   VbbHcc_algo_H_dR_stack_1->SetEntries(2422);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",50,0,10);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.205481);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,315.0062);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,558.1346);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,740.291);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,1000.298);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,1266.933);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,1286.64);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,1257.187);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,1222.634);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,1196.678);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,1252.998);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,1324.937);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,1261.506);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,1236.021);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,1174.481);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,768.4825);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,520.0756);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,339.7037);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,227.5597);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,133.7674);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,81.62795);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,41.96181);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,21.32493);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,8.698863);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.883739);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,0.9063101);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.2595984);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.1038035);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,8.149344);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,10.82306);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,11.90822);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,12.72096);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,13.8129);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,13.33363);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,13.41404);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,13.37458);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,13.29455);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,13.63097);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,14.14152);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,13.46285);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,13.20582);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,12.59263);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,9.790668);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,7.657936);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,5.788924);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,4.701269);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.455845);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,2.698529);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,1.84237);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.294097);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.7816078);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.5525389);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.2433396);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1296873);
   VbbHcc_algo_H_dR_stack_2->SetEntries(263449);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",50,0,10);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,1.558283);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,2790.007);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,6208.253);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,8918.499);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,11642.12);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,12797.43);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,12589.24);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,12051.5);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,11577.2);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,11254.31);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,10926.5);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,10360.86);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,9382.852);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,8434.804);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,7392.388);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,4396.093);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,2698.347);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,1653.029);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,982.9214);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,553.68);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,290.2324);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,146.9055);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,67.15462);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,28.32201);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,9.48302);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2.342756);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,0.3180682);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.3281451);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,13.57648);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,20.25443);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,24.2848);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,27.80679);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,29.35033);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,29.35305);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,28.9453);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,28.5007);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,28.14314);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,27.73832);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,26.99608);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,25.62457);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,24.18327);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,22.59064);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,17.3255);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,13.50227);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,10.49175);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,8.02703);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,5.987597);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,4.298555);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,3.036273);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,2.037929);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,1.326153);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,0.7630858);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,0.3783962);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,0.1202598);
   VbbHcc_algo_H_dR_stack_3->SetEntries(2401118);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",50,0,10);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,269.9361);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,358.2396);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,348.5029);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,337.8089);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,326.1236);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,327.675);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,378.9216);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,369.6913);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,378.8525);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,380.8649);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,374.1407);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,380.0277);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,381.6186);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,351.3215);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,189.1783);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,113.7757);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,65.12741);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,39.89704);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,25.69057);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,16.23268);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,7.36984);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,3.521528);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,0.5389005);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,10.31667);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,11.91768);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,11.6676);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,11.45945);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,11.29395);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,11.29984);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,12.19051);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,11.99877);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,12.19367);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,12.26366);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,12.10378);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,12.24134);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,12.16578);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,11.69331);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,8.561708);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,6.692848);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,5.014318);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,3.835774);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,3.116529);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,2.514375);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,1.684971);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,1.125814);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,0.3828649);
   VbbHcc_algo_H_dR_stack_4->SetEntries(14584);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",50,0,10);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,90.19522);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,261.1867);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,201.5335);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,128.7606);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,147.2767);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,143.5871);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,154.9416);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,135.9495);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,170.7045);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,146.7468);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,177.3242);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,204.1582);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,166.3749);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,177.8727);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,106.8242);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,50.17027);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,33.2544);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,22.02408);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,14.69717);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,8.743399);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,4.436854);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,1.335583);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,0.8531787);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,10.99534);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,18.59476);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,16.33099);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,13.17106);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,13.86848);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,13.71012);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,14.29623);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,13.31653);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,15.06465);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,13.72333);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,15.217);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,16.54014);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,14.74697);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,15.3663);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,12.11169);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,8.049495);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,6.737928);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,5.448241);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,4.452295);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,3.354031);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,2.210444);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,1.335583);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,0.8531787);
   VbbHcc_algo_H_dR_stack_5->SetEntries(2033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",50,0,10);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,0.9709226);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,2.861754);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,3.461122);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,5.972632);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,7.358668);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,7.755045);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,6.475265);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,4.109165);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,6.117175);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,6.124824);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,6.010927);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,6.157081);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,7.503469);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,4.61011);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,3.859486);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.647484);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.600098);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.1829964);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.5386485);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.2057269);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.250968);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.44406);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.8093178);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.8936022);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,1.212542);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,1.313459);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,1.312658);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,1.224727);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.9337431);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,1.17888);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,1.178464);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.226077);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,1.20342);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,1.317553);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.048963);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.9801149);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.6300576);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6052667);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.1829964);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.3222941);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.2057269);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.250968);
   VbbHcc_algo_H_dR_stack_6->SetEntries(380);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",50,0,10);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,13.02918);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,22.58744);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,28.82604);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,26.88746);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,25.40007);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,22.33722);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,22.15726);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,19.86542);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,15.40993);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,17.89224);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,15.89814);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,15.63065);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,12.65749);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,12.55176);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,5.880698);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,4.156576);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,2.651167);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,1.950545);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.9535058);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,0.8606152);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.7317852);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.1773522);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.478343);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.956141);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,2.20836);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,2.161095);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,2.038351);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,1.921201);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,1.9083);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,1.840475);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,1.608271);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,1.743499);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,1.641721);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,1.627979);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.474408);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.459947);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.9617031);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.8292566);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.6360731);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.5540265);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.3912784);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.3686587);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.3400625);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.1773522);
   VbbHcc_algo_H_dR_stack_7->SetEntries(1796);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",50,0,10);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,9.651876);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,17.03736);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,19.11111);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,21.5553);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,28.61005);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,26.10574);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,27.80089);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,24.28744);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,23.63449);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,18.23314);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,20.90418);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,14.97961);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,13.5971);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,8.912318);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,3.87066);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,2.422356);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,1.487299);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,0.9179798);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.2375942);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,0.4838646);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.5699959);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.462098);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.938836);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,2.040244);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,2.162802);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,2.47354);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,2.38168);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,2.468104);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,2.281289);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,2.262219);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,1.980743);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,2.14136);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.802968);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.729276);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.401431);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.9003858);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,0.6891886);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.5657025);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.4662989);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.2375942);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.3459994);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.3351138);
   VbbHcc_algo_H_dR_stack_8->SetEntries(1368);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",50,0,10);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.001974082);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.438053);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,6.67553);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,7.074249);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,7.289075);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,6.921298);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,6.202858);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,5.538172);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,4.920734);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,4.639405);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,4.405628);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,3.844629);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,3.306462);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,2.891549);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,2.331372);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,1.240711);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.6781024);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.3574771);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.2240328);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.1229106);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.07004601);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.03686115);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.01911691);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.005056287);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.003925618);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.001974082);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.09380167);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1151074);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1181023);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1205724);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.1169656);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.110798);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.1043802);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.09826123);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.09461451);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.09174899);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.08607027);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.07971506);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.07457587);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.06713702);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.04899865);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.03596322);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.02613232);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.02047786);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.01520216);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.01111649);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.008280442);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.006101899);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.002745045);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.002776775);
   VbbHcc_algo_H_dR_stack_9->SetEntries(42122);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",50,0,10);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0004972463);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.6997918);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,1.500432);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,1.942452);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,2.119815);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,1.825315);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.352887);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,0.9892817);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,0.8625405);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,0.8200138);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,0.9037535);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,0.8761297);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,0.8429968);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,0.7798475);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.6657041);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.4026089);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.2098844);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.1350259);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.0815321);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.05102929);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.02425393);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.01496623);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.006868498);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.003213287);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.002028471);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.0004853753);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0004972463);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01759412);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.02579858);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.02941406);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.03076725);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.02852758);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.02454911);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.02096596);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.01954396);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.01908327);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.02001369);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.01968326);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.01932741);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.0185801);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.01715497);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.01333764);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.009610016);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.007708134);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.005955108);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.004637893);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.003207585);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.00251153);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.001719796);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.00114773);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.0009255725);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.0004853753);
   VbbHcc_algo_H_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",50,0,10);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.02597146);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.1075574);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.0923793);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.1516054);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.2855485);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.2664373);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.3147519);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.2989885);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.2516362);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.1595459);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.1390464);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.1232612);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.09107081);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.05802547);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01726907);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.01477684);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.003774817);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.003046048);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.002029697);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.007104444);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01405432);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01260792);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01674373);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.02288984);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.02207967);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.02426349);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.02358228);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.02155075);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.01772588);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01636505);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.01468783);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.0129473);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.01032891);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.00538124);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.004987381);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.002663385);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.002165072);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.002029697);
   VbbHcc_algo_H_dR_stack_11->SetEntries(1619);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",50,0,10);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,125.6306);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,435.253);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,661.057);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,1314.308);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,1990.134);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,2075.602);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,1960.96);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,1252.794);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,942.9052);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,567.423);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,516.1599);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,327.3285);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,337.5932);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,311.3834);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,141.8223);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,67.62328);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,45.99708);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,19.90494);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,21.03435);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,12.7053);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,26.21353);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,47.33726);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,58.53494);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,82.42839);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,102.3686);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,104.4457);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,101.3252);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,80.47505);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,70.00723);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,54.11379);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,51.63757);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,41.02627);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,41.4444);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,40.68269);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,26.94583);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,18.33234);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,15.31082);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,10.04753);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,10.67602);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,7.933517);
   VbbHcc_algo_H_dR_stack_12->SetEntries(2893);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__43 = new TH1D("VbbHcc_algo_H_dR__43","",50,0,10);
   VbbHcc_algo_H_dR__43->SetBinContent(2,5);
   VbbHcc_algo_H_dR__43->SetBinContent(3,7743);
   VbbHcc_algo_H_dR__43->SetBinContent(4,8233);
   VbbHcc_algo_H_dR__43->SetBinContent(5,5767);
   VbbHcc_algo_H_dR__43->SetBinContent(6,5703);
   VbbHcc_algo_H_dR__43->SetBinContent(7,5730);
   VbbHcc_algo_H_dR__43->SetBinContent(8,6116);
   VbbHcc_algo_H_dR__43->SetBinContent(9,6739);
   VbbHcc_algo_H_dR__43->SetBinContent(10,7463);
   VbbHcc_algo_H_dR__43->SetBinContent(11,8387);
   VbbHcc_algo_H_dR__43->SetBinContent(12,9900);
   VbbHcc_algo_H_dR__43->SetBinContent(13,11192);
   VbbHcc_algo_H_dR__43->SetBinContent(14,12977);
   VbbHcc_algo_H_dR__43->SetBinContent(15,14135);
   VbbHcc_algo_H_dR__43->SetBinContent(16,13840);
   VbbHcc_algo_H_dR__43->SetBinContent(17,8022);
   VbbHcc_algo_H_dR__43->SetBinContent(18,4977);
   VbbHcc_algo_H_dR__43->SetBinContent(19,3214);
   VbbHcc_algo_H_dR__43->SetBinContent(20,1970);
   VbbHcc_algo_H_dR__43->SetBinContent(21,1198);
   VbbHcc_algo_H_dR__43->SetBinContent(22,654);
   VbbHcc_algo_H_dR__43->SetBinContent(23,397);
   VbbHcc_algo_H_dR__43->SetBinContent(24,161);
   VbbHcc_algo_H_dR__43->SetBinContent(25,87);
   VbbHcc_algo_H_dR__43->SetBinContent(26,42);
   VbbHcc_algo_H_dR__43->SetBinContent(27,7);
   VbbHcc_algo_H_dR__43->SetBinContent(28,4);
   VbbHcc_algo_H_dR__43->SetEntries(144663);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__43->SetLineColor(ci);
   VbbHcc_algo_H_dR__43->SetLineWidth(2);
   VbbHcc_algo_H_dR__43->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__43->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__43->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR__43->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__43->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__43->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__43->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__43->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__43->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__43->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__43->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__43->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__43->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__43->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__43->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__43->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__43->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1043[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1043[50] = {
   0,
   1.766235,
   144281.1,
   215703.6,
   180347.5,
   189277.5,
   187325.3,
   173934.7,
   222910.3,
   216974.7,
   207790.6,
   238971.4,
   250393,
   206338.6,
   240006.2,
   213459.8,
   123842.5,
   61227.79,
   39051.52,
   35014.53,
   24726.05,
   13560.91,
   5943.663,
   2926.192,
   2942.594,
   1374.833,
   3.249552,
   0.5776666,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1043[50] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1043[50] = {
   0,
   0.3441781,
   13724.35,
   16543.98,
   14812.2,
   15192.87,
   14824.69,
   14103.37,
   16666.82,
   16322.95,
   15889.72,
   17135.13,
   17532.84,
   15796.42,
   17491.68,
   16396.22,
   12376.29,
   8522.1,
   6936.475,
   6732.485,
   5535.344,
   4289.844,
   2593.774,
   2003.166,
   2060.629,
   1361.46,
   0.4498867,
   0.176865,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_H_dR_fx1043,Graph_from_VbbHcc_algo_H_dR_fy1043,Graph_from_VbbHcc_algo_H_dR_fex1043,Graph_from_VbbHcc_algo_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1043","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->SetMaximum(294718.4);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__44 = new TH1D("data_mc_ratio__44","",50,0,10);
   data_mc_ratio__44->SetBinContent(2,2.83088);
   data_mc_ratio__44->SetBinContent(3,0.05366609);
   data_mc_ratio__44->SetBinContent(4,0.03816812);
   data_mc_ratio__44->SetBinContent(5,0.03197716);
   data_mc_ratio__44->SetBinContent(6,0.03013036);
   data_mc_ratio__44->SetBinContent(7,0.0305885);
   data_mc_ratio__44->SetBinContent(8,0.03516262);
   data_mc_ratio__44->SetBinContent(9,0.03023189);
   data_mc_ratio__44->SetBinContent(10,0.03439571);
   data_mc_ratio__44->SetBinContent(11,0.04036274);
   data_mc_ratio__44->SetBinContent(12,0.04142756);
   data_mc_ratio__44->SetBinContent(13,0.04469774);
   data_mc_ratio__44->SetBinContent(14,0.06289178);
   data_mc_ratio__44->SetBinContent(15,0.0588943);
   data_mc_ratio__44->SetBinContent(16,0.06483658);
   data_mc_ratio__44->SetBinContent(17,0.06477581);
   data_mc_ratio__44->SetBinContent(18,0.08128662);
   data_mc_ratio__44->SetBinContent(19,0.08230154);
   data_mc_ratio__44->SetBinContent(20,0.05626235);
   data_mc_ratio__44->SetBinContent(21,0.04845093);
   data_mc_ratio__44->SetBinContent(22,0.04822687);
   data_mc_ratio__44->SetBinContent(23,0.06679382);
   data_mc_ratio__44->SetBinContent(24,0.0550203);
   data_mc_ratio__44->SetBinContent(25,0.02956575);
   data_mc_ratio__44->SetBinContent(26,0.03054917);
   data_mc_ratio__44->SetBinContent(27,2.154143);
   data_mc_ratio__44->SetBinContent(28,6.924409);
   data_mc_ratio__44->SetBinError(2,1.266008);
   data_mc_ratio__44->SetBinError(3,0.0006098813);
   data_mc_ratio__44->SetBinError(4,0.0004206508);
   data_mc_ratio__44->SetBinError(5,0.0004210802);
   data_mc_ratio__44->SetBinError(6,0.0003989814);
   data_mc_ratio__44->SetBinError(7,0.0004040926);
   data_mc_ratio__44->SetBinError(8,0.000449622);
   data_mc_ratio__44->SetBinError(9,0.0003682711);
   data_mc_ratio__44->SetBinError(10,0.0003981508);
   data_mc_ratio__44->SetBinError(11,0.0004407348);
   data_mc_ratio__44->SetBinError(12,0.0004163626);
   data_mc_ratio__44->SetBinError(13,0.0004225048);
   data_mc_ratio__44->SetBinError(14,0.000552086);
   data_mc_ratio__44->SetBinError(15,0.000495365);
   data_mc_ratio__44->SetBinError(16,0.0005511274);
   data_mc_ratio__44->SetBinError(17,0.0007232218);
   data_mc_ratio__44->SetBinError(18,0.00115222);
   data_mc_ratio__44->SetBinError(19,0.001451727);
   data_mc_ratio__44->SetBinError(20,0.001267607);
   data_mc_ratio__44->SetBinError(21,0.001399825);
   data_mc_ratio__44->SetBinError(22,0.00188582);
   data_mc_ratio__44->SetBinError(23,0.003352286);
   data_mc_ratio__44->SetBinError(24,0.004336207);
   data_mc_ratio__44->SetBinError(25,0.003169781);
   data_mc_ratio__44->SetBinError(26,0.004713839);
   data_mc_ratio__44->SetBinError(27,0.8141896);
   data_mc_ratio__44->SetBinError(28,3.462204);
   data_mc_ratio__44->SetMinimum(0.4);
   data_mc_ratio__44->SetMaximum(1.6);
   data_mc_ratio__44->SetEntries(8.92276);
   data_mc_ratio__44->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__44->SetLineColor(ci);
   data_mc_ratio__44->SetLineWidth(2);
   data_mc_ratio__44->SetMarkerStyle(20);
   data_mc_ratio__44->SetMarkerSize(1.2);
   data_mc_ratio__44->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__44->GetXaxis()->SetRange(1,50);
   data_mc_ratio__44->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__44->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__44->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__44->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__44->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__44->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1044[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1044[50] = {
   0,
   0.1948654,
   0.09512235,
   0.07669773,
   0.08213144,
   0.0802677,
   0.07913877,
   0.08108426,
   0.07476919,
   0.07522974,
   0.07646983,
   0.0717037,
   0.07002129,
   0.07655584,
   0.07288011,
   0.07681175,
   0.0999357,
   0.1391868,
   0.1776237,
   0.1922769,
   0.2238669,
   0.316339,
   0.4363932,
   0.6845638,
   0.7002764,
   0.9902734,
   0.1384458,
   0.3061713,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,11);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.008753899);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(2.188328);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->SetSelected(H_dR_VbbHcc_17);
}

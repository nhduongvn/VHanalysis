void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Mon Jul 24 10:12:22 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(0,0,1,1);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1783.674,1.052419,1781900);
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
   st->SetMaximum(1527173);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0.01);
   st_stack_251->SetMaximum(1603532);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetLabelSize(0.035);
   st_stack_251->GetXaxis()->SetTitleSize(0.035);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Events/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetLabelSize(0.05);
   st_stack_251->GetYaxis()->SetTitleSize(0.057);
   st_stack_251->GetYaxis()->SetTitleOffset(1.2);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetLabelSize(0.035);
   st_stack_251->GetZaxis()->SetTitleSize(0.035);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,404835.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,388903.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,246842.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,193843.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,132948.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,107261.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,80938.43);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,62259.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,50054.22);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,42924.49);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,30993.15);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,26772.48);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,24018.12);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,20985.57);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,13089.43);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,11764.13);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,10599.82);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,5682.728);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,3917.857);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,779.5241);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,1060.958);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,67.33404);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,12.45721);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,8627.012);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,8896.247);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,6972.903);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,6779.223);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,4842.519);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,4352.196);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,3795.425);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,3595.229);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,2718.222);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,3131.747);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,1797.161);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,2369.284);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1841.303);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,2191.133);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1063.441);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,1266.621);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,1322.24);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,757.6566);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,803.0157);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,123.5239);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,484.4796);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,24.14869);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,11.45526);
   VbbHcc_both_Sphericity_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,4603.445);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,4399.227);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,3043.585);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,2155.183);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,1623.139);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,1223.656);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,972.4843);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,788.1097);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,637.5359);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,495.1195);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,437.5884);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,355.2934);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,290.1654);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,227.7386);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,198.8672);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,143.9905);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,121.6053);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,83.02708);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,41.15103);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,19.05547);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,7.162537);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,2.277231);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.3873144);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(24,0.2589405);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,32.18413);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,31.14432);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,26.06415);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,21.81279);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,23.41657);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,17.1901);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,15.43951);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,14.35769);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,12.48813);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,11.05343);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,15.94714);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,10.78724);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,8.394077);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,7.766863);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,6.861683);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,5.911331);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,5.632404);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,4.672747);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,3.090323);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,2.170441);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,1.721308);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.6109738);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.1759592);
   VbbHcc_both_Sphericity_stack_2->SetBinError(24,0.2589405);
   VbbHcc_both_Sphericity_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,78270.62);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,82912.58);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,59174.68);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,42966.09);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,31985.73);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,24360.86);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,18954.64);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,15001.68);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,12077.52);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,9757.415);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,7978.703);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,6537.481);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,5389.314);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,4426.899);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,3587.583);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,2801.827);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,2137.246);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,1493.509);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,898.7256);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,416.3676);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,156.2657);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,53.93764);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,13.92405);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,1.777744);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,80.86719);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,83.02111);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,70.83931);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,60.11461);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,52.60445);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,45.01913);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,40.28194);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,35.56893);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,31.54165);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,28.55605);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,26.10165);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,23.87826);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,21.67714);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,19.18207);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,17.61306);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,15.73139);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,13.16823);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,10.89596);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,9.057287);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,5.947445);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,3.583785);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,2.401478);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,1.028178);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.3522523);
   VbbHcc_both_Sphericity_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,3215.676);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,3113.309);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,2213.506);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,1649.667);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,1266.911);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,958.8926);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,795.7103);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,648.3841);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,531.715);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,414.9546);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,357.9399);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,298.8992);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,256.265);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,210.9564);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,186.4923);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,129.8019);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,103.285);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,74.14371);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,37.81135);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,13.95483);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,6.366889);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,1.385623);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.73056);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(24,0.08677132);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,39.45317);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,44.3295);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,34.09405);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,28.05004);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,26.00734);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,21.50683);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,20.33242);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,17.12133);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,15.15362);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,14.83577);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,11.40786);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,11.69167);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,11.34472);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,9.765525);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,10.98288);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,8.849394);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,7.900482);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,8.279038);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,5.410787);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.161556);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.558521);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.7746881);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.5466457);
   VbbHcc_both_Sphericity_stack_4->SetBinError(24,0.08677132);
   VbbHcc_both_Sphericity_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,1872.004);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,1582.732);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,1077.674);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,816.2747);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,615.4551);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,491.1305);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,384.2354);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,316.5117);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,236.1715);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,181.7372);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,140.0886);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,129.0395);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,102.2936);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,83.1029);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,76.67193);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,77.54756);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,46.74349);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,22.06503);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,13.58392);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,15.22426);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,1.271202);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1974496);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,64.20982);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,45.61353);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,36.67778);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,36.15412);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,27.35416);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,27.79229);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,24.94438);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,28.95514);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,17.85097);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,12.40811);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,9.824008);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,14.93124);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,9.111514);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,12.5159);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,8.788223);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,10.08936);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,6.323703);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,3.367988);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,2.74952);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,11.46972);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.4739785);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1404861);
   VbbHcc_both_Sphericity_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,10.42773);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,9.03654);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(3,6.267706);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,3.902105);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,4.41726);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,3.134239);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,2.034072);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(8,1.975857);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(10,1.218873);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(11,0.3105298);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.9179724);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(13,1.596209);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(15,0.4361519);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(17,0.3757414);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(19,0.3114526);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,1.841222);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,1.712008);
   VbbHcc_both_Sphericity_stack_6->SetBinError(3,1.461137);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,1.072021);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,1.205504);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.9335022);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.8097515);
   VbbHcc_both_Sphericity_stack_6->SetBinError(8,0.8079671);
   VbbHcc_both_Sphericity_stack_6->SetBinError(10,0.6244181);
   VbbHcc_both_Sphericity_stack_6->SetBinError(11,0.3105298);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.5437004);
   VbbHcc_both_Sphericity_stack_6->SetBinError(13,0.714578);
   VbbHcc_both_Sphericity_stack_6->SetBinError(15,0.4361519);
   VbbHcc_both_Sphericity_stack_6->SetBinError(17,0.3757414);
   VbbHcc_both_Sphericity_stack_6->SetBinError(19,0.3114526);
   VbbHcc_both_Sphericity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,25.26431);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,23.28685);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,15.46545);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,15.60828);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,8.2761);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,6.514423);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,3.289568);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,3.45564);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,4.184689);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,3.443181);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,3.352277);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,2.252327);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,2.163141);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,1.199837);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,0.7958084);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.9426564);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(17,0.7038521);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.5875656);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(19,0.446974);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,2.483296);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,2.364659);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,1.951);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,1.990669);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,1.466156);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,1.234783);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.8938834);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.9219276);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,1.0058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,1.031519);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.918158);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.7089377);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.7789547);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.5490243);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.463821);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.4775658);
   VbbHcc_both_Sphericity_stack_7->SetBinError(17,0.3787984);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.3452079);
   VbbHcc_both_Sphericity_stack_7->SetBinError(19,0.3160601);
   VbbHcc_both_Sphericity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,22.95555);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,21.22087);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,17.67064);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,13.75761);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,8.060657);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,6.853536);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,7.347399);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,5.945826);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,5.010888);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,3.163604);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,3.300071);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.578478);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,2.3636);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.098375);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,2.181107);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.416354);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3827952);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,1.244281);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2887973);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,2.344406);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,2.244424);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,2.233932);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.826028);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.360084);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.307712);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.348518);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.174689);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,1.100581);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.8580521);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.919912);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6071534);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.7522676);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.4913457);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.739777);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.5463176);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2792661);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.5600163);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2887973);
   VbbHcc_both_Sphericity_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,16.32158);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,17.18438);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,12.34643);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,9.39954);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,7.571899);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,6.081154);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,4.847855);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.893799);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,3.360416);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.750094);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,2.418937);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,2.039196);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.491642);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.411745);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,1.03825);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.9199956);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.6267722);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.5114928);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.2548527);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.09180722);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.0380155);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.02237951);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.00246295);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.2187093);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.2524612);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.2164649);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1669458);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1542422);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1497698);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.1181319);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.1046075);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.1025752);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0922555);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.08682833);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.07435419);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.06355175);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.0677725);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.06620275);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.05015144);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.04111994);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.05391308);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02622552);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01521557);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.01003428);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.00803619);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.00246295);
   VbbHcc_both_Sphericity_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,15.36235);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,15.60747);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,11.06913);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,8.28601);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,6.465738);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,5.290373);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,4.346487);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,3.555722);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,2.957508);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,2.574034);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,2.134108);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,1.812983);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,1.552364);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,1.300308);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,1.099122);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.7981571);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.6339685);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.4721553);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.2597397);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.1016967);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.03206241);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.007852068);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001264743);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.09861706);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.09950587);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.08387108);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.07264409);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.06419941);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.05815323);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.05271457);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.04768521);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.04351102);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.04059228);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.03695478);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.03405026);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.03151033);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.0288153);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.02654695);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.02258815);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.02014794);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01736779);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.0128921);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.008061941);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.004557505);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00227402);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.000894364);
   VbbHcc_both_Sphericity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.4110585);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.3810744);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.2548701);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.2574644);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.1771512);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.1471107);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.1384761);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.09178212);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.0830075);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.09483729);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.06458778);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.03653953);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.03564663);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.05163415);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.06465083);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.0227753);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.02439946);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.003627711);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(20,0.002840873);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(22,0.002477707);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.04318856);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.03256542);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.02682798);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.02677293);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.02187653);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.01997084);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.01943876);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.01607044);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.01521816);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.01587291);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.01283224);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.01049285);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.009386595);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.0120821);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.02331636);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.007792099);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.007901701);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.004777046);
   VbbHcc_both_Sphericity_stack_11->SetBinError(20,0.002840873);
   VbbHcc_both_Sphericity_stack_11->SetBinError(22,0.002477707);
   VbbHcc_both_Sphericity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.2213342);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.1983155);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.1255384);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.1073217);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.08991776);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.07498073);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.05367942);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.05033919);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.0413315);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.03875125);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.03203127);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.03091893);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.01809113);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.02107786);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.02384571);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.01395499);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.01153388);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(18,0.007412004);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(19,0.002013489);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(20,0.001815941);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(21,0.0003740668);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.008961106);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.008333824);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.006850386);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.006081494);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.006610781);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.005174589);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.004327984);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.004191234);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.004256217);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.003697789);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.003348486);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.003300741);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.00253534);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.002751723);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.002863393);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.002183011);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.001991303);
   VbbHcc_both_Sphericity_stack_12->SetBinError(18,0.001566526);
   VbbHcc_both_Sphericity_stack_12->SetBinError(19,0.0008298906);
   VbbHcc_both_Sphericity_stack_12->SetBinError(20,0.0007533861);
   VbbHcc_both_Sphericity_stack_12->SetBinError(21,0.0003740668);
   VbbHcc_both_Sphericity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__501 = new TH1D("VbbHcc_both_Sphericity__501","",25,0,1);
   VbbHcc_both_Sphericity__501->SetBinContent(1,687228);
   VbbHcc_both_Sphericity__501->SetBinContent(2,661227);
   VbbHcc_both_Sphericity__501->SetBinContent(3,448022);
   VbbHcc_both_Sphericity__501->SetBinContent(4,315379);
   VbbHcc_both_Sphericity__501->SetBinContent(5,229501);
   VbbHcc_both_Sphericity__501->SetBinContent(6,172799);
   VbbHcc_both_Sphericity__501->SetBinContent(7,133185);
   VbbHcc_both_Sphericity__501->SetBinContent(8,105116);
   VbbHcc_both_Sphericity__501->SetBinContent(9,84539);
   VbbHcc_both_Sphericity__501->SetBinContent(10,68399);
   VbbHcc_both_Sphericity__501->SetBinContent(11,56042);
   VbbHcc_both_Sphericity__501->SetBinContent(12,46263);
   VbbHcc_both_Sphericity__501->SetBinContent(13,38185);
   VbbHcc_both_Sphericity__501->SetBinContent(14,31174);
   VbbHcc_both_Sphericity__501->SetBinContent(15,25320);
   VbbHcc_both_Sphericity__501->SetBinContent(16,20010);
   VbbHcc_both_Sphericity__501->SetBinContent(17,14960);
   VbbHcc_both_Sphericity__501->SetBinContent(18,10251);
   VbbHcc_both_Sphericity__501->SetBinContent(19,5798);
   VbbHcc_both_Sphericity__501->SetBinContent(20,2402);
   VbbHcc_both_Sphericity__501->SetBinContent(21,967);
   VbbHcc_both_Sphericity__501->SetBinContent(22,313);
   VbbHcc_both_Sphericity__501->SetBinContent(23,84);
   VbbHcc_both_Sphericity__501->SetBinContent(24,9);
   VbbHcc_both_Sphericity__501->SetBinContent(25,1);
   VbbHcc_both_Sphericity__501->SetEntries(3157198);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__501->SetLineColor(ci);
   VbbHcc_both_Sphericity__501->SetLineWidth(2);
   VbbHcc_both_Sphericity__501->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__501->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1501[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1501[25] = {
   492887.8,
   480998,
   312415.2,
   241481.9,
   168474.4,
   134324.2,
   102067.6,
   79033.01,
   63552.81,
   53787,
   39919.08,
   34101.86,
   30065.38,
   25939.35,
   17144.68,
   14921.41,
   13011.46,
   7358.299,
   4910.404,
   1244.613,
   1232.095,
   125.1647,
   27.50286,
   2.123456,
   0};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1501[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1501[25] = {
   8627.781,
   8896.917,
   6973.492,
   6779.68,
   4843.009,
   4352.605,
   3795.807,
   3595.591,
   2718.535,
   3131.957,
   1797.485,
   2369.505,
   1841.507,
   2191.289,
   1063.703,
   1266.803,
   1322.356,
   757.8023,
   803.0958,
   124.2359,
   484.4986,
   24.28826,
   11.51564,
   0.4457142,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1501,Graph_from_VbbHcc_both_Sphericity_fy1501,Graph_from_VbbHcc_both_Sphericity_fex1501,Graph_from_VbbHcc_both_Sphericity_fey1501);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1501 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1501","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMaximum(551667.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1501);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__502 = new TH1D("data_mc_ratio__502","",25,0,1);
   data_mc_ratio__502->SetBinContent(1,1.394289);
   data_mc_ratio__502->SetBinContent(2,1.374698);
   data_mc_ratio__502->SetBinContent(3,1.43406);
   data_mc_ratio__502->SetBinContent(4,1.306015);
   data_mc_ratio__502->SetBinContent(5,1.36223);
   data_mc_ratio__502->SetBinContent(6,1.286432);
   data_mc_ratio__502->SetBinContent(7,1.304871);
   data_mc_ratio__502->SetBinContent(8,1.330026);
   data_mc_ratio__502->SetBinContent(9,1.330217);
   data_mc_ratio__502->SetBinContent(10,1.271664);
   data_mc_ratio__502->SetBinContent(11,1.40389);
   data_mc_ratio__502->SetBinContent(12,1.356612);
   data_mc_ratio__502->SetBinContent(13,1.270066);
   data_mc_ratio__502->SetBinContent(14,1.201804);
   data_mc_ratio__502->SetBinContent(15,1.476843);
   data_mc_ratio__502->SetBinContent(16,1.341026);
   data_mc_ratio__502->SetBinContent(17,1.149756);
   data_mc_ratio__502->SetBinContent(18,1.393121);
   data_mc_ratio__502->SetBinContent(19,1.180758);
   data_mc_ratio__502->SetBinContent(20,1.929917);
   data_mc_ratio__502->SetBinContent(21,0.7848423);
   data_mc_ratio__502->SetBinContent(22,2.500705);
   data_mc_ratio__502->SetBinContent(23,3.054227);
   data_mc_ratio__502->SetBinContent(24,4.238374);
   data_mc_ratio__502->SetBinError(1,0.001681909);
   data_mc_ratio__502->SetBinError(2,0.001690566);
   data_mc_ratio__502->SetBinError(3,0.002142484);
   data_mc_ratio__502->SetBinError(4,0.002325583);
   data_mc_ratio__502->SetBinError(5,0.002843533);
   data_mc_ratio__502->SetBinError(6,0.003094684);
   data_mc_ratio__502->SetBinError(7,0.003575526);
   data_mc_ratio__502->SetBinError(8,0.004102285);
   data_mc_ratio__502->SetBinError(9,0.004575029);
   data_mc_ratio__502->SetBinError(10,0.004862365);
   data_mc_ratio__502->SetBinError(11,0.005930294);
   data_mc_ratio__502->SetBinError(12,0.006307232);
   data_mc_ratio__502->SetBinError(13,0.006499497);
   data_mc_ratio__502->SetBinError(14,0.00680671);
   data_mc_ratio__502->SetBinError(15,0.009281162);
   data_mc_ratio__502->SetBinError(16,0.009480117);
   data_mc_ratio__502->SetBinError(17,0.009400257);
   data_mc_ratio__502->SetBinError(18,0.0137596);
   data_mc_ratio__502->SetBinError(19,0.01550679);
   data_mc_ratio__502->SetBinError(20,0.03937786);
   data_mc_ratio__502->SetBinError(21,0.02523883);
   data_mc_ratio__502->SetBinError(22,0.1413482);
   data_mc_ratio__502->SetBinError(23,0.3332435);
   data_mc_ratio__502->SetBinError(24,1.412791);
   data_mc_ratio__502->SetMinimum(0.4);
   data_mc_ratio__502->SetMaximum(1.6);
   data_mc_ratio__502->SetEntries(280.0605);
   data_mc_ratio__502->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__502->SetLineColor(ci);
   data_mc_ratio__502->SetLineWidth(2);
   data_mc_ratio__502->SetMarkerStyle(20);
   data_mc_ratio__502->SetMarkerSize(1.2);
   data_mc_ratio__502->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__502->GetXaxis()->SetRange(1,25);
   data_mc_ratio__502->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__502->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__502->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__502->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__502->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__502->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__502->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__502->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__502->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__502->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__502->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__502->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__502->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__502->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1502[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1502[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1502[25] = {
   0.01750455,
   0.01849679,
   0.02232123,
   0.02807532,
   0.02874625,
   0.03240373,
   0.03718916,
   0.0454948,
   0.04277601,
   0.05822888,
   0.0450282,
   0.06948315,
   0.0612501,
   0.08447741,
   0.06204272,
   0.08489836,
   0.1016301,
   0.1029861,
   0.1635499,
   0.09981886,
   0.3932317,
   0.1940504,
   0.4187069,
   0.2099004,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1502,Graph_from_mc_statistical_error_fy1502,Graph_from_mc_statistical_error_fex1502,Graph_from_mc_statistical_error_fey1502);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1502 = new TH1F("Graph_Graph_from_mc_statistical_error1502","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1502->SetMinimum(0.4975517);
   Graph_Graph_from_mc_statistical_error1502->SetMaximum(1.502448);
   Graph_Graph_from_mc_statistical_error1502->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1502->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1502->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1502);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}

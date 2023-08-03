void Z_dR_Bj1_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Thu Aug  3 10:21:53 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(0,0,1,1);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-110.6554,6.314516,110554.7);
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
   st->SetMaximum(94750.64);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(0.01);
   st_stack_246->SetMaximum(99488.17);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetRange(1,30);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetLabelSize(0.035);
   st_stack_246->GetXaxis()->SetTitleSize(0.035);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetLabelSize(0.05);
   st_stack_246->GetYaxis()->SetTitleSize(0.057);
   st_stack_246->GetYaxis()->SetTitleOffset(1.2);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetLabelSize(0.035);
   st_stack_246->GetZaxis()->SetTitleSize(0.035);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6310.226);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,27533.67);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,39113.03);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,20913.75);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,14771.31);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,12542.45);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,9059.633);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,9810.603);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,20921.37);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,7870.97);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,6085.577);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,4096.738);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,6980.646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,4102.333);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,4824.471);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2670.302);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2330.395);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,2205.021);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1305.914);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1413.439);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1718.869);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1610.073);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,754.8245);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,293.2724);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,451.045);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,417.5004);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,98.38242);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,606.0842);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,45.98932);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,16.69768);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,49.82828);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,749.7238);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,1938.464);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,14927.99);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,1895.024);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1550.801);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,1426.547);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1553.48);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1285.304);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,14838.45);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1610.449);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1022.534);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,821.4039);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1154.311);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,780.5962);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,943.1196);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,618.7449);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,556.5277);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,555.7879);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,394.1323);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,475.0719);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,547.1025);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,545.1275);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,282.5778);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,67.93914);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,273.5395);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,271.9438);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,35.70622);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,380.9005);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,24.51132);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,8.97362);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,31.49537);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,31.82923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,129.6911);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,133.3405);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,121.4546);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,107.113);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,84.52147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,65.0673);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,56.53553);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,45.30785);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,37.69001);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,31.7668);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,27.91927);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,29.70774);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,24.68254);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,20.94629);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,18.02404);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,16.48197);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,13.51719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,10.54975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,8.715796);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,8.625045);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,6.29127);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,5.344924);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,3.593942);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,2.315228);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.36514);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.401588);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.7962023);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.7251448);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4509018);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.2875008);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.308138);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,4.493155);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.444041);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,4.274231);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.237803);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,3.701941);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.125489);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.915868);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.646323);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.33348);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.233332);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,1.98855);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.223766);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.904328);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.795533);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.689242);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.579484);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.495418);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.280239);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.076453);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.197331);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.019801);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.9074782);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.6337851);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.5815107);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.4240803);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.4248672);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.3087198);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.3856941);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.2788184);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.117452);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,503.1412);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,2310.104);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2934.832);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,2606.833);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2125.655);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1642.812);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1310.667);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1045.601);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,877.7994);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,741.8235);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,651.0178);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,584.9637);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,522.5288);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,463.3493);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,401.4208);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,360.8204);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,293.2154);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,253.1061);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,215.823);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,182.5906);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,144.6849);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,114.7033);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,92.31647);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,70.35097);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,49.6228);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,37.59663);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,23.48081);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,15.59126);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,8.609478);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,4.727967);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,7.575021);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,5.613054);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,12.01634);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,13.58431);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,12.79637);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,11.53428);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,10.13429);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,9.040045);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,8.076077);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,7.4026);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,6.803494);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,6.370442);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,6.04621);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,5.722679);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,5.384192);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,5.003586);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,4.756431);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,4.278239);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,3.977056);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.672941);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,3.387751);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.003008);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.669585);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.401897);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.086522);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.755395);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.526717);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.201516);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.9822725);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.7283502);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.528351);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.6805201);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,103.9437);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,378.1365);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,400.9964);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,312.0194);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,199.2071);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,172.1752);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,129.3413);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,103.8341);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,92.98808);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,71.28627);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,73.29969);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,66.45632);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,52.49852);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,47.09585);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,44.72794);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,37.92837);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,29.75148);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,33.14512);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,19.3262);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,20.84248);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,15.28338);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,12.57364);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,15.20879);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,6.591482);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,4.170366);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,4.931799);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.333626);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.64261);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,1.299432);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.4860414);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.6321349);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.461542);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,11.86132);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,12.4273);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,12.6539);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,9.624691);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,9.686406);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,8.338789);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,6.06116);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,6.898104);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,5.292815);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,6.535051);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,5.361675);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,4.171457);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,3.169096);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,3.185849);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,4.638806);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,3.613276);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,4.602671);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,1.938935);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,3.333091);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.870123);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,3.085548);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,4.093906);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.151592);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,0.7338938);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.0362);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.6130877);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.7741502);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.4435451);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.3656514);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.2451688);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,19.81895);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,51.61361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,36.31399);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,25.76527);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,26.87483);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,12.77486);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,12.23216);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,10.67759);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,8.946565);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,7.888361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,7.030981);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.691495);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,3.061514);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,5.27515);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,2.359315);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,4.369215);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,2.918518);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,1.964251);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,2.968961);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.456897);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,1.177014);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,7.910769);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,1.081762);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.4877733);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.9256937);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.6388846);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.1504529);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.09394296);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.3544207);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,0.09281656);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,0.09136942);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.929507);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,4.838347);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,3.972164);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,3.16018);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,7.263536);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.08118);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.095363);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,2.01206);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,2.474169);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.90466);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.817308);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,0.6944672);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,0.6599313);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,1.74888);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.5999984);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,1.714067);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,1.249117);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.5198118);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,1.250566);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.5053182);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.4013541);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,6.641979);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3446683);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.2336415);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.3210039);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.2573393);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.09423638);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.08203647);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.3532961);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,0.08202873);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,0.09025005);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.6306118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.4459099);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.983537);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.7012864);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,11.14193);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,5.824189);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,3.798384);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,1.772579);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,3.038707);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.679709);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.214427);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,0.9807386);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.669972);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.8771992);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.823467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,7.998059);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,8.584346);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,6.202049);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,4.125009);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.826455);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.238552);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.766938);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.592505);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.548897);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.397076);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.322781);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.151578);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,0.9884515);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.8479364);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.6783491);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.5362188);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3940885);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2810303);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.206735);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2051198);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1566663);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1598966);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.1179035);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.09367678);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.05652909);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.04683839);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.0193814);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.05426889);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1136565);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1177486);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1000851);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.08162335);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.06756519);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.06012922);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.05342107);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.0507157);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.0500165);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.04750201);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.0462217);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.04312695);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.03995578);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03700698);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.03310005);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02942883);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02522893);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.02130485);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01827296);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.01820144);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01590706);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01607021);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.01379956);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01230036);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.00955516);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.008697671);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.005594929);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.6866199);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,3.156544);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.821189);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.946744);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.980252);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.373654);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.9934428);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.8014712);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.688693);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.5937438);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.571354);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.5116479);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.4448932);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.412967);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.3399929);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2670188);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.2446291);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.184923);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1733135);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.1438751);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1210707);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.09785163);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.08251048);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.06841321);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.04146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03938943);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.01658502);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.005804758);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.003317004);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0004146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0004146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01687276);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03617712);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.03980405);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03495419);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.02865419);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02386529);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.02029549);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01822938);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.01689822);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.01569017);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01539149);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01456511);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01358176);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01308536);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01187307);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01052202);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01007122);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.008756357);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.008477039);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.007723618);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.007085124);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.006369598);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.005849013);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.005325961);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.004146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.00404127);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002622322);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.001551387);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001172738);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0004146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0004146255);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.01264201);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.03476553);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03634578);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01738276);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004469625);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.007412035);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.007578618);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.0052411);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002491268);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01557042);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.0145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.008096621);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003944507);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.00332169);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.002283662);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001660845);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0007191671);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001797918);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001736954);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001296497);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.0009049321);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0006885501);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0005871975);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__491 = new TH1D("VbbHcc_both_Z_dR_Bj1__491","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(1,3522);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(2,11732);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(3,10771);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(4,8125);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(5,6344);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(6,5025);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(7,3955);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(8,3282);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(9,2732);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(10,2357);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(11,2091);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(12,1908);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(13,1691);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(14,1451);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(15,1282);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(16,1178);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(17,959);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(18,847);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(19,744);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(20,632);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(21,425);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(22,407);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(23,369);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(24,267);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(25,222);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(26,171);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(27,115);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(28,73);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(29,45);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(30,24);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(31,33);
   VbbHcc_both_Z_dR_Bj1__491->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__491->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__491->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__491->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__491->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491[30] = {
   6974.26,
   30427.86,
   42637.79,
   23995.95,
   17240.33,
   14460.96,
   10582.45,
   11031.34,
   21951.22,
   8734.844,
   6852.497,
   4782.932,
   7590.803,
   4644.896,
   5295.621,
   3093.403,
   2673.791,
   2508.347,
   1555.797,
   1627.904,
   1888.966,
   1752.06,
   869.0192,
   374.4829,
   508.2142,
   462.3783,
   125.8125,
   625.2336,
   56.98273,
   22.45582};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491[30] = {
   749.7593,
   1938.55,
   14928,
   1895.117,
   1550.897,
   1426.622,
   1553.533,
   1285.349,
   14838.46,
   1610.475,
   1022.579,
   821.4466,
   1154.335,
   780.6256,
   943.1402,
   618.7855,
   556.5596,
   555.8237,
   394.1585,
   475.0973,
   547.1154,
   545.1843,
   282.6193,
   67.98429,
   273.5469,
   271.9506,
   35.73434,
   380.9027,
   24.53173,
   9.001288};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMinimum(12.10908);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMaximum(63321.02);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__492 = new TH1D("data_mc_ratio__492","",30,0,6);
   data_mc_ratio__492->SetBinContent(1,0.5049998);
   data_mc_ratio__492->SetBinContent(2,0.3855677);
   data_mc_ratio__492->SetBinContent(3,0.2526163);
   data_mc_ratio__492->SetBinContent(4,0.3385988);
   data_mc_ratio__492->SetBinContent(5,0.3679744);
   data_mc_ratio__492->SetBinContent(6,0.3474873);
   data_mc_ratio__492->SetBinContent(7,0.373732);
   data_mc_ratio__492->SetBinContent(8,0.297516);
   data_mc_ratio__492->SetBinContent(9,0.1244577);
   data_mc_ratio__492->SetBinContent(10,0.2698388);
   data_mc_ratio__492->SetBinContent(11,0.3051442);
   data_mc_ratio__492->SetBinContent(12,0.3989185);
   data_mc_ratio__492->SetBinContent(13,0.2227696);
   data_mc_ratio__492->SetBinContent(14,0.3123859);
   data_mc_ratio__492->SetBinContent(15,0.2420868);
   data_mc_ratio__492->SetBinContent(16,0.3808104);
   data_mc_ratio__492->SetBinContent(17,0.3586668);
   data_mc_ratio__492->SetBinContent(18,0.3376726);
   data_mc_ratio__492->SetBinContent(19,0.4782113);
   data_mc_ratio__492->SetBinContent(20,0.3882293);
   data_mc_ratio__492->SetBinContent(21,0.2249908);
   data_mc_ratio__492->SetBinContent(22,0.2322979);
   data_mc_ratio__492->SetBinContent(23,0.4246166);
   data_mc_ratio__492->SetBinContent(24,0.7129831);
   data_mc_ratio__492->SetBinContent(25,0.4368237);
   data_mc_ratio__492->SetBinContent(26,0.3698271);
   data_mc_ratio__492->SetBinContent(27,0.9140584);
   data_mc_ratio__492->SetBinContent(28,0.1167564);
   data_mc_ratio__492->SetBinContent(29,0.789713);
   data_mc_ratio__492->SetBinContent(30,1.068765);
   data_mc_ratio__492->SetBinContent(31,0.5649105);
   data_mc_ratio__492->SetBinError(1,0.008509353);
   data_mc_ratio__492->SetBinError(2,0.00355971);
   data_mc_ratio__492->SetBinError(3,0.002434072);
   data_mc_ratio__492->SetBinError(4,0.003756417);
   data_mc_ratio__492->SetBinError(5,0.004619937);
   data_mc_ratio__492->SetBinError(6,0.004901973);
   data_mc_ratio__492->SetBinError(7,0.005942745);
   data_mc_ratio__492->SetBinError(8,0.005193272);
   data_mc_ratio__492->SetBinError(9,0.002381122);
   data_mc_ratio__492->SetBinError(10,0.005558078);
   data_mc_ratio__492->SetBinError(11,0.006673108);
   data_mc_ratio__492->SetBinError(12,0.009132611);
   data_mc_ratio__492->SetBinError(13,0.005417315);
   data_mc_ratio__492->SetBinError(14,0.008200828);
   data_mc_ratio__492->SetBinError(15,0.006761251);
   data_mc_ratio__492->SetBinError(16,0.01109523);
   data_mc_ratio__492->SetBinError(17,0.01158195);
   data_mc_ratio__492->SetBinError(18,0.01160257);
   data_mc_ratio__492->SetBinError(19,0.01753208);
   data_mc_ratio__492->SetBinError(20,0.01544293);
   data_mc_ratio__492->SetBinError(21,0.01091365);
   data_mc_ratio__492->SetBinError(22,0.01151458);
   data_mc_ratio__492->SetBinError(23,0.02210466);
   data_mc_ratio__492->SetBinError(24,0.04363386);
   data_mc_ratio__492->SetBinError(25,0.02931769);
   data_mc_ratio__492->SetBinError(26,0.02828138);
   data_mc_ratio__492->SetBinError(27,0.08523638);
   data_mc_ratio__492->SetBinError(28,0.0136653);
   data_mc_ratio__492->SetBinError(29,0.1177235);
   data_mc_ratio__492->SetBinError(30,0.2181608);
   data_mc_ratio__492->SetBinError(31,0.3201349);
   data_mc_ratio__492->SetMinimum(0.4);
   data_mc_ratio__492->SetMaximum(1.6);
   data_mc_ratio__492->SetEntries(211.2299);
   data_mc_ratio__492->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__492->SetLineColor(ci);
   data_mc_ratio__492->SetLineWidth(2);
   data_mc_ratio__492->SetMarkerStyle(20);
   data_mc_ratio__492->SetMarkerSize(1.2);
   data_mc_ratio__492->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__492->GetXaxis()->SetRange(1,30);
   data_mc_ratio__492->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__492->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__492->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__492->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__492->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__492->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1492[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1492[30] = {
   0.1075038,
   0.06370971,
   0.3501119,
   0.07897654,
   0.08995752,
   0.09865335,
   0.1468028,
   0.116518,
   0.6759739,
   0.1843737,
   0.1492272,
   0.1717454,
   0.1520702,
   0.1680609,
   0.1780981,
   0.2000339,
   0.2081537,
   0.2215896,
   0.2533482,
   0.291846,
   0.2896374,
   0.3111675,
   0.3252164,
   0.1815418,
   0.5382513,
   0.5881561,
   0.2840284,
   0.6092165,
   0.4305117,
   0.4008444};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1492,Graph_from_mc_statistical_error_fy1492,Graph_from_mc_statistical_error_fex1492,Graph_from_mc_statistical_error_fey1492);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1492 = new TH1F("Graph_Graph_from_mc_statistical_error1492","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1492->SetMinimum(0.1888313);
   Graph_Graph_from_mc_statistical_error1492->SetMaximum(1.811169);
   Graph_Graph_from_mc_statistical_error1492->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1492->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1492);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}

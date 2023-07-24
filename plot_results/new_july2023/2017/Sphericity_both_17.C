void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Mon Jul 24 10:12:21 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(0,0,1,1);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1148.202,1.052419,1147063);
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
   st->SetMaximum(983087.7);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0.01);
   st_stack_250->SetMaximum(1032242);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetLabelSize(0.035);
   st_stack_250->GetXaxis()->SetTitleSize(0.035);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Events/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetLabelSize(0.05);
   st_stack_250->GetYaxis()->SetTitleSize(0.057);
   st_stack_250->GetYaxis()->SetTitleOffset(1.2);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetLabelSize(0.035);
   st_stack_250->GetZaxis()->SetTitleSize(0.035);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,333280.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,368801);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,210311.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,158003.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,117817.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,82479.73);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,67584.01);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,56336.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,39383.77);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,37960.58);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,31822.92);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,23598.66);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,17661.62);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,15932.37);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,13855.03);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,9020.171);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,8245.74);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,5273.37);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,3779.499);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,1581.617);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,895.9791);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,309.8159);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,34.27853);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,16367.67);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,25783.36);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,6087.438);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,5332.485);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,5156.222);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,3175.731);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,3337.278);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,3702.315);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,2286.66);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,2803.286);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,2011.358);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1974.31);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1353.172);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,1329.496);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1335.677);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,1013.494);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,1009.079);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,797.4589);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,829.803);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,469.5247);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,478.3448);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,199.5867);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,26.82489);
   VbbHcc_both_Sphericity_stack_1->SetEntries(166831);

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
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,3529.071);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,3550.291);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,2506.249);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,1817.8);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,1356.157);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,1022.286);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,814.618);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,665.1541);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,522.716);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,443.2469);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,362.396);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,295.1895);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,251.2383);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,215.1049);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,176.8604);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,143.5425);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,109.4997);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,77.62002);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,50.35994);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,22.24652);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,7.928787);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,3.136242);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,1.166467);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,26.27588);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,25.85953);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,21.95049);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,18.8586);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,16.54151);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,14.51267);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,12.96187);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,11.96761);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,10.68446);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,9.9579);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,9.013202);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,8.089416);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,7.526659);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,7.088543);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,6.406864);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,5.821218);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,5.126067);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,4.204712);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,3.499722);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,2.319208);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,1.299951);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.856135);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.5222035);
   VbbHcc_both_Sphericity_stack_2->SetEntries(217888);

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
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,60239.66);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,66192.02);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,47920.93);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,34983.6);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,26253.24);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,20137.85);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,15619.92);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,12449.86);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,10040.45);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,8138.594);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,6768.48);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,5580.179);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,4590.006);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,3772.205);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,3030.721);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,2432.965);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,1867.614);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,1316.047);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,797.677);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,364.0589);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,147.4868);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,51.49545);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,11.80225);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,1.44985);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,67.75138);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,71.15874);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,60.71235);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,51.97201);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,45.08141);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,39.51475);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,34.7929);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,31.08167);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,27.91473);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,25.12205);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,22.94151);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,20.81327);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,18.87041);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,17.11481);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,15.33497);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,13.74776);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,12.05509);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,10.10834);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,7.891682);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,5.314655);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,3.405675);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,1.988979);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.9466543);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.3258951);
   VbbHcc_both_Sphericity_stack_3->SetEntries(4843140);

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
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,2390.274);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,2373.677);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,1760.949);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,1385.953);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,1022.708);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,768.9649);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,654.0874);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,529.7701);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,422.8599);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,381.3618);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,295.6928);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,267.2394);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,232.2571);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,178.3331);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,163.4287);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,103.2766);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,84.77954);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,62.97024);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,33.08876);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,17.41002);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,4.458031);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,1.247422);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.08426773);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,30.46771);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,33.75183);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,29.3794);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,27.66852);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,21.41924);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,17.71174);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,18.02642);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,15.70515);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,13.22882);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,14.76126);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,11.992);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,11.17184);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,12.42034);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,9.567454);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,11.17682);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,5.712821);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,5.487186);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,5.003899);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,2.774142);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.888988);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.047999);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.4953601);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.08426773);
   VbbHcc_both_Sphericity_stack_4->SetEntries(99118);

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
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,1508.211);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,1405.144);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,997.3665);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,671.0425);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,535.0886);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,425.6535);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,338.2882);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,274.7862);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,252.6787);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,171.535);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,177.9747);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,107.1489);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,102.2685);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,98.85682);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,60.09449);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,51.86916);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,51.29293);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,26.76298);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,12.3196);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,3.987435);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,1.624709);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.0003917814);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(23,0.1018803);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,43.99431);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,46.32429);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,36.66423);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,25.17866);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,27.41209);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,22.8068);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,20.36557);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,19.13567);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,20.53573);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,13.05892);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,18.54513);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,7.279133);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,10.28642);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,12.31086);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,5.58316);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,5.214823);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,11.85497);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,4.282546);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,2.966182);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,1.21465);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.5521837);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.0003917814);
   VbbHcc_both_Sphericity_stack_5->SetBinError(23,0.1018803);
   VbbHcc_both_Sphericity_stack_5->SetEntries(45557);

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
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,8.770253);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,7.935685);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(3,3.965563);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,2.185931);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,4.726963);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,1.354084);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,2.883648);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(8,2.526208);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(9,2.182076);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(10,1.866391);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(11,1.132177);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.3350632);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(13,0.2569566);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(14,1.671017);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(15,0.2094082);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(16,0.7353096);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(17,0.4849325);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(18,0.2563355);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(19,0.5125517);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,1.418224);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,1.337607);
   VbbHcc_both_Sphericity_stack_6->SetBinError(3,0.961824);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.6829582);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,1.053282);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.5571723);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.8135242);
   VbbHcc_both_Sphericity_stack_6->SetBinError(8,0.7662958);
   VbbHcc_both_Sphericity_stack_6->SetBinError(9,0.6987711);
   VbbHcc_both_Sphericity_stack_6->SetBinError(10,0.635271);
   VbbHcc_both_Sphericity_stack_6->SetBinError(11,0.4918063);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.2380482);
   VbbHcc_both_Sphericity_stack_6->SetBinError(13,0.2569566);
   VbbHcc_both_Sphericity_stack_6->SetBinError(14,0.601254);
   VbbHcc_both_Sphericity_stack_6->SetBinError(15,0.2094082);
   VbbHcc_both_Sphericity_stack_6->SetBinError(16,0.4349686);
   VbbHcc_both_Sphericity_stack_6->SetBinError(17,0.3430812);
   VbbHcc_both_Sphericity_stack_6->SetBinError(18,0.2563355);
   VbbHcc_both_Sphericity_stack_6->SetBinError(19,0.3624288);
   VbbHcc_both_Sphericity_stack_6->SetEntries(204);

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
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,16.38236);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,17.40521);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,14.79033);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,10.91178);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,7.875512);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,5.267333);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,5.14031);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,3.920623);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,3.965238);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,2.127569);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,2.213576);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,1.981511);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,2.287258);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,1.419951);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,1.142529);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.7397995);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(17,1.738931);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.2461626);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(19,0.1386143);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(20,0.3652354);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.682981);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,1.688205);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,1.573972);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,1.359579);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,1.19066);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.9480527);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.9434754);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.8250188);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.8140903);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.6018656);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.6216457);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.5676154);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.6063583);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.5074748);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.4356482);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3374151);
   VbbHcc_both_Sphericity_stack_7->SetBinError(17,0.5342939);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.1902259);
   VbbHcc_both_Sphericity_stack_7->SetBinError(19,0.1386143);
   VbbHcc_both_Sphericity_stack_7->SetBinError(20,0.2582631);
   VbbHcc_both_Sphericity_stack_7->SetEntries(620);

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
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,13.79628);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,18.19231);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,12.74596);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,9.253745);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,10.67474);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,6.308613);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,5.633834);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,4.536689);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,3.470561);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,3.267773);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,2.069041);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,2.535439);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,2.959116);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.04653);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.8679737);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.909869);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3497317);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,0.7903693);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.4184215);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.01293672);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.747996);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,2.001399);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.674692);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.407426);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.535448);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.144618);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.101215);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.9999937);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.834175);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.8510062);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.6945052);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.738676);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.8102971);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.4693245);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.4388785);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.67938);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2487456);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.4576176);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.2985332);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.01293672);
   VbbHcc_both_Sphericity_stack_8->SetEntries(481);

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
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,11.01425);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,12.4487);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,8.9079);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,6.870948);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.445595);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.472216);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,3.678682);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.993227);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.562836);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.20134);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.925346);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.488561);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.239872);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.120314);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.939651);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.7374957);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4718919);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.3400561);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.210627);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.08061469);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02846904);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.01118199);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.006406428);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1441096);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1532692);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1300482);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1143846);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1021445);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.09245857);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.08423326);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.07573844);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.06994038);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.06462857);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.0604491);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05339886);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.04884163);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.0463242);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.04223076);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.03743022);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.03017294);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02551504);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02081298);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01262005);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.007219986);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.004601063);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.003723284);
   VbbHcc_both_Sphericity_stack_9->SetEntries(39482);

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
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,10.68469);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,10.85518);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,7.698706);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,5.763016);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,4.496996);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,3.679516);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,3.023032);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,2.473046);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,2.056981);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.790271);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,1.484297);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,1.260951);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,1.079687);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.904379);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.7644519);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.5551275);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.4409325);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.3283895);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.180652);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.07073123);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.02229978);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.005461205);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0008796438);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.06858931);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.06920749);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.05833331);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.05052481);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.04465144);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.04044625);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.0366636);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.03316562);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.03026242);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02823241);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02570248);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02368235);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.0219158);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.02004138);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01846371);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01571032);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01401313);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.0120795);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.008966609);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.005607174);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.003169798);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001581607);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0006220406);
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
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.3646904);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.3249114);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.1946325);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.1819461);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.1361428);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.144462);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.1044229);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.0921201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.07002666);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.0760854);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.03745478);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.04585148);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.04672529);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.03340188);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.0154104);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.02720546);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.01845955);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.01614483);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.002008182);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(20,0.003442548);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(21,0.0008915226);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(22,0.001441091);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.0259052);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.02456113);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.01916626);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.01852971);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.01645433);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.01643888);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.01381666);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.01324997);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.01173465);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.01203205);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.008121555);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.009297737);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.009147869);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.007904251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.005257089);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.007081824);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.005970055);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.005483445);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.002008182);
   VbbHcc_both_Sphericity_stack_11->SetBinError(20,0.00246784);
   VbbHcc_both_Sphericity_stack_11->SetBinError(21,0.0008915226);
   VbbHcc_both_Sphericity_stack_11->SetBinError(22,0.001441091);
   VbbHcc_both_Sphericity_stack_11->SetEntries(1123);

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
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.1761764);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.160889);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.1085573);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.09131966);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.07052489);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.06070645);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.04867312);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.05290228);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.03313341);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.03241054);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.025301);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.02398981);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.02272864);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.01873508);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.01195821);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.01090046);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.01154039);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(18,0.006371648);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(19,0.001376787);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(20,0.0007334106);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0002420281);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.00649958);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.006179502);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.005085801);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.004722244);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.004103517);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.003805711);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.003435299);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.003572858);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.002834436);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.002838673);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.002470136);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.002386776);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.002341617);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.002129739);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.001694936);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.001607537);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.001634906);
   VbbHcc_both_Sphericity_stack_12->SetBinError(18,0.001229182);
   VbbHcc_both_Sphericity_stack_12->SetBinError(19,0.0005430504);
   VbbHcc_both_Sphericity_stack_12->SetBinError(20,0.0004302317);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0002420281);
   VbbHcc_both_Sphericity_stack_12->SetEntries(4223);

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
   
   TH1D *VbbHcc_both_Sphericity__499 = new TH1D("VbbHcc_both_Sphericity__499","",25,0,1);
   VbbHcc_both_Sphericity__499->SetBinContent(1,118205);
   VbbHcc_both_Sphericity__499->SetBinContent(2,107678);
   VbbHcc_both_Sphericity__499->SetBinContent(3,76018);
   VbbHcc_both_Sphericity__499->SetBinContent(4,54965);
   VbbHcc_both_Sphericity__499->SetBinContent(5,41712);
   VbbHcc_both_Sphericity__499->SetBinContent(6,32124);
   VbbHcc_both_Sphericity__499->SetBinContent(7,25569);
   VbbHcc_both_Sphericity__499->SetBinContent(8,20598);
   VbbHcc_both_Sphericity__499->SetBinContent(9,17117);
   VbbHcc_both_Sphericity__499->SetBinContent(10,14094);
   VbbHcc_both_Sphericity__499->SetBinContent(11,11851);
   VbbHcc_both_Sphericity__499->SetBinContent(12,9957);
   VbbHcc_both_Sphericity__499->SetBinContent(13,8021);
   VbbHcc_both_Sphericity__499->SetBinContent(14,6711);
   VbbHcc_both_Sphericity__499->SetBinContent(15,5525);
   VbbHcc_both_Sphericity__499->SetBinContent(16,4328);
   VbbHcc_both_Sphericity__499->SetBinContent(17,3304);
   VbbHcc_both_Sphericity__499->SetBinContent(18,2243);
   VbbHcc_both_Sphericity__499->SetBinContent(19,1234);
   VbbHcc_both_Sphericity__499->SetBinContent(20,500);
   VbbHcc_both_Sphericity__499->SetBinContent(21,180);
   VbbHcc_both_Sphericity__499->SetBinContent(22,67);
   VbbHcc_both_Sphericity__499->SetBinContent(23,15);
   VbbHcc_both_Sphericity__499->SetEntries(562040);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__499->SetLineColor(ci);
   VbbHcc_both_Sphericity__499->SetLineWidth(2);
   VbbHcc_both_Sphericity__499->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__499->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__499->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__499->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__499->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__499->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__499->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__499->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__499->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__499->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__499->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__499->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__499->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__499->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__499->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__499->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__499->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1499[25] = {
   401009.3,
   442389.5,
   263545.6,
   196896.9,
   147018.3,
   104855.8,
   85031.43,
   70272.67,
   50636.81,
   47106.68,
   39436.35,
   29856.09,
   22845.29,
   20203.09,
   17290.09,
   11756.54,
   10362.44,
   6758.754,
   4674.409,
   1989.854,
   1057.529,
   365.7137,
   47.44068,
   1.44985,
   0};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1499[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1499[25] = {
   16367.92,
   25783.53,
   6087.962,
   5332.903,
   5156.564,
   3176.142,
   3337.595,
   3702.548,
   2286.987,
   2803.485,
   2011.63,
   1974.482,
   1353.421,
   1329.717,
   1335.839,
   1013.634,
   1009.249,
   797.5614,
   829.858,
   469.5711,
   478.3602,
   199.5991,
   26.84699,
   0.3258951,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1499,Graph_from_VbbHcc_both_Sphericity_fy1499,Graph_from_VbbHcc_both_Sphericity_fex1499,Graph_from_VbbHcc_both_Sphericity_fey1499);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1499 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1499","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetMaximum(514990.3);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1499->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1499);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__500 = new TH1D("data_mc_ratio__500","",25,0,1);
   data_mc_ratio__500->SetBinContent(1,0.2947688);
   data_mc_ratio__500->SetBinContent(2,0.2434009);
   data_mc_ratio__500->SetBinContent(3,0.2884434);
   data_mc_ratio__500->SetBinContent(4,0.2791563);
   data_mc_ratio__500->SetBinContent(5,0.2837198);
   data_mc_ratio__500->SetBinContent(6,0.3063637);
   data_mc_ratio__500->SetBinContent(7,0.3007006);
   data_mc_ratio__500->SetBinContent(8,0.2931154);
   data_mc_ratio__500->SetBinContent(9,0.3380347);
   data_mc_ratio__500->SetBinContent(10,0.2991933);
   data_mc_ratio__500->SetBinContent(11,0.3005096);
   data_mc_ratio__500->SetBinContent(12,0.3334998);
   data_mc_ratio__500->SetBinContent(13,0.3511009);
   data_mc_ratio__500->SetBinContent(14,0.332177);
   data_mc_ratio__500->SetBinContent(15,0.3195473);
   data_mc_ratio__500->SetBinContent(16,0.3681355);
   data_mc_ratio__500->SetBinContent(17,0.3188437);
   data_mc_ratio__500->SetBinContent(18,0.3318659);
   data_mc_ratio__500->SetBinContent(19,0.2639906);
   data_mc_ratio__500->SetBinContent(20,0.2512747);
   data_mc_ratio__500->SetBinContent(21,0.1702081);
   data_mc_ratio__500->SetBinContent(22,0.1832034);
   data_mc_ratio__500->SetBinContent(23,0.3161843);
   data_mc_ratio__500->SetBinError(1,0.0008573606);
   data_mc_ratio__500->SetBinError(2,0.0007417519);
   data_mc_ratio__500->SetBinError(3,0.00104617);
   data_mc_ratio__500->SetBinError(4,0.001190705);
   data_mc_ratio__500->SetBinError(5,0.001389182);
   data_mc_ratio__500->SetBinError(6,0.001709317);
   data_mc_ratio__500->SetBinError(7,0.001880517);
   data_mc_ratio__500->SetBinError(8,0.002042331);
   data_mc_ratio__500->SetBinError(9,0.002583732);
   data_mc_ratio__500->SetBinError(10,0.002520198);
   data_mc_ratio__500->SetBinError(11,0.002760456);
   data_mc_ratio__500->SetBinError(12,0.003342191);
   data_mc_ratio__500->SetBinError(13,0.003920285);
   data_mc_ratio__500->SetBinError(14,0.00405486);
   data_mc_ratio__500->SetBinError(15,0.004299015);
   data_mc_ratio__500->SetBinError(16,0.005595824);
   data_mc_ratio__500->SetBinError(17,0.005546996);
   data_mc_ratio__500->SetBinError(18,0.007007256);
   data_mc_ratio__500->SetBinError(19,0.007515033);
   data_mc_ratio__500->SetBinError(20,0.01123735);
   data_mc_ratio__500->SetBinError(21,0.01268656);
   data_mc_ratio__500->SetBinError(22,0.02238186);
   data_mc_ratio__500->SetBinError(23,0.08163844);
   data_mc_ratio__500->SetMinimum(0.4);
   data_mc_ratio__500->SetMaximum(1.6);
   data_mc_ratio__500->SetEntries(666.825);
   data_mc_ratio__500->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__500->SetLineColor(ci);
   data_mc_ratio__500->SetLineWidth(2);
   data_mc_ratio__500->SetMarkerStyle(20);
   data_mc_ratio__500->SetMarkerSize(1.2);
   data_mc_ratio__500->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__500->GetXaxis()->SetRange(1,25);
   data_mc_ratio__500->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__500->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__500->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__500->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__500->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__500->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__500->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__500->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__500->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__500->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__500->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__500->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__500->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__500->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1500[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1500[25] = {
   0.04081682,
   0.05828242,
   0.02310022,
   0.02708475,
   0.03507431,
   0.03029058,
   0.03925131,
   0.05268831,
   0.04516451,
   0.05951355,
   0.05100955,
   0.0661333,
   0.05924288,
   0.06581752,
   0.07726038,
   0.08621873,
   0.09739489,
   0.1180042,
   0.1775322,
   0.2359827,
   0.4523376,
   0.5457796,
   0.5659065,
   0.2247784,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1500,Graph_from_mc_statistical_error_fy1500,Graph_from_mc_statistical_error_fex1500,Graph_from_mc_statistical_error_fey1500);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1500 = new TH1F("Graph_Graph_from_mc_statistical_error1500","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1500->SetMinimum(0.3209122);
   Graph_Graph_from_mc_statistical_error1500->SetMaximum(1.679088);
   Graph_Graph_from_mc_statistical_error1500->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1500->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1500);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}

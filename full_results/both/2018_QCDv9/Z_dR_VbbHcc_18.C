void Z_dR_VbbHcc_18()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_18/Z_dR_VbbHcc_18
//=========  (Mon Nov 21 13:07:00 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_18 = new TCanvas("Z_dR_VbbHcc_18", "Z_dR_VbbHcc_18",0,0,600,600);
   Z_dR_VbbHcc_18->SetHighLightColor(2);
   Z_dR_VbbHcc_18->Range(0,0,1,1);
   Z_dR_VbbHcc_18->SetFillColor(0);
   Z_dR_VbbHcc_18->SetFillStyle(4000);
   Z_dR_VbbHcc_18->SetBorderMode(0);
   Z_dR_VbbHcc_18->SetBorderSize(2);
   Z_dR_VbbHcc_18->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-6645.451,10.52419,6638815);
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
   st->SetMaximum(5689780);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",50,0,10);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(5974269);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,50);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetLabelSize(0.035);
   st_stack_19->GetXaxis()->SetTitleSize(0.035);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetLabelSize(0.035);
   st_stack_19->GetZaxis()->SetTitleSize(0.035);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_duong_Z_dR_stack_1 = new TH1D("VbbHcc_duong_Z_dR_stack_1","",50,0,10);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(2,1630.667);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(3,1785091);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(4,2407267);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(5,1771703);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(6,1586019);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(7,1439771);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(8,1390005);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(9,1363938);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(10,1358971);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(11,1462263);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(12,1541839);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(13,1666746);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(14,1809010);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(15,1920354);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(16,2043572);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(17,1271264);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(18,857362.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(19,600307.4);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(20,399827.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(21,287252.7);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(22,229104.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(23,132390.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(24,91958.41);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(25,50704.83);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(26,32434.04);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(27,11113.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(28,5356.393);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(29,1248.5);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(2,1630.667);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(3,90457.34);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(4,96458.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(5,57210.94);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(6,54112.13);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(7,58985.95);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(8,49672.51);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(9,48814.66);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(10,50672.33);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(11,85294.06);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(12,52778.88);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(13,56664.77);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(14,56919.01);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(15,57807.93);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(16,59590.65);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(17,48887.03);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(18,38369.93);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(19,37029.99);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(20,26395);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(21,22356.83);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(22,20218.94);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(23,15249.51);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(24,12810.72);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(25,9312.529);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(26,7298.557);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(27,4197.483);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(28,3118.421);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(29,1248.5);
   VbbHcc_duong_Z_dR_stack_1->SetEntries(16494);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_2 = new TH1D("VbbHcc_duong_Z_dR_stack_2","",50,0,10);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(2,2.492334);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(3,4765.294);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(4,8830.254);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(5,10329.54);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(6,12702.88);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(7,14670.42);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(8,16771.35);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(9,18933.85);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(10,20807.25);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(11,22509.32);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(12,24402.56);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(13,26175.92);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(14,27992.62);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(15,29275.11);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(16,28374.06);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(17,15710.14);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(18,9713.749);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(19,6270.019);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(20,4088.365);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(21,2589.262);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(22,1654.417);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(23,974.0773);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(24,569.6015);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(25,273.912);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(26,122.604);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(27,50.99991);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(28,10.48093);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(29,0.8989778);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(2,0.7095551);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(3,31.6547);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(4,41.47589);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(5,45.46083);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(6,53.0175);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(7,53.14637);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(8,59.06069);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(9,66.68865);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(10,65.88973);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(11,69.44717);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(12,70.6317);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(13,74.58632);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(14,76.02164);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(15,78.43945);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(16,78.69529);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(17,56.85615);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(18,45.62461);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(19,36.86287);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(20,30.23676);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(21,23.85195);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(22,19.48655);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(23,14.80492);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(24,11.32923);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(25,7.714779);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(26,5.471618);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(27,3.233721);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(28,1.392945);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(29,0.428903);
   VbbHcc_duong_Z_dR_stack_2->SetEntries(3869618);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_3 = new TH1D("VbbHcc_duong_Z_dR_stack_3","",50,0,10);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(2,44.00232);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(3,64520.15);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(4,125347.3);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(5,149662.5);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(6,182255.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(7,213101.7);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(8,242180.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(9,271194.9);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(10,300278.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(11,332031.9);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(12,365281);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(13,400477.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(14,435185.2);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(15,466336.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(16,456695.8);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(17,241594.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(18,138048);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(19,82312.9);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(20,48812.68);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(21,28357.51);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(22,15994.5);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(23,8688.643);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(24,4483.639);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(25,2103.083);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(26,885.0415);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(27,313.3449);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(28,73.86172);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(29,3.778741);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(2,1.83512);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(3,73.51083);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(4,102.4551);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(5,111.5887);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(6,123.8139);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(7,133.5084);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(8,142.4845);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(9,150.6001);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(10,158.2493);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(11,167.2237);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(12,174.527);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(13,182.8244);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(14,191.1079);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(15,198.4444);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(16,196.1799);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(17,143.4011);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(18,108.2828);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(19,83.33377);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(20,64.09705);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(21,49.26975);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(22,37.07696);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(23,27.25506);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(24,18.94811);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(25,13.02256);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(26,9.049221);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(27,5.057222);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(28,2.329838);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(29,0.5132271);
   VbbHcc_duong_Z_dR_stack_3->SetEntries(6.805031e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_4 = new TH1D("VbbHcc_duong_Z_dR_stack_4","",50,0,10);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(2,1.647513);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(3,2230.749);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(4,5505.407);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(5,8044.44);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(6,7947.353);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(7,6533.486);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(8,5208.615);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(9,4467.385);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(10,3996.525);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(11,3723.193);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(12,3679.844);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(13,3738.639);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(14,4164.035);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(15,4234.768);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(16,4307.9);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(17,2257.306);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(18,1404.536);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(19,946.4975);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(20,651.3547);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(21,480.4556);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(22,285.0018);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(23,201.4655);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(24,108.9503);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(25,61.67234);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(26,36.12417);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(27,9.750879);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(28,3.386211);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(2,1.175141);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(3,38.11436);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(4,59.56955);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(5,70.62265);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(6,71.2195);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(7,63.44054);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(8,56.58756);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(9,57.49658);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(10,55.12616);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(11,48.52972);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(12,46.68543);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(13,47.52273);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(14,54.46756);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(15,51.95659);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(16,50.67239);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(17,38.1713);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(18,37.12755);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(19,23.35356);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(20,19.5181);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(21,18.07136);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(22,12.79276);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(23,10.98066);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(24,7.851975);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(25,5.87974);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(26,4.441471);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(27,2.354805);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(28,1.410971);
   VbbHcc_duong_Z_dR_stack_4->SetEntries(135370);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_5 = new TH1D("VbbHcc_duong_Z_dR_stack_5","",50,0,10);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(2,2.361694);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(3,3808.278);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(4,3833.943);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(5,2828.968);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(6,2434.718);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(7,2108.684);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(8,1962.663);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(9,2089.64);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(10,1968.982);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(11,2034.733);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(12,2231.506);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(13,2458.245);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(14,2727.487);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(15,3121.599);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(16,3027.648);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(17,1909.184);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(18,1210.48);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(19,816.6392);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(20,595.8895);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(21,403.6459);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(22,255.1967);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(23,191.9277);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(24,123.1813);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(25,58.48459);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(26,23.7323);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(27,15.34297);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(2,2.361694);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(3,99.67439);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(4,99.21839);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(5,92.08522);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(6,79.57989);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(7,77.53804);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(8,74.33784);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(9,77.15095);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(10,72.46474);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(11,72.59563);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(12,74.58832);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(13,79.06036);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(14,83.89182);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(15,97.22377);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(16,88.0804);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(17,72.82356);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(18,55.55619);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(19,45.5966);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(20,38.75755);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(21,32.48942);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(22,24.92478);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(23,22.13962);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(24,20.05659);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(25,12.50592);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(26,7.936018);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(27,5.886048);
   VbbHcc_duong_Z_dR_stack_5->SetEntries(17571);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_6 = new TH1D("VbbHcc_duong_Z_dR_stack_6","",50,0,10);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(2,0.5277893);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(3,54.54153);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(4,73.34414);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(5,55.41325);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(6,59.40123);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(7,60.95791);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(8,62.68883);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(9,69.0553);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(10,70.97727);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(11,83.77705);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(12,86.60101);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(13,97.17592);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(14,98.71765);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(15,115.5889);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(16,133.7276);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(17,71.25403);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(18,48.00456);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(19,37.23198);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(20,18.02076);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(21,13.6303);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(22,10.79601);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(23,6.538679);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(24,2.478834);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(25,2.795431);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(26,2.277637);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(27,0.9151684);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(2,0.3824353);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(3,4.686051);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(4,5.276702);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(5,4.619837);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(6,4.738708);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(7,4.765442);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(8,5.144093);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(9,5.249158);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(10,5.869775);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(11,5.691815);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(12,5.90946);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(13,6.165642);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(14,6.113852);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(15,6.749012);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(16,7.141546);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(17,5.20255);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(18,4.372307);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(19,3.795689);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(20,2.540676);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(21,2.270356);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(22,1.984016);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(23,1.493067);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(24,0.9416155);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(25,0.99815);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(26,0.9445176);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(27,0.5301454);
   VbbHcc_duong_Z_dR_stack_6->SetEntries(3697);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_7 = new TH1D("VbbHcc_duong_Z_dR_stack_7","",50,0,10);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(3,101.5102);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(4,172.4035);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(5,193.9191);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(6,220.7201);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(7,215.0548);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(8,203.3014);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(9,186.9635);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(10,172.7734);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(11,156.0584);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(12,145.5767);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(13,153.0053);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(14,149.3729);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(15,150.8578);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(16,148.8265);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(17,72.08566);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(18,38.87178);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(19,26.62688);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(20,15.63407);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(21,11.12428);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(22,7.023182);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(23,5.976109);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(24,2.116744);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(25,1.120562);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(26,0.9750969);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(27,0.7120303);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(3,4.997599);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(4,7.044728);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(5,6.832578);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(6,7.351642);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(7,7.220927);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(8,7.419384);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(9,7.024664);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(10,6.467659);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(11,7.060162);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(12,6.011954);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(13,6.198981);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(14,6.071107);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(15,6.03954);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(16,6.037153);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(17,4.371055);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(18,3.012727);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(19,2.556859);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(20,1.890487);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(21,1.642782);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(22,1.291331);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(23,1.204345);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(24,0.7169638);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(25,0.564328);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(26,0.4916306);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(27,0.4130746);
   VbbHcc_duong_Z_dR_stack_7->SetEntries(11097);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_8 = new TH1D("VbbHcc_duong_Z_dR_stack_8","",50,0,10);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(3,65.81618);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(4,131.9476);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(5,152.4669);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(6,175.7578);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(7,185.439);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(8,185.3413);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(9,193.0038);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(10,182.1242);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(11,177.4103);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(12,154.4604);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(13,170.3668);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(14,186.9031);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(15,194.8527);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(16,185.1373);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(17,78.8637);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(18,33.82364);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(19,20.53765);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(20,12.00587);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(21,5.64181);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(22,6.023165);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(23,2.523294);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(24,1.525595);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(25,0.674016);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(26,0.2214053);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(27,0.8498345);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(3,4.026049);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(4,5.653075);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(5,6.498528);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(6,7.35957);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(7,6.844883);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(8,7.927106);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(9,6.85428);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(10,6.680345);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(11,11.43525);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(12,6.175924);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(13,6.932424);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(14,7.023857);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(15,6.958553);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(16,6.918917);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(17,4.368584);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(18,2.832682);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(19,2.798345);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(20,1.6984);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(21,1.217085);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(22,1.220581);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(23,0.7009246);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(24,0.5920162);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(25,0.3505841);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(26,0.2214053);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(27,0.5089014);
   VbbHcc_duong_Z_dR_stack_8->SetEntries(10770);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_9 = new TH1D("VbbHcc_duong_Z_dR_stack_9","",50,0,10);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(2,0.01600079);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(3,16.21638);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(4,37.2582);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(5,49.46972);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(6,61.0417);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(7,69.95935);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(8,72.2098);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(9,71.6148);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(10,70.09031);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(11,67.41979);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(12,66.19361);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(13,65.69369);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(14,67.87505);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(15,70.48418);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(16,67.26898);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(17,21.70932);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(18,8.22529);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(19,3.651685);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(20,1.885233);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(21,1.131137);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(22,0.6635755);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(23,0.4402368);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(24,0.214326);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(25,0.09583942);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(26,0.05455245);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(27,0.02443341);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(28,0.01063771);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(2,0.006581679);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(3,0.2462367);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(4,0.3797601);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(5,0.4110105);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(6,0.432982);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(7,0.4675706);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(8,0.4794199);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(9,0.4536772);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(10,0.4738591);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(11,0.4664999);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(12,0.4448816);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(13,0.4526778);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(14,0.4538042);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(15,0.4689342);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(16,0.4606493);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(17,0.2548133);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(18,0.1840547);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(19,0.1072018);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(20,0.07148447);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(21,0.0572209);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(22,0.04196785);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(23,0.03448161);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(24,0.02423018);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(25,0.01691544);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(26,0.01255516);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(27,0.008439364);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(28,0.005344965);
   VbbHcc_duong_Z_dR_stack_9->SetEntries(353785);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_10 = new TH1D("VbbHcc_duong_Z_dR_stack_10","",50,0,10);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(2,0.007208015);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(3,7.19607);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(4,15.12687);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(5,20.55004);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(6,25.28541);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(7,26.83497);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(8,24.99098);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(9,20.84294);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(10,16.95787);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(11,14.60398);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(12,13.3906);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(13,13.44124);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(14,13.89114);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(15,14.7026);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(16,13.97893);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(17,5.671525);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(18,2.617017);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(19,1.323232);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(20,0.7254452);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(21,0.4326866);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(22,0.2334282);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(23,0.1291841);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(24,0.07018924);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(25,0.03533624);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(26,0.007968613);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(27,0.006571068);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(28,0.001819878);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(2,0.002178526);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(3,0.06757176);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(4,0.09794953);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(5,0.1143162);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(6,0.1268896);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(7,0.1308641);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(8,0.1263196);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(9,0.1153657);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(10,0.1040573);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(11,0.09651621);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(12,0.09242153);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(13,0.09255713);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(14,0.09410197);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(15,0.09682682);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(16,0.0944584);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(17,0.06006202);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(18,0.04077772);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(19,0.02899);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(20,0.02140047);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(21,0.01650944);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(22,0.01209311);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(23,0.008998394);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(24,0.006615158);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(25,0.004632326);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(26,0.002223477);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(27,0.001990234);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(28,0.001057348);
   VbbHcc_duong_Z_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_11 = new TH1D("VbbHcc_duong_Z_dR_stack_11","",50,0,10);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(3,0.5286101);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(4,0.8809496);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(5,1.236081);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(6,1.366297);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(7,1.391979);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(8,1.302367);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(9,1.195714);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(10,1.042759);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(11,0.8821305);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(12,0.8650981);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(13,0.8459928);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(14,0.8776779);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(15,1.054252);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(16,0.9266768);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(17,0.3360622);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(18,0.1438691);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(19,0.07873895);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(20,0.05369513);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(21,0.03081635);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(22,0.02134951);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(23,0.008623736);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(24,0.01430778);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(25,0.002061483);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(3,0.03738531);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(4,0.04804037);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(5,0.05806426);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(6,0.06121663);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(7,0.06192582);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(8,0.05860456);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(9,0.05658527);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(10,0.05246519);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(11,0.04805167);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(12,0.04729733);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(13,0.04740861);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(14,0.04722446);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(15,0.05218004);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(16,0.04960554);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(17,0.0307906);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(18,0.01925692);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(19,0.01391847);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(20,0.01174315);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(21,0.00821542);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(22,0.007391041);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(23,0.004433486);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(24,0.006074111);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(25,0.002061483);
   VbbHcc_duong_Z_dR_stack_11->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_12 = new TH1D("VbbHcc_duong_Z_dR_stack_12","",50,0,10);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(3,4537.686);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(4,9186.591);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(5,13138.32);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(6,14076.67);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(7,11225.5);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(8,7640.986);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(9,5665.727);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(10,4642.364);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(11,4248.167);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(12,3921.765);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(13,4156.728);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(14,4605.323);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(15,5072.494);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(16,5026.638);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(17,2314.897);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(18,1304.044);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(19,657.2184);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(20,399.1583);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(21,249.8753);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(22,117.4);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(23,80.28573);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(24,55.43128);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(25,53.24329);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(26,11.54839);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(3,180.7001);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(4,253.1934);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(5,303.0107);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(6,317.2797);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(7,281.2054);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(8,231.4296);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(9,198.6433);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(10,179.7217);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(11,173.8309);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(12,165.0562);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(13,170.125);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(14,179.3124);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(15,188.0916);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(16,188.089);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(17,128.5856);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(18,94.74694);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(19,66.95353);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(20,52.42948);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(21,41.31991);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(22,28.85101);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(23,23.69851);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(24,19.29967);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(25,19.80213);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(26,8.17956);
   VbbHcc_duong_Z_dR_stack_12->SetEntries(16335);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_dR__37 = new TH1D("VbbHcc_duong_Z_dR__37","",50,0,10);
   VbbHcc_duong_Z_dR__37->SetBinContent(2,760);
   VbbHcc_duong_Z_dR__37->SetBinContent(3,1136722);
   VbbHcc_duong_Z_dR__37->SetBinContent(4,1203372);
   VbbHcc_duong_Z_dR__37->SetBinContent(5,858059);
   VbbHcc_duong_Z_dR__37->SetBinContent(6,752830);
   VbbHcc_duong_Z_dR__37->SetBinContent(7,692820);
   VbbHcc_duong_Z_dR__37->SetBinContent(8,661478);
   VbbHcc_duong_Z_dR__37->SetBinContent(9,651629);
   VbbHcc_duong_Z_dR__37->SetBinContent(10,660229);
   VbbHcc_duong_Z_dR__37->SetBinContent(11,688593);
   VbbHcc_duong_Z_dR__37->SetBinContent(12,734742);
   VbbHcc_duong_Z_dR__37->SetBinContent(13,803468);
   VbbHcc_duong_Z_dR__37->SetBinContent(14,892235);
   VbbHcc_duong_Z_dR__37->SetBinContent(15,975455);
   VbbHcc_duong_Z_dR__37->SetBinContent(16,995615);
   VbbHcc_duong_Z_dR__37->SetBinContent(17,584997);
   VbbHcc_duong_Z_dR__37->SetBinContent(18,369929);
   VbbHcc_duong_Z_dR__37->SetBinContent(19,250956);
   VbbHcc_duong_Z_dR__37->SetBinContent(20,171760);
   VbbHcc_duong_Z_dR__37->SetBinContent(21,116742);
   VbbHcc_duong_Z_dR__37->SetBinContent(22,77185);
   VbbHcc_duong_Z_dR__37->SetBinContent(23,49094);
   VbbHcc_duong_Z_dR__37->SetBinContent(24,29154);
   VbbHcc_duong_Z_dR__37->SetBinContent(25,16263);
   VbbHcc_duong_Z_dR__37->SetBinContent(26,7804);
   VbbHcc_duong_Z_dR__37->SetBinContent(27,3151);
   VbbHcc_duong_Z_dR__37->SetBinContent(28,753);
   VbbHcc_duong_Z_dR__37->SetBinContent(29,59);
   VbbHcc_duong_Z_dR__37->SetEntries(1.338585e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR__37->SetLineColor(ci);
   VbbHcc_duong_Z_dR__37->SetLineWidth(2);
   VbbHcc_duong_Z_dR__37->SetMarkerStyle(20);
   VbbHcc_duong_Z_dR__37->SetMarkerSize(1.2);
   VbbHcc_duong_Z_dR__37->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR__37->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__37->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__37->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__37->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__37->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__37->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__37->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__37->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR__37->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__37->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__37->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__37->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__37->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__37->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_dR_fx1037[50] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fy1037[50] = {
   0,
   1681.722,
   1865199,
   2560401,
   1956180,
   1805979,
   1687971,
   1664319,
   1666832,
   1691178,
   1827311,
   1941823,
   2104254,
   2284202,
   2428942,
   2541554,
   1535300,
   1009175,
   691400.1,
   454422.8,
   319365.5,
   247436.1,
   142542.8,
   97305.64,
   53259.95,
   33516.63,
   11505.04,
   5444.134,
   1253.177,
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fex1037[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fey1037[50] = {
   0,
   1630.67,
   90457.62,
   96458.76,
   57211.99,
   54113.34,
   58986.88,
   49673.38,
   48815.44,
   50673.02,
   85294.47,
   52779.55,
   56665.45,
   56919.76,
   57808.73,
   59591.41,
   48887.51,
   38370.28,
   37030.2,
   26395.18,
   22356.97,
   20219.03,
   15249.58,
   12810.77,
   9312.573,
   7298.575,
   4197.492,
   3118.422,
   1248.5,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_Z_dR_fx1037,Graph_from_VbbHcc_duong_Z_dR_fy1037,Graph_from_VbbHcc_duong_Z_dR_fex1037,Graph_from_VbbHcc_duong_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_duong_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_dR1037","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->SetMaximum(2922546);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_dR1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",50,0,10);
   data_mc_ratio__38->SetBinContent(2,0.4519179);
   data_mc_ratio__38->SetBinContent(3,0.6094374);
   data_mc_ratio__38->SetBinContent(4,0.4699936);
   data_mc_ratio__38->SetBinContent(5,0.4386401);
   data_mc_ratio__38->SetBinContent(6,0.4168542);
   data_mc_ratio__38->SetBinContent(7,0.4104455);
   data_mc_ratio__38->SetBinContent(8,0.3974467);
   data_mc_ratio__38->SetBinContent(9,0.3909385);
   data_mc_ratio__38->SetBinContent(10,0.3903958);
   data_mc_ratio__38->SetBinContent(11,0.3768341);
   data_mc_ratio__38->SetBinContent(12,0.3783774);
   data_mc_ratio__38->SetBinContent(13,0.3818304);
   data_mc_ratio__38->SetBinContent(14,0.3906113);
   data_mc_ratio__38->SetBinContent(15,0.4015967);
   data_mc_ratio__38->SetBinContent(16,0.3917348);
   data_mc_ratio__38->SetBinContent(17,0.381031);
   data_mc_ratio__38->SetBinContent(18,0.3665659);
   data_mc_ratio__38->SetBinContent(19,0.3629678);
   data_mc_ratio__38->SetBinContent(20,0.377974);
   data_mc_ratio__38->SetBinContent(21,0.3655436);
   data_mc_ratio__38->SetBinContent(22,0.3119392);
   data_mc_ratio__38->SetBinContent(23,0.3444159);
   data_mc_ratio__38->SetBinContent(24,0.2996127);
   data_mc_ratio__38->SetBinContent(25,0.3053514);
   data_mc_ratio__38->SetBinContent(26,0.2328397);
   data_mc_ratio__38->SetBinContent(27,0.2738799);
   data_mc_ratio__38->SetBinContent(28,0.138314);
   data_mc_ratio__38->SetBinContent(29,0.04708032);
   data_mc_ratio__38->SetBinError(2,0.01639278);
   data_mc_ratio__38->SetBinError(3,0.0005716128);
   data_mc_ratio__38->SetBinError(4,0.0004284419);
   data_mc_ratio__38->SetBinError(5,0.0004735325);
   data_mc_ratio__38->SetBinError(6,0.0004804362);
   data_mc_ratio__38->SetBinError(7,0.0004931117);
   data_mc_ratio__38->SetBinError(8,0.0004886763);
   data_mc_ratio__38->SetBinError(9,0.0004842931);
   data_mc_ratio__38->SetBinError(10,0.0004804607);
   data_mc_ratio__38->SetBinError(11,0.0004541182);
   data_mc_ratio__38->SetBinError(12,0.0004414259);
   data_mc_ratio__38->SetBinError(13,0.0004259771);
   data_mc_ratio__38->SetBinError(14,0.0004135282);
   data_mc_ratio__38->SetBinError(15,0.0004066179);
   data_mc_ratio__38->SetBinError(16,0.0003925965);
   data_mc_ratio__38->SetBinError(17,0.0004981768);
   data_mc_ratio__38->SetBinError(18,0.0006026885);
   data_mc_ratio__38->SetBinError(19,0.0007245517);
   data_mc_ratio__38->SetBinError(20,0.0009120126);
   data_mc_ratio__38->SetBinError(21,0.001069857);
   data_mc_ratio__38->SetBinError(22,0.001122803);
   data_mc_ratio__38->SetBinError(23,0.001554422);
   data_mc_ratio__38->SetBinError(24,0.001754733);
   data_mc_ratio__38->SetBinError(25,0.002394416);
   data_mc_ratio__38->SetBinError(26,0.002635714);
   data_mc_ratio__38->SetBinError(27,0.004879057);
   data_mc_ratio__38->SetBinError(28,0.005040443);
   data_mc_ratio__38->SetBinError(29,0.006129336);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(454.5655);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__38->GetXaxis()->SetRange(1,50);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1038[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[50] = {
   0,
   0.9696433,
   0.04849757,
   0.0376733,
   0.0292468,
   0.02996344,
   0.03494544,
   0.02984607,
   0.02928635,
   0.02996314,
   0.04667759,
   0.02718041,
   0.026929,
   0.02491888,
   0.02379997,
   0.02344684,
   0.03184231,
   0.03802145,
   0.05355827,
   0.05808506,
   0.07000434,
   0.08171414,
   0.1069825,
   0.131655,
   0.1748513,
   0.2177598,
   0.3648393,
   0.5728041,
   0.9962675,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,11);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.00335929);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(2.195521);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->SetSelected(Z_dR_VbbHcc_18);
}

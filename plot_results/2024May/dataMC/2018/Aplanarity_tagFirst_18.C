#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Thu May 23 13:00:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(0,0,1,1);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7162.568,1.052419,7155415);
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
   st->SetMaximum(6439157);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0.01);
   st_stack_192->SetMaximum(6439157);
   st_stack_192->SetDirectory(nullptr);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->SetLineWidth(0);
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetLabelSize(0.05);
   st_stack_192->GetYaxis()->SetTitleSize(0.057);
   st_stack_192->GetYaxis()->SetTitleOffset(1.2);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,2284154);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,290129.1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,71649.67);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,26628.72);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,10094.53);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,4402.135);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1297.16);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,5774.231);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,1069.772);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,445.1674);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,102.1232);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,95.44002);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,892.9812);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,66.75794);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,14.53589);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,9.344535);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,54.67183);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(19,23.60995);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,42512.95);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,12580.78);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,6354.359);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,4803.852);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,2529.858);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,1042.935);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,249.6183);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,3890.694);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,479.2431);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,167.3531);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,48.68949);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,39.69113);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,752.967);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,37.34851);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,14.53589);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,8.633725);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,54.67183);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(19,23.60995);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(100082);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,31389.14);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,4184.739);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,1083.271);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,410.2587);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,165.2138);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,73.78777);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,46.90927);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,31.76429);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,13.49019);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,5.540138);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.454071);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,4.18334);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,2.60444);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.555253);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.5021663);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.4570763);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.6066017);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.1400055);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,121.0597);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,42.8686);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,22.30151);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,13.13511);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,8.750551);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,5.310357);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,7.840543);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,4.655918);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,2.275773);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.028858);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.9585308);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,1.317746);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8826849);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.6744158);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.3440735);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.32166);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.3534786);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.09080051);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(244394);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,546903.9);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,73128.2);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,19197.66);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,6904.782);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,3212.628);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1610.977);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,916.0982);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,534.1348);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,312.963);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,210.5195);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,132.5659);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,81.68896);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,50.91997);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,34.20062);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,20.12046);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,9.971358);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,9.720744);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,3.837501);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.867318);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.4224073);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,1.067082);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,331.2273);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,121.3582);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,63.48874);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,36.70499);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,27.74438);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,17.46401);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,13.89315);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,10.13618);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,7.736533);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,6.37833);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,5.04304);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,3.749013);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,2.987602);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,4.301335);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,2.0166);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,1.313561);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,2.868427);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.8472669);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.4641059);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2243656);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5579123);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(5358098);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,22571.63);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,2492.621);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,616.1725);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,201.5212);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,99.63706);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,47.35331);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,32.94601);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,14.46611);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,11.54886);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,7.071508);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,3.385934);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,3.116672);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6730799);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.802373);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.7040072);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1035803);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.02098532);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,1.523737);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.1315472);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,143.7571);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,53.28438);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,22.28662);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,11.36337);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,7.76891);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,5.568958);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,13.51192);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.530521);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,2.379485);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.928268);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,1.228755);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,1.521391);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.347377);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.4599632);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.426146);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1035803);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.02098532);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,1.373786);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(19,0.1315472);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(94686);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,11831.22);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,1254.722);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,362.8929);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,127.2035);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,53.60832);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,41.18002);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,14.66034);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,17.47308);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.895772);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,1.43842);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.6273636);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,2.454735);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.1500469);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.4105738);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.1468603);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,197.5578);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,63.45953);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,35.29106);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,24.42249);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,12.51082);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,14.37476);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,3.988384);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,7.175646);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,1.478065);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.4745397);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3763613);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,1.725207);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.1289603);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.4105738);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1468603);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(42358);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,97.07303);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,9.624443);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.724934);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,2.841078);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.5430295);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,9.591282);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,2.662884);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,1.679032);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,2.098525);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.5430295);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,276.6528);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,31.67723);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,6.564308);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,8.929379);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,14.83145);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,6.120792);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,2.175934);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,3.618223);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,214.4979);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,18.33098);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.288103);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.2948286);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,1.062598);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,10.96193);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,3.072006);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.228205);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.2948286);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,1.062598);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,117.4365);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,10.91489);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,2.644071);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.8207614);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.4893325);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1710174);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.08804506);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.09372789);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01268689);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.0317437);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.04924941);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.006115148);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.00296475);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.005318408);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.002125486);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.8585101);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.2372982);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1192149);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.06413848);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.0904941);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.02930616);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.018512);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.02561017);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005725825);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.01072953);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.01860936);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.004417993);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.00296475);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(16,0.003762862);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(18,0.002125486);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,61.67928);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,6.916201);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.672489);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.5787757);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.2807677);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.1175221);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.08455484);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.0403483);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.02238461);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01418203);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.00924074);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.005427752);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.003441387);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.00339993);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0006951752);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0008269996);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0005658798);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.00132109);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0006617458);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0006013037);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1862039);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.06152899);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03031334);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.018121);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01271063);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.008072554);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.006988007);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.004814465);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.00358767);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.00271205);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.002505813);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.00171059);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001418921);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.001394574);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0006951752);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006012738);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0005658798);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0009392297);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0006617458);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0006013037);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(134198);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,2.540921);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.196944);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.05599686);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.00789285);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.004784755);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.1011269);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02523643);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.016435);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.005584141);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.003386026);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001750385);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(8,0.005370295);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,1.289126);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1353805);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.03454886);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.008597072);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002700478);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.001024649);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.002246996);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0006995791);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0008107704);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.0007021084);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0008758926);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.02601592);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.008293695);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.00434067);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001919495);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.001041273);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0007256441);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0009402317);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0004953022);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0008107704);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0004964887);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0006544837);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__383 = new TH1D("VH_tagFirst_Aplanarity__383","",50,0,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(0,2);
   VH_tagFirst_Aplanarity__383->SetBinContent(1,2526409);
   VH_tagFirst_Aplanarity__383->SetBinContent(2,330790);
   VH_tagFirst_Aplanarity__383->SetBinContent(3,86067);
   VH_tagFirst_Aplanarity__383->SetBinContent(4,29055);
   VH_tagFirst_Aplanarity__383->SetBinContent(5,12175);
   VH_tagFirst_Aplanarity__383->SetBinContent(6,5972);
   VH_tagFirst_Aplanarity__383->SetBinContent(7,3182);
   VH_tagFirst_Aplanarity__383->SetBinContent(8,1833);
   VH_tagFirst_Aplanarity__383->SetBinContent(9,1083);
   VH_tagFirst_Aplanarity__383->SetBinContent(10,731);
   VH_tagFirst_Aplanarity__383->SetBinContent(11,447);
   VH_tagFirst_Aplanarity__383->SetBinContent(12,286);
   VH_tagFirst_Aplanarity__383->SetBinContent(13,206);
   VH_tagFirst_Aplanarity__383->SetBinContent(14,81);
   VH_tagFirst_Aplanarity__383->SetBinContent(15,64);
   VH_tagFirst_Aplanarity__383->SetBinContent(16,46);
   VH_tagFirst_Aplanarity__383->SetBinContent(17,31);
   VH_tagFirst_Aplanarity__383->SetBinContent(18,12);
   VH_tagFirst_Aplanarity__383->SetBinContent(19,12);
   VH_tagFirst_Aplanarity__383->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(21,1);
   VH_tagFirst_Aplanarity__383->SetBinError(0,1.414214);
   VH_tagFirst_Aplanarity__383->SetBinError(1,1589.468);
   VH_tagFirst_Aplanarity__383->SetBinError(2,575.1435);
   VH_tagFirst_Aplanarity__383->SetBinError(3,293.3718);
   VH_tagFirst_Aplanarity__383->SetBinError(4,170.4553);
   VH_tagFirst_Aplanarity__383->SetBinError(5,110.3404);
   VH_tagFirst_Aplanarity__383->SetBinError(6,77.27872);
   VH_tagFirst_Aplanarity__383->SetBinError(7,56.40922);
   VH_tagFirst_Aplanarity__383->SetBinError(8,42.81355);
   VH_tagFirst_Aplanarity__383->SetBinError(9,32.90897);
   VH_tagFirst_Aplanarity__383->SetBinError(10,27.03701);
   VH_tagFirst_Aplanarity__383->SetBinError(11,21.14237);
   VH_tagFirst_Aplanarity__383->SetBinError(12,16.91153);
   VH_tagFirst_Aplanarity__383->SetBinError(13,14.3527);
   VH_tagFirst_Aplanarity__383->SetBinError(14,9);
   VH_tagFirst_Aplanarity__383->SetBinError(15,8);
   VH_tagFirst_Aplanarity__383->SetBinError(16,6.78233);
   VH_tagFirst_Aplanarity__383->SetBinError(17,5.567764);
   VH_tagFirst_Aplanarity__383->SetBinError(18,3.464102);
   VH_tagFirst_Aplanarity__383->SetBinError(19,3.464102);
   VH_tagFirst_Aplanarity__383->SetBinError(20,1);
   VH_tagFirst_Aplanarity__383->SetBinError(21,1);
   VH_tagFirst_Aplanarity__383->SetEntries(2998535);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__383->SetLineColor(ci);
   VH_tagFirst_Aplanarity__383->SetLineWidth(2);
   VH_tagFirst_Aplanarity__383->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__383->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1383[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1383[50] = { 2897621, 371267.2, 92926.65, 34283.12, 13629.24, 6176.787, 2308.496, 6372.211, 1410.705, 669.7837, 242.2149, 186.8899, 947.1821, 103.4766, 35.86619, 20.29327, 65.16759,
   7.816549, 25.61014, 0.423069, 1.067683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1383[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1383[50] = { 42515.12, 12581.71, 6354.853, 4804.087, 2530.069, 1043.209, 250.5246, 3890.717, 479.3191, 167.5245, 48.97621, 39.95583, 752.9735, 37.60446, 14.68533, 8.749253, 54.74837,
   2.822091, 23.61488, 0.2243665, 0.5579127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1383,Graph_from_VH_tagFirst_Aplanarity_fy1383,Graph_from_VH_tagFirst_Aplanarity_fex1383,Graph_from_VH_tagFirst_Aplanarity_fey1383);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1383 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1383","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMaximum(3234149);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1383);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__384 = new TH1D("data_mc_ratio__384","",50,0,1);
   data_mc_ratio__384->SetBinContent(1,0.8718909);
   data_mc_ratio__384->SetBinContent(2,0.8909755);
   data_mc_ratio__384->SetBinContent(3,0.9261821);
   data_mc_ratio__384->SetBinContent(4,0.8475015);
   data_mc_ratio__384->SetBinContent(5,0.8933002);
   data_mc_ratio__384->SetBinContent(6,0.9668457);
   data_mc_ratio__384->SetBinContent(7,1.378387);
   data_mc_ratio__384->SetBinContent(8,0.2876553);
   data_mc_ratio__384->SetBinContent(9,0.767701);
   data_mc_ratio__384->SetBinContent(10,1.091397);
   data_mc_ratio__384->SetBinContent(11,1.845469);
   data_mc_ratio__384->SetBinContent(12,1.530313);
   data_mc_ratio__384->SetBinContent(13,0.2174872);
   data_mc_ratio__384->SetBinContent(14,0.7827854);
   data_mc_ratio__384->SetBinContent(15,1.784411);
   data_mc_ratio__384->SetBinContent(16,2.266761);
   data_mc_ratio__384->SetBinContent(17,0.4756966);
   data_mc_ratio__384->SetBinContent(18,1.535204);
   data_mc_ratio__384->SetBinContent(19,0.4685644);
   data_mc_ratio__384->SetBinContent(20,2.36368);
   data_mc_ratio__384->SetBinContent(21,0.9366072);
   data_mc_ratio__384->SetBinError(1,0.0005485425);
   data_mc_ratio__384->SetBinError(2,0.001549136);
   data_mc_ratio__384->SetBinError(3,0.003157025);
   data_mc_ratio__384->SetBinError(4,0.004971988);
   data_mc_ratio__384->SetBinError(5,0.008095859);
   data_mc_ratio__384->SetBinError(6,0.01251115);
   data_mc_ratio__384->SetBinError(7,0.02443549);
   data_mc_ratio__384->SetBinError(8,0.00671879);
   data_mc_ratio__384->SetBinError(9,0.02332802);
   data_mc_ratio__384->SetBinError(10,0.04036678);
   data_mc_ratio__384->SetBinError(11,0.08728768);
   data_mc_ratio__384->SetBinError(12,0.09048931);
   data_mc_ratio__384->SetBinError(13,0.01515305);
   data_mc_ratio__384->SetBinError(14,0.08697616);
   data_mc_ratio__384->SetBinError(15,0.2230513);
   data_mc_ratio__384->SetBinError(16,0.3342157);
   data_mc_ratio__384->SetBinError(17,0.08543763);
   data_mc_ratio__384->SetBinError(18,0.4431753);
   data_mc_ratio__384->SetBinError(19,0.1352629);
   data_mc_ratio__384->SetBinError(20,2.36368);
   data_mc_ratio__384->SetBinError(21,0.9366072);
   data_mc_ratio__384->SetMinimum(0.4);
   data_mc_ratio__384->SetMaximum(1.6);
   data_mc_ratio__384->SetEntries(46.70362);
   data_mc_ratio__384->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__384->SetLineColor(ci);
   data_mc_ratio__384->SetLineWidth(2);
   data_mc_ratio__384->SetMarkerStyle(20);
   data_mc_ratio__384->SetMarkerSize(1.2);
   data_mc_ratio__384->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__384->GetXaxis()->SetRange(1,50);
   data_mc_ratio__384->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__384->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__384->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__384->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__384->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__384->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__384->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1384[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1384[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1384[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1384[50] = { 0.01467242, 0.03388856, 0.06838569, 0.1401298, 0.1856354, 0.1688919, 0.1085229, 0.6105757, 0.3397726, 0.2501174, 0.2022015, 0.2137935, 0.7949617, 0.3634102, 0.4094477, 0.4311407, 0.8401166,
   0.3610405, 0.9220911, 0.5303308, 0.522545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1384,Graph_from_mc_statistical_error_fy1384,Graph_from_mc_statistical_error_fex1384,Graph_from_mc_statistical_error_fey1384);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1384 = new TH1F("Graph_Graph_from_mc_statistical_error1384","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1384->SetMinimum(0.07011804);
   Graph_Graph_from_mc_statistical_error1384->SetMaximum(2.106509);
   Graph_Graph_from_mc_statistical_error1384->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1384->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1384);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}

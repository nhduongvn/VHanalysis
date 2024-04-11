#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nCombos_tagFirst_18()
{
//=========Macro generated from canvas: nCombos_tagFirst_18/nCombos_tagFirst_18
//=========  (Wed Apr 10 11:51:21 2024) by ROOT version 6.28/10
   TCanvas *nCombos_tagFirst_18 = new TCanvas("nCombos_tagFirst_18", "nCombos_tagFirst_18",0,0,600,600);
   nCombos_tagFirst_18->SetHighLightColor(2);
   nCombos_tagFirst_18->Range(0,0,1,1);
   nCombos_tagFirst_18->SetFillColor(0);
   nCombos_tagFirst_18->SetFillStyle(4000);
   nCombos_tagFirst_18->SetBorderMode(0);
   nCombos_tagFirst_18->SetBorderSize(2);
   nCombos_tagFirst_18->SetFrameFillStyle(1000);
   nCombos_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.266127,-85772.03,4.762097,8.568626e+07);
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
   st->SetMaximum(7.710906e+07);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",4,-0.5,3.5);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(7.710906e+07);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetRange(1,5);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VH_tagFirst_nCombos_stack_1 = new TH1D("VH_tagFirst_nCombos_stack_1","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_1->SetBinContent(1,3.305922e+07);
   VH_tagFirst_nCombos_stack_1->SetBinContent(2,2716221);
   VH_tagFirst_nCombos_stack_1->SetBinContent(3,26111.37);
   VH_tagFirst_nCombos_stack_1->SetBinError(1,210226.1);
   VH_tagFirst_nCombos_stack_1->SetBinError(2,49550.56);
   VH_tagFirst_nCombos_stack_1->SetBinError(3,3282.72);
   VH_tagFirst_nCombos_stack_1->SetEntries(4397017);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_nCombos_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_1->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_1,"");
   
   TH1D *VH_tagFirst_nCombos_stack_2 = new TH1D("VH_tagFirst_nCombos_stack_2","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_2->SetBinContent(1,88273.49);
   VH_tagFirst_nCombos_stack_2->SetBinContent(2,36937.66);
   VH_tagFirst_nCombos_stack_2->SetBinContent(3,477.4376);
   VH_tagFirst_nCombos_stack_2->SetBinError(1,174.0154);
   VH_tagFirst_nCombos_stack_2->SetBinError(2,131.1405);
   VH_tagFirst_nCombos_stack_2->SetBinError(3,17.31411);
   VH_tagFirst_nCombos_stack_2->SetEntries(954069);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_nCombos_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_2->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_2,"");
   
   TH1D *VH_tagFirst_nCombos_stack_3 = new TH1D("VH_tagFirst_nCombos_stack_3","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_3->SetBinContent(1,1370653);
   VH_tagFirst_nCombos_stack_3->SetBinContent(2,644609.3);
   VH_tagFirst_nCombos_stack_3->SetBinContent(3,8644.043);
   VH_tagFirst_nCombos_stack_3->SetBinError(1,432.2521);
   VH_tagFirst_nCombos_stack_3->SetBinError(2,346.4847);
   VH_tagFirst_nCombos_stack_3->SetBinError(3,39.19149);
   VH_tagFirst_nCombos_stack_3->SetEntries(2.056516e+07);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_nCombos_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_3->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_3,"");
   
   TH1D *VH_tagFirst_nCombos_stack_4 = new TH1D("VH_tagFirst_nCombos_stack_4","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_4->SetBinContent(1,99987.93);
   VH_tagFirst_nCombos_stack_4->SetBinContent(2,25801.42);
   VH_tagFirst_nCombos_stack_4->SetBinContent(3,302.8557);
   VH_tagFirst_nCombos_stack_4->SetBinError(1,341.7318);
   VH_tagFirst_nCombos_stack_4->SetBinError(2,155.9335);
   VH_tagFirst_nCombos_stack_4->SetBinError(3,14.94155);
   VH_tagFirst_nCombos_stack_4->SetEntries(457625);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_nCombos_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_4->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_4,"");
   
   TH1D *VH_tagFirst_nCombos_stack_5 = new TH1D("VH_tagFirst_nCombos_stack_5","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_5->SetBinContent(1,77497.63);
   VH_tagFirst_nCombos_stack_5->SetBinContent(2,13562.05);
   VH_tagFirst_nCombos_stack_5->SetBinContent(3,171.289);
   VH_tagFirst_nCombos_stack_5->SetBinError(1,622.177);
   VH_tagFirst_nCombos_stack_5->SetBinError(2,215.3189);
   VH_tagFirst_nCombos_stack_5->SetBinError(3,25.0557);
   VH_tagFirst_nCombos_stack_5->SetEntries(255691);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_nCombos_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_5->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_5,"");
   
   TH1D *VH_tagFirst_nCombos_stack_6 = new TH1D("VH_tagFirst_nCombos_stack_6","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_6->SetBinContent(1,727.9322);
   VH_tagFirst_nCombos_stack_6->SetBinContent(2,110.0882);
   VH_tagFirst_nCombos_stack_6->SetBinContent(3,1.315379);
   VH_tagFirst_nCombos_stack_6->SetBinError(1,26.3309);
   VH_tagFirst_nCombos_stack_6->SetBinError(2,10.15143);
   VH_tagFirst_nCombos_stack_6->SetBinError(3,0.9564909);
   VH_tagFirst_nCombos_stack_6->SetEntries(1199);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_nCombos_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_6->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_6,"");
   
   TH1D *VH_tagFirst_nCombos_stack_7 = new TH1D("VH_tagFirst_nCombos_stack_7","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_7->SetBinContent(1,1157.757);
   VH_tagFirst_nCombos_stack_7->SetBinContent(2,319.3321);
   VH_tagFirst_nCombos_stack_7->SetBinContent(3,4.491611);
   VH_tagFirst_nCombos_stack_7->SetBinError(1,28.30202);
   VH_tagFirst_nCombos_stack_7->SetBinError(2,16.50508);
   VH_tagFirst_nCombos_stack_7->SetBinError(3,1.686574);
   VH_tagFirst_nCombos_stack_7->SetEntries(2717);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_nCombos_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_7->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_7,"");
   
   TH1D *VH_tagFirst_nCombos_stack_8 = new TH1D("VH_tagFirst_nCombos_stack_8","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_8->SetBinContent(1,851.9265);
   VH_tagFirst_nCombos_stack_8->SetBinContent(2,234.7028);
   VH_tagFirst_nCombos_stack_8->SetBinContent(3,2.771627);
   VH_tagFirst_nCombos_stack_8->SetBinError(1,22.32063);
   VH_tagFirst_nCombos_stack_8->SetBinError(2,11.45135);
   VH_tagFirst_nCombos_stack_8->SetBinError(3,1.091828);
   VH_tagFirst_nCombos_stack_8->SetEntries(2546);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_nCombos_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_8->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_8,"");
   
   TH1D *VH_tagFirst_nCombos_stack_9 = new TH1D("VH_tagFirst_nCombos_stack_9","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_9->SetBinContent(1,374.4782);
   VH_tagFirst_nCombos_stack_9->SetBinContent(2,131.2086);
   VH_tagFirst_nCombos_stack_9->SetBinContent(3,1.868606);
   VH_tagFirst_nCombos_stack_9->SetBinError(1,1.321263);
   VH_tagFirst_nCombos_stack_9->SetBinError(2,0.9182471);
   VH_tagFirst_nCombos_stack_9->SetBinError(3,0.08212041);
   VH_tagFirst_nCombos_stack_9->SetEntries(147608);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_nCombos_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_9->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_9,"");
   
   TH1D *VH_tagFirst_nCombos_stack_10 = new TH1D("VH_tagFirst_nCombos_stack_10","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_10->SetBinContent(1,325.9777);
   VH_tagFirst_nCombos_stack_10->SetBinContent(2,70.53391);
   VH_tagFirst_nCombos_stack_10->SetBinContent(3,0.7801933);
   VH_tagFirst_nCombos_stack_10->SetBinError(1,0.4431276);
   VH_tagFirst_nCombos_stack_10->SetBinError(2,0.2115869);
   VH_tagFirst_nCombos_stack_10->SetBinError(3,0.02138016);
   VH_tagFirst_nCombos_stack_10->SetEntries(681244);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_nCombos_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_10->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_10,"");
   
   TH1D *VH_tagFirst_nCombos_stack_11 = new TH1D("VH_tagFirst_nCombos_stack_11","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_11->SetBinContent(1,5.19707);
   VH_tagFirst_nCombos_stack_11->SetBinContent(2,2.770544);
   VH_tagFirst_nCombos_stack_11->SetBinContent(3,0.04917473);
   VH_tagFirst_nCombos_stack_11->SetBinError(1,0.1312159);
   VH_tagFirst_nCombos_stack_11->SetBinError(2,0.1053074);
   VH_tagFirst_nCombos_stack_11->SetBinError(3,0.01170945);
   VH_tagFirst_nCombos_stack_11->SetEntries(2747);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_nCombos_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_11->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_11,"");
   
   TH1D *VH_tagFirst_nCombos_stack_12 = new TH1D("VH_tagFirst_nCombos_stack_12","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_12->SetBinContent(1,2.636654);
   VH_tagFirst_nCombos_stack_12->SetBinContent(2,1.440967);
   VH_tagFirst_nCombos_stack_12->SetBinContent(3,0.03574529);
   VH_tagFirst_nCombos_stack_12->SetBinError(1,0.03565105);
   VH_tagFirst_nCombos_stack_12->SetBinError(2,0.02748857);
   VH_tagFirst_nCombos_stack_12->SetBinError(3,0.004073052);
   VH_tagFirst_nCombos_stack_12->SetEntries(9994);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_nCombos_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_12->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_nCombos__5 = new TH1D("VH_tagFirst_nCombos__5","",4,-0.5,3.5);
   VH_tagFirst_nCombos__5->SetBinContent(1,1.757918e+07);
   VH_tagFirst_nCombos__5->SetBinContent(2,2962780);
   VH_tagFirst_nCombos__5->SetBinContent(3,34968);
   VH_tagFirst_nCombos__5->SetEntries(2.057693e+07);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos__5->SetLineColor(ci);
   VH_tagFirst_nCombos__5->SetLineWidth(2);
   VH_tagFirst_nCombos__5->SetMarkerStyle(20);
   VH_tagFirst_nCombos__5->SetMarkerSize(1.2);
   VH_tagFirst_nCombos__5->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__5->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_nCombos_fx1005[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_VH_tagFirst_nCombos_fy1005[4] = { 3.469908e+07, 3438001, 35718.31, 0 };
   Double_t Graph_from_VH_tagFirst_nCombos_fex1005[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VH_tagFirst_nCombos_fey1005[4] = { 210227.8, 49552.66, 3283.13, 0 };
   TGraphErrors *gre = new TGraphErrors(4,Graph_from_VH_tagFirst_nCombos_fx1005,Graph_from_VH_tagFirst_nCombos_fy1005,Graph_from_VH_tagFirst_nCombos_fex1005,Graph_from_VH_tagFirst_nCombos_fey1005);
   gre->SetName("Graph_from_VH_tagFirst_nCombos");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_nCombos1005 = new TH1F("Graph_Graph_from_VH_tagFirst_nCombos1005","",100,-0.9,3.9);
   Graph_Graph_from_VH_tagFirst_nCombos1005->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_nCombos1005->SetMaximum(3.840023e+07);
   Graph_Graph_from_VH_tagFirst_nCombos1005->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_nCombos1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_nCombos1005->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_nCombos1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_nCombos","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_nCombos","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_nCombos","MC unc. (stat.)","fl");

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
   nCombos_tagFirst_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.266127,-0.2774193,4.762097,1.658065);
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",4,-0.5,3.5);
   data_mc_ratio__6->SetBinContent(1,0.5066182);
   data_mc_ratio__6->SetBinContent(2,0.8617739);
   data_mc_ratio__6->SetBinContent(3,0.9789937);
   data_mc_ratio__6->SetBinError(1,0.0001208319);
   data_mc_ratio__6->SetBinError(2,0.0005006609);
   data_mc_ratio__6->SetBinError(3,0.005235336);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(664.7681);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("jet combinatorics");
   data_mc_ratio__6->GetXaxis()->SetRange(1,5);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_mc_statistical_error_fy1006[4] = { 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1006[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1006[4] = { 0.006058601, 0.01441322, 0.09191729, 0 };
   gre = new TGraphErrors(4,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,-0.9,3.9);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.8896993);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.110301);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,4,1);
   line->Draw();
   bottomPad->Modified();
   nCombos_tagFirst_18->cd();
   nCombos_tagFirst_18->Modified();
   nCombos_tagFirst_18->cd();
   nCombos_tagFirst_18->SetSelected(nCombos_tagFirst_18);
}

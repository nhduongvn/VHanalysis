#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nCombos_tagFirst_16_logY()
{
//=========Macro generated from canvas: nCombos_tagFirst_16/nCombos_tagFirst_16
//=========  (Thu Apr 11 14:05:50 2024) by ROOT version 6.28/10
   TCanvas *nCombos_tagFirst_16 = new TCanvas("nCombos_tagFirst_16", "nCombos_tagFirst_16",0,0,600,600);
   nCombos_tagFirst_16->SetHighLightColor(2);
   nCombos_tagFirst_16->Range(0,0,1,1);
   nCombos_tagFirst_16->SetFillColor(0);
   nCombos_tagFirst_16->SetFillStyle(4000);
   nCombos_tagFirst_16->SetBorderMode(0);
   nCombos_tagFirst_16->SetBorderSize(2);
   nCombos_tagFirst_16->SetFrameFillStyle(1000);
   nCombos_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.266127,-3.063866,4.762097,21.02476);
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
   st->SetMaximum(8.286038e+17);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",4,-0.5,3.5);
   st_stack_1->SetMinimum(0.0009124776);
   st_stack_1->SetMaximum(4.129487e+18);
   st_stack_1->SetDirectory(nullptr);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->SetLineWidth(0);
   st_stack_1->GetXaxis()->SetRange(1,5);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VH_tagFirst_nCombos_stack_1 = new TH1D("VH_tagFirst_nCombos_stack_1","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_1->SetBinContent(1,1.123779e+08);
   VH_tagFirst_nCombos_stack_1->SetBinContent(2,2249454);
   VH_tagFirst_nCombos_stack_1->SetBinContent(3,12319.56);
   VH_tagFirst_nCombos_stack_1->SetBinError(1,279734.2);
   VH_tagFirst_nCombos_stack_1->SetBinError(2,35336.46);
   VH_tagFirst_nCombos_stack_1->SetBinError(3,1732.543);
   VH_tagFirst_nCombos_stack_1->SetEntries(5942007);

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
   VH_tagFirst_nCombos_stack_2->SetBinContent(1,176360.4);
   VH_tagFirst_nCombos_stack_2->SetBinContent(2,24713.5);
   VH_tagFirst_nCombos_stack_2->SetBinContent(3,169.3125);
   VH_tagFirst_nCombos_stack_2->SetBinError(1,149.045);
   VH_tagFirst_nCombos_stack_2->SetBinError(2,58.37396);
   VH_tagFirst_nCombos_stack_2->SetBinError(3,5.112969);
   VH_tagFirst_nCombos_stack_2->SetEntries(3392532);

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
   VH_tagFirst_nCombos_stack_3->SetBinContent(1,2217702);
   VH_tagFirst_nCombos_stack_3->SetBinContent(2,399691.6);
   VH_tagFirst_nCombos_stack_3->SetBinContent(3,3136.623);
   VH_tagFirst_nCombos_stack_3->SetBinError(1,347.5831);
   VH_tagFirst_nCombos_stack_3->SetBinError(2,152.6656);
   VH_tagFirst_nCombos_stack_3->SetBinError(3,13.46276);
   VH_tagFirst_nCombos_stack_3->SetEntries(5.095889e+07);

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
   VH_tagFirst_nCombos_stack_4->SetBinContent(1,303705.5);
   VH_tagFirst_nCombos_stack_4->SetBinContent(2,17935.27);
   VH_tagFirst_nCombos_stack_4->SetBinContent(3,119.7244);
   VH_tagFirst_nCombos_stack_4->SetBinError(1,413.2646);
   VH_tagFirst_nCombos_stack_4->SetBinError(2,85.77706);
   VH_tagFirst_nCombos_stack_4->SetBinError(3,5.386011);
   VH_tagFirst_nCombos_stack_4->SetEntries(2573010);

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
   VH_tagFirst_nCombos_stack_5->SetBinContent(1,591575.9);
   VH_tagFirst_nCombos_stack_5->SetBinContent(2,10335.67);
   VH_tagFirst_nCombos_stack_5->SetBinContent(3,62.05695);
   VH_tagFirst_nCombos_stack_5->SetBinError(1,946.0322);
   VH_tagFirst_nCombos_stack_5->SetBinError(2,97.89175);
   VH_tagFirst_nCombos_stack_5->SetBinError(3,6.038057);
   VH_tagFirst_nCombos_stack_5->SetEntries(3561857);

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
   VH_tagFirst_nCombos_stack_6->SetBinContent(1,5852.611);
   VH_tagFirst_nCombos_stack_6->SetBinContent(2,88.32643);
   VH_tagFirst_nCombos_stack_6->SetBinContent(3,0.7016613);
   VH_tagFirst_nCombos_stack_6->SetBinError(1,25.08332);
   VH_tagFirst_nCombos_stack_6->SetBinError(2,3.260021);
   VH_tagFirst_nCombos_stack_6->SetBinError(3,0.3485046);
   VH_tagFirst_nCombos_stack_6->SetEntries(57397);

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
   VH_tagFirst_nCombos_stack_7->SetBinContent(1,3946.471);
   VH_tagFirst_nCombos_stack_7->SetBinContent(2,235.8268);
   VH_tagFirst_nCombos_stack_7->SetBinContent(3,1.170116);
   VH_tagFirst_nCombos_stack_7->SetBinError(1,18.96689);
   VH_tagFirst_nCombos_stack_7->SetBinError(2,4.858247);
   VH_tagFirst_nCombos_stack_7->SetBinError(3,0.3247926);
   VH_tagFirst_nCombos_stack_7->SetEntries(47489);

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
   VH_tagFirst_nCombos_stack_8->SetBinContent(1,1739.189);
   VH_tagFirst_nCombos_stack_8->SetBinContent(2,173.1164);
   VH_tagFirst_nCombos_stack_8->SetBinContent(3,1.959136);
   VH_tagFirst_nCombos_stack_8->SetBinError(1,18.69164);
   VH_tagFirst_nCombos_stack_8->SetBinError(2,6.053307);
   VH_tagFirst_nCombos_stack_8->SetBinError(3,0.668543);
   VH_tagFirst_nCombos_stack_8->SetEntries(9858);

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
   VH_tagFirst_nCombos_stack_9->SetBinContent(1,402.7498);
   VH_tagFirst_nCombos_stack_9->SetBinContent(2,78.77776);
   VH_tagFirst_nCombos_stack_9->SetBinContent(3,0.9249537);
   VH_tagFirst_nCombos_stack_9->SetBinError(1,0.6884974);
   VH_tagFirst_nCombos_stack_9->SetBinError(2,0.3103505);
   VH_tagFirst_nCombos_stack_9->SetBinError(3,0.03238884);
   VH_tagFirst_nCombos_stack_9->SetEntries(423620);

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
   VH_tagFirst_nCombos_stack_10->SetBinContent(1,195.7832);
   VH_tagFirst_nCombos_stack_10->SetBinContent(2,42.36287);
   VH_tagFirst_nCombos_stack_10->SetBinContent(3,0.4685864);
   VH_tagFirst_nCombos_stack_10->SetBinError(1,0.2661437);
   VH_tagFirst_nCombos_stack_10->SetBinError(2,0.1270797);
   VH_tagFirst_nCombos_stack_10->SetBinError(3,0.01284099);
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
   VH_tagFirst_nCombos_stack_11->SetBinContent(1,12.99041);
   VH_tagFirst_nCombos_stack_11->SetBinContent(2,1.777114);
   VH_tagFirst_nCombos_stack_11->SetBinContent(3,0.02614247);
   VH_tagFirst_nCombos_stack_11->SetBinError(1,0.1610848);
   VH_tagFirst_nCombos_stack_11->SetBinError(2,0.06062797);
   VH_tagFirst_nCombos_stack_11->SetBinError(3,0.007144395);
   VH_tagFirst_nCombos_stack_11->SetEntries(7641);

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
   VH_tagFirst_nCombos_stack_12->SetBinContent(1,5.764742);
   VH_tagFirst_nCombos_stack_12->SetBinContent(2,0.8742552);
   VH_tagFirst_nCombos_stack_12->SetBinContent(3,0.01128721);
   VH_tagFirst_nCombos_stack_12->SetBinError(1,0.04039507);
   VH_tagFirst_nCombos_stack_12->SetBinError(2,0.01592399);
   VH_tagFirst_nCombos_stack_12->SetBinError(3,0.001785872);
   VH_tagFirst_nCombos_stack_12->SetEntries(24220);

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
   
   TH1D *VH_tagFirst_nCombos__1 = new TH1D("VH_tagFirst_nCombos__1","",4,-0.5,3.5);
   VH_tagFirst_nCombos__1->SetBinContent(1,5.76286e+07);
   VH_tagFirst_nCombos__1->SetBinContent(2,3553742);
   VH_tagFirst_nCombos__1->SetBinContent(3,31416);
   VH_tagFirst_nCombos__1->SetEntries(6.121376e+07);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos__1->SetLineColor(ci);
   VH_tagFirst_nCombos__1->SetLineWidth(2);
   VH_tagFirst_nCombos__1->SetMarkerStyle(20);
   VH_tagFirst_nCombos__1->SetMarkerSize(1.2);
   VH_tagFirst_nCombos__1->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos__1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__1->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__1->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_nCombos_fx1001[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_VH_tagFirst_nCombos_fy1001[4] = { 1.156794e+08, 2702751, 15812.54, 0 };
   Double_t Graph_from_VH_tagFirst_nCombos_fex1001[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VH_tagFirst_nCombos_fey1001[4] = { 279736.4, 35337.08, 1732.622, 0 };
   TGraphErrors *gre = new TGraphErrors(4,Graph_from_VH_tagFirst_nCombos_fx1001,Graph_from_VH_tagFirst_nCombos_fy1001,Graph_from_VH_tagFirst_nCombos_fex1001,Graph_from_VH_tagFirst_nCombos_fey1001);
   gre->SetName("Graph_from_VH_tagFirst_nCombos");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_nCombos1001 = new TH1F("Graph_Graph_from_VH_tagFirst_nCombos1001","",100,-0.9,3.9);
   Graph_Graph_from_VH_tagFirst_nCombos1001->SetMinimum(127555.1);
   Graph_Graph_from_VH_tagFirst_nCombos1001->SetMaximum(1.275551e+08);
   Graph_Graph_from_VH_tagFirst_nCombos1001->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_nCombos1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_nCombos1001->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_nCombos1001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_nCombos","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   nCombos_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",4,-0.5,3.5);
   data_mc_ratio__2->SetBinContent(1,0.498175);
   data_mc_ratio__2->SetBinContent(2,1.314861);
   data_mc_ratio__2->SetBinContent(3,1.986778);
   data_mc_ratio__2->SetBinError(1,6.562403e-05);
   data_mc_ratio__2->SetBinError(2,0.0006974883);
   data_mc_ratio__2->SetBinError(3,0.01120918);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(301.9683);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("jet combinatorics");
   data_mc_ratio__2->GetXaxis()->SetRange(1,5);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_mc_statistical_error_fy1002[4] = { 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1002[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1002[4] = { 0.002418204, 0.01307449, 0.1095727, 0 };
   gre = new TGraphErrors(4,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,-0.9,3.9);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.8685128);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(1.131487);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,4,1);
   line->Draw();
   bottomPad->Modified();
   nCombos_tagFirst_16->cd();
   nCombos_tagFirst_16->Modified();
   nCombos_tagFirst_16->cd();
   nCombos_tagFirst_16->SetSelected(nCombos_tagFirst_16);
}

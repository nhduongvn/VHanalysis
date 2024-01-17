#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Wed Jan 10 10:25:27 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_18 = new TCanvas("Aplanarity_DHZfirst_18", "Aplanarity_DHZfirst_18",0,0,600,600);
   Aplanarity_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_18->Range(0,0,1,1);
   Aplanarity_DHZfirst_18->SetFillColor(0);
   Aplanarity_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_18->SetBorderMode(0);
   Aplanarity_DHZfirst_18->SetBorderSize(2);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-553.9636,1.052419,553419.6);
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
   st->SetMaximum(498022.2);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(498022.2);
   st_stack_120->SetDirectory(nullptr);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->SetLineWidth(0);
   st_stack_120->GetXaxis()->SetRange(1,50);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.02");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,170390.9);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,20899.24);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2388.447);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,808.8695);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,145.1878);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,40.90339);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,9.893618);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,3.336496);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,7028.915);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,2772.13);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,769.4435);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,516.0846);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,69.69517);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,20.62716);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,9.893618);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,3.336496);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(11278);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1458.231);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,188.449);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,39.64367);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,12.57797);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,3.528949);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,1.164992);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.1565631);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.07022099);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.05419346);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,16.9784);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,6.377662);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,3.213078);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.568576);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.8545871);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.4754307);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.09234232);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.07022099);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.05419346);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(19372);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,15880.6);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,2062.077);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,440.8902);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,123.0348);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,40.14436);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,17.02966);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,7.850569);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,2.17037);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,2.232084);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.482996);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.055524);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.3908722);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.05371266);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1526125);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.05482665);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,37.2222);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,12.82684);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,5.950152);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,3.125184);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.705971);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.10458);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.8074625);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.3902731);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.5871795);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.3294373);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.3268119);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1611807);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.05371266);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.09095212);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.05482665);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(264970);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1222.374);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,134.982);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,26.11081);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,3.336836);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.336249);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.4799386);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.2137005);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,26.74922);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,11.70403);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,5.359092);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,1.083085);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.7116359);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.4799386);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1511572);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(6415);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,570.1533);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,54.87332);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,8.616975);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,2.861696);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,0.06980164);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,34.91479);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,8.076902);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,3.259018);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.690769);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,0.06980164);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(2747);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,3.063741);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(5,0.5264131);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.285637);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(5,0.5264131);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(7);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,22.65431);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,0.7572279);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,3.025012);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.5354478);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(61);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,15.99646);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,1.278412);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.7174276);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.427766);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.6594679);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.5075649);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(51);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,11.46524);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.6919935);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1198758);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.006864825);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.180477);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.04188529);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01745096);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.004085304);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(5071);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,8.84279);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.8688908);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.1682856);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.03117068);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.00983509);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001807769);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.001151127);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0007466074);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.080727);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.02530809);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.01111664);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.004747985);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.002731837);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.00111354);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0008356946);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0007466074);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(13704);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.3903909);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.03032838);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.002421901);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.03602844);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.008814108);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.002421901);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(172);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1355219);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01049085);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.001997375);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0003603593);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(8,0.0003740668);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.006884104);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.001879631);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0008991228);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0003603593);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(8,0.0003740668);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(453);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__239 = new TH1D("VH_DHZfirst_Aplanarity__239","",50,0,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(1,224110);
   VH_DHZfirst_Aplanarity__239->SetBinContent(2,27557);
   VH_DHZfirst_Aplanarity__239->SetBinContent(3,5639);
   VH_DHZfirst_Aplanarity__239->SetBinContent(4,1340);
   VH_DHZfirst_Aplanarity__239->SetBinContent(5,335);
   VH_DHZfirst_Aplanarity__239->SetBinContent(6,117);
   VH_DHZfirst_Aplanarity__239->SetBinContent(7,32);
   VH_DHZfirst_Aplanarity__239->SetBinContent(8,21);
   VH_DHZfirst_Aplanarity__239->SetBinContent(9,8);
   VH_DHZfirst_Aplanarity__239->SetBinContent(10,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(14,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(16,1);
   VH_DHZfirst_Aplanarity__239->SetEntries(259220);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__239->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__239->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__239->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__239->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1239[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1239[50] = { 189584.8, 23343.26, 2904.718, 950.7192, 190.7336, 59.64959, 8.221983, 2.241711, 12.1257, 1.537189, 1.055524, 0.3908722, 0, 3.390209, 0.1526125, 0, 0,
   0.05482665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1239[50] = { 7029.173, 2772.203, 769.4989, 516.1004, 69.7269, 20.66788, 0.8266632, 0.396541, 9.911027, 0.3338651, 0.3268119, 0.1611807, 0, 3.336928, 0.09095212, 0, 0,
   0.05482665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1239,Graph_from_VH_DHZfirst_Aplanarity_fy1239,Graph_from_VH_DHZfirst_Aplanarity_fex1239,Graph_from_VH_DHZfirst_Aplanarity_fey1239);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1239 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1239","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMaximum(216275.4);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__240 = new TH1D("data_mc_ratio__240","",50,0,1);
   data_mc_ratio__240->SetBinContent(1,1.18211);
   data_mc_ratio__240->SetBinContent(2,1.180512);
   data_mc_ratio__240->SetBinContent(3,1.941324);
   data_mc_ratio__240->SetBinContent(4,1.409459);
   data_mc_ratio__240->SetBinContent(5,1.756377);
   data_mc_ratio__240->SetBinContent(6,1.961455);
   data_mc_ratio__240->SetBinContent(7,3.892005);
   data_mc_ratio__240->SetBinContent(8,9.367843);
   data_mc_ratio__240->SetBinContent(9,0.6597557);
   data_mc_ratio__240->SetBinContent(10,1.301076);
   data_mc_ratio__240->SetBinContent(11,1.894793);
   data_mc_ratio__240->SetBinContent(12,5.116762);
   data_mc_ratio__240->SetBinContent(14,0.5899342);
   data_mc_ratio__240->SetBinContent(15,6.552545);
   data_mc_ratio__240->SetBinError(1,0.002497049);
   data_mc_ratio__240->SetBinError(2,0.007111391);
   data_mc_ratio__240->SetBinError(3,0.02585217);
   data_mc_ratio__240->SetBinError(4,0.03850349);
   data_mc_ratio__240->SetBinError(5,0.09596111);
   data_mc_ratio__240->SetBinError(6,0.1813366);
   data_mc_ratio__240->SetBinError(7,0.6880158);
   data_mc_ratio__240->SetBinError(8,2.044231);
   data_mc_ratio__240->SetBinError(9,0.2332589);
   data_mc_ratio__240->SetBinError(10,0.9199998);
   data_mc_ratio__240->SetBinError(11,1.339821);
   data_mc_ratio__240->SetBinError(12,3.618097);
   data_mc_ratio__240->SetBinError(14,0.4171465);
   data_mc_ratio__240->SetBinError(15,6.552545);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(16.92187);
   data_mc_ratio__240->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__240->SetLineColor(ci);
   data_mc_ratio__240->SetLineWidth(2);
   data_mc_ratio__240->SetMarkerStyle(20);
   data_mc_ratio__240->SetMarkerSize(1.2);
   data_mc_ratio__240->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__240->GetXaxis()->SetRange(1,50);
   data_mc_ratio__240->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__240->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__240->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__240->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__240->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__240->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__240->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1240[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1240[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.03707667, 0.1187582, 0.2649134, 0.5428526, 0.3655723, 0.3464882, 0.100543, 0.1768921, 0.817357, 0.2171919, 0.3096205, 0.4123616, 0, 0.9842841, 0.5959679, 0, 0,
   1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->SetSelected(Aplanarity_DHZfirst_18);
}

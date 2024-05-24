#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Thu May 23 12:59:57 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(0,0,1,1);
   Sphericity_DHZfirst_18->SetFillColor(0);
   Sphericity_DHZfirst_18->SetFillStyle(4000);
   Sphericity_DHZfirst_18->SetBorderMode(0);
   Sphericity_DHZfirst_18->SetBorderSize(2);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-292.1895,1.052419,291907.3);
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
   st->SetMaximum(262687.3);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",25,0,1);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(262687.3);
   st_stack_117->SetDirectory(nullptr);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->SetLineWidth(0);
   st_stack_117->GetXaxis()->SetRange(1,25);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.04");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,105210.1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,94427.39);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,46760.51);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,25134.33);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,13433.19);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,5405.713);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,1408.267);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,285.653);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,57.52822);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,66.31242);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,30.55283);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,41.84197);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,20.73732);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,14.29661);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,7533.55);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,6739.801);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,4691.35);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,3498.883);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,2466.646);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,1565.089);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,314.9807);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,153.5181);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,34.99331);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,45.17027);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,17.83201);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,33.67406);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,15.6586);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,14.29661);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(8468);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,1063.56);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,981.1908);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,594.0125);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,334.5293);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,163.6097);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,68.85475);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,20.41937);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,13.48076);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,1.860358);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.160878);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,2.918666);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,1.663542);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,1.111171);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.05099426);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.6509232);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.09156955);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.06089123);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,20.78341);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,19.3683);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,26.05716);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,14.14242);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,8.31879);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,5.217888);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,2.554377);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,2.445302);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.5181823);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.6748424);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,1.511076);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.9066552);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.5403637);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.05099426);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.5498193);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.06478168);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.06089123);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(22786);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,10504.4);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,10227.74);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,5747.624);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,3117.444);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1642.379);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,796.8173);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,366.3216);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,174.1679);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,91.92422);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,50.61908);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,28.63198);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,19.88972);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,13.52228);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,9.132313);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,6.297342);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,4.672516);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,2.031076);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.625862);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,1.042219);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.4891982);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.03093757);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(22,0.1138892);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.09660715);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,44.11426);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,43.36627);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,33.90289);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,24.49788);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,17.88612);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,12.20093);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,8.327038);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,5.223593);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,4.191394);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,2.768637);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,2.116244);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,1.905362);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,1.399859);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,1.221119);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.946028);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.8941357);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.4306349);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.6026193);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.4022442);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.2581056);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.03093757);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(22,0.1138892);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.06881083);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(285831);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,925.8073);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,829.319);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,425.417);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,284.306);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,141.4041);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,72.62405);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,15.76914);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.586648);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,1.934736);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.6885711);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.2697479);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.7289822);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(17,0.1265579);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,30.44495);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,29.53459);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,18.52173);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,17.6676);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,8.763943);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,8.733153);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,2.819819);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,1.075951);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.7779572);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.6012824);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.2697479);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.4358695);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(17,0.1265579);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(8398);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,457.7857);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,398.2882);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,249.5667);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,174.5824);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,58.03421);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,23.70049);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,7.079495);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,6.440833);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.01782611);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,5.426928);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(11,0.4508845);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.3566307);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.04980793);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(17,0.6131666);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,32.29855);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,29.36701);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,36.11004);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,29.06581);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,7.80908);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,3.763363);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.977642);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,4.002338);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.01782611);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,5.175497);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(11,0.4508845);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.260145);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.04980793);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(17,0.6131666);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(3529);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.857115);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,0.7744756);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,1.826902);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,1.286413);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.7744756);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,1.077556);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(9);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,22.49662);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,11.37759);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,8.938077);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,5.999717);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,2.9256);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,2.568273);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.8986731);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,4.499674);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,2.746347);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,2.510544);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,2.22969);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,1.52894);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,1.563658);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.6735365);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(90);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,12.41351);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,7.534765);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,5.599269);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,3.277373);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,5.300031);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,1.602045);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(7,1.380497);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,2.373226);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.651512);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.848396);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,1.295455);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,1.659975);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.683594);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(7,1.001456);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(93);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,6.763414);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,5.704879);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,3.225111);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,2.130313);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,1.465067);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.6803797);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1781119);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.02036963);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.02051212);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.002565502);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(17,0.006306155);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(20,0.009429355);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.3131036);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.1703072);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.1535942);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.09688022);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.08060787);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.05010906);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.029992);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.007950186);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.009309221);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.002565502);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(17,0.006306155);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(20,0.009429355);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(5893);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,2.862799);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,2.692435);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.545169);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.9815505);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.5474634);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.2698575);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.07716363);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.02543667);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.007810448);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.003990965);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0009831643);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.001227602);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.001641383);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0006547701);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(16,0.0002604579);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.03927286);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.03773528);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.02873707);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.02300715);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01706839);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.01207047);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.006410881);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.003603456);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.002081686);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.001475852);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.000667997);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0007134234);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0008255714);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0006547701);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(16,0.0002604579);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(17705);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1946721);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1867191);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06339451);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.07778863);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.05450681);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.02074637);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(7,0.009806846);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.02374584);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.02528068);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.0129654);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.01535863);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.01299185);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.007587175);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(7,0.009806846);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(219);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.0833939);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.07856538);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.03231302);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.02506908);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.01452533);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.00947464);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.002515241);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0003284004);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.0007395573);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.00625789);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.006082481);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.003809716);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.003304265);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.00319925);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001995032);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.001150496);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0003284004);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.000527557);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(611);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__233 = new TH1D("VH_DHZfirst_Sphericity__233","",25,0,1);
   VH_DHZfirst_Sphericity__233->SetBinContent(1,98074);
   VH_DHZfirst_Sphericity__233->SetBinContent(2,88545);
   VH_DHZfirst_Sphericity__233->SetBinContent(3,50234);
   VH_DHZfirst_Sphericity__233->SetBinContent(4,27134);
   VH_DHZfirst_Sphericity__233->SetBinContent(5,13618);
   VH_DHZfirst_Sphericity__233->SetBinContent(6,5723);
   VH_DHZfirst_Sphericity__233->SetBinContent(7,1883);
   VH_DHZfirst_Sphericity__233->SetBinContent(8,632);
   VH_DHZfirst_Sphericity__233->SetBinContent(9,259);
   VH_DHZfirst_Sphericity__233->SetBinContent(10,123);
   VH_DHZfirst_Sphericity__233->SetBinContent(11,77);
   VH_DHZfirst_Sphericity__233->SetBinContent(12,40);
   VH_DHZfirst_Sphericity__233->SetBinContent(13,20);
   VH_DHZfirst_Sphericity__233->SetBinContent(14,16);
   VH_DHZfirst_Sphericity__233->SetBinContent(15,17);
   VH_DHZfirst_Sphericity__233->SetBinContent(16,13);
   VH_DHZfirst_Sphericity__233->SetBinContent(17,7);
   VH_DHZfirst_Sphericity__233->SetBinContent(18,10);
   VH_DHZfirst_Sphericity__233->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__233->SetBinContent(20,2);
   VH_DHZfirst_Sphericity__233->SetBinContent(21,1);
   VH_DHZfirst_Sphericity__233->SetBinError(1,313.1677);
   VH_DHZfirst_Sphericity__233->SetBinError(2,297.5651);
   VH_DHZfirst_Sphericity__233->SetBinError(3,224.1294);
   VH_DHZfirst_Sphericity__233->SetBinError(4,164.724);
   VH_DHZfirst_Sphericity__233->SetBinError(5,116.6962);
   VH_DHZfirst_Sphericity__233->SetBinError(6,75.65051);
   VH_DHZfirst_Sphericity__233->SetBinError(7,43.39355);
   VH_DHZfirst_Sphericity__233->SetBinError(8,25.13961);
   VH_DHZfirst_Sphericity__233->SetBinError(9,16.09348);
   VH_DHZfirst_Sphericity__233->SetBinError(10,11.09054);
   VH_DHZfirst_Sphericity__233->SetBinError(11,8.774964);
   VH_DHZfirst_Sphericity__233->SetBinError(12,6.324555);
   VH_DHZfirst_Sphericity__233->SetBinError(13,4.472136);
   VH_DHZfirst_Sphericity__233->SetBinError(14,4);
   VH_DHZfirst_Sphericity__233->SetBinError(15,4.123106);
   VH_DHZfirst_Sphericity__233->SetBinError(16,3.605551);
   VH_DHZfirst_Sphericity__233->SetBinError(17,2.645751);
   VH_DHZfirst_Sphericity__233->SetBinError(18,3.162278);
   VH_DHZfirst_Sphericity__233->SetBinError(19,1.732051);
   VH_DHZfirst_Sphericity__233->SetBinError(20,1.414214);
   VH_DHZfirst_Sphericity__233->SetBinError(21,1);
   VH_DHZfirst_Sphericity__233->SetEntries(286455);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__233->SetLineColor(ci);
   VH_DHZfirst_Sphericity__233->SetLineWidth(2);
   VH_DHZfirst_Sphericity__233->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__233->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1233[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1233[25] = { 118209.3, 106892.3, 53798.36, 29057.68, 15448.93, 6372.86, 1820.403, 482.3753, 153.2937, 125.2126, 62.82766, 64.48207, 35.42222, 23.48058, 6.297342, 5.3237, 2.868676,
   1.686753, 1.042219, 0.4986276, 0.03093757, 0.1138892, 0.09660715, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1233[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1233[25] = { 7533.84, 6740.097, 4691.722, 3499.164, 2466.754, 1565.175, 315.1222, 153.6823, 35.25583, 45.55899, 18.02826, 33.74392, 15.73041, 14.34876, 0.946028, 1.049657, 0.7626749,
   0.6056879, 0.4022442, 0.2582778, 0.03093757, 0.1138892, 0.06881083, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1233,Graph_from_VH_DHZfirst_Sphericity_fy1233,Graph_from_VH_DHZfirst_Sphericity_fex1233,Graph_from_VH_DHZfirst_Sphericity_fey1233);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1233 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1233","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMinimum(-12574.31);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMaximum(138317.4);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_DHZfirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__234 = new TH1D("data_mc_ratio__234","",25,0,1);
   data_mc_ratio__234->SetBinContent(1,0.829664);
   data_mc_ratio__234->SetBinContent(2,0.8283573);
   data_mc_ratio__234->SetBinContent(3,0.933746);
   data_mc_ratio__234->SetBinContent(4,0.9337978);
   data_mc_ratio__234->SetBinContent(5,0.8814852);
   data_mc_ratio__234->SetBinContent(6,0.898027);
   data_mc_ratio__234->SetBinContent(7,1.034386);
   data_mc_ratio__234->SetBinContent(8,1.310183);
   data_mc_ratio__234->SetBinContent(9,1.689567);
   data_mc_ratio__234->SetBinContent(10,0.9823292);
   data_mc_ratio__234->SetBinContent(11,1.225575);
   data_mc_ratio__234->SetBinContent(12,0.6203275);
   data_mc_ratio__234->SetBinContent(13,0.5646174);
   data_mc_ratio__234->SetBinContent(14,0.6814143);
   data_mc_ratio__234->SetBinContent(15,2.699552);
   data_mc_ratio__234->SetBinContent(16,2.441911);
   data_mc_ratio__234->SetBinContent(17,2.44015);
   data_mc_ratio__234->SetBinContent(18,5.92855);
   data_mc_ratio__234->SetBinContent(19,2.878473);
   data_mc_ratio__234->SetBinContent(20,4.01101);
   data_mc_ratio__234->SetBinContent(21,32.32315);
   data_mc_ratio__234->SetBinError(1,0.002649264);
   data_mc_ratio__234->SetBinError(2,0.002783785);
   data_mc_ratio__234->SetBinError(3,0.004166102);
   data_mc_ratio__234->SetBinError(4,0.005668863);
   data_mc_ratio__234->SetBinError(5,0.007553676);
   data_mc_ratio__234->SetBinError(6,0.01187073);
   data_mc_ratio__234->SetBinError(7,0.02383733);
   data_mc_ratio__234->SetBinError(8,0.05211628);
   data_mc_ratio__234->SetBinError(9,0.1049846);
   data_mc_ratio__234->SetBinError(10,0.08857364);
   data_mc_ratio__234->SetBinError(11,0.1396672);
   data_mc_ratio__234->SetBinError(12,0.09808238);
   data_mc_ratio__234->SetBinError(13,0.1262523);
   data_mc_ratio__234->SetBinError(14,0.1703536);
   data_mc_ratio__234->SetBinError(15,0.6547374);
   data_mc_ratio__234->SetBinError(16,0.6772642);
   data_mc_ratio__234->SetBinError(17,0.9222901);
   data_mc_ratio__234->SetBinError(18,1.874772);
   data_mc_ratio__234->SetBinError(19,1.661887);
   data_mc_ratio__234->SetBinError(20,2.836212);
   data_mc_ratio__234->SetBinError(21,32.32315);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(2.06548);
   data_mc_ratio__234->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__234->SetLineColor(ci);
   data_mc_ratio__234->SetLineWidth(2);
   data_mc_ratio__234->SetMarkerStyle(20);
   data_mc_ratio__234->SetMarkerSize(1.2);
   data_mc_ratio__234->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__234->GetXaxis()->SetRange(1,25);
   data_mc_ratio__234->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__234->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__234->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__234->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__234->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__234->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__234->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1234[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1234[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1234[25] = { 0.06373306, 0.06305505, 0.08720939, 0.1204213, 0.1596715, 0.2456001, 0.1731058, 0.3185949, 0.2299888, 0.3638531, 0.2869479, 0.523307, 0.4440832, 0.6110906, 0.1502266, 0.1971668, 0.265863,
   0.3590851, 0.3859496, 0.5179773, 1, 1, 0.7122748, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->SetSelected(Sphericity_DHZfirst_18);
}

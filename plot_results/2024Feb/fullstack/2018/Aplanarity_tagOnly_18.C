#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Wed Feb 14 12:32:57 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(0,0,1,1);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6937.488,1.052419,6930560);
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
   st->SetMaximum(6236810);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(6236810);
   st_stack_48->SetDirectory(nullptr);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->SetLineWidth(0);
   st_stack_48->GetXaxis()->SetRange(1,50);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.02");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,2232200);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,269305.5);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,65223.61);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21065.37);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,7123.433);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,4446.374);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,1227.126);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,6695.086);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,1131.83);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,331.2447);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,110.3723);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,51.89293);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,927.1359);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,17.01435);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,37.31239);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.7129945);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,20.64687);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,48464.56);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,13412.24);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,6302.986);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,3076.759);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,1065.069);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,1272.665);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,255.507);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,4613.35);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,564.4811);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,152.0683);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,30.45552);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,20.58581);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,884.5612);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,13.0037);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,16.41775);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.7129945);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,14.26985);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(159180);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,29616.23);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,3943.415);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,1021.121);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,380.845);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,152.7567);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,65.79375);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,43.45526);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,28.94587);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,13.31259);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.865436);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,2.833995);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.960282);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.806226);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.426165);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.477252);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4669655);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.6319876);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.1615394);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,117.8828);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,41.38551);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,22.18834);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,12.42074);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,8.629998);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,5.00482);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,7.779489);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,4.323633);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,2.273586);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.020127);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.8970776);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,1.193717);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.6258734);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.669799);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3452312);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.3238618);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.3583729);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.1047663);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(215599);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,511966.4);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,68216.61);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,17801.54);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,6378.27);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,2955.702);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,1480.98);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,847.4151);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,483.5633);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,281.9275);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,195.3951);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,122.5331);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,80.83317);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,45.77723);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,30.9461);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,17.63622);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,9.525866);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,9.007394);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,3.214842);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.865589);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.23404);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,1.005364);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.0817603);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,308.4305);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,111.6387);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,58.45956);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,33.78177);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,25.5415);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,16.26402);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,12.69806);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,9.134307);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,7.018447);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,5.99129);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,4.628497);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,3.820399);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,2.710565);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,3.90819);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,1.851883);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,1.31591);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,2.621197);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.6268532);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.5069327);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1355418);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.5145692);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.0817603);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(5345901);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,20738.22);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,2262.316);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,549.8926);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,182.4191);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,87.3995);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,39.54722);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,31.05094);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,13.00571);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,10.21626);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,7.721363);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,3.675233);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,2.589115);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6869013);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.7726016);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.4490393);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1193093);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.02417201);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(18,1.547913);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(19,0.1515231);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,140.5354);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,51.20328);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,21.00395);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,10.22826);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,7.400585);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,4.661684);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,13.59852);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,2.495021);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,2.272014);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,4.501001);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,1.30404);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,1.518816);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.3512517);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.5076534);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.3341552);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1193093);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.02417201);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(18,1.376797);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(19,0.1515231);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(80176);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,11306.44);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,1170.753);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,350.507);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,123.5642);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,51.20054);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,40.86391);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,14.0202);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,13.19643);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.242982);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,2.00858);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.6345949);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,2.46455);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.1531362);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(16,0.4111188);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(17,0.1470552);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,194.7717);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,61.91852);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,34.72583);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,24.3973);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,12.45457);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,14.3795);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,3.976405);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,6.165617);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.5579345);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.7410302);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3817467);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,1.727319);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.1296673);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(16,0.4111188);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(17,0.1470552);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(38789);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,92.04758);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,8.761533);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,2.691043);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,2.805743);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.5362758);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,9.254829);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,2.576523);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,1.65815);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,2.072426);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.5362758);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,268.0028);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,30.34536);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,6.981815);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,8.929379);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,14.34258);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,6.078306);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,2.215626);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,3.618223);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,216.002);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,9.984737);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,0.8723017);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.224459);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,23.90535);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,4.320245);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,0.8723017);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,1.224459);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(120);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,101.3659);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,8.963912);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,2.118871);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.6287062);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.3058379);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1182825);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05211266);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.07486346);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.007943305);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.03016763);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.03552707);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(14,0.006819449);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(16,0.005930946);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(18,0.002370285);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.8069313);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.2245789);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.1111955);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.06027265);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.03871099);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.02234169);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01405513);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.0239699);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004600748);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.0108452);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.01667777);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(14,0.004926827);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(16,0.004196243);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(18,0.002370285);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(29315);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,55.80999);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,6.241969);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.484967);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.5065327);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.2508296);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.1001731);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.07595998);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.03383993);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.02045822);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01445133);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.007711283);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.005356317);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.002774696);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.002736545);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0008096326);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0005539964);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0007141911);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0005886763);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1744245);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.05751839);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.02811178);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.0167212);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.01186325);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.007300662);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.006528239);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.004334372);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.003357816);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002714374);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.002246384);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001687361);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.00125552);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001230269);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.000588647);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0005539964);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0007141911);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0005886763);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,2.441981);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.188863);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.0494181);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.00789285);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.004784755);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001750385);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.006058982);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(8,0.005370295);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.09931175);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.02477732);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.01575928);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005584141);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.003386026);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001750385);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.004310176);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(8,0.005370295);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,1.23259);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.1278756);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.029631);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007637446);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002376703);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.001024649);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001728292);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.001098614);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0008107704);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(12,0.0007021084);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(14,0.0008758926);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.02539207);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.007918477);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.00399738);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001833637);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0009896559);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0007256441);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0007842077);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0006360448);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0008107704);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(12,0.0004964887);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(14,0.0006544837);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__95 = new TH1D("VH_tagOnly_Aplanarity__95","",50,0,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(0,2);
   VH_tagOnly_Aplanarity__95->SetBinContent(1,2500931);
   VH_tagOnly_Aplanarity__95->SetBinContent(2,325918);
   VH_tagOnly_Aplanarity__95->SetBinContent(3,84364);
   VH_tagOnly_Aplanarity__95->SetBinContent(4,28372);
   VH_tagOnly_Aplanarity__95->SetBinContent(5,11751);
   VH_tagOnly_Aplanarity__95->SetBinContent(6,5807);
   VH_tagOnly_Aplanarity__95->SetBinContent(7,3068);
   VH_tagOnly_Aplanarity__95->SetBinContent(8,1784);
   VH_tagOnly_Aplanarity__95->SetBinContent(9,1063);
   VH_tagOnly_Aplanarity__95->SetBinContent(10,706);
   VH_tagOnly_Aplanarity__95->SetBinContent(11,431);
   VH_tagOnly_Aplanarity__95->SetBinContent(12,284);
   VH_tagOnly_Aplanarity__95->SetBinContent(13,198);
   VH_tagOnly_Aplanarity__95->SetBinContent(14,78);
   VH_tagOnly_Aplanarity__95->SetBinContent(15,66);
   VH_tagOnly_Aplanarity__95->SetBinContent(16,43);
   VH_tagOnly_Aplanarity__95->SetBinContent(17,32);
   VH_tagOnly_Aplanarity__95->SetBinContent(18,12);
   VH_tagOnly_Aplanarity__95->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__95->SetBinContent(20,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__95->SetEntries(2964970);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__95->SetLineColor(ci);
   VH_tagOnly_Aplanarity__95->SetLineWidth(2);
   VH_tagOnly_Aplanarity__95->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__95->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1095[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1095[50] = { 2806565, 344963.2, 84960.9, 28141.77, 10373.86, 6073.781, 2163.738, 7233.913, 1438.559, 541.2807, 240.0925, 140.7461, 975.409, 50.32278, 55.8749, 11.24299, 30.45803,
   7.239845, 2.017826, 0.23404, 1.005953, 0.0817603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1095[50] = { 48466.29, 13413.01, 6303.428, 3077.085, 1065.511, 1272.868, 256.333, 4613.366, 564.5342, 152.2581, 30.84822, 21.09707, 884.5656, 13.6049, 16.52885, 1.590012, 14.51378,
   2.765917, 0.5290941, 0.1355418, 0.5145696, 0.0817603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1095,Graph_from_VH_tagOnly_Aplanarity_fy1095,Graph_from_VH_tagOnly_Aplanarity_fex1095,Graph_from_VH_tagOnly_Aplanarity_fey1095);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1095 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1095","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMaximum(3140534);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_18->cd();
  
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
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",50,0,1);
   data_mc_ratio__96->SetBinContent(1,0.8911005);
   data_mc_ratio__96->SetBinContent(2,0.9447907);
   data_mc_ratio__96->SetBinContent(3,0.9929744);
   data_mc_ratio__96->SetBinContent(4,1.008181);
   data_mc_ratio__96->SetBinContent(5,1.132751);
   data_mc_ratio__96->SetBinContent(6,0.9560767);
   data_mc_ratio__96->SetBinContent(7,1.417917);
   data_mc_ratio__96->SetBinContent(8,0.2466162);
   data_mc_ratio__96->SetBinContent(9,0.7389338);
   data_mc_ratio__96->SetBinContent(10,1.304314);
   data_mc_ratio__96->SetBinContent(11,1.795141);
   data_mc_ratio__96->SetBinContent(12,2.017818);
   data_mc_ratio__96->SetBinContent(13,0.2029918);
   data_mc_ratio__96->SetBinContent(14,1.549994);
   data_mc_ratio__96->SetBinContent(15,1.18121);
   data_mc_ratio__96->SetBinContent(16,3.824604);
   data_mc_ratio__96->SetBinContent(17,1.050626);
   data_mc_ratio__96->SetBinContent(18,1.657494);
   data_mc_ratio__96->SetBinContent(19,4.460245);
   data_mc_ratio__96->SetBinContent(20,4.272773);
   data_mc_ratio__96->SetBinContent(21,0.9940821);
   data_mc_ratio__96->SetBinError(1,0.0005634765);
   data_mc_ratio__96->SetBinError(2,0.001654937);
   data_mc_ratio__96->SetBinError(3,0.003418688);
   data_mc_ratio__96->SetBinError(4,0.005985406);
   data_mc_ratio__96->SetBinError(5,0.01044954);
   data_mc_ratio__96->SetBinError(6,0.01254633);
   data_mc_ratio__96->SetBinError(7,0.025599);
   data_mc_ratio__96->SetBinError(8,0.005838807);
   data_mc_ratio__96->SetBinError(9,0.02266412);
   data_mc_ratio__96->SetBinError(10,0.04908851);
   data_mc_ratio__96->SetBinError(11,0.08646892);
   data_mc_ratio__96->SetBinError(12,0.1197355);
   data_mc_ratio__96->SetBinError(13,0.014426);
   data_mc_ratio__96->SetBinError(14,0.1755022);
   data_mc_ratio__96->SetBinError(15,0.1453969);
   data_mc_ratio__96->SetBinError(16,0.5832466);
   data_mc_ratio__96->SetBinError(17,0.1857262);
   data_mc_ratio__96->SetBinError(18,0.4784773);
   data_mc_ratio__96->SetBinError(19,1.486748);
   data_mc_ratio__96->SetBinError(20,4.272773);
   data_mc_ratio__96->SetBinError(21,0.9940821);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(33.66089);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__96->GetXaxis()->SetRange(1,50);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1096[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1096[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.0172689, 0.03888243, 0.0741921, 0.1093423, 0.1027111, 0.2095677, 0.1184677, 0.6377414, 0.3924303, 0.2812923, 0.1284847, 0.1498946, 0.9068664, 0.2703527, 0.2958188, 0.1414225, 0.4765175,
   0.3820409, 0.2622099, 0.5791392, 0.5115244, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(1.998401e-16);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}

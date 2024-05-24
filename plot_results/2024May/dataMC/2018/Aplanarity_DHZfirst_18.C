#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Thu May 23 12:59:58 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-741.4152,1.052419,740683.8);
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
   st->SetMaximum(666541.3);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(666541.3);
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
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,265324.7);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,22745.93);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2744.357);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,1332.399);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,132.6842);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,6.484484);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(8,9.848215);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,11630.52);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,2984.147);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,557.6105);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,773.7864);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,89.62555);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,6.484484);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(8,9.848215);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(8468);

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
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,2803.455);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,346.3253);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,70.00735);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,22.84241);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,4.822288);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,0.7714834);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,1.431706);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.2467156);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.2168986);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.05524582);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(13,0.05134134);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,40.3207);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,11.67127);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,5.094452);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,3.067995);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,1.189907);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.3300235);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.7058286);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.1890714);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.1563765);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.05524582);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(13,0.05134134);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(22786);

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
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,28014.02);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,3639.161);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,788.92);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,225.7167);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,77.13615);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,33.88832);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,13.90179);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,4.90946);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,3.592016);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,2.998209);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.136095);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.735693);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.6043545);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1089219);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.05716526);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.1275447);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,72.65565);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,26.1982);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,12.10554);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,6.558129);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,3.773789);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,2.661912);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,1.568601);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.8476712);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.8978681);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.6587216);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.369547);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.3871122);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.3828349);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.07884187);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.05716526);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.07544577);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(285831);

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
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,2436.841);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,217.6498);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,38.18852);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,7.433811);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,0.5969102);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.1452474);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1265579);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,48.69593);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,14.64556);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,5.300676);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,1.950316);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.3019395);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.1452474);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1265579);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(8398);

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
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,1246.388);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,109.2251);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,24.6014);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,2.14491);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,0.03410105);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,57.23169);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,28.84171);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,8.172065);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.670181);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,0.03410105);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(3529);

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
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,5.021447);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(3,0.4370453);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.79577);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(3,0.4370453);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(9);

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
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,51.02627);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,4.178273);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,6.43478);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,1.701111);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(90);

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
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,34.42933);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,2.678163);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,3.942091);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,1.462912);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(93);

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
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,18.80357);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,1.21091);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1512041);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.02265971);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.002374624);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(6,0.009429355);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(7,0.006306155);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.4043022);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.07612895);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.02712717);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.009081768);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.002374624);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(6,0.009429355);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(7,0.006306155);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(5893);

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
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,8.113321);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.7401092);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.1269327);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.02966077);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.004375117);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.003095835);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0009495748);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.06598687);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01958802);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.007962962);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.003920852);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001492352);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.001339603);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0006717769);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(17705);

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
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.5541466);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.03532933);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.01815841);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.04111974);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.01090543);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.01094228);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(219);

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
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.227117);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01671441);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.002156144);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0003284004);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0006085905);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.01040556);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.002823195);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0008892385);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0003284004);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0006085905);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(611);

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
   VH_DHZfirst_Aplanarity__239->SetBinContent(1,250094);
   VH_DHZfirst_Aplanarity__239->SetBinContent(2,28830);
   VH_DHZfirst_Aplanarity__239->SetBinContent(3,5751);
   VH_DHZfirst_Aplanarity__239->SetBinContent(4,1275);
   VH_DHZfirst_Aplanarity__239->SetBinContent(5,322);
   VH_DHZfirst_Aplanarity__239->SetBinContent(6,90);
   VH_DHZfirst_Aplanarity__239->SetBinContent(7,30);
   VH_DHZfirst_Aplanarity__239->SetBinContent(8,20);
   VH_DHZfirst_Aplanarity__239->SetBinContent(9,9);
   VH_DHZfirst_Aplanarity__239->SetBinContent(10,4);
   VH_DHZfirst_Aplanarity__239->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(14,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__239->SetBinError(1,500.094);
   VH_DHZfirst_Aplanarity__239->SetBinError(2,169.794);
   VH_DHZfirst_Aplanarity__239->SetBinError(3,75.83535);
   VH_DHZfirst_Aplanarity__239->SetBinError(4,35.70714);
   VH_DHZfirst_Aplanarity__239->SetBinError(5,17.94436);
   VH_DHZfirst_Aplanarity__239->SetBinError(6,9.486833);
   VH_DHZfirst_Aplanarity__239->SetBinError(7,5.477226);
   VH_DHZfirst_Aplanarity__239->SetBinError(8,4.472136);
   VH_DHZfirst_Aplanarity__239->SetBinError(9,3);
   VH_DHZfirst_Aplanarity__239->SetBinError(10,2);
   VH_DHZfirst_Aplanarity__239->SetBinError(12,1.414214);
   VH_DHZfirst_Aplanarity__239->SetBinError(13,1.414214);
   VH_DHZfirst_Aplanarity__239->SetBinError(14,1);
   VH_DHZfirst_Aplanarity__239->SetBinError(15,1);
   VH_DHZfirst_Aplanarity__239->SetEntries(286480);

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
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1239[50] = { 299943.6, 27067.15, 3666.81, 1590.59, 215.2469, 41.33616, 15.46731, 15.00439, 3.808915, 2.998209, 1.191341, 0.735693, 0.6556958, 0, 0.1089219, 0, 0.05716526,
   0.1275447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1239[50] = { 11631.06, 2984.46, 557.8504, 773.8245, 89.71337, 7.018944, 1.72475, 9.886436, 0.911384, 0.6587216, 0.3736536, 0.3871122, 0.3862622, 0, 0.07884187, 0, 0.05716526,
   0.07544577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMinimum(-31157.46);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMaximum(342732.1);
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
   data_mc_ratio__240->SetBinContent(1,0.8338035);
   data_mc_ratio__240->SetBinContent(2,1.065129);
   data_mc_ratio__240->SetBinContent(3,1.568393);
   data_mc_ratio__240->SetBinContent(4,0.8015894);
   data_mc_ratio__240->SetBinContent(5,1.495957);
   data_mc_ratio__240->SetBinContent(6,2.17727);
   data_mc_ratio__240->SetBinContent(7,1.939574);
   data_mc_ratio__240->SetBinContent(8,1.332943);
   data_mc_ratio__240->SetBinContent(9,2.362878);
   data_mc_ratio__240->SetBinContent(10,1.33413);
   data_mc_ratio__240->SetBinContent(12,2.718525);
   data_mc_ratio__240->SetBinContent(13,3.050195);
   data_mc_ratio__240->SetBinContent(15,9.180893);
   data_mc_ratio__240->SetBinError(1,0.001667294);
   data_mc_ratio__240->SetBinError(2,0.006273065);
   data_mc_ratio__240->SetBinError(3,0.02068156);
   data_mc_ratio__240->SetBinError(4,0.02244899);
   data_mc_ratio__240->SetBinError(5,0.0833664);
   data_mc_ratio__240->SetBinError(6,0.2295045);
   data_mc_ratio__240->SetBinError(7,0.3541162);
   data_mc_ratio__240->SetBinError(8,0.2980552);
   data_mc_ratio__240->SetBinError(9,0.7876259);
   data_mc_ratio__240->SetBinError(10,0.667065);
   data_mc_ratio__240->SetBinError(12,1.922288);
   data_mc_ratio__240->SetBinError(13,2.156813);
   data_mc_ratio__240->SetBinError(15,9.180893);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(6.133289);
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
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.03877751, 0.1102614, 0.1521351, 0.4865016, 0.4167929, 0.1698016, 0.1115093, 0.6589029, 0.2392765, 0.2197051, 0.3136412, 0.5261871, 0.5890875, 0, 0.7238387, 0, 1,
   0.591524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(-0.2);
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

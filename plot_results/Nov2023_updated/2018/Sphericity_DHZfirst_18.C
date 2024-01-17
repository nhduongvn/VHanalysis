#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Wed Jan 10 10:25:26 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-222.2938,1.052419,222081.5);
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
   st->SetMaximum(199851.1);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",25,0,1);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(199851.1);
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
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,67962.04);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,63654.03);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,30454.27);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,21021.7);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,8188.965);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,2200.718);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,744.107);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,220.7934);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,35.61762);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,6.48676);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,133.9971);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,7.923051);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,10.24129);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,3.916171);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.2892749);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(16,38.3372);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,3.336496);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,4127.336);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,4501.417);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,3230.159);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,2896.698);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1325.316);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,214.3245);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,130.2759);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,75.98156);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,15.75052);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,6.48676);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,67.72712);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,7.923051);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,9.899725);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,3.916171);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.2892749);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(16,38.3372);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,3.336496);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11278);

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
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,579.8438);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,518.2566);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,296.9987);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,151.9752);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,89.14158);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,39.51257);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,13.52673);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,5.926307);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,3.655261);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,1.866713);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,1.17037);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.4202422);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.5209701);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.3467703);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.3002994);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.05736299);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.2592022);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.04362061);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.05419346);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,11.44021);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,9.781675);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,7.356179);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,5.300817);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,4.267521);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.778723);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.535058);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.025239);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,1.902867);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.6558156);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.5082335);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.1526476);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.3118659);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2877352);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.1353826);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.05736299);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2158234);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.04362061);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.05419346);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(19372);

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
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,5940.361);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,5886.884);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,3263.213);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1745.462);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,906.6419);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,433.252);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,204.2388);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,88.38057);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,42.6996);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,24.32103);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,14.03891);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,8.990445);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,6.807983);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,4.69355);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,3.316813);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,1.965811);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,2.162284);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,0.8813795);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.7394771);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.1194507);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.05482665);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,22.66174);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,22.78097);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,16.68707);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,12.3072);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,8.461884);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,5.837619);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,4.178817);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.618723);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.757031);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.341747);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.9910845);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.7881437);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.8129816);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.5958993);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.4937628);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3619872);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.5191088);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2393463);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.2290688);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.08767557);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.05482665);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(264970);

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
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,481.1404);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,413.6058);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,230.2244);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,141.5074);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,76.80821);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,28.44442);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,12.26359);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,1.889314);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,1.303249);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.825425);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.2917467);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.4347339);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.09464438);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,16.83419);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,17.24784);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,12.05214);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,9.133489);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,6.677582);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,2.804004);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,4.491705);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.5555264);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.5734562);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.4927551);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.1969204);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.2213541);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.09464438);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6415);

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
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,225.714);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,170.4174);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,84.20876);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,87.25634);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,53.17715);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,9.403439);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,2.116721);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,1.635022);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.1353948);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,2.449344);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.01344472);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.04809299);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,20.59956);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,13.32751);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,9.055318);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,15.78394);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,18.73095);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,2.619669);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,0.7151115);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.7401749);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.1353948);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,2.424213);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.01344472);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.04809299);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2747);

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
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.093958);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,0.313222);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.6565612);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(7,0.5264131);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,1.060038);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.313222);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.6565612);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(7,0.5264131);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(7);

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
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,9.30379);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,8.614524);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.078804);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,1.263077);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,0.3805224);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.3941116);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.3767055);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.932829);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.866072);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,1.109559);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.739053);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.3805224);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.3941116);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.3767055);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(61);

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
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,5.603351);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,6.421062);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,2.199198);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,1.208617);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.147515);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,1.049445);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(7,0.3631112);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.451174);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.48529);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,0.9154557);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.704143);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.6645985);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.6059346);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(7,0.3631112);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(51);

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
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,4.117693);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,3.424521);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.883276);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.287401);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.9672295);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.430022);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1238203);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.0320657);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.01289435);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.005055622);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.1121046);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.09748931);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.06966481);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.05634362);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.05443037);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.0332366);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.0181409);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.009339855);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.007182311);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.003594437);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(5071);

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
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,2.985755);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,3.04621);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.731467);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,1.083335);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.6305669);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.2941648);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.0913102);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.03774039);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.01286789);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.004865037);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.002198591);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.001878209);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0009914548);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0007359638);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0005917367);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.04689392);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.04737535);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.03571884);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.02831199);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.0215807);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.01471938);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.008165231);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.005231492);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.002973113);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.001760854);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.001272787);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.001030085);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.000788972);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0007359638);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0005917367);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13704);

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
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1406618);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1053564);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.05748757);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.07092227);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.03788809);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.005500733);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(7,0.003112917);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.002211348);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.02604256);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01635887);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01182172);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.01307522);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.009970812);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003326173);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(7,0.003112917);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.002211348);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(172);

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
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.04727067);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.04591116);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.0224139);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01759641);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.007366409);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.004054618);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.00222902);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.001207747);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0003740668);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.000320559);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.004133565);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.003989694);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002774044);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.002413724);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001591824);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001217518);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0009202768);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0006089871);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0003740668);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.000320559);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(453);

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
   VH_DHZfirst_Sphericity__233->SetBinContent(1,89933);
   VH_DHZfirst_Sphericity__233->SetBinContent(2,79551);
   VH_DHZfirst_Sphericity__233->SetBinContent(3,44765);
   VH_DHZfirst_Sphericity__233->SetBinContent(4,24354);
   VH_DHZfirst_Sphericity__233->SetBinContent(5,12281);
   VH_DHZfirst_Sphericity__233->SetBinContent(6,5208);
   VH_DHZfirst_Sphericity__233->SetBinContent(7,1815);
   VH_DHZfirst_Sphericity__233->SetBinContent(8,632);
   VH_DHZfirst_Sphericity__233->SetBinContent(9,262);
   VH_DHZfirst_Sphericity__233->SetBinContent(10,137);
   VH_DHZfirst_Sphericity__233->SetBinContent(11,79);
   VH_DHZfirst_Sphericity__233->SetBinContent(12,51);
   VH_DHZfirst_Sphericity__233->SetBinContent(13,27);
   VH_DHZfirst_Sphericity__233->SetBinContent(14,29);
   VH_DHZfirst_Sphericity__233->SetBinContent(15,17);
   VH_DHZfirst_Sphericity__233->SetBinContent(16,10);
   VH_DHZfirst_Sphericity__233->SetBinContent(17,7);
   VH_DHZfirst_Sphericity__233->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__233->SetBinContent(19,5);
   VH_DHZfirst_Sphericity__233->SetBinContent(20,5);
   VH_DHZfirst_Sphericity__233->SetEntries(259195);

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
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1233[25] = { 75213.39, 70665.17, 34338.54, 23152.83, 9317.905, 2713.508, 977.7395, 318.6978, 83.43727, 35.95446, 149.5054, 17.7838, 17.66588, 8.957228, 3.955072, 40.36037, 5.757982,
   0.9250001, 0.7936706, 0, 0.1194507, 0, 0.05482665, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1233[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1233[25] = { 4127.501, 4501.539, 3230.246, 2896.786, 1325.499, 214.4576, 130.4334, 76.03922, 15.97292, 7.101271, 67.73656, 7.966705, 9.938395, 3.971685, 0.5900198, 38.33895, 3.383528,
   0.2432888, 0.2353922, 0, 0.08767557, 0, 0.05482665, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1233,Graph_from_VH_DHZfirst_Sphericity_fy1233,Graph_from_VH_DHZfirst_Sphericity_fex1233,Graph_from_VH_DHZfirst_Sphericity_fey1233);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1233 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1233","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMaximum(87274.98);
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
   data_mc_ratio__234->SetBinContent(1,1.195705);
   data_mc_ratio__234->SetBinContent(2,1.125746);
   data_mc_ratio__234->SetBinContent(3,1.303637);
   data_mc_ratio__234->SetBinContent(4,1.05188);
   data_mc_ratio__234->SetBinContent(5,1.318);
   data_mc_ratio__234->SetBinContent(6,1.919287);
   data_mc_ratio__234->SetBinContent(7,1.856323);
   data_mc_ratio__234->SetBinContent(8,1.98307);
   data_mc_ratio__234->SetBinContent(9,3.140084);
   data_mc_ratio__234->SetBinContent(10,3.810376);
   data_mc_ratio__234->SetBinContent(11,0.5284089);
   data_mc_ratio__234->SetBinContent(12,2.867779);
   data_mc_ratio__234->SetBinContent(13,1.52837);
   data_mc_ratio__234->SetBinContent(14,3.237609);
   data_mc_ratio__234->SetBinContent(15,4.298278);
   data_mc_ratio__234->SetBinContent(16,0.2477678);
   data_mc_ratio__234->SetBinContent(17,1.215704);
   data_mc_ratio__234->SetBinContent(18,3.243243);
   data_mc_ratio__234->SetBinContent(19,6.299843);
   data_mc_ratio__234->SetBinError(1,0.003987167);
   data_mc_ratio__234->SetBinError(2,0.003991328);
   data_mc_ratio__234->SetBinError(3,0.006161514);
   data_mc_ratio__234->SetBinError(4,0.00674033);
   data_mc_ratio__234->SetBinError(5,0.0118932);
   data_mc_ratio__234->SetBinError(6,0.02659527);
   data_mc_ratio__234->SetBinError(7,0.04357277);
   data_mc_ratio__234->SetBinError(8,0.07888228);
   data_mc_ratio__234->SetBinError(9,0.193995);
   data_mc_ratio__234->SetBinError(10,0.3255424);
   data_mc_ratio__234->SetBinError(11,0.05945065);
   data_mc_ratio__234->SetBinError(12,0.4015694);
   data_mc_ratio__234->SetBinError(13,0.294135);
   data_mc_ratio__234->SetBinError(14,0.6012089);
   data_mc_ratio__234->SetBinError(15,1.042486);
   data_mc_ratio__234->SetBinError(16,0.07835106);
   data_mc_ratio__234->SetBinError(17,0.4594928);
   data_mc_ratio__234->SetBinError(18,1.872487);
   data_mc_ratio__234->SetBinError(19,2.817375);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(72.49975);
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
   Double_t Graph_from_mc_statistical_error_fey1234[25] = { 0.05487721, 0.06370237, 0.09407057, 0.1251159, 0.1422529, 0.07903334, 0.133403, 0.2385935, 0.1914363, 0.1975074, 0.4530709, 0.4479755, 0.5625758, 0.4434057, 0.1491805, 0.9499157, 0.5876239,
   0.2630148, 0.2965867, 0, 0.7339896, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0);
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

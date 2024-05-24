#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_17/Sphericity_DHZfirst_17
//=========  (Thu May 23 12:59:57 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_17 = new TCanvas("Sphericity_DHZfirst_17", "Sphericity_DHZfirst_17",0,0,600,600);
   Sphericity_DHZfirst_17->SetHighLightColor(2);
   Sphericity_DHZfirst_17->Range(0,0,1,1);
   Sphericity_DHZfirst_17->SetFillColor(0);
   Sphericity_DHZfirst_17->SetFillStyle(4000);
   Sphericity_DHZfirst_17->SetBorderMode(0);
   Sphericity_DHZfirst_17->SetBorderSize(2);
   Sphericity_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-145.9073,1.052419,145771.4);
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
   st->SetMaximum(131179.7);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",25,0,1);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(131179.7);
   st_stack_116->SetDirectory(nullptr);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->SetLineWidth(0);
   st_stack_116->GetXaxis()->SetRange(1,25);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.04");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,53148.22);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,43827.23);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,22335.5);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,12440.88);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,7988.578);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,3370.601);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,911.4177);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,105.9633);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,3.084752);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,317.0601);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,21.71186);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,0.301459);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,5.272156);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,2970.028);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,2734.916);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,2110.451);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1508.166);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1609.916);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,855.0862);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,366.8713);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,48.51332);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,2.00058);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,317.0601);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,21.71186);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,0.301459);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,3.751939);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(9045);

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
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,466.4148);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,430.3239);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,241.2394);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,138.2697);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,62.43259);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,31.34036);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,9.32113);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,4.507606);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,2.380721);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,0.7167697);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.6986429);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.6471582);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.07281838);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.2430458);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.3895219);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.1373122);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.01290839);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,9.149806);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,8.7555);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,6.946656);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,5.33139);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.491105);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.639465);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.380839);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.03047);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.6287179);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.3483394);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.4343044);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.286226);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.05207627);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2036886);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.247021);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.1373122);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.01290839);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(19010);

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
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,4755.344);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,4523.216);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,2551.732);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1359.186);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,719.9394);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,342.3884);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,155.3226);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,71.7485);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,39.01266);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,22.83784);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,12.72624);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,8.808207);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,5.167204);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,3.100085);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,1.889731);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,1.653723);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,1.183629);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,0.8319944);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.2430349);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.1666658);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.02296363);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.024789);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,20.27518);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,19.71292);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,14.90757);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,10.83031);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,7.951194);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,5.472839);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.614674);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.388667);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.770376);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.286683);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.9709059);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.815416);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.5524222);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4283353);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.3136846);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3321357);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.2883071);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2082816);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.08701509);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.1066963);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.02296363);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.024789);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(239565);

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
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,419.2197);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,332.5048);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,207.0615);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,120.1424);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,64.55552);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,30.98104);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,9.445339);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.314315);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,0.3324166);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.06781609);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.4249006);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.006560615);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(15,0.02402017);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(17,0.04826377);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,13.61781);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,14.17272);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,9.762259);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,10.28222);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,5.220847);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,3.297008);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,1.720748);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.8006075);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.1450052);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.06781609);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.2545659);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.006560615);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(15,0.02402017);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(17,0.04826377);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(8198);

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
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,218.9917);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,171.8399);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,107.4691);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,48.14733);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,24.43416);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,13.26059);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,6.805012);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.6016401);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.09449382);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,0.1635924);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.1471504);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.2544107);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(14,0.04509529);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(18,0.07579512);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,17.26303);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,14.16995);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,12.06903);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,4.815249);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,3.723926);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,2.485626);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,3.800197);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.33785);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.09337451);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,0.1635924);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.1173);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.2360287);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(14,0.04434512);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(18,0.07579512);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(3550);

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
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,1.916184);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,1.92043);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.2028034);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.760186);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.8404064);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.2028034);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(15);

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
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,8.251946);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,8.566165);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.612789);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,2.353878);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,2.221117);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,1.411721);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.3440001);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.968364);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.577992);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,1.134682);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.9621069);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.7516288);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.6322535);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.3440001);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(105);

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
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,7.582129);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,4.578171);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,2.665098);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.455421);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.326861);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,0.4693084);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.399344);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.102168);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.22129);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,1.005262);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.5056057);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.2869586);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(83);

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
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,2.998008);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,2.612035);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.489139);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,0.9972885);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.7676546);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.3353447);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1020859);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.01085846);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.003707608);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(10,0.0007255816);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.002312606);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.00307426);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.07629802);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06944992);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.05314361);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04259544);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03809879);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02730134);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01420138);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.004096472);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.002646516);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(10,0.0007255816);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.002312606);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.00307426);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(6479);

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
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.761981);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.657126);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.9510128);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.6041196);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.3369499);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.1660905);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.04749227);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01565563);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.004807134);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002456339);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0006051128);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.000755558);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.00101023);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004029945);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(16,0.0001603053);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.02417146);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02322511);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.01768694);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01416032);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01050516);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.007429071);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.003945736);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002217836);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001281226);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.0009083496);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0004111353);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0004390941);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0005081184);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004029945);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(16,0.0001603053);
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
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1169483);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.07822091);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06493144);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.02718671);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.0298317);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.009704562);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(9,0.001098324);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.01296844);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01066661);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.0100107);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.006557525);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.006668781);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.00352462);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(9,0.001098324);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(261);

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
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.03999813);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03929161);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02005376);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01263888);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.009886883);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.003655116);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001358407);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0009551064);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.0002420247);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.002929193);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.002740622);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002001275);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.001566941);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001362731);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.0008243385);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005641424);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0004034033);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0002420247);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(757);

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
   
   TH1D *VH_DHZfirst_Sphericity__231 = new TH1D("VH_DHZfirst_Sphericity__231","",25,0,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(1,50817);
   VH_DHZfirst_Sphericity__231->SetBinContent(2,43186);
   VH_DHZfirst_Sphericity__231->SetBinContent(3,23728);
   VH_DHZfirst_Sphericity__231->SetBinContent(4,12532);
   VH_DHZfirst_Sphericity__231->SetBinContent(5,6229);
   VH_DHZfirst_Sphericity__231->SetBinContent(6,2538);
   VH_DHZfirst_Sphericity__231->SetBinContent(7,893);
   VH_DHZfirst_Sphericity__231->SetBinContent(8,279);
   VH_DHZfirst_Sphericity__231->SetBinContent(9,98);
   VH_DHZfirst_Sphericity__231->SetBinContent(10,67);
   VH_DHZfirst_Sphericity__231->SetBinContent(11,29);
   VH_DHZfirst_Sphericity__231->SetBinContent(12,20);
   VH_DHZfirst_Sphericity__231->SetBinContent(13,13);
   VH_DHZfirst_Sphericity__231->SetBinContent(14,4);
   VH_DHZfirst_Sphericity__231->SetBinContent(15,15);
   VH_DHZfirst_Sphericity__231->SetBinContent(16,5);
   VH_DHZfirst_Sphericity__231->SetBinContent(17,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(18,2);
   VH_DHZfirst_Sphericity__231->SetBinError(1,225.4263);
   VH_DHZfirst_Sphericity__231->SetBinError(2,207.8124);
   VH_DHZfirst_Sphericity__231->SetBinError(3,154.039);
   VH_DHZfirst_Sphericity__231->SetBinError(4,111.9464);
   VH_DHZfirst_Sphericity__231->SetBinError(5,78.92401);
   VH_DHZfirst_Sphericity__231->SetBinError(6,50.37857);
   VH_DHZfirst_Sphericity__231->SetBinError(7,29.88311);
   VH_DHZfirst_Sphericity__231->SetBinError(8,16.70329);
   VH_DHZfirst_Sphericity__231->SetBinError(9,9.899495);
   VH_DHZfirst_Sphericity__231->SetBinError(10,8.185353);
   VH_DHZfirst_Sphericity__231->SetBinError(11,5.385165);
   VH_DHZfirst_Sphericity__231->SetBinError(12,4.472136);
   VH_DHZfirst_Sphericity__231->SetBinError(13,3.605551);
   VH_DHZfirst_Sphericity__231->SetBinError(14,2);
   VH_DHZfirst_Sphericity__231->SetBinError(15,3.872983);
   VH_DHZfirst_Sphericity__231->SetBinError(16,2.236068);
   VH_DHZfirst_Sphericity__231->SetBinError(17,1);
   VH_DHZfirst_Sphericity__231->SetBinError(18,1.414214);
   VH_DHZfirst_Sphericity__231->SetEntries(140480);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__231->SetLineColor(ci);
   VH_DHZfirst_Sphericity__231->SetLineWidth(2);
   VH_DHZfirst_Sphericity__231->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__231->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1231[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1231[25] = { 59030.85, 49304.57, 25452.01, 14113.07, 8864.632, 3790.968, 1092.807, 185.1628, 44.91466, 340.8495, 13.8527, 31.32169, 5.498517, 3.797647, 7.185907, 2.043405, 1.369205,
   0.9077896, 0.2559433, 0.1666658, 0.02296363, 0, 0.024789, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1231[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1231[25] = { 2970.193, 2735.076, 2110.572, 1508.258, 1609.953, 855.118, 366.9156, 48.5908, 2.749835, 317.0629, 1.093658, 21.72937, 0.6029938, 0.5739105, 3.765106, 0.4139246, 0.3229629,
   0.2216441, 0.08796734, 0.1066963, 0.02296363, 0, 0.024789, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1231,Graph_from_VH_DHZfirst_Sphericity_fy1231,Graph_from_VH_DHZfirst_Sphericity_fex1231,Graph_from_VH_DHZfirst_Sphericity_fey1231);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1231 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1231","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMaximum(68201.15);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",25,0,1);
   data_mc_ratio__232->SetBinContent(1,0.8608549);
   data_mc_ratio__232->SetBinContent(2,0.8759027);
   data_mc_ratio__232->SetBinContent(3,0.9322644);
   data_mc_ratio__232->SetBinContent(4,0.8879709);
   data_mc_ratio__232->SetBinContent(5,0.70268);
   data_mc_ratio__232->SetBinContent(6,0.6694861);
   data_mc_ratio__232->SetBinContent(7,0.8171619);
   data_mc_ratio__232->SetBinContent(8,1.506782);
   data_mc_ratio__232->SetBinContent(9,2.181916);
   data_mc_ratio__232->SetBinContent(10,0.1965677);
   data_mc_ratio__232->SetBinContent(11,2.093455);
   data_mc_ratio__232->SetBinContent(12,0.6385351);
   data_mc_ratio__232->SetBinContent(13,2.364274);
   data_mc_ratio__232->SetBinContent(14,1.053284);
   data_mc_ratio__232->SetBinContent(15,2.087419);
   data_mc_ratio__232->SetBinContent(16,2.446896);
   data_mc_ratio__232->SetBinContent(17,0.7303507);
   data_mc_ratio__232->SetBinContent(18,2.203154);
   data_mc_ratio__232->SetBinError(1,0.003818787);
   data_mc_ratio__232->SetBinError(2,0.004214872);
   data_mc_ratio__232->SetBinError(3,0.006052134);
   data_mc_ratio__232->SetBinError(4,0.007932107);
   data_mc_ratio__232->SetBinError(5,0.008903248);
   data_mc_ratio__232->SetBinError(6,0.01328911);
   data_mc_ratio__232->SetBinError(7,0.02734528);
   data_mc_ratio__232->SetBinError(8,0.09020867);
   data_mc_ratio__232->SetBinError(9,0.2204068);
   data_mc_ratio__232->SetBinError(10,0.02401457);
   data_mc_ratio__232->SetBinError(11,0.3887447);
   data_mc_ratio__232->SetBinError(12,0.1427808);
   data_mc_ratio__232->SetBinError(13,0.6557315);
   data_mc_ratio__232->SetBinError(14,0.5266419);
   data_mc_ratio__232->SetBinError(15,0.5389693);
   data_mc_ratio__232->SetBinError(16,1.094285);
   data_mc_ratio__232->SetBinError(17,0.7303507);
   data_mc_ratio__232->SetBinError(18,1.557865);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(69.26259);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__232->GetXaxis()->SetRange(1,25);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1232[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1232[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1232[25] = { 0.05031595, 0.05547307, 0.08292361, 0.1068695, 0.1816153, 0.2255672, 0.3357553, 0.262422, 0.06122355, 0.9302138, 0.07894908, 0.6937483, 0.1096648, 0.1511226, 0.523957, 0.2025661, 0.2358762,
   0.2441581, 0.3436985, 0.640181, 1, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->SetSelected(Sphericity_DHZfirst_17);
}

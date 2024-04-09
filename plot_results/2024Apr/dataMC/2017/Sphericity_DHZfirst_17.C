#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_17/Sphericity_DHZfirst_17
//=========  (Mon Apr  8 11:54:17 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-164.2906,1.052419,164136.3);
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
   st->SetMaximum(147706.3);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",25,0,1);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(147706.3);
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
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,45831.53);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,61265.64);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,23165.65);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,12602.99);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,8051.807);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,3417.257);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,3796.075);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,376.1338);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,61.05944);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,325.2197);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,8.876456);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,16.96014);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,6.251591);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,1.895897);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.1762375);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,1.934271);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,2547.611);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,23400.54);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,2450.943);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1708.668);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1700.304);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,796.6686);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,3029.105);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,195.0544);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,31.74087);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,322.0946);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,5.328093);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,13.68835);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,5.929514);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,1.895897);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.1762375);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,1.934271);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11684);

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
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,411.2537);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,403.2307);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,223.6228);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,119.1123);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,60.35697);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,30.1415);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,11.79566);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,4.002249);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,1.156581);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.42404);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.6724294);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.4326665);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.1624063);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.06040323);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.07511144);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.05188899);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.2867197);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.007236138);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,9.15351);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,8.944143);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,6.645499);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,4.638322);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.861924);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.594323);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.701757);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,0.8883477);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.2677715);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.7971178);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.2529638);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.2465752);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.1159602);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.0364478);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.04613238);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.03672302);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2347919);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.007236138);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(17495);

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
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,4177.166);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,4337.504);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,2399.827);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1272.519);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,657.9403);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,316.3578);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,146.6591);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,66.66402);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,31.84084);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,17.33789);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,11.06233);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,5.06912);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,4.308997);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,2.860839);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,1.724902);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,1.415154);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,0.7392779);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,0.2683236);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.213829);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.03456278);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.02056251);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,17.86355);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,18.07679);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,13.4774);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,9.836804);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,7.040971);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,4.898838);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.269461);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.213566);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.531305);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.070308);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.8579878);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.5897365);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.525154);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4504031);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.3779813);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.2896017);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.1809252);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.1071392);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.09908374);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.03456278);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.02056251);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(243754);

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
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,315.0915);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,289.3497);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,177.0014);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,110.7425);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,45.13903);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,23.44871);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,7.16459);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.038487);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,1.070585);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.6937148);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.4696458);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.1264897);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.04227686);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(15,0.04828596);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,10.69005);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,12.37794);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,9.67955);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,10.52932);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,3.478561);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,3.418416);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,1.371514);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.6830699);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.6321258);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.4305067);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.3420199);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.0939936);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.04227686);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(14,0.1075587);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(15,0.04828596);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6197);

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
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,160.2084);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,156.4375);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,91.74859);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,48.23508);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,21.46002);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,9.881848);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,2.144026);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.06063698);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.24214);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,0.1147785);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,10.65017);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,14.16035);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,9.207716);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,5.436886);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,3.536495);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,2.108588);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,0.9221803);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.04660726);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.9480967);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,0.08507443);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2883);

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
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.029148);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,1.956421);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.611046);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.4632122);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.2278499);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.2325045);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.8449436);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.8288579);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.433503);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.4632122);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2278499);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.2325045);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(19);

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
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,4.879594);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,5.427737);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.122846);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,1.597762);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.334116);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.6927549);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.232531);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.266957);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.9932184);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.8383032);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.5131713);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.4080144);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(72);

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
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,5.705255);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,4.312375);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,2.78272);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.01494);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,0.8332897);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,0.2957681);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.249725);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.167402);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.371745);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.9381614);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.4225654);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.2957681);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(58);

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
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,2.637202);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,2.398547);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.347775);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,0.8828982);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.6041477);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.3209322);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.08293295);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.01914983);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.0006168053);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.0007524721);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.07197791);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06720751);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.0489208);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04124786);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03407767);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02541585);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01380174);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.00516714);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.0006168053);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.0007524721);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(5676);

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
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.453734);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.458684);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.8228913);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.5194609);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.3043176);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.1442029);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.04432571);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01802405);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.006483337);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002424913);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.001102981);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0009397144);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0004676958);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004745285);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0003741713);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.0231511);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02302737);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.01719867);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01373792);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01053243);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.00730014);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.004015498);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002536603);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001508514);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.0008877857);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0006380286);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0005363299);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0003754588);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004745285);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0003741713);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13681);

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
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.08306489);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.06830305);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.04478864);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.02714184);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02351778);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.006925327);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.0110536);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01040228);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.008133);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.005878046);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.005924318);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003035898);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(199);

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
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.02994787);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03025905);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.01948774);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.009327624);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.006225467);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.001502715);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001180063);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0007141608);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.000205128);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(15,8.92071e-05);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.002550895);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.002597658);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002014062);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.001377885);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001111328);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.0005320088);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005463606);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0003241961);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0001947029);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(15,8.92071e-05);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(559);

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
   VH_DHZfirst_Sphericity__231->SetBinContent(1,43079);
   VH_DHZfirst_Sphericity__231->SetBinContent(2,39950);
   VH_DHZfirst_Sphericity__231->SetBinContent(3,21433);
   VH_DHZfirst_Sphericity__231->SetBinContent(4,11468);
   VH_DHZfirst_Sphericity__231->SetBinContent(5,5651);
   VH_DHZfirst_Sphericity__231->SetBinContent(6,2434);
   VH_DHZfirst_Sphericity__231->SetBinContent(7,908);
   VH_DHZfirst_Sphericity__231->SetBinContent(8,312);
   VH_DHZfirst_Sphericity__231->SetBinContent(9,136);
   VH_DHZfirst_Sphericity__231->SetBinContent(10,68);
   VH_DHZfirst_Sphericity__231->SetBinContent(11,40);
   VH_DHZfirst_Sphericity__231->SetBinContent(12,19);
   VH_DHZfirst_Sphericity__231->SetBinContent(13,10);
   VH_DHZfirst_Sphericity__231->SetBinContent(14,13);
   VH_DHZfirst_Sphericity__231->SetBinContent(15,4);
   VH_DHZfirst_Sphericity__231->SetBinContent(16,2);
   VH_DHZfirst_Sphericity__231->SetBinContent(17,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(20,1);
   VH_DHZfirst_Sphericity__231->SetEntries(125559);

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
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1231[25] = { 50912.07, 66467.82, 26066.6, 14159.11, 8840.037, 3798.781, 3963.967, 448.9371, 96.37669, 345.7927, 21.08196, 22.58936, 10.76649, 4.925172, 2.025001, 1.467043, 2.960268,
   0.2755597, 0.213829, 0.03456278, 0, 0, 0.02056251, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1231[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1231[25] = { 2547.735, 23400.56, 2451.026, 1708.744, 1700.33, 796.6982, 3029.107, 195.0702, 31.79934, 322.0977, 5.413472, 13.70359, 5.954004, 1.951969, 0.4223617, 0.2919207, 1.956851,
   0.1073832, 0.09908374, 0.03456278, 0, 0, 0.02056251, 0, 0 };
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
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMaximum(98855.21);
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
   data_mc_ratio__232->SetBinContent(1,0.8461452);
   data_mc_ratio__232->SetBinContent(2,0.6010427);
   data_mc_ratio__232->SetBinContent(3,0.8222399);
   data_mc_ratio__232->SetBinContent(4,0.809938);
   data_mc_ratio__232->SetBinContent(5,0.6392508);
   data_mc_ratio__232->SetBinContent(6,0.6407318);
   data_mc_ratio__232->SetBinContent(7,0.2290634);
   data_mc_ratio__232->SetBinContent(8,0.6949749);
   data_mc_ratio__232->SetBinContent(9,1.41113);
   data_mc_ratio__232->SetBinContent(10,0.1966496);
   data_mc_ratio__232->SetBinContent(11,1.897357);
   data_mc_ratio__232->SetBinContent(12,0.841104);
   data_mc_ratio__232->SetBinContent(13,0.9288077);
   data_mc_ratio__232->SetBinContent(14,2.639502);
   data_mc_ratio__232->SetBinContent(15,1.975308);
   data_mc_ratio__232->SetBinContent(16,1.363286);
   data_mc_ratio__232->SetBinContent(17,0.3378072);
   data_mc_ratio__232->SetBinContent(18,10.88693);
   data_mc_ratio__232->SetBinContent(19,14.0299);
   data_mc_ratio__232->SetBinContent(20,28.93286);
   data_mc_ratio__232->SetBinError(1,0.004076731);
   data_mc_ratio__232->SetBinError(2,0.003007094);
   data_mc_ratio__232->SetBinError(3,0.005616388);
   data_mc_ratio__232->SetBinError(4,0.007563241);
   data_mc_ratio__232->SetBinError(5,0.008503713);
   data_mc_ratio__232->SetBinError(6,0.01298721);
   data_mc_ratio__232->SetBinError(7,0.007601737);
   data_mc_ratio__232->SetBinError(8,0.0393452);
   data_mc_ratio__232->SetBinError(9,0.1210034);
   data_mc_ratio__232->SetBinError(10,0.02384727);
   data_mc_ratio__232->SetBinError(11,0.2999984);
   data_mc_ratio__232->SetBinError(12,0.1929625);
   data_mc_ratio__232->SetBinError(13,0.2937148);
   data_mc_ratio__232->SetBinError(14,0.7320661);
   data_mc_ratio__232->SetBinError(15,0.987654);
   data_mc_ratio__232->SetBinError(16,0.963989);
   data_mc_ratio__232->SetBinError(17,0.3378072);
   data_mc_ratio__232->SetBinError(18,6.285573);
   data_mc_ratio__232->SetBinError(19,8.100167);
   data_mc_ratio__232->SetBinError(20,28.93286);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(2.711039);
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
   Double_t Graph_from_mc_statistical_error_fey1232[25] = { 0.05004188, 0.3520584, 0.09402938, 0.1206816, 0.1923443, 0.2097247, 0.7641605, 0.4345156, 0.3299485, 0.9314762, 0.2567822, 0.6066393, 0.5530124, 0.3963251, 0.2085736, 0.1989858, 0.6610383,
   0.3896913, 0.4633784, 1, 0, 0, 1, 0, 0 };
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

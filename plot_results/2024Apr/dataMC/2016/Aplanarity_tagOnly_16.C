#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Mon Apr  8 11:54:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(0,0,1,1);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7129.997,1.052419,7122876);
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
   st->SetMaximum(6409876);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(6409876);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1833470);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,266765.4);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,67793.47);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21736.68);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,6200.733);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,3337.58);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,2032.379);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,640.6534);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,943.473);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,131.4153);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,182.6755);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,340.8387);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,102.7851);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,9.910271);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,36.8523);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,12.01046);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,29553.07);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,18669.66);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,4146.862);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2179.352);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,839.7659);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,640.2468);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,462.0095);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,93.83835);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,343.7409);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,39.41097);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,48.26531);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,219.4943);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,37.93564);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,7.557359);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,17.74135);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,8.2926);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(182469);

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
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,20051.64);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,2887.476);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,741.938);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,252.9274);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,93.68894);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,47.20427);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,27.30835);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,13.93428);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,9.903273);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,7.01152);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.86505);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.273058);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.766799);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.9169969);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.5584798);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.3780799);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1128299);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.4999683);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.07149317);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(20,0.3785931);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,52.55605);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,19.6769);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,10.09488);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,5.937256);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.533632);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.655376);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.078686);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.403961);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.233459);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.084581);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.7379965);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.3244461);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.4873692);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3925038);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2703991);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.2216235);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.06623067);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.3567136);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.05078551);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(20,0.308545);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(384560);

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
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,322371.7);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,45830.38);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,11980.84);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,4311.217);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1903.008);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,962.1316);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,518.8324);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,300.7341);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,186.342);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,111.7914);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,72.63195);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,45.93311);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,29.58066);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,18.84223);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,12.14348);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,6.128462);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.967298);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.232835);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.382416);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.1518378);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.3181479);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1179923);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,137.178);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,51.12026);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,26.14381);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,15.70594);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,10.44752);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,7.45657);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,5.477755);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,4.177629);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.298273);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,2.553621);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.064799);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.666164);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.326489);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.063422);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.8598474);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6034288);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.4823443);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3669738);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2837883);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.07594591);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1443713);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.08353036);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(7185382);

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
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,14846.17);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1692.707);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,435.6865);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,139.0131);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,56.46171);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,24.94978);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,15.9264);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,7.615284);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.18257);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,7.692435);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.899957);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,1.573003);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6742787);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.7646806);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1487957);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.3193688);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,76.50447);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,30.19682);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,15.70957);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,8.777084);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,5.07915);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,2.495646);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.480404);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,0.9735975);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.5340458);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,3.098285);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.4799885);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.4518219);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2166474);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.3453395);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.1075292);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.2608187);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(161051);

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
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,8792.209);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,929.7394);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,262.6512);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,86.42077);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,29.21951);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,25.41925);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,21.74606);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,5.213077);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,2.205207);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,2.84899);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.861647);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.228128);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.3996579);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(15,0.1673636);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(20,0.1159399);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,88.79468);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,31.5648);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,20.08166);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,10.97991);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.597815);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,6.569246);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,8.39971);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,1.280045);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.6039837);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,1.503377);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2649394);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.5345362);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.1872653);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(15,0.1673636);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(20,0.08831863);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(111299);

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
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,76.28871);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.704682);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.876927);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.7492838);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,0.6278226);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.1969203);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,3.040422);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,0.9320073);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.4480539);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.3097005);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,0.2875252);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.1392489);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(766);

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
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,202.0399);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,21.4956);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,3.766531);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,2.361355);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.5118775);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.6231593);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(7,0.1027352);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.07837858);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,4.497136);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.451119);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,0.6102436);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.4916462);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2330765);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.2578621);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(7,0.1027352);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.07837858);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(2420);

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
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,144.189);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,16.87199);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,3.563198);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.237765);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(5,0.7960226);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(6,0.6878721);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(8,0.2290902);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,5.527608);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.863418);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,0.8384271);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.5120562);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(5,0.4053771);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(6,0.3518065);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(8,0.2290902);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(834);

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
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,64.80474);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,6.499733);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.484131);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.4614579);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2068053);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1028835);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05971237);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.02954347);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01803221);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.016422);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.004245127);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.005362263);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.002704176);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(15,0.002452767);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(17,0.0009458249);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(20,0.001580253);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.2803865);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.08791219);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04283013);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02382811);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01584898);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01141943);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.008773532);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.005945541);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004719627);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.004874946);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.00212338);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002757974);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.001934946);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(15,0.001758046);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(17,0.0009458249);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(20,0.001580253);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(63595);

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
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,33.44891);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.740604);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.8866901);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3023243);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1497873);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.05517512);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.04423677);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02005617);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01250583);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.007954732);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004586238);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003028877);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.00192391);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001897456);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0005613804);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003841282);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004952035);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0004081745);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1125173);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.0370936);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01811008);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.0107652);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007655701);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004500524);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004125939);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002774421);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002168884);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001677164);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001461725);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001063442);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.000870548);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0008530397);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0004081541);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003841282);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004952035);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0004081745);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(107744);

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
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.564113);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1446119);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.0567808);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.0173493);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008012246);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005226104);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(888);

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
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.7466573);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08078894);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02065006);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007250189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002633383);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01470872);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004812859);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.002429019);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001513212);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008911909);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0004856896);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0004612644);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006179336);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3081);

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
   
   TH1D *VH_tagOnly_Aplanarity__91 = new TH1D("VH_tagOnly_Aplanarity__91","",50,0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(1,2884444);
   VH_tagOnly_Aplanarity__91->SetBinContent(2,402014);
   VH_tagOnly_Aplanarity__91->SetBinContent(3,101946);
   VH_tagOnly_Aplanarity__91->SetBinContent(4,33424);
   VH_tagOnly_Aplanarity__91->SetBinContent(5,12932);
   VH_tagOnly_Aplanarity__91->SetBinContent(6,6171);
   VH_tagOnly_Aplanarity__91->SetBinContent(7,3249);
   VH_tagOnly_Aplanarity__91->SetBinContent(8,1796);
   VH_tagOnly_Aplanarity__91->SetBinContent(9,1084);
   VH_tagOnly_Aplanarity__91->SetBinContent(10,666);
   VH_tagOnly_Aplanarity__91->SetBinContent(11,395);
   VH_tagOnly_Aplanarity__91->SetBinContent(12,259);
   VH_tagOnly_Aplanarity__91->SetBinContent(13,180);
   VH_tagOnly_Aplanarity__91->SetBinContent(14,93);
   VH_tagOnly_Aplanarity__91->SetBinContent(15,79);
   VH_tagOnly_Aplanarity__91->SetBinContent(16,28);
   VH_tagOnly_Aplanarity__91->SetBinContent(17,20);
   VH_tagOnly_Aplanarity__91->SetBinContent(18,10);
   VH_tagOnly_Aplanarity__91->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__91->SetBinContent(20,8);
   VH_tagOnly_Aplanarity__91->SetEntries(3448857);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__91->SetLineColor(ci);
   VH_tagOnly_Aplanarity__91->SetLineWidth(2);
   VH_tagOnly_Aplanarity__91->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__91->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1091[50] = { 2200055, 318162.2, 81226.21, 26531.39, 8285.407, 4398.865, 2616.596, 968.5086, 1145.137, 260.784, 261.9429, 390.8544, 135.2111, 30.43629, 49.87288, 7.254699, 16.09219,
   2.732803, 1.454405, 0.647951, 0.3185561, 0.1179923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1091[50] = { 29553.67, 18669.8, 4147.035, 2179.463, 839.8615, 640.3344, 462.1254, 93.95586, 343.7599, 39.65831, 48.3182, 219.502, 37.96304, 7.649697, 17.76534, 0.8152593, 8.30688,
   0.5117757, 0.2882971, 0.3298037, 0.1443719, 0.08353036, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1091,Graph_from_VH_tagOnly_Aplanarity_fy1091,Graph_from_VH_tagOnly_Aplanarity_fex1091,Graph_from_VH_tagOnly_Aplanarity_fey1091);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1091 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMaximum(2452569);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagOnly_16->cd();
  
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.311078);
   data_mc_ratio__92->SetBinContent(2,1.26355);
   data_mc_ratio__92->SetBinContent(3,1.255087);
   data_mc_ratio__92->SetBinContent(4,1.259791);
   data_mc_ratio__92->SetBinContent(5,1.560817);
   data_mc_ratio__92->SetBinContent(6,1.402862);
   data_mc_ratio__92->SetBinContent(7,1.241689);
   data_mc_ratio__92->SetBinContent(8,1.854398);
   data_mc_ratio__92->SetBinContent(9,0.9466117);
   data_mc_ratio__92->SetBinContent(10,2.553837);
   data_mc_ratio__92->SetBinContent(11,1.507962);
   data_mc_ratio__92->SetBinContent(12,0.6626508);
   data_mc_ratio__92->SetBinContent(13,1.331251);
   data_mc_ratio__92->SetBinContent(14,3.055563);
   data_mc_ratio__92->SetBinContent(15,1.584027);
   data_mc_ratio__92->SetBinContent(16,3.859567);
   data_mc_ratio__92->SetBinContent(17,1.242839);
   data_mc_ratio__92->SetBinContent(18,3.659246);
   data_mc_ratio__92->SetBinContent(19,6.188099);
   data_mc_ratio__92->SetBinContent(20,12.34661);
   data_mc_ratio__92->SetBinError(1,0.0007719649);
   data_mc_ratio__92->SetBinError(2,0.001992838);
   data_mc_ratio__92->SetBinError(3,0.003930872);
   data_mc_ratio__92->SetBinError(4,0.006890793);
   data_mc_ratio__92->SetBinError(5,0.01372521);
   data_mc_ratio__92->SetBinError(6,0.01785818);
   data_mc_ratio__92->SetBinError(7,0.02178402);
   data_mc_ratio__92->SetBinError(8,0.04375721);
   data_mc_ratio__92->SetBinError(9,0.02875128);
   data_mc_ratio__92->SetBinError(10,0.09895919);
   data_mc_ratio__92->SetBinError(11,0.07587382);
   data_mc_ratio__92->SetBinError(12,0.04117512);
   data_mc_ratio__92->SetBinError(13,0.09922561);
   data_mc_ratio__92->SetBinError(14,0.3168471);
   data_mc_ratio__92->SetBinError(15,0.178217);
   data_mc_ratio__92->SetBinError(16,0.7293897);
   data_mc_ratio__92->SetBinError(17,0.2779073);
   data_mc_ratio__92->SetBinError(18,1.157155);
   data_mc_ratio__92->SetBinError(19,2.0627);
   data_mc_ratio__92->SetBinError(20,4.365187);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(36.2794);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01343315, 0.05868011, 0.05105538, 0.08214657, 0.1013664, 0.1455681, 0.1766132, 0.09701087, 0.300191, 0.1520734, 0.1844608, 0.5615952, 0.2807686, 0.2513347, 0.3562125, 0.1123767, 0.5162058,
   0.1872713, 0.1982234, 0.5089948, 0.4532072, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1504834);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849517);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}

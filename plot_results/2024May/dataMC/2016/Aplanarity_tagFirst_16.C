#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_16/Aplanarity_tagFirst_16
//=========  (Thu May 23 13:00:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_16 = new TCanvas("Aplanarity_tagFirst_16", "Aplanarity_tagFirst_16",0,0,600,600);
   Aplanarity_tagFirst_16->SetHighLightColor(2);
   Aplanarity_tagFirst_16->Range(0,0,1,1);
   Aplanarity_tagFirst_16->SetFillColor(0);
   Aplanarity_tagFirst_16->SetFillStyle(4000);
   Aplanarity_tagFirst_16->SetBorderMode(0);
   Aplanarity_tagFirst_16->SetBorderSize(2);
   Aplanarity_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7717.949,1.052419,7710240);
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
   st->SetMaximum(6938444);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(0.01);
   st_stack_190->SetMaximum(6938444);
   st_stack_190->SetDirectory(nullptr);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->SetLineWidth(0);
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetLabelSize(0.05);
   st_stack_190->GetYaxis()->SetTitleSize(0.057);
   st_stack_190->GetYaxis()->SetTitleOffset(1.2);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1880317);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,272469.1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,68033.44);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,22244.19);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,6392.637);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,3389.481);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2127.881);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,652.9228);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,1008.572);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,130.4403);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,151.7716);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,349.4768);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,106.9383);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,20.96808);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,38.4539);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,13.62232);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,28767.65);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,17787.44);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,4184.91);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2220.667);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,879.0457);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,643.7993);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,489.6477);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,94.3879);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,365.0409);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,39.1976);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,42.91245);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,232.6812);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,37.66465);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,13.02655);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,18.0459);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,9.441003);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(184957);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,20656.31);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2974.295);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,768.843);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,260.2894);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,97.95045);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,50.37636);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,28.33126);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,14.08162);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,10.2769);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,7.355322);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.89097);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,1.550046);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.914061);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,0.997239);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.9766154);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.3739054);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.1106258);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.4991102);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.0701326);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.3759491);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,53.34912);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,19.97941);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.26819);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,5.999681);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.625577);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.793538);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.097521);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.401901);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.252526);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.122564);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.7366734);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.3975639);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.492443);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.397236);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.4469969);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.2202026);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.06493686);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.3561938);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.04981902);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(20,0.3071843);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(401408);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,334293.3);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,47540.66);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,12468.65);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,4505.066);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1980.783);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1007.448);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,547.5853);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,318.7676);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,197.0441);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,115.9304);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,77.16098);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,47.82452);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,30.77579);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,19.95052);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,13.02759);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.199086);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,4.137826);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,2.537693);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.452018);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.2722517);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.4443023);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1345586);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,147.5269);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,54.95841);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,28.14573);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.94036);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,11.24344);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,8.056126);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.944699);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.543881);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.576837);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.730522);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.249866);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.782995);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.436677);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.155508);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.9478375);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6336194);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.5253915);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.4100822);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.3080063);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1214808);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1849885);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.09525813);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(6851129);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,15538.32);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1779.166);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,460.5569);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,147.6601);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,58.56509);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,26.61651);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,16.50016);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,8.661201);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.373931);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,8.077334);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.109385);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.712567);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.6730252);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.7635971);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1484544);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.3193688);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,77.79424);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,30.83271);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,15.97579);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,8.997933);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,5.097577);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,2.526253);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.493713);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.038277);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.5516468);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,3.106046);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.4961649);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.4626165);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.2162553);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.3451599);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.1072434);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.2608187);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(170056);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,8994.779);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,953.7413);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,273.522);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,88.40968);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,30.2819);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,25.96099);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,22.44935);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,5.355267);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.288635);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,2.952279);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.8900856);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,1.242777);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.4085634);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.1683859);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(20,0.1187145);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,89.14277);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,31.7095);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,20.67229);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,11.00869);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.635264);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,6.581163);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,8.407449);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.286744);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,0.6135286);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,1.506261);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2705747);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.539585);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.1913917);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.1683859);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(20,0.09043222);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(115312);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,77.63144);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.605058);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.109508);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.7492838);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.6278226);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.1080637);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.1969203);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,3.074493);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,0.9266675);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.4778257);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3097005);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,0.2875252);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.1080637);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.1392489);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,206.942);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,21.8494);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,3.827209);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,2.479462);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.6631192);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.6044059);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.2051277);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.07601985);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,4.481769);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,1.438246);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,0.6047531);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.4952579);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.2549358);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.250102);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(7,0.145106);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.07601985);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,149.2867);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,18.47092);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.906129);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,1.237765);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(5,1.257059);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.6878721);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.2290902);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,5.624402);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.979813);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,0.9058488);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.5120562);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(5,0.5262113);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.3518065);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(8,0.2290902);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,69.83616);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,7.129883);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.686627);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.5172587);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2293748);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1121032);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.07195896);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.03019436);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02500013);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.0153631);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.0039714);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.006347509);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.005560822);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.002294612);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.0008848379);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.001478358);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.282652);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.0895397);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.04436376);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.02467747);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.01617695);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01157111);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.009424614);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.005755077);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005423238);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.004560608);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.001986464);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002903222);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002807808);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.001644687);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(17,0.0008848379);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(20,0.001478358);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(73002);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.04476);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.153891);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.004502);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3476144);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1686299);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.0705841);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05078388);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02423331);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01344426);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.00851777);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005550015);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003259924);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002066907);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.002042008);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004175243);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0004966983);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003398691);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0007934507);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003974464);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003611448);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1118346);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03695449);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01820628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01088353);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.007634039);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.004848399);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004197017);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002891582);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002154765);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001628865);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001504998);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001027386);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008522083);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008375849);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004175243);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0003611268);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003398691);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005641041);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003974464);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003611448);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(134198);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.609437);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1469892);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.05766827);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.0175112);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.008012246);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.005226104);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001736123);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.7680011);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.08340784);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02025888);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.007182694);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.002943678);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01493051);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004885422);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002398345);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001498507);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.0009436653);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0004856896);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0004612644);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006179336);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(17,0.0002685819);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__379 = new TH1D("VH_tagFirst_Aplanarity__379","",50,0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(0,1);
   VH_tagFirst_Aplanarity__379->SetBinContent(1,3122300);
   VH_tagFirst_Aplanarity__379->SetBinContent(2,435791);
   VH_tagFirst_Aplanarity__379->SetBinContent(3,110801);
   VH_tagFirst_Aplanarity__379->SetBinContent(4,36577);
   VH_tagFirst_Aplanarity__379->SetBinContent(5,14225);
   VH_tagFirst_Aplanarity__379->SetBinContent(6,6736);
   VH_tagFirst_Aplanarity__379->SetBinContent(7,3624);
   VH_tagFirst_Aplanarity__379->SetBinContent(8,2002);
   VH_tagFirst_Aplanarity__379->SetBinContent(9,1212);
   VH_tagFirst_Aplanarity__379->SetBinContent(10,736);
   VH_tagFirst_Aplanarity__379->SetBinContent(11,436);
   VH_tagFirst_Aplanarity__379->SetBinContent(12,291);
   VH_tagFirst_Aplanarity__379->SetBinContent(13,199);
   VH_tagFirst_Aplanarity__379->SetBinContent(14,110);
   VH_tagFirst_Aplanarity__379->SetBinContent(15,85);
   VH_tagFirst_Aplanarity__379->SetBinContent(16,36);
   VH_tagFirst_Aplanarity__379->SetBinContent(17,20);
   VH_tagFirst_Aplanarity__379->SetBinContent(18,11);
   VH_tagFirst_Aplanarity__379->SetBinContent(19,10);
   VH_tagFirst_Aplanarity__379->SetBinContent(20,8);
   VH_tagFirst_Aplanarity__379->SetBinError(0,1);
   VH_tagFirst_Aplanarity__379->SetBinError(1,1767.003);
   VH_tagFirst_Aplanarity__379->SetBinError(2,660.1447);
   VH_tagFirst_Aplanarity__379->SetBinError(3,332.8678);
   VH_tagFirst_Aplanarity__379->SetBinError(4,191.2511);
   VH_tagFirst_Aplanarity__379->SetBinError(5,119.2686);
   VH_tagFirst_Aplanarity__379->SetBinError(6,82.07314);
   VH_tagFirst_Aplanarity__379->SetBinError(7,60.19967);
   VH_tagFirst_Aplanarity__379->SetBinError(8,44.74371);
   VH_tagFirst_Aplanarity__379->SetBinError(9,34.81379);
   VH_tagFirst_Aplanarity__379->SetBinError(10,27.12932);
   VH_tagFirst_Aplanarity__379->SetBinError(11,20.88061);
   VH_tagFirst_Aplanarity__379->SetBinError(12,17.05872);
   VH_tagFirst_Aplanarity__379->SetBinError(13,14.10674);
   VH_tagFirst_Aplanarity__379->SetBinError(14,10.48809);
   VH_tagFirst_Aplanarity__379->SetBinError(15,9.219544);
   VH_tagFirst_Aplanarity__379->SetBinError(16,6);
   VH_tagFirst_Aplanarity__379->SetBinError(17,4.472136);
   VH_tagFirst_Aplanarity__379->SetBinError(18,3.316625);
   VH_tagFirst_Aplanarity__379->SetBinError(19,3.162278);
   VH_tagFirst_Aplanarity__379->SetBinError(20,2.828427);
   VH_tagFirst_Aplanarity__379->SetEntries(3735260);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__379->SetLineColor(ci);
   VH_tagFirst_Aplanarity__379->SetLineWidth(2);
   VH_tagFirst_Aplanarity__379->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__379->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__379->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__379->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1379[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1379[50] = { 2260343, 325776.4, 82017.6, 27250.97, 8563.165, 4501.469, 2743.272, 1000.149, 1221.595, 264.7795, 235.8326, 401.8163, 140.7174, 42.6817, 52.77766, 7.321083, 17.87226,
   3.036803, 1.522944, 0.7687911, 0.4446634, 0.1345586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1379[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1379[50] = { 28768.32, 17787.6, 4185.099, 2220.786, 879.1477, 643.8945, 489.7627, 94.52237, 365.0615, 39.4599, 42.98142, 232.6894, 37.69637, 13.08828, 18.0774, 0.8374767, 9.455834,
   0.5431771, 0.3120098, 0.342491, 0.1849888, 0.09525813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1379,Graph_from_VH_tagFirst_Aplanarity_fy1379,Graph_from_VH_tagFirst_Aplanarity_fex1379,Graph_from_VH_tagFirst_Aplanarity_fey1379);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1379 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1379","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetMaximum(2518022);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1379->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1379);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__380 = new TH1D("data_mc_ratio__380","",50,0,1);
   data_mc_ratio__380->SetBinContent(1,1.381339);
   data_mc_ratio__380->SetBinContent(2,1.3377);
   data_mc_ratio__380->SetBinContent(3,1.350942);
   data_mc_ratio__380->SetBinContent(4,1.342227);
   data_mc_ratio__380->SetBinContent(5,1.661185);
   data_mc_ratio__380->SetBinContent(6,1.4964);
   data_mc_ratio__380->SetBinContent(7,1.32105);
   data_mc_ratio__380->SetBinContent(8,2.001701);
   data_mc_ratio__380->SetBinContent(9,0.9921457);
   data_mc_ratio__380->SetBinContent(10,2.779671);
   data_mc_ratio__380->SetBinContent(11,1.848769);
   data_mc_ratio__380->SetBinContent(12,0.7242115);
   data_mc_ratio__380->SetBinContent(13,1.414182);
   data_mc_ratio__380->SetBinContent(14,2.577217);
   data_mc_ratio__380->SetBinContent(15,1.61053);
   data_mc_ratio__380->SetBinContent(16,4.917305);
   data_mc_ratio__380->SetBinContent(17,1.119053);
   data_mc_ratio__380->SetBinContent(18,3.62223);
   data_mc_ratio__380->SetBinContent(19,6.56623);
   data_mc_ratio__380->SetBinContent(20,10.40595);
   data_mc_ratio__380->SetBinError(1,0.0007817412);
   data_mc_ratio__380->SetBinError(2,0.002026374);
   data_mc_ratio__380->SetBinError(3,0.004058493);
   data_mc_ratio__380->SetBinError(4,0.007018141);
   data_mc_ratio__380->SetBinError(5,0.0139281);
   data_mc_ratio__380->SetBinError(6,0.01823252);
   data_mc_ratio__380->SetBinError(7,0.02194448);
   data_mc_ratio__380->SetBinError(8,0.04473703);
   data_mc_ratio__380->SetBinError(9,0.02849864);
   data_mc_ratio__380->SetBinError(10,0.1024601);
   data_mc_ratio__380->SetBinError(11,0.08853999);
   data_mc_ratio__380->SetBinError(12,0.04245403);
   data_mc_ratio__380->SetBinError(13,0.1002487);
   data_mc_ratio__380->SetBinError(14,0.245728);
   data_mc_ratio__380->SetBinError(15,0.1746865);
   data_mc_ratio__380->SetBinError(16,0.8195508);
   data_mc_ratio__380->SetBinError(17,0.2502278);
   data_mc_ratio__380->SetBinError(18,1.092143);
   data_mc_ratio__380->SetBinError(19,2.076424);
   data_mc_ratio__380->SetBinError(20,3.679058);
   data_mc_ratio__380->SetMinimum(0.4);
   data_mc_ratio__380->SetMaximum(1.6);
   data_mc_ratio__380->SetEntries(55.25929);
   data_mc_ratio__380->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__380->SetLineColor(ci);
   data_mc_ratio__380->SetLineWidth(2);
   data_mc_ratio__380->SetMarkerStyle(20);
   data_mc_ratio__380->SetMarkerSize(1.2);
   data_mc_ratio__380->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__380->GetXaxis()->SetRange(1,50);
   data_mc_ratio__380->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__380->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__380->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__380->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__380->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__380->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__380->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1380[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1380[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1380[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1380[50] = { 0.01272741, 0.05460063, 0.05102684, 0.08149382, 0.1026662, 0.143041, 0.1785323, 0.09450825, 0.2988401, 0.1490293, 0.1822539, 0.5790941, 0.267887, 0.3066485, 0.34252, 0.1143925, 0.5290788,
   0.1788648, 0.2048728, 0.445493, 0.4160199, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1380,Graph_from_mc_statistical_error_fy1380,Graph_from_mc_statistical_error_fex1380,Graph_from_mc_statistical_error_fey1380);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1380 = new TH1F("Graph_Graph_from_mc_statistical_error1380","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1380->SetMinimum(0.1504834);
   Graph_Graph_from_mc_statistical_error1380->SetMaximum(1.849517);
   Graph_Graph_from_mc_statistical_error1380->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1380->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1380->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1380);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->Modified();
   Aplanarity_tagFirst_16->cd();
   Aplanarity_tagFirst_16->SetSelected(Aplanarity_tagFirst_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Wed Feb 14 12:32:57 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_17 = new TCanvas("Aplanarity_tagOnly_17", "Aplanarity_tagOnly_17",0,0,600,600);
   Aplanarity_tagOnly_17->SetHighLightColor(2);
   Aplanarity_tagOnly_17->Range(0,0,1,1);
   Aplanarity_tagOnly_17->SetFillColor(0);
   Aplanarity_tagOnly_17->SetFillStyle(4000);
   Aplanarity_tagOnly_17->SetBorderMode(0);
   Aplanarity_tagOnly_17->SetBorderSize(2);
   Aplanarity_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3670.897,1.052419,3667236);
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
   st->SetMaximum(3300145);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(3300145);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,50);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.02");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1223807);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,142430.1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,34235.16);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,13575.77);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,7853.164);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,1900.002);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,679.4071);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,658.7935);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,552.8338);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,343.7382);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,199.2474);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,50.65351);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,26.30715);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,30.79676);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,22.96484);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4388301);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,12.70763);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(18,42.48835);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,47246.25);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,5315.183);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,2399.388);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,1797.709);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,3045.38);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,389.7529);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,98.59233);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,164.8923);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,205.0483);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,229.1337);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,58.46757);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,18.75383);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,10.6146);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,21.84388);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,10.10471);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4388301);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,8.782733);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(18,30.12259);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(164660);

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
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,13540.53);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,1895.033);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,497.4456);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,160.1802);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,70.36954);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,33.7916);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,21.0428);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,10.47823);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,5.366173);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.711594);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.493786);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.745139);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.485089);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.220594);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.3704);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.1573193);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.2262408);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.5303666);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.178385);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,55.47818);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,20.72899);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,10.66877);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,6.037283);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.804051);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.717184);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.517358);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.2061);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,0.9983517);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.043059);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,1.058364);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.8976399);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.9954033);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.5105927);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2624959);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.08141977);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.2150272);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.4210059);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.178385);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(202973);

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
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(0,0.05893004);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,232259.2);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,31718.53);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,8264.163);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,3025.329);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1347.143);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,695.8659);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,389.8889);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,232.4153);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,142.8958);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,93.90219);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,60.04237);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,37.56059);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,26.75677);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,15.8711);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,10.38705);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.312781);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.364243);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,1.410725);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,0.6896915);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.6506012);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.1862062);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.2562511);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(0,0.05893004);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,138.7985);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,50.71599);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,25.99002);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,15.82732);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,10.60162);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,7.622598);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,5.638522);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,4.566837);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.557212);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,2.881518);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.201041);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.771857);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.577441);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.140938);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.9618992);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6168);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.540851);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3050957);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2006629);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1866216);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.09555204);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.1823332);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(4621165);

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
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,9683.969);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1055.688);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,278.7025);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,107.1384);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,38.35651);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,16.64446);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,9.936088);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,5.749378);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.900064);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,2.806392);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.206135);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.4877802);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.2994622);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.4719848);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1256136);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.1095954);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,63.64372);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,23.71276);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,15.02468);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,9.702132);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,3.227175);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,1.755361);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.768221);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,2.112053);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.8914495);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,0.6653081);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.8265337);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.2332376);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.1454672);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.2100241);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.08952342);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.07779615);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(87888);

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
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,5413.508);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,584.807);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,137.7086);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,57.36463);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,20.85021);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,14.11075);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,5.687276);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,2.572748);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.451913);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,0.6228843);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.7019756);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,0.5742513);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.1055197);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.07943725);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,83.06735);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,31.72165);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,14.61474);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,8.824874);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.731585);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,5.095901);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,1.694475);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,0.6974798);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.4365338);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.3148862);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2479431);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.3472719);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.09144932);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.07943725);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(41102);

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
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,49.12791);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,6.622979);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.678995);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.4299916);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.2611829);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(8,0.1686304);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,4.248057);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,1.618144);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.8050669);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.2501648);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.2611829);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(8,0.1686304);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(198);

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
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,126.6353);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,13.81624);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,2.753447);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,1.357695);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.2061255);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,6.437766);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.985612);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,1.04625);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.5565141);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2061255);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.6151703);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1216993);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(11,0.5424682);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(598);

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
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,100.6837);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,10.20436);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,4.077401);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.7375593);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,6.01084);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.779815);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,1.340036);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.4480842);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(445);

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
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,48.37412);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,4.563819);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.059172);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.333879);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.1655061);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.05796823);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05089286);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.01224488);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01468712);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01783036);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.002246908);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.004749928);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.003274319);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(19,0.005490325);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.316012);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.09662607);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04817004);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02702475);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01888186);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01090959);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01149715);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.004236214);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005100606);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.009567786);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001277327);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002546967);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002473239);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(19,0.003540414);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(35311);

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
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,34.34964);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.841775);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.91396);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3117581);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1543793);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06165404);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.04675146);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02082762);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01259152);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008894427);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004746101);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003296678);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001707756);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001684274);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0004983084);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003409708);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004395666);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003623154);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1073539);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03540112);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01730209);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01029148);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007301528);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004493373);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004017966);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002667697);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002066651);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001670629);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001382593);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001038528);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0007727406);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007571994);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003622974);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003409708);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004395666);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003623154);
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
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.25726);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1165547);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.02706904);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01161365);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.005016942);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001290917);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.0001481517);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.04423617);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01368821);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.006903648);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.003841252);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.0025094);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001290917);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.0001481517);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(9,0.001064883);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(11,0.0009156332);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(1088);

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
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.6231425);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.0734652);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.01566838);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.005254937);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.00250862);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0002566427);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006762056);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001198057);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0001482523);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(11,0.0008430725);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01139402);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004002337);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.001843806);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001136168);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.000690103);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0001870381);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0003392712);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006203505);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0001482523);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(11,0.0004308263);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(4044);

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
   
   TH1D *VH_tagOnly_Aplanarity__93 = new TH1D("VH_tagOnly_Aplanarity__93","",50,0,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(1,1049859);
   VH_tagOnly_Aplanarity__93->SetBinContent(2,138499);
   VH_tagOnly_Aplanarity__93->SetBinContent(3,35601);
   VH_tagOnly_Aplanarity__93->SetBinContent(4,12095);
   VH_tagOnly_Aplanarity__93->SetBinContent(5,4960);
   VH_tagOnly_Aplanarity__93->SetBinContent(6,2385);
   VH_tagOnly_Aplanarity__93->SetBinContent(7,1314);
   VH_tagOnly_Aplanarity__93->SetBinContent(8,746);
   VH_tagOnly_Aplanarity__93->SetBinContent(9,440);
   VH_tagOnly_Aplanarity__93->SetBinContent(10,279);
   VH_tagOnly_Aplanarity__93->SetBinContent(11,190);
   VH_tagOnly_Aplanarity__93->SetBinContent(12,105);
   VH_tagOnly_Aplanarity__93->SetBinContent(13,70);
   VH_tagOnly_Aplanarity__93->SetBinContent(14,44);
   VH_tagOnly_Aplanarity__93->SetBinContent(15,34);
   VH_tagOnly_Aplanarity__93->SetBinContent(16,17);
   VH_tagOnly_Aplanarity__93->SetBinContent(17,7);
   VH_tagOnly_Aplanarity__93->SetBinContent(18,10);
   VH_tagOnly_Aplanarity__93->SetBinContent(19,1);
   VH_tagOnly_Aplanarity__93->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__93->SetEntries(1246706);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__93->SetLineColor(ci);
   VH_tagOnly_Aplanarity__93->SetLineWidth(2);
   VH_tagOnly_Aplanarity__93->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__93->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1093[50] = { 1485065, 177723.4, 43423.7, 16928.97, 9330.417, 2661.635, 1106.061, 910.3338, 706.4762, 445.8082, 266.2429, 92.02931, 54.95897, 48.44156, 33.8479, 6.029085, 16.40805,
   44.42944, 0.8740063, 0.6506012, 0.1865685, 0.2562511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1093[50] = { 47246.6, 5315.614, 2399.645, 1797.837, 3045.405, 389.8747, 98.81586, 164.9751, 205.084, 229.1554, 58.52744, 18.86336, 10.77861, 21.88076, 10.15418, 0.7706887, 8.802341,
   30.12708, 0.2685135, 0.1866216, 0.09555272, 0.1823332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1093,Graph_from_VH_tagOnly_Aplanarity_fy1093,Graph_from_VH_tagOnly_Aplanarity_fex1093,Graph_from_VH_tagOnly_Aplanarity_fey1093);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1093 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetMaximum(1685543);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagOnly_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",50,0,1);
   data_mc_ratio__94->SetBinContent(1,0.7069446);
   data_mc_ratio__94->SetBinContent(2,0.7792954);
   data_mc_ratio__94->SetBinContent(3,0.8198518);
   data_mc_ratio__94->SetBinContent(4,0.7144559);
   data_mc_ratio__94->SetBinContent(5,0.5315947);
   data_mc_ratio__94->SetBinContent(6,0.8960657);
   data_mc_ratio__94->SetBinContent(7,1.188);
   data_mc_ratio__94->SetBinContent(8,0.8194796);
   data_mc_ratio__94->SetBinContent(9,0.6228094);
   data_mc_ratio__94->SetBinContent(10,0.6258297);
   data_mc_ratio__94->SetBinContent(11,0.7136341);
   data_mc_ratio__94->SetBinContent(12,1.140941);
   data_mc_ratio__94->SetBinContent(13,1.273677);
   data_mc_ratio__94->SetBinContent(14,0.908311);
   data_mc_ratio__94->SetBinContent(15,1.004494);
   data_mc_ratio__94->SetBinContent(16,2.819665);
   data_mc_ratio__94->SetBinContent(17,0.4266199);
   data_mc_ratio__94->SetBinContent(18,0.225076);
   data_mc_ratio__94->SetBinContent(19,1.144156);
   data_mc_ratio__94->SetBinContent(21,5.359961);
   data_mc_ratio__94->SetBinError(1,0.0006899536);
   data_mc_ratio__94->SetBinError(2,0.00209401);
   data_mc_ratio__94->SetBinError(3,0.004345145);
   data_mc_ratio__94->SetBinError(4,0.006496396);
   data_mc_ratio__94->SetBinError(5,0.007548137);
   data_mc_ratio__94->SetBinError(6,0.01834829);
   data_mc_ratio__94->SetBinError(7,0.03277319);
   data_mc_ratio__94->SetBinError(8,0.03000328);
   data_mc_ratio__94->SetBinError(9,0.02969127);
   data_mc_ratio__94->SetBinError(10,0.03746744);
   data_mc_ratio__94->SetBinError(11,0.05177246);
   data_mc_ratio__94->SetBinError(12,0.1113444);
   data_mc_ratio__94->SetBinError(13,0.1522336);
   data_mc_ratio__94->SetBinError(14,0.136933);
   data_mc_ratio__94->SetBinError(15,0.1722692);
   data_mc_ratio__94->SetBinError(16,0.6838692);
   data_mc_ratio__94->SetBinError(17,0.1612472);
   data_mc_ratio__94->SetBinError(18,0.07117528);
   data_mc_ratio__94->SetBinError(19,1.144156);
   data_mc_ratio__94->SetBinError(21,5.359961);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(13.19628);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__94->GetXaxis()->SetRange(1,50);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1094[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1094[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.03181449, 0.02990949, 0.05526117, 0.1061988, 0.3263953, 0.1464794, 0.08934037, 0.1812248, 0.2902915, 0.5140224, 0.2198272, 0.2049712, 0.196121, 0.4516941, 0.2999944, 0.1278285, 0.5364649,
   0.6780881, 0.3072215, 0.2868448, 0.5121589, 0.7115409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1461509);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.853849);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->SetSelected(Aplanarity_tagOnly_17);
}

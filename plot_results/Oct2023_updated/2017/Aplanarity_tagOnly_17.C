#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Tue Nov 14 11:17:06 2023) by ROOT version 6.28/04
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
   topPad->Range(-0.1532254,-3598.132,1.052419,3594544);
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
   st->SetMaximum(3234730);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",50,0,1);
   st_stack_16->SetMinimum(0.01);
   st_stack_16->SetMaximum(3234730);
   st_stack_16->SetDirectory(nullptr);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->SetLineWidth(0);
   st_stack_16->GetXaxis()->SetRange(1,50);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/0.02");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_1 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(1,1201026);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(2,139990.9);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(3,34481.23);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(4,12189.71);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(5,7323.519);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(6,1860.978);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(7,814.8962);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(8,817.0984);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(9,508.7622);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(10,310.5252);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(11,188.5094);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(12,50.75499);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(13,34.1626);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(14,30.0343);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(15,23.74922);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4366711);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(17,13.37653);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(18,39.84728);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(1,42904.54);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(2,4929.701);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(3,2399.508);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(4,1536.673);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(5,2921.975);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(6,340.4031);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(7,175.9474);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(8,245.8801);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(9,175.1634);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(10,193.6604);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(11,55.06148);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(12,18.54736);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(13,13.08073);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(14,20.83273);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(15,10.50126);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4366711);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(17,9.265131);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(18,28.25017);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetEntries(163047);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_2 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(1,12465.13);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(2,1747.554);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(3,459.6319);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(4,146.5207);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(5,65.55001);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(6,33.5953);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(7,20.50089);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(8,10.10593);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(9,5.195645);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.047877);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.451463);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(12,2.736354);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.387267);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.187054);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.3338442);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.1644942);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1927066);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.5239459);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.1881313);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(1,52.67564);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(2,19.64194);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(3,10.05466);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(4,5.663603);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(5,3.636652);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(6,2.649782);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(7,2.348842);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(8,1.224285);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(9,0.9584309);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(10,0.9342641);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(11,1.079791);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(12,0.8686195);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(13,0.8561802);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(14,0.4895751);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2232797);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(16,0.08518351);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(17,0.1810474);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(18,0.409696);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(19,0.1881313);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetEntries(205609);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_3 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(0,0.05727542);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(1,226957.7);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(2,31108.46);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(3,8122.686);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(4,2973.582);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(5,1326.364);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(6,687.0597);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(7,384.1911);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(8,228.0297);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(9,140.6435);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(10,93.2834);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(11,59.1125);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(12,37.35742);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(13,25.82731);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(14,15.59485);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(15,10.04127);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.264739);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.364426);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(18,1.475607);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(19,0.6660876);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.6294066);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.1795633);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.2498912);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(0,0.05727542);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(1,135.9044);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(2,49.65946);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(3,25.46555);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(4,15.50266);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(5,10.38502);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(6,7.478544);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(7,5.529801);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(8,4.468571);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(9,3.478756);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(10,2.827334);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(11,2.143672);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(12,1.750431);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(13,1.531547);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(14,1.11006);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(15,0.9296184);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6034396);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(17,0.5346018);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3061182);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(19,0.1938182);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1806426);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(21,0.09217814);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(22,0.1778413);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetEntries(4721398);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_4 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(1,9488.834);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(2,1040.739);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(3,272.441);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(4,104.6184);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(5,37.64105);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(6,16.33069);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(7,9.750263);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(8,5.585015);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.828846);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(10,2.751699);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.164719);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.4781471);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.2940526);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.4630411);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1230565);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1176033);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.1076442);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(1,61.7956);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(2,23.45477);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(3,14.48469);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(4,9.368954);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(5,3.167119);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(6,1.721327);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(7,1.735587);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(8,2.021782);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(9,0.8754314);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(10,0.6524635);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(11,0.8107339);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(12,0.2286885);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(13,0.1428012);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(14,0.2060709);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(15,0.08771516);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1176033);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(17,0.07643651);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetEntries(87893);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_5 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(1,5329.765);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(2,559.7683);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(3,137.1702);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(4,54.9326);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(5,20.37521);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(6,13.77621);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(7,5.555742);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(8,2.516087);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.501929);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(10,0.5681653);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.6470153);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(12,0.5244937);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.09614665);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.07117788);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(1,76.45248);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(2,27.01166);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(3,13.6989);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(4,7.433171);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(5,3.62127);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(6,4.922522);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(7,1.62924);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(8,0.6735406);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(9,0.4317286);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(10,0.28692);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2281579);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(12,0.3178119);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(13,0.08222476);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(14,0.07117788);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetEntries(43246);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_6 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(1,48.20294);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(2,6.486384);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.64808);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.4213333);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.2561601);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(8,0.1649531);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(1,4.167937);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(2,1.582713);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(3,0.7900068);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(4,0.2450765);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(6,0.2561601);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(8,0.1649531);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_7 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(1,124.1642);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(2,13.54857);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(3,2.700383);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(4,1.33274);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.2021616);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.8215487);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1190454);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(11,0.5328043);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(1,6.312319);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(2,1.947838);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(3,1.027195);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(4,0.5464705);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2021616);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(6,0.6029555);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1190454);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(11,0.5328043);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_8 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(1,102.1499);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(2,9.949318);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(3,4.964076);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.7380704);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(1,8.364075);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(2,2.784133);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(3,2.231851);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(4,0.7380704);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetEntries(217);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_9 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(1,49.39616);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(2,4.711065);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.103015);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.3484035);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.1727587);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.0603836);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.05317757);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.01279187);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01535156);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01879774);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.002355861);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.004946492);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.00340171);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(19,0.005728616);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(1,0.3297257);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(2,0.1008328);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(3,0.05024277);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02819265);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01971814);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01135229);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01202511);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(8,0.004427384);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005333844);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(10,0.01014866);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001339265);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002651858);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002567186);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(19,0.003694075);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_10 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(1,34.67708);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.887253);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.9238787);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3140092);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1556987);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06238433);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.04701855);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02099462);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01262686);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008966018);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004748674);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.00330773);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001708675);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001693481);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0005002384);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003392932);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004436421);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003818004);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1082967);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03580903);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01748531);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01036206);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007358851);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004546593);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(7,0.00403716);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(8,0.00268641);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002072315);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001682666);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001382598);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001041991);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0007732533);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007616273);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003642562);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003392932);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004436421);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003818004);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_11 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.280632);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1217408);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.02827026);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01213412);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.005223072);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001348459);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.0001543491);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(9,0.001114702);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(11,0.0009539353);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(1,0.04620733);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01429439);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(3,0.007206621);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(4,0.004014101);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(5,0.002612554);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001348459);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(7,0.0001543491);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(9,0.001114702);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(11,0.0009539353);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_12 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.6111071);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.07202614);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.01536828);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.005156887);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.00246132);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0002504027);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006642754);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001172287);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0001447421);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(11,0.0008266978);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01117467);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(2,0.003924165);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(3,0.001808834);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001114932);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0006771493);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0001825255);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(7,0.000333296);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006070677);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0001447421);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(11,0.0004223847);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagOnly_Aplanarity__31 = new TH1D("VbbHcc_tagOnly_Aplanarity__31","",50,0,1);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(1,920726);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(2,120696);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(3,30941);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(4,10570);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(5,4294);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(6,2113);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(7,1145);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(8,662);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(9,378);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(10,244);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(11,172);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(12,91);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(13,56);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(14,35);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(15,29);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(16,13);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(17,6);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(18,10);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(19,1);
   VbbHcc_tagOnly_Aplanarity__31->SetBinContent(21,1);
   VbbHcc_tagOnly_Aplanarity__31->SetEntries(1092232);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity__31->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity__31->SetLineWidth(2);
   VbbHcc_tagOnly_Aplanarity__31->SetMarkerStyle(20);
   VbbHcc_tagOnly_Aplanarity__31->SetMarkerSize(1.2);
   VbbHcc_tagOnly_Aplanarity__31->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity__31->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__31->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__31->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__31->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__31->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__31->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__31->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__31->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__31->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fx1031[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fy1031[50] = { 1455628, 174486.2, 43484.54, 15472.53, 8773.987, 2612.942, 1234.995, 1063.654, 659.9612, 411.2043, 254.4267, 91.85966, 61.77248, 47.35212, 34.24738, 5.984008, 17.04165,
   41.84683, 0.8603912, 0.6294066, 0.1799451, 0.2498912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fex1031[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fey1031[50] = { 42904.9, 4930.121, 2399.749, 1536.808, 2921.999, 340.5362, 176.066, 245.9331, 175.2033, 193.6846, 55.12278, 18.65412, 13.19892, 20.86917, 10.54505, 0.7588859, 9.282622,
   28.2548, 0.2701347, 0.1806426, 0.09217893, 0.1778413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagOnly_Aplanarity_fx1031,Graph_from_VbbHcc_tagOnly_Aplanarity_fy1031,Graph_from_VbbHcc_tagOnly_Aplanarity_fex1031,Graph_from_VbbHcc_tagOnly_Aplanarity_fey1031);
   gre->SetName("Graph_from_VbbHcc_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031 = new TH1F("Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->SetMaximum(1648386);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",50,0,1);
   data_mc_ratio__32->SetBinContent(1,0.6325282);
   data_mc_ratio__32->SetBinContent(2,0.6917222);
   data_mc_ratio__32->SetBinContent(3,0.7115402);
   data_mc_ratio__32->SetBinContent(4,0.6831461);
   data_mc_ratio__32->SetBinContent(5,0.4894012);
   data_mc_ratio__32->SetBinContent(6,0.8086671);
   data_mc_ratio__32->SetBinContent(7,0.9271292);
   data_mc_ratio__32->SetBinContent(8,0.6223828);
   data_mc_ratio__32->SetBinContent(9,0.572761);
   data_mc_ratio__32->SetBinContent(10,0.5933791);
   data_mc_ratio__32->SetBinContent(11,0.6760296);
   data_mc_ratio__32->SetBinContent(12,0.9906416);
   data_mc_ratio__32->SetBinContent(13,0.9065525);
   data_mc_ratio__32->SetBinContent(14,0.7391433);
   data_mc_ratio__32->SetBinContent(15,0.84678);
   data_mc_ratio__32->SetBinContent(16,2.172457);
   data_mc_ratio__32->SetBinContent(17,0.3520786);
   data_mc_ratio__32->SetBinContent(18,0.2389667);
   data_mc_ratio__32->SetBinContent(19,1.162262);
   data_mc_ratio__32->SetBinContent(21,5.557251);
   data_mc_ratio__32->SetBinError(1,0.0006591962);
   data_mc_ratio__32->SetBinError(2,0.001991064);
   data_mc_ratio__32->SetBinError(3,0.004045128);
   data_mc_ratio__32->SetBinError(4,0.006644711);
   data_mc_ratio__32->SetBinError(5,0.007468511);
   data_mc_ratio__32->SetBinError(6,0.01759219);
   data_mc_ratio__32->SetBinError(7,0.02739918);
   data_mc_ratio__32->SetBinError(8,0.02418959);
   data_mc_ratio__32->SetBinError(9,0.02945965);
   data_mc_ratio__32->SetBinError(10,0.0379872);
   data_mc_ratio__32->SetBinError(11,0.05154677);
   data_mc_ratio__32->SetBinError(12,0.1038475);
   data_mc_ratio__32->SetBinError(13,0.1211432);
   data_mc_ratio__32->SetBinError(14,0.124938);
   data_mc_ratio__32->SetBinError(15,0.1572431);
   data_mc_ratio__32->SetBinError(16,0.6025312);
   data_mc_ratio__32->SetBinError(17,0.1437355);
   data_mc_ratio__32->SetBinError(18,0.07556791);
   data_mc_ratio__32->SetBinError(19,1.162262);
   data_mc_ratio__32->SetBinError(21,5.557251);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(9.996156);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__32->GetXaxis()->SetRange(1,50);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1032[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1032[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1032[50] = { 0.02947517, 0.02825507, 0.05518625, 0.09932494, 0.3330298, 0.1303267, 0.1425641, 0.2312153, 0.2654752, 0.4710179, 0.2166548, 0.203072, 0.2136698, 0.4407229, 0.3079083, 0.126819, 0.544702,
   0.6751957, 0.3139673, 0.2870047, 0.5122615, 0.711675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.14599);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(1.85401);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->Modified();
   Aplanarity_tagOnly_17->cd();
   Aplanarity_tagOnly_17->SetSelected(Aplanarity_tagOnly_17);
}

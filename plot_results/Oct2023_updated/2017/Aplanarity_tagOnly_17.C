#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_17/Aplanarity_tagOnly_17
//=========  (Fri Oct 20 15:09:06 2023) by ROOT version 6.28/04
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
   topPad->Range(-0.1532254,-4066.037,1.052419,4061981);
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
   st->SetMaximum(3655376);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(3655376);
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
   
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_1 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(1,1357209);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(2,158195.5);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(3,38965.2);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(4,13774.87);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(5,8275.875);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(6,2102.981);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(7,920.8659);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(8,923.3546);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(9,574.922);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(10,350.9062);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(11,213.0233);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(12,57.35521);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(13,38.60513);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(14,33.93999);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(15,26.83759);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4934561);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(17,15.11603);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(18,45.02905);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(1,48483.88);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(2,5570.763);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(3,2711.542);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(4,1736.503);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(5,3301.951);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(6,384.6695);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(7,198.8277);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(8,277.8546);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(9,197.9418);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(10,218.8441);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(11,62.22172);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(12,20.95927);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(13,14.78176);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(14,23.54183);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(15,11.86685);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4934561);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(17,10.46998);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(18,31.92385);
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
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(1,14086.1);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(2,1974.808);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(3,519.4028);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(4,165.5743);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(5,74.07418);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(6,37.96405);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(7,23.16684);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(8,11.42011);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(9,5.871291);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.574267);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.900295);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(12,3.092192);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.567668);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.34142);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.3772576);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.1858852);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.2177663);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.5920802);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.2125961);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(1,59.52563);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(2,22.19619);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(3,11.36217);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(4,6.400103);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(5,4.109565);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(6,2.994362);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(7,2.654288);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(8,1.383492);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(9,1.083066);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(10,1.055757);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(11,1.220207);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(12,0.9815755);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(13,0.9675186);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(14,0.5532399);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2523151);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(16,0.09626084);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(17,0.2045909);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(18,0.4629732);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(19,0.2125961);
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
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(0,0.06472356);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(1,256471.4);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(2,35153.83);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(3,9178.967);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(4,3360.269);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(5,1498.846);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(6,776.4055);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(7,434.1516);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(8,257.6828);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(9,158.9329);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(10,105.414);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(11,66.79954);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(12,42.21541);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(13,29.18591);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(14,17.62282);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(15,11.34704);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.94937);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.801939);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(18,1.667496);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(19,0.7527062);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.7112552);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.2029138);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.2823873);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(0,0.06472356);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(1,153.5775);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(2,56.11722);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(3,28.77712);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(4,17.51864);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(5,11.7355);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(6,8.45106);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(7,6.248901);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(8,5.049668);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(9,3.931136);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(10,3.195003);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(11,2.422436);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(12,1.978059);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(13,1.73071);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(14,1.254413);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(15,1.050507);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6819113);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(17,0.6041218);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(18,0.345926);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2190225);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(20,0.2041336);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1041651);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(22,0.200968);
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
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(1,10722.77);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(2,1176.077);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(3,307.8694);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(4,118.223);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(5,42.53593);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(6,18.45435);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(7,11.0182);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(8,6.311295);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(9,4.326752);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(10,3.109532);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(11,2.44622);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.5403257);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.3322915);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.5232554);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1390589);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1328966);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.1216424);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(1,69.83155);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(2,26.50484);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(3,16.36829);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(4,10.5873);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(5,3.578974);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(6,1.945169);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(7,1.961284);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(8,2.284696);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(9,0.9892732);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(10,0.7373104);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(11,0.9161624);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(12,0.2584273);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(13,0.1613712);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(14,0.2328685);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(15,0.09912171);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1328966);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(17,0.08637637);
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
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(1,6022.852);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(2,632.561);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(3,155.0079);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(4,62.07608);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(5,23.02482);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(6,15.56768);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(7,6.278215);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(8,2.843281);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.697241);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(10,0.64205);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.7311537);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(12,0.5926993);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.1086496);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.08043391);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(1,86.39442);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(2,30.52428);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(3,15.48032);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(4,8.399787);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(5,4.092183);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(6,5.562651);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(7,1.841108);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(8,0.7611284);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(9,0.487871);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(10,0.3242313);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2578278);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(12,0.3591404);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(13,0.09291733);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(14,0.08043391);
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
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(1,54.47129);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.329879);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.862397);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.4761238);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.2894714);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(8,0.1864037);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(1,4.709939);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(2,1.78853);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(3,0.89274);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(4,0.2769465);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(6,0.2894714);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(8,0.1864037);
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
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(1,140.3106);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(2,15.31043);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(3,3.051544);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(4,1.506051);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.2284508);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.9283835);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.1345261);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(11,0.6020906);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(1,7.133178);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(2,2.201136);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(3,1.160772);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(4,0.6175339);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2284508);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(6,0.6813643);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(8,0.1345261);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(11,0.6020906);
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
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(1,115.4335);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(2,11.24314);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(3,5.609608);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.8340496);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(1,9.451746);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(2,3.146184);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(3,2.522083);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(4,0.8340496);
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
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(1,55.81968);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(2,5.323695);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.246452);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.3937102);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.1952244);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.06823593);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.06009283);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.01445533);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01734789);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.02124221);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.002662219);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.005589738);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.003844072);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(19,0.00647357);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(1,0.3726035);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(2,0.1139452);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(3,0.05677638);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(4,0.03185884);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(5,0.0222823);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01282855);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01358886);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(8,0.005003125);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(9,0.006027462);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(10,0.0114684);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001513424);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002996708);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002901024);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(19,0.004174455);
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
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(1,39.18651);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(2,4.392754);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.044021);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3548432);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1759458);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.07049684);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.05313288);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02372477);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01426887);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01013197);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.005366196);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.00373787);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001930873);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001913702);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0005652898);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003834152);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0005013337);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0004314501);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1223797);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(2,0.04046566);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01975911);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01170956);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(5,0.008315802);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(6,0.005137836);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004562156);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(8,0.003035752);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002341801);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001901481);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001562392);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001177492);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0008738078);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0008606699);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0004116244);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003834152);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0005013337);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0004314501);
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
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.447166);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.137572);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.03194655);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01371205);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.005902285);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001523814);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.0001744208);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(9,0.001259659);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(11,0.001077986);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(1,0.05221617);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01615324);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008143776);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(4,0.004536098);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(5,0.002952293);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001523814);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(7,0.0001744208);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(9,0.001259659);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(11,0.001077986);
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
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.6905759);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08139248);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.01736679);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.005827493);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002781392);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0002829653);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0007506584);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001324733);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0001635645);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(11,0.0009342023);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01262784);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004434467);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(3,0.002044056);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001259919);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0007652064);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0002062613);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0003766381);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006860113);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0001635645);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(11,0.000477312);
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
   
   TH1D *VbbHcc_tagOnly_Aplanarity__93 = new TH1D("VbbHcc_tagOnly_Aplanarity__93","",50,0,1);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(1,920726);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(2,120696);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(3,30941);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(4,10570);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(5,4294);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(6,2113);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(7,1145);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(8,662);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(9,378);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(10,244);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(11,172);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(12,91);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(13,56);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(14,35);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(15,29);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(16,13);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(17,6);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(18,10);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(19,1);
   VbbHcc_tagOnly_Aplanarity__93->SetBinContent(21,1);
   VbbHcc_tagOnly_Aplanarity__93->SetEntries(1092232);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity__93->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity__93->SetLineWidth(2);
   VbbHcc_tagOnly_Aplanarity__93->SetMarkerStyle(20);
   VbbHcc_tagOnly_Aplanarity__93->SetMarkerSize(1.2);
   VbbHcc_tagOnly_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fy1093[50] = { 1644919, 197176.6, 49139.31, 17484.59, 9914.964, 2952.731, 1395.595, 1201.973, 745.7831, 464.6776, 287.5126, 103.8052, 69.80543, 53.50983, 38.70094, 6.762173, 19.25776,
   47.28863, 0.9722772, 0.7112552, 0.2033453, 0.2823873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fey1093[50] = { 48484.29, 5571.238, 2711.814, 1736.656, 3301.979, 384.8198, 198.9618, 277.9144, 197.9869, 218.8715, 62.291, 21.07992, 14.91531, 23.58301, 11.91634, 0.857572, 10.48974,
   31.92908, 0.3052632, 0.2041336, 0.104166, 0.200968, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagOnly_Aplanarity_fx1093,Graph_from_VbbHcc_tagOnly_Aplanarity_fy1093,Graph_from_VbbHcc_tagOnly_Aplanarity_fex1093,Graph_from_VbbHcc_tagOnly_Aplanarity_fey1093);
   gre->SetName("Graph_from_VbbHcc_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093 = new TH1F("Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->SetMaximum(1862744);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1093);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
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
   data_mc_ratio__94->SetBinContent(1,0.5597393);
   data_mc_ratio__94->SetBinContent(2,0.6121214);
   data_mc_ratio__94->SetBinContent(3,0.6296589);
   data_mc_ratio__94->SetBinContent(4,0.6045322);
   data_mc_ratio__94->SetBinContent(5,0.4330828);
   data_mc_ratio__94->SetBinContent(6,0.7156088);
   data_mc_ratio__94->SetBinContent(7,0.8204387);
   data_mc_ratio__94->SetBinContent(8,0.5507613);
   data_mc_ratio__94->SetBinContent(9,0.5068498);
   data_mc_ratio__94->SetBinContent(10,0.5250953);
   data_mc_ratio__94->SetBinContent(11,0.5982346);
   data_mc_ratio__94->SetBinContent(12,0.8766423);
   data_mc_ratio__94->SetBinContent(13,0.8022299);
   data_mc_ratio__94->SetBinContent(14,0.6540854);
   data_mc_ratio__94->SetBinContent(15,0.7493357);
   data_mc_ratio__94->SetBinContent(16,1.922459);
   data_mc_ratio__94->SetBinContent(17,0.3115627);
   data_mc_ratio__94->SetBinContent(18,0.2114673);
   data_mc_ratio__94->SetBinContent(19,1.028513);
   data_mc_ratio__94->SetBinContent(21,4.917744);
   data_mc_ratio__94->SetBinError(1,0.0005833384);
   data_mc_ratio__94->SetBinError(2,0.00176194);
   data_mc_ratio__94->SetBinError(3,0.00357963);
   data_mc_ratio__94->SetBinError(4,0.005880063);
   data_mc_ratio__94->SetBinError(5,0.006609063);
   data_mc_ratio__94->SetBinError(6,0.01556775);
   data_mc_ratio__94->SetBinError(7,0.02424618);
   data_mc_ratio__94->SetBinError(8,0.02140595);
   data_mc_ratio__94->SetBinError(9,0.02606954);
   data_mc_ratio__94->SetBinError(10,0.03361578);
   data_mc_ratio__94->SetBinError(11,0.04561496);
   data_mc_ratio__94->SetBinError(12,0.09189708);
   data_mc_ratio__94->SetBinError(13,0.1072025);
   data_mc_ratio__94->SetBinError(14,0.1105606);
   data_mc_ratio__94->SetBinError(15,0.1391482);
   data_mc_ratio__94->SetBinError(16,0.5331942);
   data_mc_ratio__94->SetBinError(17,0.1271949);
   data_mc_ratio__94->SetBinError(18,0.06687184);
   data_mc_ratio__94->SetBinError(19,1.028513);
   data_mc_ratio__94->SetBinError(21,4.917744);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(9.996156);
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
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.02947517, 0.02825507, 0.05518625, 0.09932494, 0.3330298, 0.1303267, 0.1425641, 0.2312153, 0.2654752, 0.4710179, 0.2166548, 0.203072, 0.2136698, 0.4407229, 0.3079083, 0.126819, 0.544702,
   0.6751957, 0.3139673, 0.2870047, 0.5122615, 0.711675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.14599);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.85401);
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

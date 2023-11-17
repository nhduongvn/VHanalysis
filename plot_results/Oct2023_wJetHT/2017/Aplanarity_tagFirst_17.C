#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Tue Nov 14 11:28:17 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3023.886,1.052419,3020872);
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
   st->SetMaximum(2718482);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.01);
   st_stack_64->SetMaximum(2718482);
   st_stack_64->SetDirectory(nullptr);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->SetLineWidth(0);
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetLabelSize(0.05);
   st_stack_64->GetYaxis()->SetTitleSize(0.057);
   st_stack_64->GetYaxis()->SetTitleOffset(1.2);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(1,1022472);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(2,210392.4);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(3,99075.61);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(4,44962.8);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(5,30907.8);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(6,16696.46);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(7,11044.39);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(8,5002.947);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(9,4711.914);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(10,3136.201);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(11,1645.16);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(12,2068.834);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(13,504.6944);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(14,863.2762);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(15,987.1372);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(16,368.715);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(17,268.9782);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(18,263.9263);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(19,196.6376);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(20,29.82914);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(21,6.221183);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(1,42644.81);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(2,5832.081);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(3,4235.377);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(4,2782.859);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(5,2386.142);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(6,1505.9);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(7,1599.943);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(8,600.4964);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(9,849.4135);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(10,598.3929);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(11,326.4714);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(12,565.9416);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(13,82.88814);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(14,289.1297);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(15,704.099);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(16,213.9416);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(17,157.5704);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(18,217.2543);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(19,171.281);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(20,29.82914);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(21,5.498153);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetEntries(171555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(1,10139.77);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(2,2697.05);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(3,1208.064);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(4,624.8406);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(5,355.3795);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(6,235.0366);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(7,164.014);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(8,99.97358);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(9,68.28311);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(10,49.22866);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(11,38.7898);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(12,23.00837);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(13,15.88031);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(14,10.67925);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(15,7.025258);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(16,2.757148);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(17,5.016945);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(18,1.470196);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.6443037);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.8538159);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(21,0.3742799);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(1,47.60217);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(2,24.60987);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(3,16.64485);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(4,12.0984);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(5,9.097676);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(6,7.072662);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(7,6.47408);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(8,4.942734);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(9,3.969127);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(10,3.490029);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(11,3.696341);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(12,2.411555);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(13,1.908009);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(14,1.646227);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(15,1.421168);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(16,0.8577775);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(17,1.312679);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(18,0.9028664);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(19,0.3070902);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(20,0.4173106);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(21,0.3742799);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetEntries(214700);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(1,178175.2);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(2,52419.81);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(3,23750.5);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(4,12854.75);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(5,7569.12);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(6,4716.354);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(7,3092.999);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(8,2080.028);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(9,1357.277);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(10,948.474);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(11,635.7723);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(12,432.085);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(13,284.3474);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(14,191.975);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(15,126.756);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(16,77.30518);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(17,45.4986);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(18,28.80712);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(19,13.49968);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(20,8.199997);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(21,3.215005);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.6941574);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.2744097);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(1,121.8983);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(2,65.50259);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(3,44.08665);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(4,32.44196);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(5,24.78358);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(6,19.53541);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(7,15.85606);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(8,12.92817);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(9,10.46356);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(10,8.616466);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(11,7.080903);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(12,5.947476);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(13,4.73173);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(14,3.879643);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(15,3.228912);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(16,2.525467);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(17,1.860043);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(18,1.536417);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(19,1.029551);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(20,0.7742018);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5056721);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1980097);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(23,0.1541964);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetEntries(4978651);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(1,7880.665);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(2,1950.382);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(3,876.3366);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(4,461.5308);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(5,270.6606);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(6,168.6604);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(7,101.5249);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(8,71.69961);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(9,45.2316);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(10,45.59823);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(11,18.5039);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(12,14.4087);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(13,14.91577);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(14,5.4391);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(15,3.342629);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(16,3.991065);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(17,1.207444);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.20301);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.3937319);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(20,0.1762963);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(1,55.34875);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(2,28.61564);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(3,20.84969);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(4,15.56232);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(5,14.14502);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(6,9.954727);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(7,7.089822);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(8,5.577841);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(9,3.520586);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(10,7.931716);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(11,2.291401);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(12,2.091056);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(13,5.93972);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(14,1.134127);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(15,0.8459409);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(16,1.951769);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(17,0.5073104);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(18,0.1213837);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(19,0.3294605);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(20,0.1035508);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetEntries(95533);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(1,4355.748);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(2,1026.76);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(3,437.4663);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(4,208.7765);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(5,125.9639);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(6,73.50258);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(7,48.33086);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(8,34.24156);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(9,30.00004);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(10,11.77525);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(11,8.856968);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(12,6.156225);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(13,2.477731);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(14,2.560977);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(15,1.437329);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.420097);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.2033007);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(22,0.1368728);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(1,65.80304);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(2,38.20644);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(3,25.12517);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(4,15.34913);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(5,11.96353);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(6,7.306768);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(7,5.878765);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(8,5.274371);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(9,6.127687);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(10,2.617321);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(11,2.067544);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(12,1.89021);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(13,0.6688502);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(14,0.9597174);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(15,0.6501077);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(16,0.185546);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1485137);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(22,0.1368728);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetEntries(45648);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(1,38.84044);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(2,9.830679);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(3,2.746433);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(4,2.404982);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.8706252);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.6786466);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(7,2.799392);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1398751);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(9,0.4055177);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(10,0.1649531);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(12,0.4814737);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(1,3.794734);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(2,1.888986);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(3,0.9315109);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(4,0.8688137);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(5,0.4573659);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(6,0.4118258);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(7,1.136892);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(8,0.1398751);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(9,0.3002915);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(10,0.1649531);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(12,0.4814737);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(1,102.6644);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(2,24.32624);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(3,11.43684);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(4,2.932199);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(5,3.430316);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(6,1.188519);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.5279531);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(8,1.348897);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(9,0.528993);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(10,0.750351);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.116945);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(12,0.155274);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(14,0.2590766);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(16,0.3146642);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(1,5.83392);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(2,2.668009);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(3,2.056419);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(4,0.8215373);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(5,1.18781);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(6,0.5668955);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(7,0.3069113);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(8,0.7433977);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(9,0.4268827);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(10,0.571309);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(11,0.116945);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(12,0.155274);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(14,0.187981);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(16,0.3146642);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(1,83.03919);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(2,21.04857);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(3,9.180214);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(4,4.4929);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(5,2.760568);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(6,3.400725);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(7,0.4882953);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.7372781);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(9,1.667949);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(10,0.6352621);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(1,7.995209);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(2,4.092461);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(3,2.045747);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(4,1.397893);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(5,1.54655);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(6,1.843346);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(7,0.4648991);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(8,0.5213345);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(9,1.196985);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(10,0.6352621);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetEntries(229);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(1,39.85828);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(2,11.26717);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(3,5.361111);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(4,2.847761);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(5,1.590323);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(6,1.123555);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.6693363);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.4287542);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.3060677);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.1773714);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.1463793);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.09562352);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.05567793);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.02537332);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.03018771);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.0161091);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.002917851);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.01279381);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.002990855);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.006120821);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(21,0.002813582);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(1,0.307614);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1601624);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1133012);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(4,0.08041938);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(5,0.05916602);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(6,0.05088048);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(7,0.03763016);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(8,0.03125646);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(9,0.02637129);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(10,0.02012984);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(11,0.01896747);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(12,0.01277534);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(13,0.01012491);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(14,0.008109045);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(15,0.009270573);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(16,0.006299745);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(17,0.002718633);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(18,0.006883473);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(19,0.001801102);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(20,0.004748583);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(21,0.002813582);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(1,28.15309);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(2,7.554429);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(3,3.458242);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(4,1.953155);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(5,1.15212);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.7111861);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.4835647);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.3169433);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.2118542);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.1306775);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.1007024);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.06556372);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.04583263);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.02240964);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.01791269);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.00932711);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.007691321);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.003305812);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0009996242);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003030594);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(1,0.09832182);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(2,0.05049535);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03405048);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(4,0.02553743);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01957156);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(6,0.01531313);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(7,0.0126805);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(8,0.0101489);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(9,0.008330293);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(10,0.006503917);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(11,0.005820246);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(12,0.004626002);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(13,0.003901966);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(14,0.002668028);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(15,0.002445671);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(16,0.001746761);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(17,0.001560151);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(18,0.00101953);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0006133891);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003030594);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(1,0.9620063);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.2402633);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.1167163);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.06931774);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.03280132);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.02974813);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.0204289);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.008962649);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.008572839);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(10,0.008112072);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.002201232);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(12,0.004056901);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(17,0.0008710256);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(18,0.001310226);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(20,0.001208619);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04036269);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02014212);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(3,0.01273932);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(4,0.01153746);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(5,0.007338217);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(6,0.007079303);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(7,0.00548532);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(8,0.00348129);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(9,0.004489267);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(10,0.005617195);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(11,0.001557733);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(12,0.002097872);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(17,0.0008710256);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(18,0.001310226);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(20,0.001208619);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.437201);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1278991);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.06864132);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.04161482);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.02490913);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0126598);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.01109307);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.005724583);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.00592164);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.002402226);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.001318055);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.001970672);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(13,0.000144031);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.001061067);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(15,0.0001595757);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(19,0.0001856909);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(1,0.009601397);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(2,0.005023966);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(3,0.003783035);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(4,0.002897555);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(5,0.002228503);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(6,0.001671295);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(7,0.001430424);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(8,0.001122669);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(9,0.001176999);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0006973271);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(11,0.000517955);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(12,0.000710175);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(13,0.000144031);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0004379716);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(15,0.0001595757);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(19,0.0001856909);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_Aplanarity__127 = new TH1D("VbbHcc_tagFirst_Aplanarity__127","",50,0,1);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(1,320550);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(2,78433);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(3,34450);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(4,18265);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(5,10691);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(6,6538);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(7,4252);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(8,2776);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(9,1872);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(10,1263);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(11,896);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(12,615);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(13,385);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(14,238);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(15,172);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(16,98);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(17,63);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(18,24);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(19,13);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(20,5);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(21,4);
   VbbHcc_tagFirst_Aplanarity__127->SetBinContent(22,3);
   VbbHcc_tagFirst_Aplanarity__127->SetEntries(481655);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity__127->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity__127->SetLineWidth(2);
   VbbHcc_tagFirst_Aplanarity__127->SetMarkerStyle(20);
   VbbHcc_tagFirst_Aplanarity__127->SetMarkerSize(1.2);
   VbbHcc_tagFirst_Aplanarity__127->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity__127->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__127->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__127->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__127->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__127->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__127->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__127->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__127->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__127->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fx1127[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fy1127[50] = { 1223317, 268560.8, 125380.3, 59127.44, 39238.79, 21897.16, 14456.26, 7291.876, 6215.841, 4193.146, 2347.45, 2545.296, 822.4173, 1074.238, 1125.747, 453.5285, 320.916,
   294.4241, 211.1795, 39.06688, 9.813281, 0.8310302, 0.2744097, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fex1127[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fey1127[50] = { 42645.1, 5832.698, 4235.766, 2783.161, 2386.361, 1506.095, 1600.062, 600.7057, 849.5176, 598.524, 326.5837, 565.9853, 83.25984, 289.1643, 704.1087, 213.9675, 157.5877,
   217.2617, 171.2847, 29.84228, 5.53403, 0.2407114, 0.1541964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagFirst_Aplanarity_fx1127,Graph_from_VbbHcc_tagFirst_Aplanarity_fy1127,Graph_from_VbbHcc_tagFirst_Aplanarity_fex1127,Graph_from_VbbHcc_tagFirst_Aplanarity_fey1127);
   gre->SetName("Graph_from_VbbHcc_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->SetMaximum(1392558);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1127);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__128 = new TH1D("data_mc_ratio__128","",50,0,1);
   data_mc_ratio__128->SetBinContent(1,0.2620335);
   data_mc_ratio__128->SetBinContent(2,0.2920494);
   data_mc_ratio__128->SetBinContent(3,0.274764);
   data_mc_ratio__128->SetBinContent(4,0.3089091);
   data_mc_ratio__128->SetBinContent(5,0.27246);
   data_mc_ratio__128->SetBinContent(6,0.2985776);
   data_mc_ratio__128->SetBinContent(7,0.2941287);
   data_mc_ratio__128->SetBinContent(8,0.3806976);
   data_mc_ratio__128->SetBinContent(9,0.301166);
   data_mc_ratio__128->SetBinContent(10,0.3012058);
   data_mc_ratio__128->SetBinContent(11,0.3816907);
   data_mc_ratio__128->SetBinContent(12,0.2416222);
   data_mc_ratio__128->SetBinContent(13,0.4681322);
   data_mc_ratio__128->SetBinContent(14,0.2215523);
   data_mc_ratio__128->SetBinContent(15,0.1527875);
   data_mc_ratio__128->SetBinContent(16,0.2160834);
   data_mc_ratio__128->SetBinContent(17,0.1963131);
   data_mc_ratio__128->SetBinContent(18,0.08151507);
   data_mc_ratio__128->SetBinContent(19,0.06155901);
   data_mc_ratio__128->SetBinContent(20,0.1279856);
   data_mc_ratio__128->SetBinContent(21,0.4076109);
   data_mc_ratio__128->SetBinContent(22,3.609977);
   data_mc_ratio__128->SetBinError(1,0.0004628165);
   data_mc_ratio__128->SetBinError(2,0.001042814);
   data_mc_ratio__128->SetBinError(3,0.001480353);
   data_mc_ratio__128->SetBinError(4,0.002285708);
   data_mc_ratio__128->SetBinError(5,0.002635079);
   data_mc_ratio__128->SetBinError(6,0.003692621);
   data_mc_ratio__128->SetBinError(7,0.004510667);
   data_mc_ratio__128->SetBinError(8,0.007225543);
   data_mc_ratio__128->SetBinError(9,0.006960702);
   data_mc_ratio__128->SetBinError(10,0.008475428);
   data_mc_ratio__128->SetBinError(11,0.01275139);
   data_mc_ratio__128->SetBinError(12,0.009743147);
   data_mc_ratio__128->SetBinError(13,0.02385823);
   data_mc_ratio__128->SetBinError(14,0.0143611);
   data_mc_ratio__128->SetBinError(15,0.01164994);
   data_mc_ratio__128->SetBinError(16,0.02182772);
   data_mc_ratio__128->SetBinError(17,0.02473312);
   data_mc_ratio__128->SetBinError(18,0.01663919);
   data_mc_ratio__128->SetBinError(19,0.0170734);
   data_mc_ratio__128->SetBinError(20,0.05723692);
   data_mc_ratio__128->SetBinError(21,0.2038054);
   data_mc_ratio__128->SetBinError(22,2.084221);
   data_mc_ratio__128->SetMinimum(0.4);
   data_mc_ratio__128->SetMaximum(1.6);
   data_mc_ratio__128->SetEntries(14.95766);
   data_mc_ratio__128->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__128->SetLineColor(ci);
   data_mc_ratio__128->SetLineWidth(2);
   data_mc_ratio__128->SetMarkerStyle(20);
   data_mc_ratio__128->SetMarkerSize(1.2);
   data_mc_ratio__128->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__128->GetXaxis()->SetRange(1,50);
   data_mc_ratio__128->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__128->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__128->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__128->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__128->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__128->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__128->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__128->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__128->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__128->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__128->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__128->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__128->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1128[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1128[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1128[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1128[50] = { 0.03486022, 0.02171835, 0.03378333, 0.04707056, 0.06081638, 0.0687804, 0.110683, 0.08238013, 0.1366698, 0.1427386, 0.1391227, 0.2223652, 0.101238, 0.2691807, 0.6254593, 0.4717839, 0.4910561,
   0.7379209, 0.8110859, 0.7638768, 0.5639327, 0.2896543, 0.5619204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1128,Graph_from_mc_statistical_error_fy1128,Graph_from_mc_statistical_error_fex1128,Graph_from_mc_statistical_error_fey1128);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1128 = new TH1F("Graph_Graph_from_mc_statistical_error1128","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1128->SetMinimum(0.02669691);
   Graph_Graph_from_mc_statistical_error1128->SetMaximum(1.973303);
   Graph_Graph_from_mc_statistical_error1128->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1128->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1128);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}

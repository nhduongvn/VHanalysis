void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(0,0,1,1);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.887563,1.052419,13.02753);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(7.630698e+10);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(0.001343854);
   st_stack_58->SetMaximum(2.729129e+11);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetLabelSize(0.035);
   st_stack_58->GetXaxis()->SetTitleSize(0.035);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetLabelSize(0.05);
   st_stack_58->GetYaxis()->SetTitleSize(0.057);
   st_stack_58->GetYaxis()->SetTitleOffset(1.2);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetLabelSize(0.035);
   st_stack_58->GetZaxis()->SetTitleSize(0.035);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,71388.45);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,53108.44);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,30577.77);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,16315.13);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,24607.27);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,4721.728);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1460.568);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1773.988);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1067.11);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,799.1046);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,773.2285);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,210.5866);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,241.8251);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,169.5582);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,224.5592);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,94.39689);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,21.00901);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,26.32508);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,19.61115);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,15080.66);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3329.006);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2288.737);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1537.965);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,14865.42);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,828.0929);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,298.904);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,545.0645);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,389.0646);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,383.8136);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,384.0449);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,51.13944);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,59.72167);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,56.06018);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,59.27814);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,30.42444);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,10.5356);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,12.51804);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,9.840562);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,329.0572);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,257.2675);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,154.8668);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,87.98784);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,50.65209);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,31.82825);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,19.7443);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,10.66157);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.438609);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,6.679468);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.550847);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.420151);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.929883);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.397991);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.425939);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.115248);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.7156297);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.5075407);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,7.034036);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.252277);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.900702);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.686279);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.745936);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.270942);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.792567);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.347743);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8785268);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.082367);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.5909805);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.5866418);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.5657366);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4250314);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4888926);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4090571);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.3844709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2844335);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,6237.938);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,5246.159);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2975.271);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1739.944);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1008.208);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,591.5302);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,341.5453);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,211.9354);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,146.167);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,99.18498);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,75.4026);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,54.8113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,40.16257);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,30.78852);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,21.71942);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,16.9211);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,13.51798);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,8.745518);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,4.826378);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.995764);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.6167674);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2556355);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,19.72749);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,18.1024);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,13.6361);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,10.43586);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,7.934629);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.072498);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.614114);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.628043);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.024912);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.48787);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.163594);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.853793);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.589305);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.385014);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.167265);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.038461);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9226859);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7427888);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5476048);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3472911);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1996429);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1297545);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,821.785);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,649.3312);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,350.6704);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,235.7391);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,139.6005);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,72.83064);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,33.28264);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,20.45591);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,16.34415);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,11.95962);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,7.803424);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,6.772738);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.487471);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,4.817544);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.35619);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.606663);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.253241);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.600018);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.5523512);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.06630981);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.1083014);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,18.22564);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,17.88058);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,12.28753);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,11.20026);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,7.969794);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.240283);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.356776);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.930897);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.644531);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.427083);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.054139);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.152861);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8634812);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.8779604);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4176476);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4707997);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3110393);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.4846184);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.3716153);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.06630981);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.1083014);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,98.22338);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,51.60731);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,37.27314);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,17.62116);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,11.38449);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,10.85486);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.946787);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,3.552066);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.665246);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.800723);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.5008347);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.3799862);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,0.4196323);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,7.290219);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3813193);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.1830596);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.3631224);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.0448957);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1763629);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,8.991551);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,4.672643);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,4.541107);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.46824);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.017063);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,2.273866);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,0.8308679);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.294683);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.421047);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4377354);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.2308829);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1728654);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.2161321);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,6.632997);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1688958);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1219529);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.2110985);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.0448957);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1763629);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.3153059);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,2.23148);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,0.4958844);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.735595);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.4958844);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.7438266);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3506432);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.6559934);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3506432);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,14.68709);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,10.63548);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,7.343543);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,5.064512);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,5.317738);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.012902);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,1.928509);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.64109);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.363662);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.132459);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.160426);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.5064512);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2532256);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,14.57643);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,12.91447);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,7.174349);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.943873);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.490268);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.818622);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.6557375);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2939513);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2164257);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1211338);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.07914073);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.06298956);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.04845351);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.04199304);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02584187);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.04037792);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.0193814);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01130582);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.006460468);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.004845351);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1534361);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1444243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1076448);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08935845);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.07508122);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.05419674);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.0325437);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.02178912);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01869633);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01398732);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01130582);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.0100864);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.008846359);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.008235512);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006460468);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008075584);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.005594929);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004273198);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003230234);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002797464);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,6.640643);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.557641);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.07279);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.017153);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.204487);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.6866199);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.359895);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.2052396);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1546553);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.114022);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.07670572);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.06385233);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05099894);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04021868);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03938943);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02446291);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.0178289);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0161704);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007048634);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001658502);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001243877);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0008292511);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004146255);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.05247266);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04800354);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03569394);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02891995);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02234751);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01687276);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01221563);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.009224836);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.008007749);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006875787);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005639517);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.005145368);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.00459842);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.004083588);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.00404127);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.003184799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002718881);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002589336);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001709545);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008292511);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007181525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005863691);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004146255);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.04582728);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.03160502);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01896301);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.01738276);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.009481507);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.008509913);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.007067098);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005474151);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.0052411);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.003870809);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.001580251);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01909972);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01432479);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.008096621);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.007681409);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002906479);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.00145324);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001038028);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.000622817);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0004152113);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.0004152113);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.0004152113);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.000622817);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.0004152113);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.001991283);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.001724502);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001296497);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001262816);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0007767892);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0005492729);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004642204);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003595835);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0002935987);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.0002935987);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0002935987);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0003595835);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0002935987);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__158 = new TH1D("VbbHcc_tags_Sphericity__158","",25,0,1);
   VbbHcc_tags_Sphericity__158->SetBinContent(1,24588);
   VbbHcc_tags_Sphericity__158->SetBinContent(2,17088);
   VbbHcc_tags_Sphericity__158->SetBinContent(3,9801);
   VbbHcc_tags_Sphericity__158->SetBinContent(4,5990);
   VbbHcc_tags_Sphericity__158->SetBinContent(5,3731);
   VbbHcc_tags_Sphericity__158->SetBinContent(6,2321);
   VbbHcc_tags_Sphericity__158->SetBinContent(7,1417);
   VbbHcc_tags_Sphericity__158->SetBinContent(8,900);
   VbbHcc_tags_Sphericity__158->SetBinContent(9,731);
   VbbHcc_tags_Sphericity__158->SetBinContent(10,508);
   VbbHcc_tags_Sphericity__158->SetBinContent(11,344);
   VbbHcc_tags_Sphericity__158->SetBinContent(12,297);
   VbbHcc_tags_Sphericity__158->SetBinContent(13,219);
   VbbHcc_tags_Sphericity__158->SetBinContent(14,172);
   VbbHcc_tags_Sphericity__158->SetBinContent(15,124);
   VbbHcc_tags_Sphericity__158->SetBinContent(16,120);
   VbbHcc_tags_Sphericity__158->SetBinContent(17,82);
   VbbHcc_tags_Sphericity__158->SetBinContent(18,60);
   VbbHcc_tags_Sphericity__158->SetBinContent(19,23);
   VbbHcc_tags_Sphericity__158->SetBinContent(20,11);
   VbbHcc_tags_Sphericity__158->SetBinContent(21,3);
   VbbHcc_tags_Sphericity__158->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__158->SetEntries(68555);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__158->SetLineColor(ci);
   VbbHcc_tags_Sphericity__158->SetLineWidth(2);
   VbbHcc_tags_Sphericity__158->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__158->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__158->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__158->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__158->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1115[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1115[25] = {
   78913.97,
   59342.77,
   34115.21,
   18409.29,
   25827.71,
   5432.301,
   1860.359,
   2021.408,
   1237.599,
   919.2144,
   859.8957,
   275.3514,
   290.1724,
   213.9347,
   250.5073,
   114.2878,
   36.89619,
   37.25053,
   25.22688,
   2.068578,
   0.7734366,
   0.2564647,
   0.0004146255,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1115[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1115[25] = {
   15080.69,
   3329.112,
   2288.821,
   1538.048,
   14865.43,
   828.1381,
   298.9555,
   545.0833,
   389.0812,
   383.8261,
   384.0531,
   51.1903,
   59.75264,
   56.47663,
   59.29336,
   30.44879,
   10.58959,
   12.55272,
   9.86448,
   0.3535768,
   0.2319648,
   0.1297558,
   0.0004146255,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1115,Graph_from_VbbHcc_tags_Sphericity_fy1115,Graph_from_VbbHcc_tags_Sphericity_fex1115,Graph_from_VbbHcc_tags_Sphericity_fey1115);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1115 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1115","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMinimum(103.3941);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetMaximum(103394.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1115);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__159 = new TH1D("data_mc_ratio__159","",25,0,1);
   data_mc_ratio__159->SetBinContent(1,0.3115798);
   data_mc_ratio__159->SetBinContent(2,0.2879542);
   data_mc_ratio__159->SetBinContent(3,0.2872912);
   data_mc_ratio__159->SetBinContent(4,0.3253793);
   data_mc_ratio__159->SetBinContent(5,0.1444573);
   data_mc_ratio__159->SetBinContent(6,0.4272591);
   data_mc_ratio__159->SetBinContent(7,0.7616811);
   data_mc_ratio__159->SetBinContent(8,0.4452341);
   data_mc_ratio__159->SetBinContent(9,0.5906598);
   data_mc_ratio__159->SetBinContent(10,0.5526458);
   data_mc_ratio__159->SetBinContent(11,0.4000485);
   data_mc_ratio__159->SetBinContent(12,1.078622);
   data_mc_ratio__159->SetBinContent(13,0.7547236);
   data_mc_ratio__159->SetBinContent(14,0.8039836);
   data_mc_ratio__159->SetBinContent(15,0.4949955);
   data_mc_ratio__159->SetBinContent(16,1.049981);
   data_mc_ratio__159->SetBinContent(17,2.222451);
   data_mc_ratio__159->SetBinContent(18,1.610715);
   data_mc_ratio__159->SetBinContent(19,0.911726);
   data_mc_ratio__159->SetBinContent(20,5.317664);
   data_mc_ratio__159->SetBinContent(21,3.878793);
   data_mc_ratio__159->SetBinContent(22,3.899171);
   data_mc_ratio__159->SetBinError(1,0.001987045);
   data_mc_ratio__159->SetBinError(2,0.002202814);
   data_mc_ratio__159->SetBinError(3,0.002901932);
   data_mc_ratio__159->SetBinError(4,0.004204133);
   data_mc_ratio__159->SetBinError(5,0.002364976);
   data_mc_ratio__159->SetBinError(6,0.008868573);
   data_mc_ratio__159->SetBinError(7,0.0202343);
   data_mc_ratio__159->SetBinError(8,0.01484114);
   data_mc_ratio__159->SetBinError(9,0.02184634);
   data_mc_ratio__159->SetBinError(10,0.02451969);
   data_mc_ratio__159->SetBinError(11,0.02156917);
   data_mc_ratio__159->SetBinError(12,0.06258797);
   data_mc_ratio__159->SetBinError(13,0.0509995);
   data_mc_ratio__159->SetBinError(14,0.06130318);
   data_mc_ratio__159->SetBinError(15,0.04445191);
   data_mc_ratio__159->SetBinError(16,0.0958497);
   data_mc_ratio__159->SetBinError(17,0.2454287);
   data_mc_ratio__159->SetBinError(18,0.2079425);
   data_mc_ratio__159->SetBinError(19,0.190108);
   data_mc_ratio__159->SetBinError(20,1.603336);
   data_mc_ratio__159->SetBinError(21,2.239422);
   data_mc_ratio__159->SetBinError(22,3.899171);
   data_mc_ratio__159->SetMinimum(0.4);
   data_mc_ratio__159->SetMaximum(1.6);
   data_mc_ratio__159->SetEntries(23.3389);
   data_mc_ratio__159->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__159->SetLineColor(ci);
   data_mc_ratio__159->SetLineWidth(2);
   data_mc_ratio__159->SetMarkerStyle(20);
   data_mc_ratio__159->SetMarkerSize(1.2);
   data_mc_ratio__159->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__159->GetXaxis()->SetRange(1,25);
   data_mc_ratio__159->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__159->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__159->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__159->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__159->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__159->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__159->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__159->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__159->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1116[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1116[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1116[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1116[25] = {
   0.1911029,
   0.05609972,
   0.06709093,
   0.08354741,
   0.5755612,
   0.152447,
   0.1606978,
   0.2696552,
   0.3143839,
   0.4175589,
   0.4466275,
   0.185909,
   0.2059211,
   0.2639901,
   0.2366931,
   0.2664221,
   0.2870104,
   0.3369811,
   0.3910306,
   0.1709275,
   0.2999144,
   0.5059401,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1116,Graph_from_mc_statistical_error_fy1116,Graph_from_mc_statistical_error_fex1116,Graph_from_mc_statistical_error_fey1116);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1116 = new TH1F("Graph_Graph_from_mc_statistical_error1116","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1116->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1116->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1116->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1116->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1116->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1116);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}

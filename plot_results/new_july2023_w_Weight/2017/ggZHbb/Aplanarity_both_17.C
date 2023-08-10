void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:25:09 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.612303,1.133333,14.51072);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,12.28421);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,4.126289);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.136107);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.259483);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.7830234);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.505937);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3445787);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2446414);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.151503);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1018877);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.06486934);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04906012);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03359313);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02325972);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.008082393);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.006651363);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.007309729);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002222841);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001872616);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0008912589);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.07419259);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04302854);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03097533);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0237609);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01875903);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.0150697);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01244424);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01049168);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.008242337);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.006775832);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005392874);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004712586);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003878304);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003219336);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001907259);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001722741);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001792853);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0009946838);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0009368752);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0006302152);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}

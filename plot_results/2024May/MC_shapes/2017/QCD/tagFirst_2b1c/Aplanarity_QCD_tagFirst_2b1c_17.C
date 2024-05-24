#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_2b1c_17/Aplanarity_QCD_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_2b1c_17 = new TCanvas("Aplanarity_QCD_tagFirst_2b1c_17", "Aplanarity_QCD_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_2b1c_17->Range(-0.2,-396381.6,1.133333,3567434);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2618 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2618","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(1,3020050);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(2,421371.4);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(3,112251.1);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(4,31502.6);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(5,15107.43);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(6,4611.888);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(7,3956.592);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(8,1909.638);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(9,987.007);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(10,526.4914);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(11,400.1326);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(12,349.9414);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(13,68.67818);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(14,35.20673);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(15,15.53982);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(16,575.8515);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(17,0.9284533);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(18,23.39842);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinContent(19,39.23405);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(1,70799.02);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(2,35790.95);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(3,16303.17);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(4,2493.643);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(5,3323.117);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(6,639.8547);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(7,796.4759);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(8,592.2703);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(9,277.763);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(10,218.6591);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(11,83.56661);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(12,220.4628);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(13,20.47009);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(14,14.03169);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(15,8.556559);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(16,517.9218);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(17,0.656755);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(18,23.39842);
   VH_tagFirst_2b1c_Aplanarity__2618->SetBinError(19,39.23405);
   VH_tagFirst_2b1c_Aplanarity__2618->SetEntries(247607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2618->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2618->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2618->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2618->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2618->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2618->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2618->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2618->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_2b1c_17->Modified();
   Aplanarity_QCD_tagFirst_2b1c_17->cd();
   Aplanarity_QCD_tagFirst_2b1c_17->SetSelected(Aplanarity_QCD_tagFirst_2b1c_17);
}

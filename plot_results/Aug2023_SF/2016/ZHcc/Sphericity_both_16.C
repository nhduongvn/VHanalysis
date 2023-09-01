#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.002758515,1.133333,0.02482663);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__944 = new TH1D("VbbHcc_both_Sphericity__944","",25,0,1);
   VbbHcc_both_Sphericity__944->SetBinContent(1,0.01602681);
   VbbHcc_both_Sphericity__944->SetBinContent(2,0.01721613);
   VbbHcc_both_Sphericity__944->SetBinContent(3,0.02101725);
   VbbHcc_both_Sphericity__944->SetBinContent(4,0.004656566);
   VbbHcc_both_Sphericity__944->SetBinContent(6,0.00450023);
   VbbHcc_both_Sphericity__944->SetBinContent(10,0.00401118);
   VbbHcc_both_Sphericity__944->SetBinContent(11,0.004719769);
   VbbHcc_both_Sphericity__944->SetBinContent(12,0.00231513);
   VbbHcc_both_Sphericity__944->SetBinContent(13,0.001901718);
   VbbHcc_both_Sphericity__944->SetBinContent(14,0.002996246);
   VbbHcc_both_Sphericity__944->SetBinError(1,0.00575749);
   VbbHcc_both_Sphericity__944->SetBinError(2,0.006112396);
   VbbHcc_both_Sphericity__944->SetBinError(3,0.007227604);
   VbbHcc_both_Sphericity__944->SetBinError(4,0.003292719);
   VbbHcc_both_Sphericity__944->SetBinError(6,0.003214264);
   VbbHcc_both_Sphericity__944->SetBinError(10,0.002846815);
   VbbHcc_both_Sphericity__944->SetBinError(11,0.00336498);
   VbbHcc_both_Sphericity__944->SetBinError(12,0.00231513);
   VbbHcc_both_Sphericity__944->SetBinError(13,0.001901718);
   VbbHcc_both_Sphericity__944->SetBinError(14,0.002996246);
   VbbHcc_both_Sphericity__944->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity__944->SetFillColor(ci);
   VbbHcc_both_Sphericity__944->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__944->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__944->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__944->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__944->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__944->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__944->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__944->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__944->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__944->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__944->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}

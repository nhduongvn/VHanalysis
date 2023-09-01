#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.006813989,1.133333,0.0613259);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__959 = new TH1D("VbbHcc_both_Aplanarity__959","",50,0,1);
   VbbHcc_both_Aplanarity__959->SetBinContent(1,0.0519161);
   VbbHcc_both_Aplanarity__959->SetBinContent(2,0.0143678);
   VbbHcc_both_Aplanarity__959->SetBinContent(3,0.004403632);
   VbbHcc_both_Aplanarity__959->SetBinContent(4,0.001929603);
   VbbHcc_both_Aplanarity__959->SetBinContent(6,0.002178175);
   VbbHcc_both_Aplanarity__959->SetBinContent(9,0.001901718);
   VbbHcc_both_Aplanarity__959->SetBinContent(10,0.002664007);
   VbbHcc_both_Aplanarity__959->SetBinError(1,0.01077564);
   VbbHcc_both_Aplanarity__959->SetBinError(2,0.006003286);
   VbbHcc_both_Aplanarity__959->SetBinError(3,0.003157219);
   VbbHcc_both_Aplanarity__959->SetBinError(4,0.001929603);
   VbbHcc_both_Aplanarity__959->SetBinError(6,0.002178175);
   VbbHcc_both_Aplanarity__959->SetBinError(9,0.001901718);
   VbbHcc_both_Aplanarity__959->SetBinError(10,0.002664007);
   VbbHcc_both_Aplanarity__959->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity__959->SetFillColor(ci);
   VbbHcc_both_Aplanarity__959->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__959->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__959->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__959->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__959->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__959->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__959->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__959->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__959->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__959->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__959->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}

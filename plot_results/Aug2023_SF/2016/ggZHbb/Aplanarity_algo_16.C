#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-3.943004,1.133333,35.48703);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__598 = new TH1D("VbbHcc_algo_Aplanarity__598","",50,0,1);
   VbbHcc_algo_Aplanarity__598->SetBinContent(1,30.04193);
   VbbHcc_algo_Aplanarity__598->SetBinContent(2,3.349542);
   VbbHcc_algo_Aplanarity__598->SetBinContent(3,0.642268);
   VbbHcc_algo_Aplanarity__598->SetBinContent(4,0.1392934);
   VbbHcc_algo_Aplanarity__598->SetBinContent(5,0.04541169);
   VbbHcc_algo_Aplanarity__598->SetBinContent(6,0.01454054);
   VbbHcc_algo_Aplanarity__598->SetBinContent(7,0.004740466);
   VbbHcc_algo_Aplanarity__598->SetBinContent(8,0.002637741);
   VbbHcc_algo_Aplanarity__598->SetBinContent(9,0.001466048);
   VbbHcc_algo_Aplanarity__598->SetBinContent(10,0.0005684325);
   VbbHcc_algo_Aplanarity__598->SetBinContent(11,0.0002412116);
   VbbHcc_algo_Aplanarity__598->SetBinContent(12,9.602353e-05);
   VbbHcc_algo_Aplanarity__598->SetBinError(1,0.09781195);
   VbbHcc_algo_Aplanarity__598->SetBinError(2,0.03233603);
   VbbHcc_algo_Aplanarity__598->SetBinError(3,0.01412525);
   VbbHcc_algo_Aplanarity__598->SetBinError(4,0.006563613);
   VbbHcc_algo_Aplanarity__598->SetBinError(5,0.003647089);
   VbbHcc_algo_Aplanarity__598->SetBinError(6,0.002128995);
   VbbHcc_algo_Aplanarity__598->SetBinError(7,0.001182126);
   VbbHcc_algo_Aplanarity__598->SetBinError(8,0.000904947);
   VbbHcc_algo_Aplanarity__598->SetBinError(9,0.0006658306);
   VbbHcc_algo_Aplanarity__598->SetBinError(10,0.0003678036);
   VbbHcc_algo_Aplanarity__598->SetBinError(11,0.0002412116);
   VbbHcc_algo_Aplanarity__598->SetBinError(12,9.602353e-05);
   VbbHcc_algo_Aplanarity__598->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity__598->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__598->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__598->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__598->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__598->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__598->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__598->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__598->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__598->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__598->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__598->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__598->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}

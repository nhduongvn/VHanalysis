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
   Aplanarity_algo_16->Range(-0.2,-7.349314,1.133333,66.14382);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__594 = new TH1D("VbbHcc_algo_Aplanarity__594","",50,0,1);
   VbbHcc_algo_Aplanarity__594->SetBinContent(1,55.99477);
   VbbHcc_algo_Aplanarity__594->SetBinContent(2,5.025076);
   VbbHcc_algo_Aplanarity__594->SetBinContent(3,1.134483);
   VbbHcc_algo_Aplanarity__594->SetBinContent(4,0.3054822);
   VbbHcc_algo_Aplanarity__594->SetBinContent(5,0.08772261);
   VbbHcc_algo_Aplanarity__594->SetBinContent(7,0.06968364);
   VbbHcc_algo_Aplanarity__594->SetBinError(1,2.542318);
   VbbHcc_algo_Aplanarity__594->SetBinError(2,0.7399734);
   VbbHcc_algo_Aplanarity__594->SetBinError(3,0.3456541);
   VbbHcc_algo_Aplanarity__594->SetBinError(4,0.1764176);
   VbbHcc_algo_Aplanarity__594->SetBinError(5,0.08772261);
   VbbHcc_algo_Aplanarity__594->SetBinError(7,0.06968364);
   VbbHcc_algo_Aplanarity__594->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity__594->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__594->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__594->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__594->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__594->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__594->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__594->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__594->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__594->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__594->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__594->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__594->Draw("HIST");
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

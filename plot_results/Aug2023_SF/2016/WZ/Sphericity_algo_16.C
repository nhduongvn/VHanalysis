#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-4.571199,1.133333,41.14079);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__580 = new TH1D("VbbHcc_algo_Sphericity__580","",25,0,1);
   VbbHcc_algo_Sphericity__580->SetBinContent(1,34.82818);
   VbbHcc_algo_Sphericity__580->SetBinContent(2,31.79587);
   VbbHcc_algo_Sphericity__580->SetBinContent(3,17.0374);
   VbbHcc_algo_Sphericity__580->SetBinContent(4,9.623309);
   VbbHcc_algo_Sphericity__580->SetBinContent(5,5.694935);
   VbbHcc_algo_Sphericity__580->SetBinContent(6,2.164434);
   VbbHcc_algo_Sphericity__580->SetBinContent(7,1.368659);
   VbbHcc_algo_Sphericity__580->SetBinContent(8,0.3130892);
   VbbHcc_algo_Sphericity__580->SetBinContent(9,0.07224067);
   VbbHcc_algo_Sphericity__580->SetBinContent(13,0.0341236);
   VbbHcc_algo_Sphericity__580->SetBinError(1,1.798273);
   VbbHcc_algo_Sphericity__580->SetBinError(2,1.699706);
   VbbHcc_algo_Sphericity__580->SetBinError(3,1.242001);
   VbbHcc_algo_Sphericity__580->SetBinError(4,0.9504332);
   VbbHcc_algo_Sphericity__580->SetBinError(5,0.733995);
   VbbHcc_algo_Sphericity__580->SetBinError(6,0.4665395);
   VbbHcc_algo_Sphericity__580->SetBinError(7,0.3585847);
   VbbHcc_algo_Sphericity__580->SetBinError(8,0.163823);
   VbbHcc_algo_Sphericity__580->SetBinError(9,0.07224067);
   VbbHcc_algo_Sphericity__580->SetBinError(13,0.0341236);
   VbbHcc_algo_Sphericity__580->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity__580->SetFillColor(ci);
   VbbHcc_algo_Sphericity__580->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__580->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__580->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__580->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__580->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__580->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__580->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__580->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__580->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__580->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__580->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}

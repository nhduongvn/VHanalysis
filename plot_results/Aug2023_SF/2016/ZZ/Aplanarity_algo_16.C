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
   Aplanarity_algo_16->Range(-0.2,-15.17931,1.133333,136.6138);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__596 = new TH1D("VbbHcc_algo_Aplanarity__596","",50,0,1);
   VbbHcc_algo_Aplanarity__596->SetBinContent(1,115.6519);
   VbbHcc_algo_Aplanarity__596->SetBinContent(2,15.5879);
   VbbHcc_algo_Aplanarity__596->SetBinContent(3,2.326376);
   VbbHcc_algo_Aplanarity__596->SetBinContent(4,0.4984337);
   VbbHcc_algo_Aplanarity__596->SetBinContent(6,0.1716056);
   VbbHcc_algo_Aplanarity__596->SetBinError(1,4.941221);
   VbbHcc_algo_Aplanarity__596->SetBinError(2,1.805156);
   VbbHcc_algo_Aplanarity__596->SetBinError(3,0.661492);
   VbbHcc_algo_Aplanarity__596->SetBinError(4,0.3562816);
   VbbHcc_algo_Aplanarity__596->SetBinError(6,0.1716056);
   VbbHcc_algo_Aplanarity__596->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity__596->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__596->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__596->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__596->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__596->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__596->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__596->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__596->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__596->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__596->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__596->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__596->Draw("HIST");
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

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
   Aplanarity_algo_16->Range(-0.2,-9.669591,1.133333,87.02631);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__597 = new TH1D("VbbHcc_algo_Aplanarity__597","",50,0,1);
   VbbHcc_algo_Aplanarity__597->SetBinContent(1,73.67307);
   VbbHcc_algo_Aplanarity__597->SetBinContent(2,6.767997);
   VbbHcc_algo_Aplanarity__597->SetBinContent(3,1.140486);
   VbbHcc_algo_Aplanarity__597->SetBinContent(4,0.2771021);
   VbbHcc_algo_Aplanarity__597->SetBinContent(5,0.06345032);
   VbbHcc_algo_Aplanarity__597->SetBinContent(6,0.02098822);
   VbbHcc_algo_Aplanarity__597->SetBinContent(7,0.004964298);
   VbbHcc_algo_Aplanarity__597->SetBinContent(8,0.007027793);
   VbbHcc_algo_Aplanarity__597->SetBinContent(9,0.001886221);
   VbbHcc_algo_Aplanarity__597->SetBinContent(10,0.001037855);
   VbbHcc_algo_Aplanarity__597->SetBinError(1,0.3027379);
   VbbHcc_algo_Aplanarity__597->SetBinError(2,0.08994199);
   VbbHcc_algo_Aplanarity__597->SetBinError(3,0.03672339);
   VbbHcc_algo_Aplanarity__597->SetBinError(4,0.01805414);
   VbbHcc_algo_Aplanarity__597->SetBinError(5,0.008460901);
   VbbHcc_algo_Aplanarity__597->SetBinError(6,0.004812542);
   VbbHcc_algo_Aplanarity__597->SetBinError(7,0.002268007);
   VbbHcc_algo_Aplanarity__597->SetBinError(8,0.002894277);
   VbbHcc_algo_Aplanarity__597->SetBinError(9,0.001369183);
   VbbHcc_algo_Aplanarity__597->SetBinError(10,0.001037855);
   VbbHcc_algo_Aplanarity__597->SetEntries(72469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity__597->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__597->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__597->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__597->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__597->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__597->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__597->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__597->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__597->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__597->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__597->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__597->Draw("HIST");
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

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
   Sphericity_algo_16->Range(-0.2,-0.03115036,1.133333,0.2803532);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__584 = new TH1D("VbbHcc_algo_Sphericity__584","",25,0,1);
   VbbHcc_algo_Sphericity__584->SetBinContent(1,0.2304593);
   VbbHcc_algo_Sphericity__584->SetBinContent(2,0.237336);
   VbbHcc_algo_Sphericity__584->SetBinContent(3,0.1201246);
   VbbHcc_algo_Sphericity__584->SetBinContent(4,0.07021205);
   VbbHcc_algo_Sphericity__584->SetBinContent(5,0.0682382);
   VbbHcc_algo_Sphericity__584->SetBinContent(6,0.02567316);
   VbbHcc_algo_Sphericity__584->SetBinContent(7,0.007209581);
   VbbHcc_algo_Sphericity__584->SetBinError(1,0.02281169);
   VbbHcc_algo_Sphericity__584->SetBinError(2,0.02250191);
   VbbHcc_algo_Sphericity__584->SetBinError(3,0.01631289);
   VbbHcc_algo_Sphericity__584->SetBinError(4,0.01283296);
   VbbHcc_algo_Sphericity__584->SetBinError(5,0.01287614);
   VbbHcc_algo_Sphericity__584->SetBinError(6,0.007473291);
   VbbHcc_algo_Sphericity__584->SetBinError(7,0.003819272);
   VbbHcc_algo_Sphericity__584->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity__584->SetFillColor(ci);
   VbbHcc_algo_Sphericity__584->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__584->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__584->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__584->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__584->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__584->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__584->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__584->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__584->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__584->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__584->Draw("HIST");
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

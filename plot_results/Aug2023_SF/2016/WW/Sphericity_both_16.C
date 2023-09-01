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
   Sphericity_both_16->Range(-0.2,-0.05355062,1.133333,0.4819555);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__939 = new TH1D("VbbHcc_both_Sphericity__939","",25,0,1);
   VbbHcc_both_Sphericity__939->SetBinContent(1,0.1158269);
   VbbHcc_both_Sphericity__939->SetBinContent(2,0.4080047);
   VbbHcc_both_Sphericity__939->SetBinContent(4,0.3198553);
   VbbHcc_both_Sphericity__939->SetBinContent(5,0.1002972);
   VbbHcc_both_Sphericity__939->SetBinContent(6,0.1005479);
   VbbHcc_both_Sphericity__939->SetBinContent(7,0.1147185);
   VbbHcc_both_Sphericity__939->SetBinContent(12,0.09694687);
   VbbHcc_both_Sphericity__939->SetBinError(1,0.1158269);
   VbbHcc_both_Sphericity__939->SetBinError(2,0.2356322);
   VbbHcc_both_Sphericity__939->SetBinError(4,0.1847051);
   VbbHcc_both_Sphericity__939->SetBinError(5,0.1002972);
   VbbHcc_both_Sphericity__939->SetBinError(6,0.1005479);
   VbbHcc_both_Sphericity__939->SetBinError(7,0.1147185);
   VbbHcc_both_Sphericity__939->SetBinError(12,0.09694687);
   VbbHcc_both_Sphericity__939->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity__939->SetFillColor(ci);
   VbbHcc_both_Sphericity__939->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__939->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__939->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__939->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__939->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__939->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__939->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__939->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__939->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__939->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__939->Draw("HIST");
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

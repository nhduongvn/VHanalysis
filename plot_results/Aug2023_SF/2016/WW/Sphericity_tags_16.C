#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.05984898,1.133333,0.5386408);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__219 = new TH1D("VbbHcc_tags_Sphericity__219","",25,0,1);
   VbbHcc_tags_Sphericity__219->SetBinContent(1,0.2495064);
   VbbHcc_tags_Sphericity__219->SetBinContent(2,0.1336153);
   VbbHcc_tags_Sphericity__219->SetBinContent(3,0.4559922);
   VbbHcc_tags_Sphericity__219->SetBinContent(4,0.2087201);
   VbbHcc_tags_Sphericity__219->SetBinContent(5,0.1002972);
   VbbHcc_tags_Sphericity__219->SetBinContent(7,0.1080661);
   VbbHcc_tags_Sphericity__219->SetBinError(1,0.1768788);
   VbbHcc_tags_Sphericity__219->SetBinError(2,0.1336153);
   VbbHcc_tags_Sphericity__219->SetBinError(3,0.230423);
   VbbHcc_tags_Sphericity__219->SetBinError(4,0.1476858);
   VbbHcc_tags_Sphericity__219->SetBinError(5,0.1002972);
   VbbHcc_tags_Sphericity__219->SetBinError(7,0.1080661);
   VbbHcc_tags_Sphericity__219->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity__219->SetFillColor(ci);
   VbbHcc_tags_Sphericity__219->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__219->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__219->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__219->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__219->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__219->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__219->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__219->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__219->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__219->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__219->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}

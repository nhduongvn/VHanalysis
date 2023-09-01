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
   Sphericity_tags_16->Range(-0.2,-0.004680272,1.133333,0.04212245);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__224 = new TH1D("VbbHcc_tags_Sphericity__224","",25,0,1);
   VbbHcc_tags_Sphericity__224->SetBinContent(1,0.03121626);
   VbbHcc_tags_Sphericity__224->SetBinContent(2,0.03565921);
   VbbHcc_tags_Sphericity__224->SetBinContent(3,0.006120488);
   VbbHcc_tags_Sphericity__224->SetBinContent(4,0.004046661);
   VbbHcc_tags_Sphericity__224->SetBinContent(6,0.002318411);
   VbbHcc_tags_Sphericity__224->SetBinError(1,0.008497498);
   VbbHcc_tags_Sphericity__224->SetBinError(2,0.009083509);
   VbbHcc_tags_Sphericity__224->SetBinError(3,0.003536704);
   VbbHcc_tags_Sphericity__224->SetBinError(4,0.002949954);
   VbbHcc_tags_Sphericity__224->SetBinError(6,0.002318411);
   VbbHcc_tags_Sphericity__224->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity__224->SetFillColor(ci);
   VbbHcc_tags_Sphericity__224->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__224->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__224->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__224->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__224->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__224->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__224->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__224->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__224->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__224->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__224->Draw("HIST");
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.008880649,1.133333,0.07992583);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__224 = new TH1D("VbbHcc_tags_Sphericity__224","",25,0,1);
   VbbHcc_tags_Sphericity__224->SetBinContent(1,0.06054129);
   VbbHcc_tags_Sphericity__224->SetBinContent(2,0.06766208);
   VbbHcc_tags_Sphericity__224->SetBinContent(3,0.01397276);
   VbbHcc_tags_Sphericity__224->SetBinContent(4,0.02814681);
   VbbHcc_tags_Sphericity__224->SetBinContent(5,0.01529015);
   VbbHcc_tags_Sphericity__224->SetBinContent(6,0.002219202);
   VbbHcc_tags_Sphericity__224->SetBinContent(7,0.004685718);
   VbbHcc_tags_Sphericity__224->SetBinError(1,0.01239423);
   VbbHcc_tags_Sphericity__224->SetBinError(2,0.01407968);
   VbbHcc_tags_Sphericity__224->SetBinError(3,0.005893906);
   VbbHcc_tags_Sphericity__224->SetBinError(4,0.008736263);
   VbbHcc_tags_Sphericity__224->SetBinError(5,0.006403398);
   VbbHcc_tags_Sphericity__224->SetBinError(6,0.002219202);
   VbbHcc_tags_Sphericity__224->SetBinError(7,0.004685718);
   VbbHcc_tags_Sphericity__224->SetEntries(77);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}

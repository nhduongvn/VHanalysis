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
   Sphericity_tags_18->Range(-0.2,-1.177881,1.133333,10.60092);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__220 = new TH1D("VbbHcc_tags_Sphericity__220","",25,0,1);
   VbbHcc_tags_Sphericity__220->SetBinContent(1,8.974328);
   VbbHcc_tags_Sphericity__220->SetBinContent(2,3.767791);
   VbbHcc_tags_Sphericity__220->SetBinContent(3,1.524109);
   VbbHcc_tags_Sphericity__220->SetBinContent(4,2.69728);
   VbbHcc_tags_Sphericity__220->SetBinContent(5,2.563612);
   VbbHcc_tags_Sphericity__220->SetBinContent(6,0.4220562);
   VbbHcc_tags_Sphericity__220->SetBinContent(9,0.4748496);
   VbbHcc_tags_Sphericity__220->SetBinError(1,2.77958);
   VbbHcc_tags_Sphericity__220->SetBinError(2,2.448163);
   VbbHcc_tags_Sphericity__220->SetBinError(3,0.8935357);
   VbbHcc_tags_Sphericity__220->SetBinError(4,1.634235);
   VbbHcc_tags_Sphericity__220->SetBinError(5,1.871348);
   VbbHcc_tags_Sphericity__220->SetBinError(6,0.4220562);
   VbbHcc_tags_Sphericity__220->SetBinError(9,0.4748496);
   VbbHcc_tags_Sphericity__220->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity__220->SetFillColor(ci);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->Draw("HIST");
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

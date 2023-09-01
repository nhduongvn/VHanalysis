#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-57.30498,1.133333,515.7447);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__233 = new TH1D("VbbHcc_tags_Aplanarity__233","",50,0,1);
   VbbHcc_tags_Aplanarity__233->SetBinContent(1,436.6093);
   VbbHcc_tags_Aplanarity__233->SetBinContent(2,60.76429);
   VbbHcc_tags_Aplanarity__233->SetBinContent(3,12.24505);
   VbbHcc_tags_Aplanarity__233->SetBinContent(4,5.46867);
   VbbHcc_tags_Aplanarity__233->SetBinContent(5,1.370693);
   VbbHcc_tags_Aplanarity__233->SetBinContent(6,0.497295);
   VbbHcc_tags_Aplanarity__233->SetBinContent(7,0.7035704);
   VbbHcc_tags_Aplanarity__233->SetBinContent(8,0.4542113);
   VbbHcc_tags_Aplanarity__233->SetBinContent(9,0.01113943);
   VbbHcc_tags_Aplanarity__233->SetBinContent(10,0.4703396);
   VbbHcc_tags_Aplanarity__233->SetBinContent(11,0.1744653);
   VbbHcc_tags_Aplanarity__233->SetBinError(1,27.75421);
   VbbHcc_tags_Aplanarity__233->SetBinError(2,23.57605);
   VbbHcc_tags_Aplanarity__233->SetBinError(3,2.628126);
   VbbHcc_tags_Aplanarity__233->SetBinError(4,2.402493);
   VbbHcc_tags_Aplanarity__233->SetBinError(5,0.6047094);
   VbbHcc_tags_Aplanarity__233->SetBinError(6,0.3023649);
   VbbHcc_tags_Aplanarity__233->SetBinError(7,0.4064169);
   VbbHcc_tags_Aplanarity__233->SetBinError(8,0.2616741);
   VbbHcc_tags_Aplanarity__233->SetBinError(9,0.01113943);
   VbbHcc_tags_Aplanarity__233->SetBinError(10,0.4703396);
   VbbHcc_tags_Aplanarity__233->SetBinError(11,0.1744653);
   VbbHcc_tags_Aplanarity__233->SetEntries(2245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity__233->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}

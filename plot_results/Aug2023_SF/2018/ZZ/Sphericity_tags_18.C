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
   Sphericity_tags_18->Range(-0.2,-4.161934,1.133333,37.4574);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__221 = new TH1D("VbbHcc_tags_Sphericity__221","",25,0,1);
   VbbHcc_tags_Sphericity__221->SetBinContent(1,31.70997);
   VbbHcc_tags_Sphericity__221->SetBinContent(2,22.04257);
   VbbHcc_tags_Sphericity__221->SetBinContent(3,10.6454);
   VbbHcc_tags_Sphericity__221->SetBinContent(4,6.364108);
   VbbHcc_tags_Sphericity__221->SetBinContent(5,6.208822);
   VbbHcc_tags_Sphericity__221->SetBinContent(6,1.391684);
   VbbHcc_tags_Sphericity__221->SetBinContent(7,0.9925078);
   VbbHcc_tags_Sphericity__221->SetBinContent(10,0.4036907);
   VbbHcc_tags_Sphericity__221->SetBinContent(11,0.6964223);
   VbbHcc_tags_Sphericity__221->SetBinContent(12,0.3308957);
   VbbHcc_tags_Sphericity__221->SetBinContent(13,0.8210679);
   VbbHcc_tags_Sphericity__221->SetBinContent(20,0.4163885);
   VbbHcc_tags_Sphericity__221->SetBinError(1,3.680742);
   VbbHcc_tags_Sphericity__221->SetBinError(2,2.935413);
   VbbHcc_tags_Sphericity__221->SetBinError(3,2.061858);
   VbbHcc_tags_Sphericity__221->SetBinError(4,1.575189);
   VbbHcc_tags_Sphericity__221->SetBinError(5,1.638508);
   VbbHcc_tags_Sphericity__221->SetBinError(6,0.7302443);
   VbbHcc_tags_Sphericity__221->SetBinError(7,0.6047726);
   VbbHcc_tags_Sphericity__221->SetBinError(10,0.4036907);
   VbbHcc_tags_Sphericity__221->SetBinError(11,0.4934839);
   VbbHcc_tags_Sphericity__221->SetBinError(12,0.3308957);
   VbbHcc_tags_Sphericity__221->SetBinError(13,0.8210679);
   VbbHcc_tags_Sphericity__221->SetBinError(20,0.4163885);
   VbbHcc_tags_Sphericity__221->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity__221->SetFillColor(ci);
   VbbHcc_tags_Sphericity__221->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__221->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__221->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__221->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__221->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__221->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__221->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__221->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__221->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__221->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__221->Draw("HIST");
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

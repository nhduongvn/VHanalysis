#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-2.990266,1.133333,26.91239);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__956 = new TH1D("VbbHcc_both_Aplanarity__956","",50,0,1);
   VbbHcc_both_Aplanarity__956->SetBinContent(1,22.78298);
   VbbHcc_both_Aplanarity__956->SetBinContent(2,6.620045);
   VbbHcc_both_Aplanarity__956->SetBinContent(3,4.326361);
   VbbHcc_both_Aplanarity__956->SetBinContent(4,1.810989);
   VbbHcc_both_Aplanarity__956->SetBinContent(5,0.267219);
   VbbHcc_both_Aplanarity__956->SetBinContent(6,0.6727639);
   VbbHcc_both_Aplanarity__956->SetBinContent(7,0.1856276);
   VbbHcc_both_Aplanarity__956->SetBinContent(8,0.3545376);
   VbbHcc_both_Aplanarity__956->SetBinContent(9,0.1627956);
   VbbHcc_both_Aplanarity__956->SetBinError(1,2.24246);
   VbbHcc_both_Aplanarity__956->SetBinError(2,1.217508);
   VbbHcc_both_Aplanarity__956->SetBinError(3,0.9896773);
   VbbHcc_both_Aplanarity__956->SetBinError(4,0.6121138);
   VbbHcc_both_Aplanarity__956->SetBinError(5,0.267219);
   VbbHcc_both_Aplanarity__956->SetBinError(6,0.3938145);
   VbbHcc_both_Aplanarity__956->SetBinError(7,0.1856276);
   VbbHcc_both_Aplanarity__956->SetBinError(8,0.3545376);
   VbbHcc_both_Aplanarity__956->SetBinError(9,0.1627956);
   VbbHcc_both_Aplanarity__956->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity__956->SetFillColor(ci);
   VbbHcc_both_Aplanarity__956->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__956->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__956->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__956->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__956->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__956->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__956->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__956->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__956->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__956->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__956->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}

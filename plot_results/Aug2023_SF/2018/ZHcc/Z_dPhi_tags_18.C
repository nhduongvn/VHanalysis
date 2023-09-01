#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tags_18()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-0.001414572,4.533333,0.01273114);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__104 = new TH1D("VbbHcc_tags_Z_dPhi__104","",120,0,4);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(0,0.1011159);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(1,0.003166514);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(2,0.001688713);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(4,0.004224739);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(5,0.003099963);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(6,0.004948236);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(7,0.00521955);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(8,0.005748715);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(9,0.01077769);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(10,0.002018158);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(11,0.002440408);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(12,0.005158617);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(13,0.002669277);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(14,0.001286069);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(16,0.003304127);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(19,0.004424942);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(21,0.001922514);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(26,0.008115791);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(28,0.001690799);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(29,0.003571179);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(33,0.003120856);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(37,0.003078801);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(44,0.002161793);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(47,0.001935528);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(65,0.001955411);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(87,0.003673684);
   VbbHcc_tags_Z_dPhi__104->SetBinError(0,0.01643903);
   VbbHcc_tags_Z_dPhi__104->SetBinError(1,0.003166514);
   VbbHcc_tags_Z_dPhi__104->SetBinError(2,0.001688713);
   VbbHcc_tags_Z_dPhi__104->SetBinError(4,0.00299116);
   VbbHcc_tags_Z_dPhi__104->SetBinError(5,0.003099963);
   VbbHcc_tags_Z_dPhi__104->SetBinError(6,0.003514559);
   VbbHcc_tags_Z_dPhi__104->SetBinError(7,0.003706182);
   VbbHcc_tags_Z_dPhi__104->SetBinError(8,0.004109214);
   VbbHcc_tags_Z_dPhi__104->SetBinError(9,0.005495905);
   VbbHcc_tags_Z_dPhi__104->SetBinError(10,0.002018158);
   VbbHcc_tags_Z_dPhi__104->SetBinError(11,0.002440408);
   VbbHcc_tags_Z_dPhi__104->SetBinError(12,0.00374466);
   VbbHcc_tags_Z_dPhi__104->SetBinError(13,0.002669277);
   VbbHcc_tags_Z_dPhi__104->SetBinError(14,0.001286069);
   VbbHcc_tags_Z_dPhi__104->SetBinError(16,0.002354942);
   VbbHcc_tags_Z_dPhi__104->SetBinError(19,0.004424942);
   VbbHcc_tags_Z_dPhi__104->SetBinError(21,0.001922514);
   VbbHcc_tags_Z_dPhi__104->SetBinError(26,0.005807009);
   VbbHcc_tags_Z_dPhi__104->SetBinError(28,0.001690799);
   VbbHcc_tags_Z_dPhi__104->SetBinError(29,0.003571179);
   VbbHcc_tags_Z_dPhi__104->SetBinError(33,0.003120856);
   VbbHcc_tags_Z_dPhi__104->SetBinError(37,0.003078801);
   VbbHcc_tags_Z_dPhi__104->SetBinError(44,0.002161793);
   VbbHcc_tags_Z_dPhi__104->SetBinError(47,0.001935528);
   VbbHcc_tags_Z_dPhi__104->SetBinError(65,0.001955411);
   VbbHcc_tags_Z_dPhi__104->SetBinError(87,0.003673684);
   VbbHcc_tags_Z_dPhi__104->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dPhi__104->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi__104->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi__104->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi__104->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__104->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__104->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__104->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__104->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__104->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__104->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__104->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__104->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_18->Modified();
   Z_dPhi_tags_18->cd();
   Z_dPhi_tags_18->SetSelected(Z_dPhi_tags_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tags_16()
{
//=========Macro generated from canvas: Z_dPhi_tags_16/Z_dPhi_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_tags_16 = new TCanvas("Z_dPhi_tags_16", "Z_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_16->SetHighLightColor(2);
   Z_dPhi_tags_16->Range(-0.8,-0.0005741102,4.533333,0.005166992);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__104 = new TH1D("VbbHcc_tags_Z_dPhi__104","",120,0,4);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(0,0.04560132);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(3,0.001516135);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(6,0.004374173);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(8,0.00269847);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(9,0.001871144);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(10,0.002352597);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(11,0.001918567);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(13,0.002338156);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(14,0.003043712);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(16,0.001533761);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(18,0.002135123);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(23,0.001943164);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(27,0.001833005);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(30,0.001927266);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(31,0.002570627);
   VbbHcc_tags_Z_dPhi__104->SetBinContent(60,0.001703818);
   VbbHcc_tags_Z_dPhi__104->SetBinError(0,0.01036345);
   VbbHcc_tags_Z_dPhi__104->SetBinError(3,0.001516135);
   VbbHcc_tags_Z_dPhi__104->SetBinError(6,0.003098578);
   VbbHcc_tags_Z_dPhi__104->SetBinError(8,0.00269847);
   VbbHcc_tags_Z_dPhi__104->SetBinError(9,0.001871144);
   VbbHcc_tags_Z_dPhi__104->SetBinError(10,0.002352597);
   VbbHcc_tags_Z_dPhi__104->SetBinError(11,0.001918567);
   VbbHcc_tags_Z_dPhi__104->SetBinError(13,0.002338156);
   VbbHcc_tags_Z_dPhi__104->SetBinError(14,0.003043712);
   VbbHcc_tags_Z_dPhi__104->SetBinError(16,0.001533761);
   VbbHcc_tags_Z_dPhi__104->SetBinError(18,0.002135123);
   VbbHcc_tags_Z_dPhi__104->SetBinError(23,0.001943164);
   VbbHcc_tags_Z_dPhi__104->SetBinError(27,0.001833005);
   VbbHcc_tags_Z_dPhi__104->SetBinError(30,0.001927266);
   VbbHcc_tags_Z_dPhi__104->SetBinError(31,0.002570627);
   VbbHcc_tags_Z_dPhi__104->SetBinError(60,0.001703818);
   VbbHcc_tags_Z_dPhi__104->SetEntries(36);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_16->Modified();
   Z_dPhi_tags_16->cd();
   Z_dPhi_tags_16->SetSelected(Z_dPhi_tags_16);
}

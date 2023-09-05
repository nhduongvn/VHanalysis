#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-0.4830121,6.8,4.347109);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__86 = new TH1D("VbbHcc_tags_H_dR__86","",30,0,6);
   VbbHcc_tags_H_dR__86->SetBinContent(3,1.127307);
   VbbHcc_tags_H_dR__86->SetBinContent(4,2.419774);
   VbbHcc_tags_H_dR__86->SetBinContent(5,2.255572);
   VbbHcc_tags_H_dR__86->SetBinContent(6,2.305727);
   VbbHcc_tags_H_dR__86->SetBinContent(7,0.9594851);
   VbbHcc_tags_H_dR__86->SetBinContent(8,0.8050687);
   VbbHcc_tags_H_dR__86->SetBinContent(9,0.3546865);
   VbbHcc_tags_H_dR__86->SetBinContent(10,0.7573753);
   VbbHcc_tags_H_dR__86->SetBinContent(11,0.7744244);
   VbbHcc_tags_H_dR__86->SetBinContent(12,0.9910985);
   VbbHcc_tags_H_dR__86->SetBinContent(13,0.9978249);
   VbbHcc_tags_H_dR__86->SetBinContent(14,2.042253);
   VbbHcc_tags_H_dR__86->SetBinContent(15,3.680092);
   VbbHcc_tags_H_dR__86->SetBinContent(16,2.569274);
   VbbHcc_tags_H_dR__86->SetBinContent(17,3.328575);
   VbbHcc_tags_H_dR__86->SetBinContent(18,3.449575);
   VbbHcc_tags_H_dR__86->SetBinContent(19,1.037609);
   VbbHcc_tags_H_dR__86->SetBinContent(20,1.716629);
   VbbHcc_tags_H_dR__86->SetBinContent(21,2.075472);
   VbbHcc_tags_H_dR__86->SetBinContent(22,0.90168);
   VbbHcc_tags_H_dR__86->SetBinContent(23,0.4321904);
   VbbHcc_tags_H_dR__86->SetBinContent(24,0.505554);
   VbbHcc_tags_H_dR__86->SetBinContent(26,0.2054376);
   VbbHcc_tags_H_dR__86->SetBinContent(27,0.2286065);
   VbbHcc_tags_H_dR__86->SetBinContent(28,0.2437966);
   VbbHcc_tags_H_dR__86->SetBinContent(30,0.4823731);
   VbbHcc_tags_H_dR__86->SetBinError(3,0.461978);
   VbbHcc_tags_H_dR__86->SetBinError(4,0.7464807);
   VbbHcc_tags_H_dR__86->SetBinError(5,0.7271297);
   VbbHcc_tags_H_dR__86->SetBinError(6,0.7391586);
   VbbHcc_tags_H_dR__86->SetBinError(7,0.4433685);
   VbbHcc_tags_H_dR__86->SetBinError(8,0.4057232);
   VbbHcc_tags_H_dR__86->SetBinError(9,0.2516436);
   VbbHcc_tags_H_dR__86->SetBinError(10,0.4093846);
   VbbHcc_tags_H_dR__86->SetBinError(11,0.3898859);
   VbbHcc_tags_H_dR__86->SetBinError(12,0.4467814);
   VbbHcc_tags_H_dR__86->SetBinError(13,0.5131415);
   VbbHcc_tags_H_dR__86->SetBinError(14,0.6294503);
   VbbHcc_tags_H_dR__86->SetBinError(15,0.9068303);
   VbbHcc_tags_H_dR__86->SetBinError(16,0.7263937);
   VbbHcc_tags_H_dR__86->SetBinError(17,0.8848891);
   VbbHcc_tags_H_dR__86->SetBinError(18,0.8671587);
   VbbHcc_tags_H_dR__86->SetBinError(19,0.4668731);
   VbbHcc_tags_H_dR__86->SetBinError(20,0.6129128);
   VbbHcc_tags_H_dR__86->SetBinError(21,0.6998204);
   VbbHcc_tags_H_dR__86->SetBinError(22,0.4552343);
   VbbHcc_tags_H_dR__86->SetBinError(23,0.3294608);
   VbbHcc_tags_H_dR__86->SetBinError(24,0.3604077);
   VbbHcc_tags_H_dR__86->SetBinError(26,0.2054376);
   VbbHcc_tags_H_dR__86->SetBinError(27,0.2286065);
   VbbHcc_tags_H_dR__86->SetBinError(28,0.2437966);
   VbbHcc_tags_H_dR__86->SetBinError(30,0.3430222);
   VbbHcc_tags_H_dR__86->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR__86->SetFillColor(ci);
   VbbHcc_tags_H_dR__86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__86->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__86->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__86->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__86->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__86->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__86->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__86->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__86->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__86->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__86->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}

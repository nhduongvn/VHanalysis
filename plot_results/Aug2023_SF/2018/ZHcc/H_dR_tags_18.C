#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-0.00334847,6.8,0.03013623);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__89 = new TH1D("VbbHcc_tags_H_dR__89","",30,0,6);
   VbbHcc_tags_H_dR__89->SetBinContent(3,0.01477901);
   VbbHcc_tags_H_dR__89->SetBinContent(4,0.009247443);
   VbbHcc_tags_H_dR__89->SetBinContent(5,0.01496892);
   VbbHcc_tags_H_dR__89->SetBinContent(6,0.02551215);
   VbbHcc_tags_H_dR__89->SetBinContent(7,0.01399298);
   VbbHcc_tags_H_dR__89->SetBinContent(8,0.005633501);
   VbbHcc_tags_H_dR__89->SetBinContent(9,0.007409921);
   VbbHcc_tags_H_dR__89->SetBinContent(10,0.01022055);
   VbbHcc_tags_H_dR__89->SetBinContent(11,0.00800638);
   VbbHcc_tags_H_dR__89->SetBinContent(12,0.006014961);
   VbbHcc_tags_H_dR__89->SetBinContent(13,0.002267097);
   VbbHcc_tags_H_dR__89->SetBinContent(14,0.004685718);
   VbbHcc_tags_H_dR__89->SetBinContent(15,0.005623775);
   VbbHcc_tags_H_dR__89->SetBinContent(16,0.003430073);
   VbbHcc_tags_H_dR__89->SetBinContent(17,0.006486953);
   VbbHcc_tags_H_dR__89->SetBinContent(19,0.007912408);
   VbbHcc_tags_H_dR__89->SetBinContent(21,0.005133389);
   VbbHcc_tags_H_dR__89->SetBinContent(22,0.00333504);
   VbbHcc_tags_H_dR__89->SetBinContent(23,0.003228405);
   VbbHcc_tags_H_dR__89->SetBinContent(24,0.01401684);
   VbbHcc_tags_H_dR__89->SetBinContent(25,0.00397497);
   VbbHcc_tags_H_dR__89->SetBinContent(26,0.005853155);
   VbbHcc_tags_H_dR__89->SetBinContent(29,0.006220016);
   VbbHcc_tags_H_dR__89->SetBinContent(30,0.00456435);
   VbbHcc_tags_H_dR__89->SetBinError(3,0.005805116);
   VbbHcc_tags_H_dR__89->SetBinError(4,0.004674307);
   VbbHcc_tags_H_dR__89->SetBinError(5,0.006278235);
   VbbHcc_tags_H_dR__89->SetBinError(6,0.009368291);
   VbbHcc_tags_H_dR__89->SetBinError(7,0.006497462);
   VbbHcc_tags_H_dR__89->SetBinError(8,0.003470368);
   VbbHcc_tags_H_dR__89->SetBinError(9,0.004324953);
   VbbHcc_tags_H_dR__89->SetBinError(10,0.005307988);
   VbbHcc_tags_H_dR__89->SetBinError(11,0.00401085);
   VbbHcc_tags_H_dR__89->SetBinError(12,0.004259162);
   VbbHcc_tags_H_dR__89->SetBinError(13,0.002267097);
   VbbHcc_tags_H_dR__89->SetBinError(14,0.004685718);
   VbbHcc_tags_H_dR__89->SetBinError(15,0.003994485);
   VbbHcc_tags_H_dR__89->SetBinError(16,0.003430073);
   VbbHcc_tags_H_dR__89->SetBinError(17,0.003754691);
   VbbHcc_tags_H_dR__89->SetBinError(19,0.004000754);
   VbbHcc_tags_H_dR__89->SetBinError(21,0.003731377);
   VbbHcc_tags_H_dR__89->SetBinError(22,0.002399444);
   VbbHcc_tags_H_dR__89->SetBinError(23,0.002959504);
   VbbHcc_tags_H_dR__89->SetBinError(24,0.006552367);
   VbbHcc_tags_H_dR__89->SetBinError(25,0.002811689);
   VbbHcc_tags_H_dR__89->SetBinError(26,0.004173134);
   VbbHcc_tags_H_dR__89->SetBinError(29,0.004516285);
   VbbHcc_tags_H_dR__89->SetBinError(30,0.003269665);
   VbbHcc_tags_H_dR__89->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR__89->SetFillColor(ci);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__89->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}

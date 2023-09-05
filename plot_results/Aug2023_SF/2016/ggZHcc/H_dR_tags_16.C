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
   H_dR_tags_16->Range(-1.2,-0.0005796209,6.8,0.005216588);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__90 = new TH1D("VbbHcc_tags_H_dR__90","",30,0,6);
   VbbHcc_tags_H_dR__90->SetBinContent(3,0.0005474192);
   VbbHcc_tags_H_dR__90->SetBinContent(4,0.002113396);
   VbbHcc_tags_H_dR__90->SetBinContent(5,0.004416159);
   VbbHcc_tags_H_dR__90->SetBinContent(6,0.002026558);
   VbbHcc_tags_H_dR__90->SetBinContent(7,0.004206972);
   VbbHcc_tags_H_dR__90->SetBinContent(8,0.00208079);
   VbbHcc_tags_H_dR__90->SetBinContent(9,0.0008938978);
   VbbHcc_tags_H_dR__90->SetBinContent(10,0.001016622);
   VbbHcc_tags_H_dR__90->SetBinContent(11,0.001982303);
   VbbHcc_tags_H_dR__90->SetBinContent(12,0.001149124);
   VbbHcc_tags_H_dR__90->SetBinContent(13,0.001688789);
   VbbHcc_tags_H_dR__90->SetBinContent(14,0.001174271);
   VbbHcc_tags_H_dR__90->SetBinContent(15,0.001124192);
   VbbHcc_tags_H_dR__90->SetBinContent(16,0.001620406);
   VbbHcc_tags_H_dR__90->SetBinContent(17,0.001015088);
   VbbHcc_tags_H_dR__90->SetBinContent(18,0.002055969);
   VbbHcc_tags_H_dR__90->SetBinContent(19,0.001333308);
   VbbHcc_tags_H_dR__90->SetBinContent(20,0.0004130693);
   VbbHcc_tags_H_dR__90->SetBinContent(21,0.0007917187);
   VbbHcc_tags_H_dR__90->SetBinContent(22,0.0008056851);
   VbbHcc_tags_H_dR__90->SetBinContent(23,0.001111037);
   VbbHcc_tags_H_dR__90->SetBinContent(25,0.0002404538);
   VbbHcc_tags_H_dR__90->SetBinContent(26,0.000583263);
   VbbHcc_tags_H_dR__90->SetBinContent(27,0.0002554124);
   VbbHcc_tags_H_dR__90->SetBinContent(28,0.000612321);
   VbbHcc_tags_H_dR__90->SetBinContent(29,0.0002414911);
   VbbHcc_tags_H_dR__90->SetBinContent(31,0.000350295);
   VbbHcc_tags_H_dR__90->SetBinError(3,0.0003872949);
   VbbHcc_tags_H_dR__90->SetBinError(4,0.0008138441);
   VbbHcc_tags_H_dR__90->SetBinError(5,0.00115214);
   VbbHcc_tags_H_dR__90->SetBinError(6,0.0007682832);
   VbbHcc_tags_H_dR__90->SetBinError(7,0.001088704);
   VbbHcc_tags_H_dR__90->SetBinError(8,0.000727339);
   VbbHcc_tags_H_dR__90->SetBinError(9,0.000520737);
   VbbHcc_tags_H_dR__90->SetBinError(10,0.0005890586);
   VbbHcc_tags_H_dR__90->SetBinError(11,0.00075474);
   VbbHcc_tags_H_dR__90->SetBinError(12,0.0005789022);
   VbbHcc_tags_H_dR__90->SetBinError(13,0.0006973622);
   VbbHcc_tags_H_dR__90->SetBinError(14,0.0005906557);
   VbbHcc_tags_H_dR__90->SetBinError(15,0.0005666195);
   VbbHcc_tags_H_dR__90->SetBinError(16,0.0007320019);
   VbbHcc_tags_H_dR__90->SetBinError(17,0.0005092066);
   VbbHcc_tags_H_dR__90->SetBinError(18,0.0007839017);
   VbbHcc_tags_H_dR__90->SetBinError(19,0.0005973263);
   VbbHcc_tags_H_dR__90->SetBinError(20,0.000292815);
   VbbHcc_tags_H_dR__90->SetBinError(21,0.0004598341);
   VbbHcc_tags_H_dR__90->SetBinError(22,0.0004739406);
   VbbHcc_tags_H_dR__90->SetBinError(23,0.0005558954);
   VbbHcc_tags_H_dR__90->SetBinError(25,0.0002404538);
   VbbHcc_tags_H_dR__90->SetBinError(26,0.0004128994);
   VbbHcc_tags_H_dR__90->SetBinError(27,0.0002554124);
   VbbHcc_tags_H_dR__90->SetBinError(28,0.00043518);
   VbbHcc_tags_H_dR__90->SetBinError(29,0.0002414911);
   VbbHcc_tags_H_dR__90->SetBinError(31,0.000350295);
   VbbHcc_tags_H_dR__90->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR__90->SetFillColor(ci);
   VbbHcc_tags_H_dR__90->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__90->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__90->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__90->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__90->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__90->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__90->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__90->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__90->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__90->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__90->Draw("HIST");
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

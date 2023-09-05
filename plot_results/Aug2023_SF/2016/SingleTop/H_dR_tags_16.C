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
   H_dR_tags_16->Range(-1.2,-5.053747,6.8,45.48372);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__80 = new TH1D("VbbHcc_tags_H_dR__80","",30,0,6);
   VbbHcc_tags_H_dR__80->SetBinContent(3,21.25623);
   VbbHcc_tags_H_dR__80->SetBinContent(4,20.14696);
   VbbHcc_tags_H_dR__80->SetBinContent(5,19.86995);
   VbbHcc_tags_H_dR__80->SetBinContent(6,24.14547);
   VbbHcc_tags_H_dR__80->SetBinContent(7,23.37065);
   VbbHcc_tags_H_dR__80->SetBinContent(8,20.0212);
   VbbHcc_tags_H_dR__80->SetBinContent(9,24.82308);
   VbbHcc_tags_H_dR__80->SetBinContent(10,22.36594);
   VbbHcc_tags_H_dR__80->SetBinContent(11,24.30691);
   VbbHcc_tags_H_dR__80->SetBinContent(12,28.73614);
   VbbHcc_tags_H_dR__80->SetBinContent(13,26.23123);
   VbbHcc_tags_H_dR__80->SetBinContent(14,32.40987);
   VbbHcc_tags_H_dR__80->SetBinContent(15,38.50474);
   VbbHcc_tags_H_dR__80->SetBinContent(16,37.85146);
   VbbHcc_tags_H_dR__80->SetBinContent(17,35.04844);
   VbbHcc_tags_H_dR__80->SetBinContent(18,30.39868);
   VbbHcc_tags_H_dR__80->SetBinContent(19,24.17094);
   VbbHcc_tags_H_dR__80->SetBinContent(20,23.94018);
   VbbHcc_tags_H_dR__80->SetBinContent(21,20.05633);
   VbbHcc_tags_H_dR__80->SetBinContent(22,16.31511);
   VbbHcc_tags_H_dR__80->SetBinContent(23,15.37778);
   VbbHcc_tags_H_dR__80->SetBinContent(24,11.28172);
   VbbHcc_tags_H_dR__80->SetBinContent(25,8.505374);
   VbbHcc_tags_H_dR__80->SetBinContent(26,9.427517);
   VbbHcc_tags_H_dR__80->SetBinContent(27,4.892998);
   VbbHcc_tags_H_dR__80->SetBinContent(28,4.888218);
   VbbHcc_tags_H_dR__80->SetBinContent(29,4.283476);
   VbbHcc_tags_H_dR__80->SetBinContent(30,3.097478);
   VbbHcc_tags_H_dR__80->SetBinContent(31,1.894997);
   VbbHcc_tags_H_dR__80->SetBinError(3,1.897093);
   VbbHcc_tags_H_dR__80->SetBinError(4,1.673223);
   VbbHcc_tags_H_dR__80->SetBinError(5,1.775039);
   VbbHcc_tags_H_dR__80->SetBinError(6,2.002329);
   VbbHcc_tags_H_dR__80->SetBinError(7,1.962222);
   VbbHcc_tags_H_dR__80->SetBinError(8,1.726167);
   VbbHcc_tags_H_dR__80->SetBinError(9,2.071346);
   VbbHcc_tags_H_dR__80->SetBinError(10,1.880604);
   VbbHcc_tags_H_dR__80->SetBinError(11,1.982481);
   VbbHcc_tags_H_dR__80->SetBinError(12,2.136368);
   VbbHcc_tags_H_dR__80->SetBinError(13,1.974628);
   VbbHcc_tags_H_dR__80->SetBinError(14,2.251477);
   VbbHcc_tags_H_dR__80->SetBinError(15,2.437159);
   VbbHcc_tags_H_dR__80->SetBinError(16,2.395067);
   VbbHcc_tags_H_dR__80->SetBinError(17,2.334252);
   VbbHcc_tags_H_dR__80->SetBinError(18,2.061405);
   VbbHcc_tags_H_dR__80->SetBinError(19,1.780909);
   VbbHcc_tags_H_dR__80->SetBinError(20,1.937019);
   VbbHcc_tags_H_dR__80->SetBinError(21,1.713888);
   VbbHcc_tags_H_dR__80->SetBinError(22,1.654331);
   VbbHcc_tags_H_dR__80->SetBinError(23,1.542072);
   VbbHcc_tags_H_dR__80->SetBinError(24,1.285259);
   VbbHcc_tags_H_dR__80->SetBinError(25,1.045155);
   VbbHcc_tags_H_dR__80->SetBinError(26,1.30568);
   VbbHcc_tags_H_dR__80->SetBinError(27,0.8134118);
   VbbHcc_tags_H_dR__80->SetBinError(28,0.9570716);
   VbbHcc_tags_H_dR__80->SetBinError(29,0.810724);
   VbbHcc_tags_H_dR__80->SetBinError(30,0.6499496);
   VbbHcc_tags_H_dR__80->SetBinError(31,0.4630851);
   VbbHcc_tags_H_dR__80->SetEntries(9408);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR__80->SetFillColor(ci);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__80->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->Draw("HIST");
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

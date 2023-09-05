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
   Z_dPhi_tags_16->Range(-0.8,-0.0353665,4.533333,0.3182985);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__100 = new TH1D("VbbHcc_tags_Z_dPhi__100","",120,0,4);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(0,1.514111);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(1,0.1902186);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(2,0.269459);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(3,0.2175574);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(4,0.09024115);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(6,0.08794218);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(7,0.1747746);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(10,0.2686253);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(11,0.1952845);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(12,0.08696594);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(13,0.06786106);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(20,0.1227835);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(21,0.1898282);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(22,0.09546661);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(23,0.09930289);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(24,0.08483032);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(27,0.08391191);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(31,0.0792178);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(32,0.06914471);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(33,0.08760819);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(35,0.08569184);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(42,0.07500666);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(44,0.1428178);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(55,0.09650676);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(81,0.1203384);
   VbbHcc_tags_Z_dPhi__100->SetBinError(0,0.3974562);
   VbbHcc_tags_Z_dPhi__100->SetBinError(1,0.1363106);
   VbbHcc_tags_Z_dPhi__100->SetBinError(2,0.1578133);
   VbbHcc_tags_Z_dPhi__100->SetBinError(3,0.1265664);
   VbbHcc_tags_Z_dPhi__100->SetBinError(4,0.09024115);
   VbbHcc_tags_Z_dPhi__100->SetBinError(6,0.08794218);
   VbbHcc_tags_Z_dPhi__100->SetBinError(7,0.1239967);
   VbbHcc_tags_Z_dPhi__100->SetBinError(10,0.1903749);
   VbbHcc_tags_Z_dPhi__100->SetBinError(11,0.1393332);
   VbbHcc_tags_Z_dPhi__100->SetBinError(12,0.08696594);
   VbbHcc_tags_Z_dPhi__100->SetBinError(13,0.06786106);
   VbbHcc_tags_Z_dPhi__100->SetBinError(20,0.1227835);
   VbbHcc_tags_Z_dPhi__100->SetBinError(21,0.1359078);
   VbbHcc_tags_Z_dPhi__100->SetBinError(22,0.09546661);
   VbbHcc_tags_Z_dPhi__100->SetBinError(23,0.09930289);
   VbbHcc_tags_Z_dPhi__100->SetBinError(24,0.08483032);
   VbbHcc_tags_Z_dPhi__100->SetBinError(27,0.08391191);
   VbbHcc_tags_Z_dPhi__100->SetBinError(31,0.0792178);
   VbbHcc_tags_Z_dPhi__100->SetBinError(32,0.06914471);
   VbbHcc_tags_Z_dPhi__100->SetBinError(33,0.08760819);
   VbbHcc_tags_Z_dPhi__100->SetBinError(35,0.08569184);
   VbbHcc_tags_Z_dPhi__100->SetBinError(42,0.07500666);
   VbbHcc_tags_Z_dPhi__100->SetBinError(44,0.1428178);
   VbbHcc_tags_Z_dPhi__100->SetBinError(55,0.09650676);
   VbbHcc_tags_Z_dPhi__100->SetBinError(81,0.1203384);
   VbbHcc_tags_Z_dPhi__100->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dPhi__100->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->Draw("HIST");
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tags_16()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-0.0313731,4.533333,0.2823579);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__115 = new TH1D("VbbHcc_tags_H_dPhi__115","",120,0,4);
   VbbHcc_tags_H_dPhi__115->SetBinContent(0,2.753322);
   VbbHcc_tags_H_dPhi__115->SetBinContent(1,0.08024226);
   VbbHcc_tags_H_dPhi__115->SetBinContent(4,0.09930289);
   VbbHcc_tags_H_dPhi__115->SetBinContent(7,0.08391191);
   VbbHcc_tags_H_dPhi__115->SetBinContent(11,0.1227835);
   VbbHcc_tags_H_dPhi__115->SetBinContent(14,0.1464007);
   VbbHcc_tags_H_dPhi__115->SetBinContent(15,0.109159);
   VbbHcc_tags_H_dPhi__115->SetBinContent(17,0.1107461);
   VbbHcc_tags_H_dPhi__115->SetBinContent(20,0.06914471);
   VbbHcc_tags_H_dPhi__115->SetBinContent(21,0.08449427);
   VbbHcc_tags_H_dPhi__115->SetBinContent(34,0.1098299);
   VbbHcc_tags_H_dPhi__115->SetBinContent(37,0.1252896);
   VbbHcc_tags_H_dPhi__115->SetBinContent(40,0.0792178);
   VbbHcc_tags_H_dPhi__115->SetBinContent(46,0.2390332);
   VbbHcc_tags_H_dPhi__115->SetBinContent(58,0.1113723);
   VbbHcc_tags_H_dPhi__115->SetBinContent(70,0.0945323);
   VbbHcc_tags_H_dPhi__115->SetBinContent(91,0.1767139);
   VbbHcc_tags_H_dPhi__115->SetBinError(0,0.5237004);
   VbbHcc_tags_H_dPhi__115->SetBinError(1,0.08024226);
   VbbHcc_tags_H_dPhi__115->SetBinError(4,0.09930289);
   VbbHcc_tags_H_dPhi__115->SetBinError(7,0.08391191);
   VbbHcc_tags_H_dPhi__115->SetBinError(11,0.1227835);
   VbbHcc_tags_H_dPhi__115->SetBinError(14,0.1038596);
   VbbHcc_tags_H_dPhi__115->SetBinError(15,0.109159);
   VbbHcc_tags_H_dPhi__115->SetBinError(17,0.1107461);
   VbbHcc_tags_H_dPhi__115->SetBinError(20,0.06914471);
   VbbHcc_tags_H_dPhi__115->SetBinError(21,0.08449427);
   VbbHcc_tags_H_dPhi__115->SetBinError(34,0.1098299);
   VbbHcc_tags_H_dPhi__115->SetBinError(37,0.1252896);
   VbbHcc_tags_H_dPhi__115->SetBinError(40,0.0792178);
   VbbHcc_tags_H_dPhi__115->SetBinError(46,0.1690956);
   VbbHcc_tags_H_dPhi__115->SetBinError(58,0.1113723);
   VbbHcc_tags_H_dPhi__115->SetBinError(70,0.0945323);
   VbbHcc_tags_H_dPhi__115->SetBinError(91,0.1251765);
   VbbHcc_tags_H_dPhi__115->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dPhi__115->SetFillColor(ci);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_16->Modified();
   H_dPhi_tags_16->cd();
   H_dPhi_tags_16->SetSelected(H_dPhi_tags_16);
}

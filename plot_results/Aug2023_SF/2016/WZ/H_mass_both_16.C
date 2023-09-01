#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.06495638,453.3333,0.5846074);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__745 = new TH1D("VbbHcc_both_H_mass__745","",40,0,400);
   VbbHcc_both_H_mass__745->SetBinContent(4,0.1069391);
   VbbHcc_both_H_mass__745->SetBinContent(6,0.06786106);
   VbbHcc_both_H_mass__745->SetBinContent(8,0.1957097);
   VbbHcc_both_H_mass__745->SetBinContent(9,0.4949057);
   VbbHcc_both_H_mass__745->SetBinContent(10,0.3596895);
   VbbHcc_both_H_mass__745->SetBinContent(11,0.1589818);
   VbbHcc_both_H_mass__745->SetBinContent(12,0.2020013);
   VbbHcc_both_H_mass__745->SetBinContent(13,0.1947021);
   VbbHcc_both_H_mass__745->SetBinContent(14,0.1893024);
   VbbHcc_both_H_mass__745->SetBinContent(15,0.07675085);
   VbbHcc_both_H_mass__745->SetBinContent(16,0.103603);
   VbbHcc_both_H_mass__745->SetBinContent(18,0.06727392);
   VbbHcc_both_H_mass__745->SetBinContent(20,0.271383);
   VbbHcc_both_H_mass__745->SetBinContent(21,0.08505562);
   VbbHcc_both_H_mass__745->SetBinContent(23,0.2861535);
   VbbHcc_both_H_mass__745->SetBinContent(25,0.06333091);
   VbbHcc_both_H_mass__745->SetBinContent(26,0.2671894);
   VbbHcc_both_H_mass__745->SetBinContent(27,0.08024226);
   VbbHcc_both_H_mass__745->SetBinContent(28,0.07500666);
   VbbHcc_both_H_mass__745->SetBinContent(30,0.08794218);
   VbbHcc_both_H_mass__745->SetBinContent(31,0.175933);
   VbbHcc_both_H_mass__745->SetBinContent(32,0.1252896);
   VbbHcc_both_H_mass__745->SetBinContent(33,0.1113723);
   VbbHcc_both_H_mass__745->SetBinContent(37,0.1429504);
   VbbHcc_both_H_mass__745->SetBinContent(40,0.09650676);
   VbbHcc_both_H_mass__745->SetBinContent(41,0.8036746);
   VbbHcc_both_H_mass__745->SetBinError(4,0.1069391);
   VbbHcc_both_H_mass__745->SetBinError(6,0.06786106);
   VbbHcc_both_H_mass__745->SetBinError(8,0.1395833);
   VbbHcc_both_H_mass__745->SetBinError(9,0.2225088);
   VbbHcc_both_H_mass__745->SetBinError(10,0.1814731);
   VbbHcc_both_H_mass__745->SetBinError(11,0.1124183);
   VbbHcc_both_H_mass__745->SetBinError(12,0.1461207);
   VbbHcc_both_H_mass__745->SetBinError(13,0.1389808);
   VbbHcc_both_H_mass__745->SetBinError(14,0.1355673);
   VbbHcc_both_H_mass__745->SetBinError(15,0.07675085);
   VbbHcc_both_H_mass__745->SetBinError(16,0.103603);
   VbbHcc_both_H_mass__745->SetBinError(18,0.06727392);
   VbbHcc_both_H_mass__745->SetBinError(20,0.1605048);
   VbbHcc_both_H_mass__745->SetBinError(21,0.08505562);
   VbbHcc_both_H_mass__745->SetBinError(23,0.2023414);
   VbbHcc_both_H_mass__745->SetBinError(25,0.06333091);
   VbbHcc_both_H_mass__745->SetBinError(26,0.1547666);
   VbbHcc_both_H_mass__745->SetBinError(27,0.08024226);
   VbbHcc_both_H_mass__745->SetBinError(28,0.07500666);
   VbbHcc_both_H_mass__745->SetBinError(30,0.08794218);
   VbbHcc_both_H_mass__745->SetBinError(31,0.124445);
   VbbHcc_both_H_mass__745->SetBinError(32,0.1252896);
   VbbHcc_both_H_mass__745->SetBinError(33,0.1113723);
   VbbHcc_both_H_mass__745->SetBinError(37,0.1066236);
   VbbHcc_both_H_mass__745->SetBinError(40,0.09650676);
   VbbHcc_both_H_mass__745->SetBinError(41,0.291603);
   VbbHcc_both_H_mass__745->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass__745->SetFillColor(ci);
   VbbHcc_both_H_mass__745->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__745->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__745->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__745->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__745->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__745->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__745->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__745->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__745->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__745->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__745->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}

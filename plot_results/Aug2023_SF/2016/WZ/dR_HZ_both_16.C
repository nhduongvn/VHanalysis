#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_both_16()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-0.03954295,6.8,0.3558865);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ__865 = new TH1D("VbbHcc_both_dR_HZ__865","",60,0,6);
   VbbHcc_both_dR_HZ__865->SetBinContent(5,0.1098299);
   VbbHcc_both_dR_HZ__865->SetBinContent(7,0.08004759);
   VbbHcc_both_dR_HZ__865->SetBinContent(11,0.07912677);
   VbbHcc_both_dR_HZ__865->SetBinContent(12,0.2882858);
   VbbHcc_both_dR_HZ__865->SetBinContent(13,0.07761386);
   VbbHcc_both_dR_HZ__865->SetBinContent(14,0.2644523);
   VbbHcc_both_dR_HZ__865->SetBinContent(15,0.1107461);
   VbbHcc_both_dR_HZ__865->SetBinContent(17,0.0474838);
   VbbHcc_both_dR_HZ__865->SetBinContent(18,0.0945323);
   VbbHcc_both_dR_HZ__865->SetBinContent(19,0.08760819);
   VbbHcc_both_dR_HZ__865->SetBinContent(20,0.1633277);
   VbbHcc_both_dR_HZ__865->SetBinContent(21,0.06727392);
   VbbHcc_both_dR_HZ__865->SetBinContent(22,0.1612451);
   VbbHcc_both_dR_HZ__865->SetBinContent(23,0.0936126);
   VbbHcc_both_dR_HZ__865->SetBinContent(24,0.2344163);
   VbbHcc_both_dR_HZ__865->SetBinContent(26,0.06333091);
   VbbHcc_both_dR_HZ__865->SetBinContent(27,0.3012796);
   VbbHcc_both_dR_HZ__865->SetBinContent(28,0.2480731);
   VbbHcc_both_dR_HZ__865->SetBinContent(29,0.2519768);
   VbbHcc_both_dR_HZ__865->SetBinContent(30,0.2709172);
   VbbHcc_both_dR_HZ__865->SetBinContent(31,0.2901323);
   VbbHcc_both_dR_HZ__865->SetBinContent(32,0.2170614);
   VbbHcc_both_dR_HZ__865->SetBinContent(33,0.1919947);
   VbbHcc_both_dR_HZ__865->SetBinContent(34,0.09024115);
   VbbHcc_both_dR_HZ__865->SetBinContent(35,0.07887516);
   VbbHcc_both_dR_HZ__865->SetBinContent(36,0.103603);
   VbbHcc_both_dR_HZ__865->SetBinContent(37,0.1906453);
   VbbHcc_both_dR_HZ__865->SetBinContent(39,0.09650676);
   VbbHcc_both_dR_HZ__865->SetBinContent(40,0.09930289);
   VbbHcc_both_dR_HZ__865->SetBinContent(42,0.08310132);
   VbbHcc_both_dR_HZ__865->SetBinContent(49,0.1159892);
   VbbHcc_both_dR_HZ__865->SetBinContent(54,0.09378195);
   VbbHcc_both_dR_HZ__865->SetBinContent(59,0.1433357);
   VbbHcc_both_dR_HZ__865->SetBinError(5,0.1098299);
   VbbHcc_both_dR_HZ__865->SetBinError(7,0.08004759);
   VbbHcc_both_dR_HZ__865->SetBinError(11,0.07912677);
   VbbHcc_both_dR_HZ__865->SetBinError(12,0.1684901);
   VbbHcc_both_dR_HZ__865->SetBinError(13,0.07761386);
   VbbHcc_both_dR_HZ__865->SetBinError(14,0.1550354);
   VbbHcc_both_dR_HZ__865->SetBinError(15,0.1107461);
   VbbHcc_both_dR_HZ__865->SetBinError(17,0.0474838);
   VbbHcc_both_dR_HZ__865->SetBinError(18,0.0945323);
   VbbHcc_both_dR_HZ__865->SetBinError(19,0.08760819);
   VbbHcc_both_dR_HZ__865->SetBinError(20,0.1171281);
   VbbHcc_both_dR_HZ__865->SetBinError(21,0.06727392);
   VbbHcc_both_dR_HZ__865->SetBinError(22,0.1141489);
   VbbHcc_both_dR_HZ__865->SetBinError(23,0.0936126);
   VbbHcc_both_dR_HZ__865->SetBinError(24,0.1659627);
   VbbHcc_both_dR_HZ__865->SetBinError(26,0.06333091);
   VbbHcc_both_dR_HZ__865->SetBinError(27,0.1771166);
   VbbHcc_both_dR_HZ__865->SetBinError(28,0.1754231);
   VbbHcc_both_dR_HZ__865->SetBinError(29,0.1797571);
   VbbHcc_both_dR_HZ__865->SetBinError(30,0.1585464);
   VbbHcc_both_dR_HZ__865->SetBinError(31,0.1699892);
   VbbHcc_both_dR_HZ__865->SetBinError(32,0.1269495);
   VbbHcc_both_dR_HZ__865->SetBinError(33,0.1366398);
   VbbHcc_both_dR_HZ__865->SetBinError(34,0.09024115);
   VbbHcc_both_dR_HZ__865->SetBinError(35,0.07887516);
   VbbHcc_both_dR_HZ__865->SetBinError(36,0.103603);
   VbbHcc_both_dR_HZ__865->SetBinError(37,0.1365698);
   VbbHcc_both_dR_HZ__865->SetBinError(39,0.09650676);
   VbbHcc_both_dR_HZ__865->SetBinError(40,0.09930289);
   VbbHcc_both_dR_HZ__865->SetBinError(42,0.08310132);
   VbbHcc_both_dR_HZ__865->SetBinError(49,0.1159892);
   VbbHcc_both_dR_HZ__865->SetBinError(54,0.09378195);
   VbbHcc_both_dR_HZ__865->SetBinError(59,0.1433357);
   VbbHcc_both_dR_HZ__865->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ__865->SetFillColor(ci);
   VbbHcc_both_dR_HZ__865->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ__865->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ__865->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__865->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__865->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__865->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__865->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__865->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__865->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__865->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__865->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}

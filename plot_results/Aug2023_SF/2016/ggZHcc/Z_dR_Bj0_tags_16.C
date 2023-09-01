#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.2,-0.00121917,6.8,0.01097253);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__195 = new TH1D("VbbHcc_tags_Z_dR_Bj0__195","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(2,0.009288912);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(5,0.005001722);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(6,0.001071798);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(7,0.002500861);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(8,0.002143595);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(9,0.001786329);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(12,0.001429063);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(15,0.001071798);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(16,0.001429063);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(17,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(18,0.001071798);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(1,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(2,0.001821706);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(5,0.001336766);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(6,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(7,0.0009452366);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(8,0.000875119);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(9,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(12,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(15,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(16,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(17,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(18,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0__195->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0__195->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0__195->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0__195->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__195->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__195->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__195->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__195->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__195->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-2112.148,6.8,19009.33);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__799 = new TH1D("VbbHcc_both_H_dR__799","",30,0,6);
   VbbHcc_both_H_dR__799->SetBinContent(2,6.196445);
   VbbHcc_both_H_dR__799->SetBinContent(3,10224.72);
   VbbHcc_both_H_dR__799->SetBinContent(4,8330.271);
   VbbHcc_both_H_dR__799->SetBinContent(5,6328.523);
   VbbHcc_both_H_dR__799->SetBinContent(6,5455.246);
   VbbHcc_both_H_dR__799->SetBinContent(7,6597.794);
   VbbHcc_both_H_dR__799->SetBinContent(8,6736.78);
   VbbHcc_both_H_dR__799->SetBinContent(9,6211.509);
   VbbHcc_both_H_dR__799->SetBinContent(10,8236.972);
   VbbHcc_both_H_dR__799->SetBinContent(11,5277.988);
   VbbHcc_both_H_dR__799->SetBinContent(12,7519.272);
   VbbHcc_both_H_dR__799->SetBinContent(13,10444.39);
   VbbHcc_both_H_dR__799->SetBinContent(14,12088.16);
   VbbHcc_both_H_dR__799->SetBinContent(15,16092.56);
   VbbHcc_both_H_dR__799->SetBinContent(16,14908.73);
   VbbHcc_both_H_dR__799->SetBinContent(17,7882.369);
   VbbHcc_both_H_dR__799->SetBinContent(18,4429.194);
   VbbHcc_both_H_dR__799->SetBinContent(19,2953.556);
   VbbHcc_both_H_dR__799->SetBinContent(20,3243.103);
   VbbHcc_both_H_dR__799->SetBinContent(21,2137.207);
   VbbHcc_both_H_dR__799->SetBinContent(22,1003.133);
   VbbHcc_both_H_dR__799->SetBinContent(23,291.3913);
   VbbHcc_both_H_dR__799->SetBinContent(24,136.8884);
   VbbHcc_both_H_dR__799->SetBinContent(25,239.7951);
   VbbHcc_both_H_dR__799->SetBinContent(26,31.12581);
   VbbHcc_both_H_dR__799->SetBinError(2,6.196445);
   VbbHcc_both_H_dR__799->SetBinError(3,1660.077);
   VbbHcc_both_H_dR__799->SetBinError(4,1397.461);
   VbbHcc_both_H_dR__799->SetBinError(5,1117.069);
   VbbHcc_both_H_dR__799->SetBinError(6,831.9661);
   VbbHcc_both_H_dR__799->SetBinError(7,1642.438);
   VbbHcc_both_H_dR__799->SetBinError(8,1534.558);
   VbbHcc_both_H_dR__799->SetBinError(9,1014.448);
   VbbHcc_both_H_dR__799->SetBinError(10,1460.034);
   VbbHcc_both_H_dR__799->SetBinError(11,750.1618);
   VbbHcc_both_H_dR__799->SetBinError(12,990.4807);
   VbbHcc_both_H_dR__799->SetBinError(13,1852.924);
   VbbHcc_both_H_dR__799->SetBinError(14,2079.441);
   VbbHcc_both_H_dR__799->SetBinError(15,1929.243);
   VbbHcc_both_H_dR__799->SetBinError(16,2030.23);
   VbbHcc_both_H_dR__799->SetBinError(17,1591.197);
   VbbHcc_both_H_dR__799->SetBinError(18,704.9279);
   VbbHcc_both_H_dR__799->SetBinError(19,597.4779);
   VbbHcc_both_H_dR__799->SetBinError(20,711.5489);
   VbbHcc_both_H_dR__799->SetBinError(21,1293.604);
   VbbHcc_both_H_dR__799->SetBinError(22,346.6899);
   VbbHcc_both_H_dR__799->SetBinError(23,65.49022);
   VbbHcc_both_H_dR__799->SetBinError(24,43.43046);
   VbbHcc_both_H_dR__799->SetBinError(25,175.6046);
   VbbHcc_both_H_dR__799->SetBinError(26,24.05893);
   VbbHcc_both_H_dR__799->SetEntries(10042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR__799->SetFillColor(ci);
   VbbHcc_both_H_dR__799->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__799->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__799->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__799->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__799->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__799->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__799->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__799->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__799->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__799->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__799->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}

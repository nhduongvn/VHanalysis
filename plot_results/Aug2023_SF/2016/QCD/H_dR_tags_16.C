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
   H_dR_tags_16->Range(-1.2,-1508.732,6.8,13578.58);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__79 = new TH1D("VbbHcc_tags_H_dR__79","",30,0,6);
   VbbHcc_tags_H_dR__79->SetBinContent(3,10312.13);
   VbbHcc_tags_H_dR__79->SetBinContent(4,6268.552);
   VbbHcc_tags_H_dR__79->SetBinContent(5,4576.626);
   VbbHcc_tags_H_dR__79->SetBinContent(6,4973.571);
   VbbHcc_tags_H_dR__79->SetBinContent(7,3491.362);
   VbbHcc_tags_H_dR__79->SetBinContent(8,4054.412);
   VbbHcc_tags_H_dR__79->SetBinContent(9,3930.564);
   VbbHcc_tags_H_dR__79->SetBinContent(10,5451.225);
   VbbHcc_tags_H_dR__79->SetBinContent(11,4814.431);
   VbbHcc_tags_H_dR__79->SetBinContent(12,5542.228);
   VbbHcc_tags_H_dR__79->SetBinContent(13,9824.969);
   VbbHcc_tags_H_dR__79->SetBinContent(14,8353.077);
   VbbHcc_tags_H_dR__79->SetBinContent(15,8006.253);
   VbbHcc_tags_H_dR__79->SetBinContent(16,11495.1);
   VbbHcc_tags_H_dR__79->SetBinContent(17,7819.334);
   VbbHcc_tags_H_dR__79->SetBinContent(18,7769.28);
   VbbHcc_tags_H_dR__79->SetBinContent(19,6706.65);
   VbbHcc_tags_H_dR__79->SetBinContent(20,6815.331);
   VbbHcc_tags_H_dR__79->SetBinContent(21,5287.401);
   VbbHcc_tags_H_dR__79->SetBinContent(22,3541.765);
   VbbHcc_tags_H_dR__79->SetBinContent(23,3758.321);
   VbbHcc_tags_H_dR__79->SetBinContent(24,1357.2);
   VbbHcc_tags_H_dR__79->SetBinContent(25,2678.371);
   VbbHcc_tags_H_dR__79->SetBinContent(26,1606.543);
   VbbHcc_tags_H_dR__79->SetBinContent(27,974.3348);
   VbbHcc_tags_H_dR__79->SetBinContent(28,742.6103);
   VbbHcc_tags_H_dR__79->SetBinContent(29,1067.433);
   VbbHcc_tags_H_dR__79->SetBinContent(30,1125.96);
   VbbHcc_tags_H_dR__79->SetBinContent(31,1315.311);
   VbbHcc_tags_H_dR__79->SetBinError(3,1654.846);
   VbbHcc_tags_H_dR__79->SetBinError(4,924.7844);
   VbbHcc_tags_H_dR__79->SetBinError(5,771.2867);
   VbbHcc_tags_H_dR__79->SetBinError(6,837.1155);
   VbbHcc_tags_H_dR__79->SetBinError(7,709.0572);
   VbbHcc_tags_H_dR__79->SetBinError(8,735.1555);
   VbbHcc_tags_H_dR__79->SetBinError(9,750.9539);
   VbbHcc_tags_H_dR__79->SetBinError(10,1291.027);
   VbbHcc_tags_H_dR__79->SetBinError(11,1525.086);
   VbbHcc_tags_H_dR__79->SetBinError(12,892.1265);
   VbbHcc_tags_H_dR__79->SetBinError(13,2160.311);
   VbbHcc_tags_H_dR__79->SetBinError(14,1905.343);
   VbbHcc_tags_H_dR__79->SetBinError(15,1065.931);
   VbbHcc_tags_H_dR__79->SetBinError(16,1959.042);
   VbbHcc_tags_H_dR__79->SetBinError(17,1364.087);
   VbbHcc_tags_H_dR__79->SetBinError(18,1050.615);
   VbbHcc_tags_H_dR__79->SetBinError(19,921.6361);
   VbbHcc_tags_H_dR__79->SetBinError(20,1468.958);
   VbbHcc_tags_H_dR__79->SetBinError(21,1437.325);
   VbbHcc_tags_H_dR__79->SetBinError(22,667.0813);
   VbbHcc_tags_H_dR__79->SetBinError(23,1591.873);
   VbbHcc_tags_H_dR__79->SetBinError(24,278.3771);
   VbbHcc_tags_H_dR__79->SetBinError(25,713.504);
   VbbHcc_tags_H_dR__79->SetBinError(26,535.1391);
   VbbHcc_tags_H_dR__79->SetBinError(27,336.9919);
   VbbHcc_tags_H_dR__79->SetBinError(28,281.0485);
   VbbHcc_tags_H_dR__79->SetBinError(29,411.0905);
   VbbHcc_tags_H_dR__79->SetBinError(30,451.0174);
   VbbHcc_tags_H_dR__79->SetBinError(31,496.5369);
   VbbHcc_tags_H_dR__79->SetEntries(9563);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR__79->SetFillColor(ci);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__79->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->Draw("HIST");
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

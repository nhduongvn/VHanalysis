#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-1350.519,6.8,12154.67);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__64 = new TH1D("VbbHcc_tags_Z_dR__64","",30,0,6);
   VbbHcc_tags_Z_dR__64->SetBinContent(3,9103.269);
   VbbHcc_tags_Z_dR__64->SetBinContent(4,8952.766);
   VbbHcc_tags_Z_dR__64->SetBinContent(5,5872.454);
   VbbHcc_tags_Z_dR__64->SetBinContent(6,5366.653);
   VbbHcc_tags_Z_dR__64->SetBinContent(7,5694.049);
   VbbHcc_tags_Z_dR__64->SetBinContent(8,6814.899);
   VbbHcc_tags_Z_dR__64->SetBinContent(9,4272.465);
   VbbHcc_tags_Z_dR__64->SetBinContent(10,3514.029);
   VbbHcc_tags_Z_dR__64->SetBinContent(11,5929.021);
   VbbHcc_tags_Z_dR__64->SetBinContent(12,4237.139);
   VbbHcc_tags_Z_dR__64->SetBinContent(13,6367.734);
   VbbHcc_tags_Z_dR__64->SetBinContent(14,6080.769);
   VbbHcc_tags_Z_dR__64->SetBinContent(15,10234.66);
   VbbHcc_tags_Z_dR__64->SetBinContent(16,10289.66);
   VbbHcc_tags_Z_dR__64->SetBinContent(17,7879.064);
   VbbHcc_tags_Z_dR__64->SetBinContent(18,8646.699);
   VbbHcc_tags_Z_dR__64->SetBinContent(19,5624.971);
   VbbHcc_tags_Z_dR__64->SetBinContent(20,6451.084);
   VbbHcc_tags_Z_dR__64->SetBinContent(21,4404.243);
   VbbHcc_tags_Z_dR__64->SetBinContent(22,3493.533);
   VbbHcc_tags_Z_dR__64->SetBinContent(23,4499.437);
   VbbHcc_tags_Z_dR__64->SetBinContent(24,789.4077);
   VbbHcc_tags_Z_dR__64->SetBinContent(25,1966.325);
   VbbHcc_tags_Z_dR__64->SetBinContent(26,2445.052);
   VbbHcc_tags_Z_dR__64->SetBinContent(27,1897.33);
   VbbHcc_tags_Z_dR__64->SetBinContent(28,1149.819);
   VbbHcc_tags_Z_dR__64->SetBinContent(29,547.0703);
   VbbHcc_tags_Z_dR__64->SetBinContent(30,767.7781);
   VbbHcc_tags_Z_dR__64->SetBinContent(31,368.9602);
   VbbHcc_tags_Z_dR__64->SetBinError(3,1096.35);
   VbbHcc_tags_Z_dR__64->SetBinError(4,1467.86);
   VbbHcc_tags_Z_dR__64->SetBinError(5,873.5737);
   VbbHcc_tags_Z_dR__64->SetBinError(6,891.5546);
   VbbHcc_tags_Z_dR__64->SetBinError(7,1569.998);
   VbbHcc_tags_Z_dR__64->SetBinError(8,1782.396);
   VbbHcc_tags_Z_dR__64->SetBinError(9,779.6413);
   VbbHcc_tags_Z_dR__64->SetBinError(10,562.292);
   VbbHcc_tags_Z_dR__64->SetBinError(11,1403.692);
   VbbHcc_tags_Z_dR__64->SetBinError(12,666.2522);
   VbbHcc_tags_Z_dR__64->SetBinError(13,1298.799);
   VbbHcc_tags_Z_dR__64->SetBinError(14,918.019);
   VbbHcc_tags_Z_dR__64->SetBinError(15,2250.793);
   VbbHcc_tags_Z_dR__64->SetBinError(16,1782.074);
   VbbHcc_tags_Z_dR__64->SetBinError(17,1083.358);
   VbbHcc_tags_Z_dR__64->SetBinError(18,1840.168);
   VbbHcc_tags_Z_dR__64->SetBinError(19,899.8884);
   VbbHcc_tags_Z_dR__64->SetBinError(20,1030.869);
   VbbHcc_tags_Z_dR__64->SetBinError(21,1382.998);
   VbbHcc_tags_Z_dR__64->SetBinError(22,745.5244);
   VbbHcc_tags_Z_dR__64->SetBinError(23,1380.822);
   VbbHcc_tags_Z_dR__64->SetBinError(24,99.73047);
   VbbHcc_tags_Z_dR__64->SetBinError(25,871.7235);
   VbbHcc_tags_Z_dR__64->SetBinError(26,670.6263);
   VbbHcc_tags_Z_dR__64->SetBinError(27,558.5765);
   VbbHcc_tags_Z_dR__64->SetBinError(28,351.7974);
   VbbHcc_tags_Z_dR__64->SetBinError(29,174.3568);
   VbbHcc_tags_Z_dR__64->SetBinError(30,264.9112);
   VbbHcc_tags_Z_dR__64->SetBinError(31,167.1874);
   VbbHcc_tags_Z_dR__64->SetEntries(9563);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR__64->SetFillColor(ci);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__64->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__64->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__64->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}

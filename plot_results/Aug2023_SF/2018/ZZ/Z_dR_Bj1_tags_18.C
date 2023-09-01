#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.2,-1.246887,6.8,11.22198);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__206 = new TH1D("VbbHcc_tags_Z_dR_Bj1__206","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(1,1.676486);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(2,7.264773);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(3,8.941259);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(5,7.264773);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(6,3.632387);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(7,2.235315);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(8,2.794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(9,3.352972);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(10,2.794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(11,1.397072);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(12,1.9559);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(13,1.9559);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(14,2.514729);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(15,1.9559);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(16,1.397072);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(17,1.117657);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(19,0.8382431);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(1,0.6844226);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(2,1.424739);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(3,1.580606);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(5,1.424739);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(6,1.007443);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(7,0.7903031);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(8,0.8835858);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(9,0.9679197);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(10,0.8835858);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(11,0.6247895);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(12,0.7392609);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(13,0.7392609);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(14,0.8382431);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(15,0.7392609);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(16,0.6247895);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(17,0.5588287);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(19,0.4839599);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1__206->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1__206->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1__206->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_tags_Z_dR_Bj1__206->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj1__206->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__206->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__206->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__206->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}

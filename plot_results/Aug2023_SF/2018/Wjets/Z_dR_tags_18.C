#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-7.201937,6.8,64.81743);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__68 = new TH1D("VbbHcc_tags_Z_dR__68","",30,0,6);
   VbbHcc_tags_Z_dR__68->SetBinContent(3,51.0417);
   VbbHcc_tags_Z_dR__68->SetBinContent(4,54.8719);
   VbbHcc_tags_Z_dR__68->SetBinContent(5,32.86708);
   VbbHcc_tags_Z_dR__68->SetBinContent(6,18.33915);
   VbbHcc_tags_Z_dR__68->SetBinContent(7,13.29677);
   VbbHcc_tags_Z_dR__68->SetBinContent(8,32.12683);
   VbbHcc_tags_Z_dR__68->SetBinContent(9,13.57564);
   VbbHcc_tags_Z_dR__68->SetBinContent(10,12.57283);
   VbbHcc_tags_Z_dR__68->SetBinContent(11,18.23505);
   VbbHcc_tags_Z_dR__68->SetBinContent(12,25.40624);
   VbbHcc_tags_Z_dR__68->SetBinContent(13,14.56326);
   VbbHcc_tags_Z_dR__68->SetBinContent(14,17.68282);
   VbbHcc_tags_Z_dR__68->SetBinContent(15,16.68286);
   VbbHcc_tags_Z_dR__68->SetBinContent(16,52.08037);
   VbbHcc_tags_Z_dR__68->SetBinContent(17,16.42198);
   VbbHcc_tags_Z_dR__68->SetBinContent(18,16.13659);
   VbbHcc_tags_Z_dR__68->SetBinContent(19,15.96117);
   VbbHcc_tags_Z_dR__68->SetBinContent(20,11.16339);
   VbbHcc_tags_Z_dR__68->SetBinContent(21,15.66247);
   VbbHcc_tags_Z_dR__68->SetBinContent(22,15.38236);
   VbbHcc_tags_Z_dR__68->SetBinContent(23,10.41544);
   VbbHcc_tags_Z_dR__68->SetBinContent(24,9.135387);
   VbbHcc_tags_Z_dR__68->SetBinContent(25,7.22978);
   VbbHcc_tags_Z_dR__68->SetBinContent(26,11.28217);
   VbbHcc_tags_Z_dR__68->SetBinContent(27,1.993705);
   VbbHcc_tags_Z_dR__68->SetBinContent(28,5.251409);
   VbbHcc_tags_Z_dR__68->SetBinContent(29,4.304661);
   VbbHcc_tags_Z_dR__68->SetBinContent(30,2.748513);
   VbbHcc_tags_Z_dR__68->SetBinContent(31,2.337498);
   VbbHcc_tags_Z_dR__68->SetBinError(3,11.14209);
   VbbHcc_tags_Z_dR__68->SetBinError(4,10.53085);
   VbbHcc_tags_Z_dR__68->SetBinError(5,9.704962);
   VbbHcc_tags_Z_dR__68->SetBinError(6,2.802241);
   VbbHcc_tags_Z_dR__68->SetBinError(7,2.097409);
   VbbHcc_tags_Z_dR__68->SetBinError(8,8.111539);
   VbbHcc_tags_Z_dR__68->SetBinError(9,3.519912);
   VbbHcc_tags_Z_dR__68->SetBinError(10,2.692087);
   VbbHcc_tags_Z_dR__68->SetBinError(11,3.645302);
   VbbHcc_tags_Z_dR__68->SetBinError(12,6.90429);
   VbbHcc_tags_Z_dR__68->SetBinError(13,2.735456);
   VbbHcc_tags_Z_dR__68->SetBinError(14,4.342935);
   VbbHcc_tags_Z_dR__68->SetBinError(15,2.992686);
   VbbHcc_tags_Z_dR__68->SetBinError(16,24.63665);
   VbbHcc_tags_Z_dR__68->SetBinError(17,3.326922);
   VbbHcc_tags_Z_dR__68->SetBinError(18,3.019359);
   VbbHcc_tags_Z_dR__68->SetBinError(19,7.829814);
   VbbHcc_tags_Z_dR__68->SetBinError(20,1.92557);
   VbbHcc_tags_Z_dR__68->SetBinError(21,5.876312);
   VbbHcc_tags_Z_dR__68->SetBinError(22,5.873842);
   VbbHcc_tags_Z_dR__68->SetBinError(23,4.397064);
   VbbHcc_tags_Z_dR__68->SetBinError(24,2.306571);
   VbbHcc_tags_Z_dR__68->SetBinError(25,2.807962);
   VbbHcc_tags_Z_dR__68->SetBinError(26,4.101498);
   VbbHcc_tags_Z_dR__68->SetBinError(27,0.6301152);
   VbbHcc_tags_Z_dR__68->SetBinError(28,1.495323);
   VbbHcc_tags_Z_dR__68->SetBinError(29,1.338489);
   VbbHcc_tags_Z_dR__68->SetBinError(30,0.8777751);
   VbbHcc_tags_Z_dR__68->SetBinError(31,0.9058197);
   VbbHcc_tags_Z_dR__68->SetEntries(2245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR__68->SetFillColor(ci);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}

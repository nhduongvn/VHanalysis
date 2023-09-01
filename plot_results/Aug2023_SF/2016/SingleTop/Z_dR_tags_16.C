#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-4.538764,6.8,40.84888);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__65 = new TH1D("VbbHcc_tags_Z_dR__65","",30,0,6);
   VbbHcc_tags_Z_dR__65->SetBinContent(3,17.02232);
   VbbHcc_tags_Z_dR__65->SetBinContent(4,20.66606);
   VbbHcc_tags_Z_dR__65->SetBinContent(5,19.79879);
   VbbHcc_tags_Z_dR__65->SetBinContent(6,21.51754);
   VbbHcc_tags_Z_dR__65->SetBinContent(7,23.07428);
   VbbHcc_tags_Z_dR__65->SetBinContent(8,23.29784);
   VbbHcc_tags_Z_dR__65->SetBinContent(9,28.46971);
   VbbHcc_tags_Z_dR__65->SetBinContent(10,25.85686);
   VbbHcc_tags_Z_dR__65->SetBinContent(11,32.73372);
   VbbHcc_tags_Z_dR__65->SetBinContent(12,31.61051);
   VbbHcc_tags_Z_dR__65->SetBinContent(13,33.48987);
   VbbHcc_tags_Z_dR__65->SetBinContent(14,32.6971);
   VbbHcc_tags_Z_dR__65->SetBinContent(15,33.31576);
   VbbHcc_tags_Z_dR__65->SetBinContent(16,34.58106);
   VbbHcc_tags_Z_dR__65->SetBinContent(17,29.28098);
   VbbHcc_tags_Z_dR__65->SetBinContent(18,30.55232);
   VbbHcc_tags_Z_dR__65->SetBinContent(19,26.15879);
   VbbHcc_tags_Z_dR__65->SetBinContent(20,22.55811);
   VbbHcc_tags_Z_dR__65->SetBinContent(21,18.91582);
   VbbHcc_tags_Z_dR__65->SetBinContent(22,16.19577);
   VbbHcc_tags_Z_dR__65->SetBinContent(23,13.73609);
   VbbHcc_tags_Z_dR__65->SetBinContent(24,10.20221);
   VbbHcc_tags_Z_dR__65->SetBinContent(25,8.469605);
   VbbHcc_tags_Z_dR__65->SetBinContent(26,7.382203);
   VbbHcc_tags_Z_dR__65->SetBinContent(27,4.144145);
   VbbHcc_tags_Z_dR__65->SetBinContent(28,4.399103);
   VbbHcc_tags_Z_dR__65->SetBinContent(29,2.785272);
   VbbHcc_tags_Z_dR__65->SetBinContent(30,2.879169);
   VbbHcc_tags_Z_dR__65->SetBinContent(31,2.077699);
   VbbHcc_tags_Z_dR__65->SetBinError(3,1.658977);
   VbbHcc_tags_Z_dR__65->SetBinError(4,1.781465);
   VbbHcc_tags_Z_dR__65->SetBinError(5,1.798934);
   VbbHcc_tags_Z_dR__65->SetBinError(6,1.74594);
   VbbHcc_tags_Z_dR__65->SetBinError(7,1.852637);
   VbbHcc_tags_Z_dR__65->SetBinError(8,1.815215);
   VbbHcc_tags_Z_dR__65->SetBinError(9,2.16849);
   VbbHcc_tags_Z_dR__65->SetBinError(10,2.028819);
   VbbHcc_tags_Z_dR__65->SetBinError(11,2.333929);
   VbbHcc_tags_Z_dR__65->SetBinError(12,2.304386);
   VbbHcc_tags_Z_dR__65->SetBinError(13,2.291262);
   VbbHcc_tags_Z_dR__65->SetBinError(14,2.260134);
   VbbHcc_tags_Z_dR__65->SetBinError(15,2.221732);
   VbbHcc_tags_Z_dR__65->SetBinError(16,2.280048);
   VbbHcc_tags_Z_dR__65->SetBinError(17,2.04184);
   VbbHcc_tags_Z_dR__65->SetBinError(18,2.187351);
   VbbHcc_tags_Z_dR__65->SetBinError(19,2.026689);
   VbbHcc_tags_Z_dR__65->SetBinError(20,1.87028);
   VbbHcc_tags_Z_dR__65->SetBinError(21,1.738383);
   VbbHcc_tags_Z_dR__65->SetBinError(22,1.635275);
   VbbHcc_tags_Z_dR__65->SetBinError(23,1.400588);
   VbbHcc_tags_Z_dR__65->SetBinError(24,1.293682);
   VbbHcc_tags_Z_dR__65->SetBinError(25,1.178012);
   VbbHcc_tags_Z_dR__65->SetBinError(26,0.9997847);
   VbbHcc_tags_Z_dR__65->SetBinError(27,0.7419039);
   VbbHcc_tags_Z_dR__65->SetBinError(28,0.8034927);
   VbbHcc_tags_Z_dR__65->SetBinError(29,0.5238774);
   VbbHcc_tags_Z_dR__65->SetBinError(30,0.6772205);
   VbbHcc_tags_Z_dR__65->SetBinError(31,0.5949427);
   VbbHcc_tags_Z_dR__65->SetEntries(9292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR__65->SetFillColor(ci);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->Draw("HIST");
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-41.69028,6.8,375.2125);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__67 = new TH1D("VbbHcc_tags_Z_dR__67","",30,0,6);
   VbbHcc_tags_Z_dR__67->SetBinContent(3,192.5954);
   VbbHcc_tags_Z_dR__67->SetBinContent(4,317.6402);
   VbbHcc_tags_Z_dR__67->SetBinContent(5,284.8797);
   VbbHcc_tags_Z_dR__67->SetBinContent(6,250.6395);
   VbbHcc_tags_Z_dR__67->SetBinContent(7,195.9454);
   VbbHcc_tags_Z_dR__67->SetBinContent(8,157.0434);
   VbbHcc_tags_Z_dR__67->SetBinContent(9,156.9123);
   VbbHcc_tags_Z_dR__67->SetBinContent(10,138.9163);
   VbbHcc_tags_Z_dR__67->SetBinContent(11,146.0789);
   VbbHcc_tags_Z_dR__67->SetBinContent(12,182.3102);
   VbbHcc_tags_Z_dR__67->SetBinContent(13,200.118);
   VbbHcc_tags_Z_dR__67->SetBinContent(14,244.3102);
   VbbHcc_tags_Z_dR__67->SetBinContent(15,280.948);
   VbbHcc_tags_Z_dR__67->SetBinContent(16,239.8292);
   VbbHcc_tags_Z_dR__67->SetBinContent(17,231.038);
   VbbHcc_tags_Z_dR__67->SetBinContent(18,223.3372);
   VbbHcc_tags_Z_dR__67->SetBinContent(19,205.7707);
   VbbHcc_tags_Z_dR__67->SetBinContent(20,214.2147);
   VbbHcc_tags_Z_dR__67->SetBinContent(21,128.11);
   VbbHcc_tags_Z_dR__67->SetBinContent(22,124.275);
   VbbHcc_tags_Z_dR__67->SetBinContent(23,86.05954);
   VbbHcc_tags_Z_dR__67->SetBinContent(24,63.93322);
   VbbHcc_tags_Z_dR__67->SetBinContent(25,73.77865);
   VbbHcc_tags_Z_dR__67->SetBinContent(26,72.43845);
   VbbHcc_tags_Z_dR__67->SetBinContent(27,48.10581);
   VbbHcc_tags_Z_dR__67->SetBinContent(28,37.28506);
   VbbHcc_tags_Z_dR__67->SetBinContent(29,45.74199);
   VbbHcc_tags_Z_dR__67->SetBinContent(30,24.82943);
   VbbHcc_tags_Z_dR__67->SetBinContent(31,18.85223);
   VbbHcc_tags_Z_dR__67->SetBinError(3,7.582955);
   VbbHcc_tags_Z_dR__67->SetBinError(4,11.8741);
   VbbHcc_tags_Z_dR__67->SetBinError(5,13.5084);
   VbbHcc_tags_Z_dR__67->SetBinError(6,16.91026);
   VbbHcc_tags_Z_dR__67->SetBinError(7,12.29404);
   VbbHcc_tags_Z_dR__67->SetBinError(8,8.547497);
   VbbHcc_tags_Z_dR__67->SetBinError(9,11.31326);
   VbbHcc_tags_Z_dR__67->SetBinError(10,8.938612);
   VbbHcc_tags_Z_dR__67->SetBinError(11,7.980369);
   VbbHcc_tags_Z_dR__67->SetBinError(12,11.28832);
   VbbHcc_tags_Z_dR__67->SetBinError(13,16.73415);
   VbbHcc_tags_Z_dR__67->SetBinError(14,13.73109);
   VbbHcc_tags_Z_dR__67->SetBinError(15,24.89861);
   VbbHcc_tags_Z_dR__67->SetBinError(16,12.83123);
   VbbHcc_tags_Z_dR__67->SetBinError(17,13.07745);
   VbbHcc_tags_Z_dR__67->SetBinError(18,14.76015);
   VbbHcc_tags_Z_dR__67->SetBinError(19,19.97215);
   VbbHcc_tags_Z_dR__67->SetBinError(20,31.3966);
   VbbHcc_tags_Z_dR__67->SetBinError(21,10.00019);
   VbbHcc_tags_Z_dR__67->SetBinError(22,8.989285);
   VbbHcc_tags_Z_dR__67->SetBinError(23,7.124367);
   VbbHcc_tags_Z_dR__67->SetBinError(24,8.032684);
   VbbHcc_tags_Z_dR__67->SetBinError(25,7.868854);
   VbbHcc_tags_Z_dR__67->SetBinError(26,12.80812);
   VbbHcc_tags_Z_dR__67->SetBinError(27,5.823997);
   VbbHcc_tags_Z_dR__67->SetBinError(28,3.885996);
   VbbHcc_tags_Z_dR__67->SetBinError(29,7.244455);
   VbbHcc_tags_Z_dR__67->SetBinError(30,6.111322);
   VbbHcc_tags_Z_dR__67->SetBinError(31,2.964998);
   VbbHcc_tags_Z_dR__67->SetEntries(18512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR__67->SetFillColor(ci);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->Draw("HIST");
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

void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug  3 12:25:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-2821.883,6.8,25396.94);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,9.789551);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13289.59);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,12040.83);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8255.783);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,12309.08);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7055.927);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,11177.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,11618.91);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,11078.72);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,11458.83);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,11932.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,14060.07);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,18801.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18849.85);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,21500.06);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,13014.77);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9209.359);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6096.612);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3844.822);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1298.614);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1339.036);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1026.267);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,521.276);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,143.5921);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,12.52595);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,9.789551);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1498.691);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1442.234);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1104.965);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2195.236);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,968.5678);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1566.128);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,2161.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2067.929);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1482.671);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1399.747);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1586.717);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1880.892);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1845.044);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1962.637);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,2109.479);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1374.182);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1140.535);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,780.0696);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,169.892);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,401.4785);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,391.6835);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,374.4371);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,51.88119);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,8.352282);
   VbbHcc_both_H_dR_stack_1->SetEntries(10726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}

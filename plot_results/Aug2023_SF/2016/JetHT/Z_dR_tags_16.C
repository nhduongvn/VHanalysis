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
   Z_dR_tags_16->Range(-1.2,-821.2313,6.8,7391.081);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__63 = new TH1D("VbbHcc_tags_Z_dR__63","",30,0,6);
   VbbHcc_tags_Z_dR__63->SetBinContent(2,1);
   VbbHcc_tags_Z_dR__63->SetBinContent(3,5455);
   VbbHcc_tags_Z_dR__63->SetBinContent(4,6257);
   VbbHcc_tags_Z_dR__63->SetBinContent(5,4648);
   VbbHcc_tags_Z_dR__63->SetBinContent(6,4236);
   VbbHcc_tags_Z_dR__63->SetBinContent(7,3815);
   VbbHcc_tags_Z_dR__63->SetBinContent(8,3740);
   VbbHcc_tags_Z_dR__63->SetBinContent(9,3679);
   VbbHcc_tags_Z_dR__63->SetBinContent(10,3782);
   VbbHcc_tags_Z_dR__63->SetBinContent(11,3849);
   VbbHcc_tags_Z_dR__63->SetBinContent(12,4001);
   VbbHcc_tags_Z_dR__63->SetBinContent(13,4365);
   VbbHcc_tags_Z_dR__63->SetBinContent(14,4610);
   VbbHcc_tags_Z_dR__63->SetBinContent(15,5094);
   VbbHcc_tags_Z_dR__63->SetBinContent(16,5018);
   VbbHcc_tags_Z_dR__63->SetBinContent(17,4892);
   VbbHcc_tags_Z_dR__63->SetBinContent(18,4422);
   VbbHcc_tags_Z_dR__63->SetBinContent(19,4079);
   VbbHcc_tags_Z_dR__63->SetBinContent(20,3559);
   VbbHcc_tags_Z_dR__63->SetBinContent(21,2959);
   VbbHcc_tags_Z_dR__63->SetBinContent(22,2347);
   VbbHcc_tags_Z_dR__63->SetBinContent(23,1972);
   VbbHcc_tags_Z_dR__63->SetBinContent(24,1512);
   VbbHcc_tags_Z_dR__63->SetBinContent(25,1255);
   VbbHcc_tags_Z_dR__63->SetBinContent(26,1082);
   VbbHcc_tags_Z_dR__63->SetBinContent(27,1012);
   VbbHcc_tags_Z_dR__63->SetBinContent(28,833);
   VbbHcc_tags_Z_dR__63->SetBinContent(29,797);
   VbbHcc_tags_Z_dR__63->SetBinContent(30,505);
   VbbHcc_tags_Z_dR__63->SetBinContent(31,398);
   VbbHcc_tags_Z_dR__63->SetEntries(94174);
   VbbHcc_tags_Z_dR__63->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__63->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__63->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__63->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__63->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__63->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__63->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__63->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__63->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__63->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__63->Draw("HIST");
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

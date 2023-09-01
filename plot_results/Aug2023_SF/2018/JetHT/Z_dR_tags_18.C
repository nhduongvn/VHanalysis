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
   Z_dR_tags_18->Range(-1.2,-2489.813,6.8,22408.31);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__63 = new TH1D("VbbHcc_tags_Z_dR__63","",30,0,6);
   VbbHcc_tags_Z_dR__63->SetBinContent(2,13);
   VbbHcc_tags_Z_dR__63->SetBinContent(3,16223);
   VbbHcc_tags_Z_dR__63->SetBinContent(4,18970);
   VbbHcc_tags_Z_dR__63->SetBinContent(5,14608);
   VbbHcc_tags_Z_dR__63->SetBinContent(6,13060);
   VbbHcc_tags_Z_dR__63->SetBinContent(7,12067);
   VbbHcc_tags_Z_dR__63->SetBinContent(8,11506);
   VbbHcc_tags_Z_dR__63->SetBinContent(9,11400);
   VbbHcc_tags_Z_dR__63->SetBinContent(10,11267);
   VbbHcc_tags_Z_dR__63->SetBinContent(11,11974);
   VbbHcc_tags_Z_dR__63->SetBinContent(12,12840);
   VbbHcc_tags_Z_dR__63->SetBinContent(13,13894);
   VbbHcc_tags_Z_dR__63->SetBinContent(14,15290);
   VbbHcc_tags_Z_dR__63->SetBinContent(15,16691);
   VbbHcc_tags_Z_dR__63->SetBinContent(16,17497);
   VbbHcc_tags_Z_dR__63->SetBinContent(17,17101);
   VbbHcc_tags_Z_dR__63->SetBinContent(18,15713);
   VbbHcc_tags_Z_dR__63->SetBinContent(19,14102);
   VbbHcc_tags_Z_dR__63->SetBinContent(20,12349);
   VbbHcc_tags_Z_dR__63->SetBinContent(21,10339);
   VbbHcc_tags_Z_dR__63->SetBinContent(22,8403);
   VbbHcc_tags_Z_dR__63->SetBinContent(23,6582);
   VbbHcc_tags_Z_dR__63->SetBinContent(24,5558);
   VbbHcc_tags_Z_dR__63->SetBinContent(25,4544);
   VbbHcc_tags_Z_dR__63->SetBinContent(26,3724);
   VbbHcc_tags_Z_dR__63->SetBinContent(27,3184);
   VbbHcc_tags_Z_dR__63->SetBinContent(28,2851);
   VbbHcc_tags_Z_dR__63->SetBinContent(29,2655);
   VbbHcc_tags_Z_dR__63->SetBinContent(30,1806);
   VbbHcc_tags_Z_dR__63->SetBinContent(31,1363);
   VbbHcc_tags_Z_dR__63->SetEntries(307574);
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

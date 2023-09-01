#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.2,-1584.844,6.8,14263.59);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLeftMargin(0.15);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1__168 = new TH1D("VbbHcc_tags_H_dR_Bj1__168","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(1,4489);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(2,12075);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(3,11900);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(4,9669);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(5,7816);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(6,6619);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(7,5281);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(8,4673);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(9,3995);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(10,3642);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(11,3371);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(12,3039);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(13,2813);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(14,2537);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(15,2175);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(16,1873);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(17,1581);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(18,1368);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(19,1105);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(20,825);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(21,810);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(22,621);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(23,511);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(24,413);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(25,269);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(26,204);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(27,172);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(28,113);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(29,78);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(30,48);
   VbbHcc_tags_H_dR_Bj1__168->SetBinContent(31,89);
   VbbHcc_tags_H_dR_Bj1__168->SetEntries(94174);
   VbbHcc_tags_H_dR_Bj1__168->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1__168->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1__168->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__168->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__168->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__168->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__168->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__168->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__168->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__168->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__168->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}

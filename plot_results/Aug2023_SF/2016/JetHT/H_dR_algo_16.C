#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Fri Sep  1 13:23:36 2023) by ROOT version 6.28/04
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.2,-6752.157,6.8,60769.41);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR__438 = new TH1D("VbbHcc_algo_H_dR__438","",30,0,6);
   VbbHcc_algo_H_dR__438->SetBinContent(2,10);
   VbbHcc_algo_H_dR__438->SetBinContent(3,24804);
   VbbHcc_algo_H_dR__438->SetBinContent(4,31527);
   VbbHcc_algo_H_dR__438->SetBinContent(5,26997);
   VbbHcc_algo_H_dR__438->SetBinContent(6,27170);
   VbbHcc_algo_H_dR__438->SetBinContent(7,27371);
   VbbHcc_algo_H_dR__438->SetBinContent(8,28704);
   VbbHcc_algo_H_dR__438->SetBinContent(9,31070);
   VbbHcc_algo_H_dR__438->SetBinContent(10,33850);
   VbbHcc_algo_H_dR__438->SetBinContent(11,37970);
   VbbHcc_algo_H_dR__438->SetBinContent(12,42244);
   VbbHcc_algo_H_dR__438->SetBinContent(13,47111);
   VbbHcc_algo_H_dR__438->SetBinContent(14,50218);
   VbbHcc_algo_H_dR__438->SetBinContent(15,51445);
   VbbHcc_algo_H_dR__438->SetBinContent(16,51121);
   VbbHcc_algo_H_dR__438->SetBinContent(17,49066);
   VbbHcc_algo_H_dR__438->SetBinContent(18,46130);
   VbbHcc_algo_H_dR__438->SetBinContent(19,42852);
   VbbHcc_algo_H_dR__438->SetBinContent(20,38489);
   VbbHcc_algo_H_dR__438->SetBinContent(21,32426);
   VbbHcc_algo_H_dR__438->SetBinContent(22,26063);
   VbbHcc_algo_H_dR__438->SetBinContent(23,20813);
   VbbHcc_algo_H_dR__438->SetBinContent(24,16252);
   VbbHcc_algo_H_dR__438->SetBinContent(25,12455);
   VbbHcc_algo_H_dR__438->SetBinContent(26,9524);
   VbbHcc_algo_H_dR__438->SetBinContent(27,7514);
   VbbHcc_algo_H_dR__438->SetBinContent(28,5867);
   VbbHcc_algo_H_dR__438->SetBinContent(29,4816);
   VbbHcc_algo_H_dR__438->SetBinContent(30,3131);
   VbbHcc_algo_H_dR__438->SetBinContent(31,2357);
   VbbHcc_algo_H_dR__438->SetEntries(829367);
   VbbHcc_algo_H_dR__438->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR__438->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR__438->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__438->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__438->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__438->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__438->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__438->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__438->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__438->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__438->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}

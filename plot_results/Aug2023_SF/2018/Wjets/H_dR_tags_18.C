#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-5.417793,6.8,48.76014);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__83 = new TH1D("VbbHcc_tags_H_dR__83","",30,0,6);
   VbbHcc_tags_H_dR__83->SetBinContent(3,41.27842);
   VbbHcc_tags_H_dR__83->SetBinContent(4,20.33457);
   VbbHcc_tags_H_dR__83->SetBinContent(5,19.82888);
   VbbHcc_tags_H_dR__83->SetBinContent(6,21.33782);
   VbbHcc_tags_H_dR__83->SetBinContent(7,12.89611);
   VbbHcc_tags_H_dR__83->SetBinContent(8,16.49926);
   VbbHcc_tags_H_dR__83->SetBinContent(9,19.14756);
   VbbHcc_tags_H_dR__83->SetBinContent(10,11.91545);
   VbbHcc_tags_H_dR__83->SetBinContent(11,37.45734);
   VbbHcc_tags_H_dR__83->SetBinContent(12,30.70868);
   VbbHcc_tags_H_dR__83->SetBinContent(13,18.30045);
   VbbHcc_tags_H_dR__83->SetBinContent(14,31.72902);
   VbbHcc_tags_H_dR__83->SetBinContent(15,29.07877);
   VbbHcc_tags_H_dR__83->SetBinContent(16,27.55591);
   VbbHcc_tags_H_dR__83->SetBinContent(17,29.26133);
   VbbHcc_tags_H_dR__83->SetBinContent(18,22.02575);
   VbbHcc_tags_H_dR__83->SetBinContent(19,25.38373);
   VbbHcc_tags_H_dR__83->SetBinContent(20,24.72513);
   VbbHcc_tags_H_dR__83->SetBinContent(21,12.05634);
   VbbHcc_tags_H_dR__83->SetBinContent(22,14.06771);
   VbbHcc_tags_H_dR__83->SetBinContent(23,10.93136);
   VbbHcc_tags_H_dR__83->SetBinContent(24,6.635465);
   VbbHcc_tags_H_dR__83->SetBinContent(25,17.56432);
   VbbHcc_tags_H_dR__83->SetBinContent(26,2.446661);
   VbbHcc_tags_H_dR__83->SetBinContent(27,5.293623);
   VbbHcc_tags_H_dR__83->SetBinContent(28,3.226551);
   VbbHcc_tags_H_dR__83->SetBinContent(29,2.704834);
   VbbHcc_tags_H_dR__83->SetBinContent(30,3.36244);
   VbbHcc_tags_H_dR__83->SetBinContent(31,1.015543);
   VbbHcc_tags_H_dR__83->SetBinError(3,22.92985);
   VbbHcc_tags_H_dR__83->SetBinError(4,4.363901);
   VbbHcc_tags_H_dR__83->SetBinError(5,6.002875);
   VbbHcc_tags_H_dR__83->SetBinError(6,9.30289);
   VbbHcc_tags_H_dR__83->SetBinError(7,2.024221);
   VbbHcc_tags_H_dR__83->SetBinError(8,3.128614);
   VbbHcc_tags_H_dR__83->SetBinError(9,3.346755);
   VbbHcc_tags_H_dR__83->SetBinError(10,2.709089);
   VbbHcc_tags_H_dR__83->SetBinError(11,12.07996);
   VbbHcc_tags_H_dR__83->SetBinError(12,6.870398);
   VbbHcc_tags_H_dR__83->SetBinError(13,3.178946);
   VbbHcc_tags_H_dR__83->SetBinError(14,5.959862);
   VbbHcc_tags_H_dR__83->SetBinError(15,6.936341);
   VbbHcc_tags_H_dR__83->SetBinError(16,6.89578);
   VbbHcc_tags_H_dR__83->SetBinError(17,7.430538);
   VbbHcc_tags_H_dR__83->SetBinError(18,4.33536);
   VbbHcc_tags_H_dR__83->SetBinError(19,4.585402);
   VbbHcc_tags_H_dR__83->SetBinError(20,7.724363);
   VbbHcc_tags_H_dR__83->SetBinError(21,2.750415);
   VbbHcc_tags_H_dR__83->SetBinError(22,3.321016);
   VbbHcc_tags_H_dR__83->SetBinError(23,2.693843);
   VbbHcc_tags_H_dR__83->SetBinError(24,1.779367);
   VbbHcc_tags_H_dR__83->SetBinError(25,10.54781);
   VbbHcc_tags_H_dR__83->SetBinError(26,0.7335306);
   VbbHcc_tags_H_dR__83->SetBinError(27,2.53027);
   VbbHcc_tags_H_dR__83->SetBinError(28,1.217628);
   VbbHcc_tags_H_dR__83->SetBinError(29,0.9518657);
   VbbHcc_tags_H_dR__83->SetBinError(30,1.035169);
   VbbHcc_tags_H_dR__83->SetBinError(31,0.3615407);
   VbbHcc_tags_H_dR__83->SetEntries(2245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR__83->SetFillColor(ci);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__83->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}

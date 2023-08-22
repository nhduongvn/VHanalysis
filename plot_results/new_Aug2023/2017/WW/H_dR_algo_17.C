void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Tue Aug 22 09:21:29 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.2,-0.2553122,6.8,2.297809);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLeftMargin(0.15);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,0.8680747);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.247885);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,1.478465);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,1.408763);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.5673576);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.07614);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,1.877489);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.380037);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.639444);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,1.588434);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,1.945236);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.216099);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,1.61416);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,0.9611603);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.713298);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.672398);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.5387435);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.7604204);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.298785);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6493487);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.2532685);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.2638417);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.5071787);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.6278072);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.6758427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.6403956);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4011824);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.5437403);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.7747629);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.6316916);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.7531004);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7179888);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.8047494);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.627534);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.7280316);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.554932);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.7796683);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6886052);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.393445);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.4893426);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.298785);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.4591669);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.2532685);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.2638417);
   VbbHcc_algo_H_dR_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}

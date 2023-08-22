void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Aug 22 09:16:07 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-3.155757,6.8,-1.177897);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.01505562);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.009723994);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01414115);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.02222124);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01312788);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.006112798);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.006735684);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.008504728);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.008856905);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.004503377);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002784056);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.002203227);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.004680416);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.002607922);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.006801058);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.007946073);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.004445161);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.003759242);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.002466447);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.01206897);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.004180665);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.00441557);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.004313901);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.004391015);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.005807058);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.004931511);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.005838752);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.007943504);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.005911487);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.003789232);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003889547);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.004344675);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.004436278);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.0031847);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002784056);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002203227);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.003336775);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002607922);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003929853);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.004133672);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.00314325);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002691162);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002218895);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.005434636);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002957052);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.003122376);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.003052019);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.003104924);
   VbbHcc_tags_H_dR_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->Draw("HIST");
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

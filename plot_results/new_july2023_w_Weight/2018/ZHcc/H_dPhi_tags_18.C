void H_dPhi_tags_18()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Thu Aug 10 12:23:21 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-0.0008604815,4.533333,0.007744333);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_11 = new TH1D("VbbHcc_tags_H_dPhi_stack_11","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(0,0.09547233);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(2,0.003682377);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(3,0.005534038);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(4,0.002662043);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(7,0.002885672);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(8,0.003280315);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(11,0.003415932);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(13,0.006505458);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(14,0.003280315);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(15,0.002842044);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(17,0.005418537);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(18,0.005407963);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(19,0.006547081);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(20,0.002662043);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(22,0.002576493);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(23,0.002767952);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(26,0.003551429);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(31,0.006556049);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(35,0.004100726);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(49,0.001999389);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(57,0.002811088);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(60,0.002923899);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(68,0.002811088);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(0,0.01682129);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(2,0.003682377);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(3,0.003913652);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(4,0.002662043);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(7,0.002885672);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(8,0.003280315);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(11,0.003415932);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(13,0.004640009);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(14,0.003280315);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(15,0.002842044);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(17,0.003836083);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(18,0.003828256);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(19,0.004684375);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(20,0.002662043);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(22,0.002576493);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(23,0.002767952);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(26,0.003551429);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(31,0.004701819);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(35,0.00310294);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(37,0.00283147);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(49,0.001999389);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(57,0.002811088);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(60,0.002923899);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(68,0.002811088);
   VbbHcc_tags_H_dPhi_stack_11->SetEntries(64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_18->Modified();
   H_dPhi_tags_18->cd();
   H_dPhi_tags_18->SetSelected(H_dPhi_tags_18);
}

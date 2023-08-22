void H_dPhi_tags_18_logY()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Tue Aug 22 09:16:11 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-3.259723,4.533333,-1.678998);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLogy();
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_11 = new TH1D("VbbHcc_tags_H_dPhi_stack_11","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(0,0.09286044);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(2,0.00292757);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(3,0.005776488);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(4,0.004588719);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(7,0.002294171);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(8,0.002784056);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(10,0.002026054);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(11,0.002884364);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(13,0.00768034);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(14,0.002596558);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(15,0.004486976);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(17,0.004439224);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(18,0.004238562);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(19,0.005168008);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(20,0.002086411);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(22,0.002039442);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(23,0.00233722);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(26,0.003312494);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(31,0.005377836);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(35,0.005612566);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(37,0.002241271);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(49,0.001582631);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(57,0.002203227);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(60,0.002299241);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(68,0.002203227);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(0,0.01486216);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(2,0.00292757);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(3,0.003389854);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(4,0.003255497);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(7,0.002294171);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(8,0.002784056);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(10,0.002026054);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(11,0.002884364);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(13,0.004461532);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(14,0.002596558);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(15,0.003172852);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(17,0.003149329);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(18,0.003000446);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(19,0.003699472);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(20,0.002086411);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(22,0.002039442);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(23,0.00233722);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(26,0.003312494);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(31,0.003880786);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(35,0.003410301);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(37,0.002241271);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(49,0.001582631);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(57,0.002203227);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(60,0.002299241);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(68,0.002203227);
   VbbHcc_tags_H_dPhi_stack_11->SetEntries(77);

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

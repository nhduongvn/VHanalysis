void H_dPhi_tags_16_logY()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Thu Aug 10 12:20:06 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-1.366729,4.533333,-0.2349292);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLogy();
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_7 = new TH1D("VbbHcc_tags_H_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(0,3.382889);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(1,0.1156937);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(4,0.1182308);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(7,0.1181973);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(11,0.130595);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(14,0.2227112);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(15,0.1238666);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(17,0.1282279);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(20,0.1145399);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(21,0.11202);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(34,0.1272975);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(37,0.1133473);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(40,0.1151045);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(46,0.2367783);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(58,0.1182534);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(70,0.1115529);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(91,0.2219636);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(0,0.6312734);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(1,0.1156937);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(4,0.1182308);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(7,0.1181973);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(11,0.130595);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(14,0.1574848);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(15,0.1238666);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(17,0.1282279);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(20,0.1145399);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(21,0.11202);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(34,0.1272975);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(37,0.1133473);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(40,0.1151045);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(46,0.1674639);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(58,0.1182534);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(70,0.1115529);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(91,0.1569626);
   VbbHcc_tags_H_dPhi_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_16->Modified();
   H_dPhi_tags_16->cd();
   H_dPhi_tags_16->SetSelected(H_dPhi_tags_16);
}

void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Aug 10 10:40:53 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-1.45198,6.8,0.3733098);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.8189019);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.8052531);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.4860304);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.3513551);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.1075422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.1145399);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2359643);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.3188021);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.1994566);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.1305552);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3898338);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.4727954);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.3658773);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,0.1159231);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.2293137);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.2357897);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.1151045);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.1182308);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.3105891);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.3047794);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.2433556);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.2029008);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.1075422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.1145399);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.1669119);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.1856077);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.1437075);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.1305552);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.2250722);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.2365145);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.2115831);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.1159231);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.1621559);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.1667291);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.1151045);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.1182308);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->Draw("HIST");
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

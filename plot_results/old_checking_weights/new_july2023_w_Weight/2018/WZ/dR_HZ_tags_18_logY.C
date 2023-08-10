void dR_HZ_tags_18_logY()
{
//=========Macro generated from canvas: dR_HZ_tags_18/dR_HZ_tags_18
//=========  (Thu Aug 10 10:41:02 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_18 = new TCanvas("dR_HZ_tags_18", "dR_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_18->SetHighLightColor(2);
   dR_HZ_tags_18->Range(-1.2,-1.487609,6.8,0.7962345);
   dR_HZ_tags_18->SetFillColor(0);
   dR_HZ_tags_18->SetBorderMode(0);
   dR_HZ_tags_18->SetBorderSize(2);
   dR_HZ_tags_18->SetLogy();
   dR_HZ_tags_18->SetLeftMargin(0.15);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_7 = new TH1D("VbbHcc_tags_dR_HZ_stack_7","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(6,0.1101045);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(7,0.5166625);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(10,0.6010888);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(12,0.988084);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(21,0.3816532);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(22,1.051725);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(24,0.4786962);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(25,0.8460624);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(26,0.3789058);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(29,0.3805224);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(32,0.7594282);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(33,1.951197);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(34,0.4963468);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(35,0.3941116);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(37,0.8971849);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(38,0.648403);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(41,0.5144501);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(43,1.462025);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(45,0.4019721);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(60,0.3670258);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(61,0.8077494);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(6,0.1101045);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(7,0.5166625);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(10,0.6010888);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(12,0.6990179);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(21,0.3816532);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(22,0.7730193);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(24,0.4786962);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(25,0.6005902);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(26,0.3789058);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(29,0.3805224);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(32,0.5369981);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(33,0.9783209);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(34,0.4963468);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(35,0.3941116);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(37,0.6416677);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(38,0.4649714);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(41,0.5144501);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(43,1.093657);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(45,0.4019721);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(60,0.3670258);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(61,0.5921852);
   VbbHcc_tags_dR_HZ_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_18->Modified();
   dR_HZ_tags_18->cd();
   dR_HZ_tags_18->SetSelected(dR_HZ_tags_18);
}

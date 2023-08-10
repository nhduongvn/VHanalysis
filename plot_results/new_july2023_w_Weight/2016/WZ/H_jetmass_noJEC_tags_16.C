void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 12:23:42 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-0.1864877,340,1.678389);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(4,0.4396585);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(5,1.420858);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(6,0.5895);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(7,1.068349);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(8,0.1142288);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(9,0.1283426);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(10,0.4723155);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(11,0.3482422);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(12,0.1139767);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(13,0.2008158);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(14,0.1133007);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(15,0.1238666);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(16,0.1159231);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinContent(17,0.3618915);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(4,0.2227986);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(5,0.4111374);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(6,0.2638566);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(7,0.3568865);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(8,0.1142288);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(9,0.1283426);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(10,0.2366195);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(11,0.2011614);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(12,0.1139767);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(13,0.1432223);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(14,0.1133007);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(15,0.1238666);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(16,0.1159231);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetBinError(17,0.2092918);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}

void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 12:28:02 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-1.149154,340,10.34238);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(2,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.4864143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,6.080179);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,6.8098);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,8.755457);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,7.053007);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,1.945657);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,2.188864);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,2.918486);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,1.216036);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,0.9728286);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.7296215);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(19,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(52,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(2,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.3439469);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,1.216036);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.286931);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.459243);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.309711);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,0.6878937);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,0.7296215);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,0.8424943);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.5438277);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.4864143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.4212471);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.3439469);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.4864143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(19,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.3439469);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(52,0.2432072);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->Draw("HIST");
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

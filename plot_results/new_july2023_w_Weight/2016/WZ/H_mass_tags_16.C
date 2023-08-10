void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Thu Aug 10 12:23:09 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-0.07929631,453.3333,0.7136668);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(5,0.1181973);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(6,0.09773476);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2276423);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3731179);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,0.6041623);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.1105411);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.1162857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.3587141);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.1151045);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(18,0.1075422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(19,0.1096857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(20,0.1275401);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(22,0.11362);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.1245696);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(29,0.1156937);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(30,0.235143);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,2.555975);
   VbbHcc_tags_H_mass_stack_7->SetBinError(5,0.1181973);
   VbbHcc_tags_H_mass_stack_7->SetBinError(6,0.09773476);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.1609675);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.2155807);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.2704833);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.1105411);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.1162857);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.2075461);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.1151045);
   VbbHcc_tags_H_mass_stack_7->SetBinError(18,0.1075422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(19,0.1096857);
   VbbHcc_tags_H_mass_stack_7->SetBinError(20,0.1275401);
   VbbHcc_tags_H_mass_stack_7->SetBinError(22,0.11362);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.1245696);
   VbbHcc_tags_H_mass_stack_7->SetBinError(29,0.1156937);
   VbbHcc_tags_H_mass_stack_7->SetBinError(30,0.166274);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.5478167);
   VbbHcc_tags_H_mass_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}

void H_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-1.687945,340,0.5501573);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLogy();
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(3,0.07823021);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(4,0.1888721);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(5,1.118918);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(6,0.3706158);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(7,0.5270857);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(8,0.3023486);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(9,0.2778294);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(10,0.2889078);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(11,0.1839871);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(12,0.09206678);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(13,0.0686903);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(14,0.08610475);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(16,0.3934526);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(17,0.09132081);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(3,0.07823021);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(4,0.133669);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(5,0.3115458);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(6,0.1858804);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(7,0.215529);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(8,0.1749835);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(9,0.1606749);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(10,0.1671833);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(11,0.1301168);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(12,0.09206678);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(13,0.0686903);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(14,0.08610475);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(16,0.197154);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(17,0.09132081);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}

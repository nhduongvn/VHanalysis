void Z_mass_tags_18_logY()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Aug 22 09:15:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-3.214474,453.3333,-0.8430595);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLogy();
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(5,0.002360595);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.002583918);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.006278123);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.02083216);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.04387834);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02016461);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.00225108);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.004590214);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002294171);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002176611);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002284175);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(22,0.002399781);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(23,0.002884364);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.002390853);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.002141222);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(31,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.00210716);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.002299241);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.002640973);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(39,0.00221053);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.04287252);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(5,0.002360595);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002583918);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.003627663);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.007070958);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.01053386);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.006883038);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.00225108);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.003249145);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002294171);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002176611);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002284175);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(22,0.002399781);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(23,0.002884364);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.002390853);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.002141222);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(31,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.00210716);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.002299241);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.002640973);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(39,0.00221053);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.01001003);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}

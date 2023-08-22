void Z_mass_tags_16_logY()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Tue Aug 22 09:15:50 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-1.672134,453.3333,0.4078643);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLogy();
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.174883);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.4073372);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.8362103);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.09442741);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.0975785);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.1669327);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(14,0.1788816);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.09408829);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(17,0.0686903);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(18,0.2912804);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.08729333);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(20,0.08117422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(21,0.09614847);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(26,0.09774741);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(28,0.09096269);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(38,0.1906492);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.014145);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.124142);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.1824763);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.2794784);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.09442741);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.0975785);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.1181499);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(14,0.1274835);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.09408829);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(17,0.0686903);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(18,0.1687809);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.08729333);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(20,0.08117422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(21,0.09614847);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(26,0.09774741);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(28,0.09096269);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(38,0.1348784);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.3068993);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}

void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Tue Aug 22 09:20:02 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-0.001581832,453.3333,0.01423649);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.004663401);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01108999);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.01205206);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.002243723);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.002186526);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.00631191);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.002082123);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002007648);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.00193606);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002251171);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002155655);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(29,0.001737613);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.02375307);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003303923);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.004980256);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.004957107);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.002243723);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002186526);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.003647766);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.002082123);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002007648);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.00193606);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002251171);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002155655);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(29,0.001737613);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.007184898);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(36);

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

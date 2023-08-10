void Z_mass_tags_16_logY()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Thu Aug 10 12:19:50 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-1.610071,453.3333,0.5237106);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLogy();
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.241769);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.5468816);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.078409);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.227324);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.1238666);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.2250811);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(14,0.2330253);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(17,0.08719582);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(18,0.3665195);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.1192266);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(20,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(21,0.1154132);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(26,0.1245696);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(28,0.1159231);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(31,0.08023004);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(38,0.247041);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.439921);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.1712154);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.2450553);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.3601023);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.160743);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.1238666);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.1591815);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(14,0.1648882);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(17,0.08719582);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(18,0.2119062);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.1192266);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(20,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(21,0.1154132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(26,0.1245696);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(28,0.1159231);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(31,0.08023004);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(38,0.1748854);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.4162475);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(48);

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

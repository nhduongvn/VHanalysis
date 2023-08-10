void Z_mass_tags_18_logY()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Thu Aug 10 12:19:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-3.114206,453.3333,-0.8721546);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLogy();
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(5,0.002982215);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.003060115);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.002576493);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.02015542);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.04227575);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02059645);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.005636807);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002767952);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(22,0.002842044);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(23,0.003415932);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.00272295);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(31,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.002662043);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.002923899);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(39,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.04520864);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(5,0.002982215);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003060115);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.002576493);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.007746208);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.01149931);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.007927478);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.003985965);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002767952);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(22,0.002842044);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(23,0.003415932);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.00272295);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(31,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.002662043);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.002923899);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.00283147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(39,0.002811088);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.01152052);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(64);

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

void Z_mass_tags_16_logY()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Thu Aug 10 10:40:45 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-1.47346,453.3333,-0.4159939);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLogy();
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.08576627);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.1333553);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.1587488);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(17,0.1552273);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(20,0.1440206);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(21,0.139529);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.1368996);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(27,0.1344897);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(33,0.1535887);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.3068559);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.08576627);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.1333553);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.1587488);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(17,0.1552273);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(20,0.1440206);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(21,0.139529);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.1368996);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(27,0.1344897);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(33,0.1535887);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.2173415);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->Draw("HIST");
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

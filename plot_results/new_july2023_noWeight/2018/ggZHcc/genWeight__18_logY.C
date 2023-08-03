void genWeight__18_logY()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 13:22:15 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,-2.659109,2.533333,3.011857);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLogy();
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_12 = new TH1D("genWeight_stack_12","",200,-2,2);
   genWeight_stack_12->SetBinContent(101,0.1618147);
   genWeight_stack_12->SetBinContent(102,0.0485444);
   genWeight_stack_12->SetBinContent(103,146.9643);
   genWeight_stack_12->SetBinContent(104,0.03236293);
   genWeight_stack_12->SetBinContent(105,0.06472587);
   genWeight_stack_12->SetBinContent(106,0.01618147);
   genWeight_stack_12->SetBinContent(107,0.03236293);
   genWeight_stack_12->SetBinContent(110,0.01618147);
   genWeight_stack_12->SetBinContent(111,0.01618147);
   genWeight_stack_12->SetBinContent(112,0.01618147);
   genWeight_stack_12->SetBinContent(114,0.01618147);
   genWeight_stack_12->SetBinContent(118,0.01618147);
   genWeight_stack_12->SetBinContent(119,0.01618147);
   genWeight_stack_12->SetBinContent(120,0.03236293);
   genWeight_stack_12->SetBinContent(123,0.01618147);
   genWeight_stack_12->SetBinContent(131,0.01618147);
   genWeight_stack_12->SetBinContent(154,0.01618147);
   genWeight_stack_12->SetBinContent(155,0.01618147);
   genWeight_stack_12->SetBinContent(161,0.01618147);
   genWeight_stack_12->SetBinContent(170,0.01618147);
   genWeight_stack_12->SetBinContent(173,0.01618147);
   genWeight_stack_12->SetBinContent(201,0.5178069);
   genWeight_stack_12->SetBinError(101,0.006963395);
   genWeight_stack_12->SetBinError(102,0.003814008);
   genWeight_stack_12->SetBinError(103,0.2098543);
   genWeight_stack_12->SetBinError(104,0.003114125);
   genWeight_stack_12->SetBinError(105,0.004404038);
   genWeight_stack_12->SetBinError(106,0.002202019);
   genWeight_stack_12->SetBinError(107,0.003114125);
   genWeight_stack_12->SetBinError(110,0.002202019);
   genWeight_stack_12->SetBinError(111,0.002202019);
   genWeight_stack_12->SetBinError(112,0.002202019);
   genWeight_stack_12->SetBinError(114,0.002202019);
   genWeight_stack_12->SetBinError(118,0.002202019);
   genWeight_stack_12->SetBinError(119,0.002202019);
   genWeight_stack_12->SetBinError(120,0.003114125);
   genWeight_stack_12->SetBinError(123,0.002202019);
   genWeight_stack_12->SetBinError(131,0.002202019);
   genWeight_stack_12->SetBinError(154,0.002202019);
   genWeight_stack_12->SetBinError(155,0.002202019);
   genWeight_stack_12->SetBinError(161,0.002202019);
   genWeight_stack_12->SetBinError(170,0.002202019);
   genWeight_stack_12->SetBinError(173,0.002202019);
   genWeight_stack_12->SetBinError(201,0.0124565);
   genWeight_stack_12->SetEntries(494168);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   genWeight_stack_12->SetFillColor(ci);
   genWeight_stack_12->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_12->GetXaxis()->SetRange(1,200);
   genWeight_stack_12->GetXaxis()->SetLabelFont(42);
   genWeight_stack_12->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetXaxis()->SetTitleFont(42);
   genWeight_stack_12->GetYaxis()->SetLabelFont(42);
   genWeight_stack_12->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_12->GetYaxis()->SetTitleFont(42);
   genWeight_stack_12->GetZaxis()->SetLabelFont(42);
   genWeight_stack_12->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetZaxis()->SetTitleFont(42);
   genWeight_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__18->Modified();
   genWeight__18->cd();
   genWeight__18->SetSelected(genWeight__18);
}

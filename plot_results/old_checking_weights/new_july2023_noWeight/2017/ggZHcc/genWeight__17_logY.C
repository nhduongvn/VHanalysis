void genWeight__17_logY()
{
//=========Macro generated from canvas: genWeight__17/genWeight__17
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__17 = new TCanvas("genWeight__17", "genWeight__17",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__17->SetHighLightColor(2);
   genWeight__17->Range(-2.8,-2.818663,2.533333,2.853995);
   genWeight__17->SetFillColor(0);
   genWeight__17->SetBorderMode(0);
   genWeight__17->SetBorderSize(2);
   genWeight__17->SetLogy();
   genWeight__17->SetLeftMargin(0.15);
   genWeight__17->SetFrameBorderMode(0);
   genWeight__17->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_12 = new TH1D("genWeight_stack_12","",200,-2,2);
   genWeight_stack_12->SetBinContent(101,0.04525803);
   genWeight_stack_12->SetBinContent(102,0.09030846);
   genWeight_stack_12->SetBinContent(103,102.1364);
   genWeight_stack_12->SetBinContent(104,0.06747184);
   genWeight_stack_12->SetBinContent(105,0.03363212);
   genWeight_stack_12->SetBinContent(106,0.02242141);
   genWeight_stack_12->SetBinContent(107,0.03383972);
   genWeight_stack_12->SetBinContent(109,0.02262902);
   genWeight_stack_12->SetBinContent(111,0.02242141);
   genWeight_stack_12->SetBinContent(115,0.01121071);
   genWeight_stack_12->SetBinContent(118,0.01141831);
   genWeight_stack_12->SetBinContent(121,0.01141831);
   genWeight_stack_12->SetBinContent(132,0.01121071);
   genWeight_stack_12->SetBinContent(148,0.01121071);
   genWeight_stack_12->SetBinContent(149,0.01121071);
   genWeight_stack_12->SetBinContent(168,0.01141831);
   genWeight_stack_12->SetBinContent(172,0.01121071);
   genWeight_stack_12->SetBinContent(189,0.01121071);
   genWeight_stack_12->SetBinContent(194,0.01121071);
   genWeight_stack_12->SetBinContent(201,0.404831);
   genWeight_stack_12->SetBinError(101,0.003065261);
   genWeight_stack_12->SetBinError(102,0.004329959);
   genWeight_stack_12->SetBinError(103,0.1456162);
   genWeight_stack_12->SetBinError(104,0.003742664);
   genWeight_stack_12->SetBinError(105,0.002642389);
   genWeight_stack_12->SetBinError(106,0.002157501);
   genWeight_stack_12->SetBinError(107,0.002650532);
   genWeight_stack_12->SetBinError(109,0.002167467);
   genWeight_stack_12->SetBinError(111,0.002157501);
   genWeight_stack_12->SetBinError(115,0.001525584);
   genWeight_stack_12->SetBinError(118,0.001539645);
   genWeight_stack_12->SetBinError(121,0.001539645);
   genWeight_stack_12->SetBinError(132,0.001525584);
   genWeight_stack_12->SetBinError(148,0.001525584);
   genWeight_stack_12->SetBinError(149,0.001525584);
   genWeight_stack_12->SetBinError(168,0.001539645);
   genWeight_stack_12->SetBinError(172,0.001525584);
   genWeight_stack_12->SetBinError(189,0.001525584);
   genWeight_stack_12->SetBinError(194,0.001525584);
   genWeight_stack_12->SetBinError(201,0.009167618);
   genWeight_stack_12->SetEntries(496094);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__17->Modified();
   genWeight__17->cd();
   genWeight__17->SetSelected(genWeight__17);
}

void genWeight__18()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 12:48:56 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,-369119.8,2.533333,3322078);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_7 = new TH1D("genWeight_stack_7","",200,-2,2);
   genWeight_stack_7->SetBinContent(151,2812341);
   genWeight_stack_7->SetBinError(151,998.0625);
   genWeight_stack_7->SetEntries(7940000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   genWeight_stack_7->SetFillColor(ci);
   genWeight_stack_7->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_7->GetXaxis()->SetRange(1,200);
   genWeight_stack_7->GetXaxis()->SetLabelFont(42);
   genWeight_stack_7->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_7->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_7->GetXaxis()->SetTitleFont(42);
   genWeight_stack_7->GetYaxis()->SetLabelFont(42);
   genWeight_stack_7->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_7->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_7->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_7->GetYaxis()->SetTitleFont(42);
   genWeight_stack_7->GetZaxis()->SetLabelFont(42);
   genWeight_stack_7->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_7->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_7->GetZaxis()->SetTitleFont(42);
   genWeight_stack_7->Draw("HIST");
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

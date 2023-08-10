void genWeight__18_logY()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,4.698499,2.533333,9.171723);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLogy();
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_5 = new TH1D("genWeight_stack_5","",200,-2,2);
   genWeight_stack_5->SetBinContent(151,2.798024e+08);
   genWeight_stack_5->SetBinError(151,42104.06);
   genWeight_stack_5->SetEntries(1.869908e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   genWeight_stack_5->SetFillColor(ci);
   genWeight_stack_5->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_5->GetXaxis()->SetRange(1,200);
   genWeight_stack_5->GetXaxis()->SetLabelFont(42);
   genWeight_stack_5->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetXaxis()->SetTitleFont(42);
   genWeight_stack_5->GetYaxis()->SetLabelFont(42);
   genWeight_stack_5->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_5->GetYaxis()->SetTitleFont(42);
   genWeight_stack_5->GetZaxis()->SetLabelFont(42);
   genWeight_stack_5->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetZaxis()->SetTitleFont(42);
   genWeight_stack_5->Draw("HIST");
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

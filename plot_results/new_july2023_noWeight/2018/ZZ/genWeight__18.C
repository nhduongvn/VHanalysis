void genWeight__18()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 12:48:56 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,-129309.5,2.533333,1163785);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_8 = new TH1D("genWeight_stack_8","",200,-2,2);
   genWeight_stack_8->SetBinContent(151,985215);
   genWeight_stack_8->SetBinError(151,524.6744);
   genWeight_stack_8->SetEntries(3526000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   genWeight_stack_8->SetFillColor(ci);
   genWeight_stack_8->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_8->GetXaxis()->SetRange(1,200);
   genWeight_stack_8->GetXaxis()->SetLabelFont(42);
   genWeight_stack_8->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetXaxis()->SetTitleFont(42);
   genWeight_stack_8->GetYaxis()->SetLabelFont(42);
   genWeight_stack_8->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_8->GetYaxis()->SetTitleFont(42);
   genWeight_stack_8->GetZaxis()->SetLabelFont(42);
   genWeight_stack_8->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetZaxis()->SetTitleFont(42);
   genWeight_stack_8->Draw("HIST");
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

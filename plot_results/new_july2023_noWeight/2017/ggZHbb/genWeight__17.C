void genWeight__17()
{
//=========Macro generated from canvas: genWeight__17/genWeight__17
//=========  (Thu Aug  3 12:48:55 2023) by ROOT version 6.14/09
   TCanvas *genWeight__17 = new TCanvas("genWeight__17", "genWeight__17",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__17->SetHighLightColor(2);
   genWeight__17->Range(-2.8,-272.098,2.533333,2448.882);
   genWeight__17->SetFillColor(0);
   genWeight__17->SetBorderMode(0);
   genWeight__17->SetBorderSize(2);
   genWeight__17->SetLeftMargin(0.15);
   genWeight__17->SetFrameBorderMode(0);
   genWeight__17->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_10 = new TH1D("genWeight_stack_10","",200,-2,2);
   genWeight_stack_10->SetBinContent(103,2073.128);
   genWeight_stack_10->SetBinError(103,0.9271309);
   genWeight_stack_10->SetEntries(5000000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   genWeight_stack_10->SetFillColor(ci);
   genWeight_stack_10->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_10->GetXaxis()->SetRange(1,200);
   genWeight_stack_10->GetXaxis()->SetLabelFont(42);
   genWeight_stack_10->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetXaxis()->SetTitleFont(42);
   genWeight_stack_10->GetYaxis()->SetLabelFont(42);
   genWeight_stack_10->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_10->GetYaxis()->SetTitleFont(42);
   genWeight_stack_10->GetZaxis()->SetLabelFont(42);
   genWeight_stack_10->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetZaxis()->SetTitleFont(42);
   genWeight_stack_10->Draw("HIST");
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

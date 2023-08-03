void l1preW__18()
{
//=========Macro generated from canvas: l1preW__18/l1preW__18
//=========  (Thu Aug  3 12:49:02 2023) by ROOT version 6.14/09
   TCanvas *l1preW__18 = new TCanvas("l1preW__18", "l1preW__18",0,0,600,600);
   gStyle->SetOptStat(0);
   l1preW__18->SetHighLightColor(2);
   l1preW__18->Range(-2.8,-0.13125,2.533333,1.18125);
   l1preW__18->SetFillColor(0);
   l1preW__18->SetBorderMode(0);
   l1preW__18->SetBorderSize(2);
   l1preW__18->SetLeftMargin(0.15);
   l1preW__18->SetFrameBorderMode(0);
   l1preW__18->SetFrameBorderMode(0);
   
   TH1D *l1preW_stack_7 = new TH1D("l1preW_stack_7","",200,-2,2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   l1preW_stack_7->SetFillColor(ci);
   l1preW_stack_7->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   l1preW_stack_7->GetXaxis()->SetRange(1,200);
   l1preW_stack_7->GetXaxis()->SetLabelFont(42);
   l1preW_stack_7->GetXaxis()->SetLabelSize(0.035);
   l1preW_stack_7->GetXaxis()->SetTitleSize(0.035);
   l1preW_stack_7->GetXaxis()->SetTitleFont(42);
   l1preW_stack_7->GetYaxis()->SetLabelFont(42);
   l1preW_stack_7->GetYaxis()->SetLabelSize(0.035);
   l1preW_stack_7->GetYaxis()->SetTitleSize(0.035);
   l1preW_stack_7->GetYaxis()->SetTitleOffset(0);
   l1preW_stack_7->GetYaxis()->SetTitleFont(42);
   l1preW_stack_7->GetZaxis()->SetLabelFont(42);
   l1preW_stack_7->GetZaxis()->SetLabelSize(0.035);
   l1preW_stack_7->GetZaxis()->SetTitleSize(0.035);
   l1preW_stack_7->GetZaxis()->SetTitleFont(42);
   l1preW_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   l1preW__18->Modified();
   l1preW__18->cd();
   l1preW__18->SetSelected(l1preW__18);
}

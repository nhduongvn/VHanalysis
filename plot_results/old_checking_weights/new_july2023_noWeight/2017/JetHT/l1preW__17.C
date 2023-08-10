void l1preW__17()
{
//=========Macro generated from canvas: l1preW__17/l1preW__17
//=========  (Thu Aug  3 12:49:00 2023) by ROOT version 6.14/09
   TCanvas *l1preW__17 = new TCanvas("l1preW__17", "l1preW__17",0,0,600,600);
   gStyle->SetOptStat(0);
   l1preW__17->SetHighLightColor(2);
   l1preW__17->Range(-2.8,-0.13125,2.533333,1.18125);
   l1preW__17->SetFillColor(0);
   l1preW__17->SetBorderMode(0);
   l1preW__17->SetBorderSize(2);
   l1preW__17->SetLeftMargin(0.15);
   l1preW__17->SetFrameBorderMode(0);
   l1preW__17->SetFrameBorderMode(0);
   
   TH1D *l1preW__28 = new TH1D("l1preW__28","",200,-2,2);
   l1preW__28->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   l1preW__28->GetXaxis()->SetRange(1,200);
   l1preW__28->GetXaxis()->SetLabelFont(42);
   l1preW__28->GetXaxis()->SetLabelSize(0.035);
   l1preW__28->GetXaxis()->SetTitleSize(0.035);
   l1preW__28->GetXaxis()->SetTitleFont(42);
   l1preW__28->GetYaxis()->SetLabelFont(42);
   l1preW__28->GetYaxis()->SetLabelSize(0.035);
   l1preW__28->GetYaxis()->SetTitleSize(0.035);
   l1preW__28->GetYaxis()->SetTitleOffset(0);
   l1preW__28->GetYaxis()->SetTitleFont(42);
   l1preW__28->GetZaxis()->SetLabelFont(42);
   l1preW__28->GetZaxis()->SetLabelSize(0.035);
   l1preW__28->GetZaxis()->SetTitleSize(0.035);
   l1preW__28->GetZaxis()->SetTitleFont(42);
   l1preW__28->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   l1preW__17->Modified();
   l1preW__17->cd();
   l1preW__17->SetSelected(l1preW__17);
}
